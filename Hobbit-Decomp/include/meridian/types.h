// Basic engine types (names from the game's own strings and hobbit-synchrony's meridian.hpp).
#pragma once
#include <cstddef>
#include <cstdint>

typedef uint32_t xbool;
typedef float f32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef int64_t s64;
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

struct vector3 { f32 X, Y, Z; };
struct radian3 { f32 Pitch, Yaw, Roll; };
struct bbox { vector3 Min, Max; };
struct xcolor { u8 B, G, R, A; };
typedef u64 guid;

// Compile-time layout check against offsets read from the binary.
#define CHECK_OFFSET(type, field, off) static_assert(offsetof(type, field) == (off), #type "::" #field)
#define CHECK_SIZE(type, size) static_assert(sizeof(type) == (size), "sizeof " #type)
