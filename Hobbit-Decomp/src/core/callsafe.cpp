// __callsafe: call a function pointer whose calling convention is unknown (Ghidra prints them as
// `(*(code *)fp)(args)` / `(**(code **)(vtbl + off))(args)`), used by generated code (tools/indirect_calls.py).
//   int __callsafe(void* fn, unsigned ecx, int n, ...n 32-bit argument words)
// Pushes the words right-to-left, loads ECX (the object for C++ virtual calls), calls, then restores ESP
// itself: whether the callee pops its arguments (thiscall/stdcall) or not (cdecl) no longer matters.
// EAX/EDX/ST0 are left exactly as the callee returned them, so the same code serves int, 64-bit and
// x87 float results (__callsafe_ll / __callsafe_f are the same function with another declared return type).
extern "C" {

__declspec(naked) int __cdecl __callsafe(void*, unsigned, int, ...) {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        push edi
        mov esi, esp                ; ESP before the arguments: restored after the call
        mov eax, [ebp + 16]         ; n
        lea edi, [ebp + 20]         ; first argument word
    next_arg:
        test eax, eax
        jz do_call
        dec eax
        push dword ptr [edi + eax * 4]
        jmp next_arg
    do_call:
        mov ecx, [ebp + 12]
        call dword ptr [ebp + 8]
        mov esp, esi
        pop edi
        pop esi
        pop ebp
        ret
    }
}

__declspec(naked) long double __cdecl __callsafe_f(void*, unsigned, int, ...) {
    __asm jmp __callsafe
}

__declspec(naked) long long __cdecl __callsafe_ll(void*, unsigned, int, ...) {
    __asm jmp __callsafe
}

}  // extern "C"
