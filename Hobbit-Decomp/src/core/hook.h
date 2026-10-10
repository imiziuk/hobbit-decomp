// Function replacement: every reimplemented game function registers itself with the address of the
// original. At startup a 5-byte JMP is written at that address, so all callers in the game run our code.
//
// Calling conventions: game methods are __thiscall (this in ECX, args on the stack, callee pops).
// We implement them as __fastcall(this, edx_unused, args...): ECX = this, EDX ignored, rest on the
// stack, callee pops -> identical ABI, without needing the real C++ class.
//
// Register preservation: MSVC 6 knew which registers a callee in the same .cpp left untouched and
// relied on it (e.g. bilboInventory::SetRange reuses ECX after calling SetCount). Our compiler does
// not keep those promises, so every replacement is entered through a generated thunk that saves
// EAX/ECX/EDX and restores every one that is not part of the return value.
#pragma once
#include <cstdint>
#include <intrin.h>
#include <type_traits>

namespace hook {

enum class Ret : uint8_t { Void, Int32, Int64, Float };
enum class Conv : uint8_t { Cdecl, Stdcall, Fastcall };

struct Entry {
    uint32_t address;   // original function in Meridian.exe
    void* replacement;  // our implementation
    const char* name;
    Entry* next;
    volatile long calls;  // incremented by FN_ENTER() inside the reimplementation
    uint16_t stackArgBytes;
    Ret ret;
    Conv conv;
    bool live;          // installed in normal play; false = only checked in shadow mode (core/shadow.cpp)
};

// Linked list of all registrations (filled by static initializers before DllMain installs them).
Entry*& Registry();

template <typename R>
constexpr Ret RetKind() {
    if constexpr (std::is_void_v<R>) return Ret::Void;
    else if constexpr (std::is_floating_point_v<R>) return Ret::Float;
    else if constexpr (sizeof(R) == 8) return Ret::Int64;
    else return Ret::Int32;
}

template <typename... A>
constexpr uint16_t StackBytes(int skip) {
    uint16_t sizes[] = {static_cast<uint16_t>((sizeof(A) + 3) & ~3u)..., 0};
    uint16_t total = 0;
    for (int i = skip; i < static_cast<int>(sizeof...(A)); ++i) total += sizes[i];
    return total;
}

struct Registrar {
    Entry entry;
    void Add(uint32_t address, void* fn, const char* name, uint16_t bytes, Ret ret, Conv conv) {
        entry = {address, fn, name, Registry(), 0, bytes, ret, conv, true};
        Registry() = &entry;
    }
    // __fastcall(this, edx, stack args...): first two params are in ECX/EDX.
    // Generated registry (auto/): signature info comes from the converter instead of the C++ type.
    Registrar(uint32_t address, void* fn, const char* name, uint16_t bytes, Ret ret, Conv conv, bool live = true) {
        Add(address, fn, name, bytes, ret, conv);
        entry.live = live;
    }
    template <typename R, typename... A>
    Registrar(uint32_t address, R(__fastcall* fn)(A...), const char* name) {
        Add(address, reinterpret_cast<void*>(fn), name, StackBytes<A...>(2), RetKind<R>(), Conv::Fastcall);
    }
    template <typename R, typename... A>
    Registrar(uint32_t address, R(__stdcall* fn)(A...), const char* name) {
        Add(address, reinterpret_cast<void*>(fn), name, StackBytes<A...>(0), RetKind<R>(), Conv::Stdcall);
    }
    template <typename R, typename... A>
    Registrar(uint32_t address, R(__cdecl* fn)(A...), const char* name) {
        Add(address, reinterpret_cast<void*>(fn), name, StackBytes<A...>(0), RetKind<R>(), Conv::Cdecl);
    }
};

// Writes the thunks + jumps; names listed in hooks_disabled.txt are skipped (for bisecting).
int InstallAll();

// Thunk that enters a replacement with the original calling convention (created on first use).
void* Thunk(Entry& e);

// Shadow mode (shadow.txt in the game folder): nothing is replaced; core/shadow.cpp compares instead.
bool ShadowMode();

// Writes per-function call counts to the log.
void DumpCallCounts();

// Finds the registry entry for a replacement (looked up once per function by FN_ENTER).
Entry* Find(void* replacement) noexcept;

}  // namespace hook

#define HOOK_CAT2(a, b) a##b
#define HOOK_CAT(a, b) HOOK_CAT2(a, b)
// REPLACE(0x00434ca0, Inventory_GetCount) placed after the function definition.
#define REPLACE(addr, fn) static hook::Registrar HOOK_CAT(reg_, __LINE__)(addr, &fn, #fn)

// First line of every reimplemented function: counts calls so a play session proves the code ran.
#define FN_ENTER(fn) ((void)0)  /* counting now happens in the thunk */

// Call an original (not yet reimplemented) game function by address.
template <typename T>
inline T Original(uint32_t address) { return reinterpret_cast<T>(address); }
