/* Compatibility layer for Ghidra decompiler output compiled with modern MSVC (x86, C mode). */
#pragma once
#pragma warning(disable : 4005 4013 4024 4028 4047 4133 4142 4244 4305 4311 4312 4700 4715 4716 4554 4146 4018 4101 4102 4189 4996)
typedef unsigned int pointer32;
typedef long double float10;          /* MSVC long double == double; x87 code keeps 80-bit in registers */
typedef unsigned char bool;
typedef unsigned short wchar_t;
typedef char string;            /* Ghidra built-in char-buffer type */
typedef unsigned short unicode;
typedef void *pointer;          /* Ghidra built-in: untyped pointer (PTR_ globals) */
typedef signed char sbyte;
typedef int int3;               /* 3-byte integers: C has none; used for partial values, read as 4 */
typedef unsigned int uint3;
typedef unsigned int undefined3;
/* caller registers at entry into a replacement (core/hook.cpp thunks) */
extern unsigned __entry_eax, __entry_ecx, __entry_edx, __entry_ebx, __entry_esi, __entry_edi;
/* indirect calls with unknown calling convention: src/core/callsafe.cpp (restores ESP itself) */
int __cdecl __callsafe(void *fn, unsigned ecx, int n, ...);
long double __cdecl __callsafe_f(void *fn, unsigned ecx, int n, ...);
long long __cdecl __callsafe_ll(void *fn, unsigned ecx, int n, ...);
static __inline unsigned __f2w(float f) { union { float f; unsigned u; } v; v.f = f; return v.u; }
/* Ghidra casts between pointers and floats mean "the same 32 bits" (tools/fix_casts.py) */
static __inline float __p2f(const void *p) { union { const void *p; float f; } v; v.p = p; return v.f; }
static __inline void *__f2p(float f) { union { float f; void *p; } v; v.f = f; return v.p; }
static __inline float __p2f_bits(unsigned u) { union { unsigned u; float f; } v; v.u = u; return v.f; }
/* one 32-bit stack word per argument, the way the original pushed it (floats as their 4 bytes) */
/* (_Generic picks a function: every branch must compile for every argument type, so no casts inside it) */
static __inline unsigned __d2w(double d) { return __f2w((float)d); }
static __inline unsigned __i2w(unsigned v) { return v; }      /* ints and pointers (C converts implicitly) */
#define __W(x) _Generic((x), float: __f2w, double: __d2w, long double: __d2w, default: __i2w)(x)
/* x._O_N_ = v for N = 3/5/6/7 bytes (no C lvalue of that size): write the low N bytes of v at offset O */
static __inline void __setn(void *base, int off, unsigned long long v, int n) {
    unsigned char *p = (unsigned char *)base + off;
    for (int i = 0; i < n; ++i) p[i] = (unsigned char)(v >> (8 * i));
}
/* Ghidra's builtin_* = inlined rep movs / stos of the original */
void *__cdecl memcpy(void *, const void *, unsigned int);
void *__cdecl memset(void *, int, unsigned int);
char *__cdecl strncpy(char *, const char *, unsigned int);
#define builtin_memcpy memcpy
#define builtin_memset memset
#define builtin_strncpy strncpy
#define true 1
#define false 0
#define NAN(x) ((x) != (x))
/* Ghidra prints a NaN constant as a bare NAN (e.g. `x = -NAN;`): the NAN(x) macro above only matches calls */
#define __NAN_VALUE (__p2f_bits(0x7fc00000u))
/* CONCATxy(hi, lo): join hi (x bytes) and lo (y bytes) */
/* CONCATxy(hi, lo): hi (x bytes) above lo (y bytes) � all sizes */
#define CONCAT11(h, l) ((unsigned long long)(((unsigned long long)(h) << 8) | ((unsigned long long)(l) & 0xFFull)))
#define CONCAT12(h, l) ((unsigned long long)(((unsigned long long)(h) << 16) | ((unsigned long long)(l) & 0xFFFFull)))
#define CONCAT13(h, l) ((unsigned long long)(((unsigned long long)(h) << 24) | ((unsigned long long)(l) & 0xFFFFFFull)))
#define CONCAT14(h, l) ((unsigned long long)(((unsigned long long)(h) << 32) | ((unsigned long long)(l) & 0xFFFFFFFFull)))
#define CONCAT15(h, l) ((unsigned long long)(((unsigned long long)(h) << 40) | ((unsigned long long)(l) & 0xFFFFFFFFFFull)))
#define CONCAT16(h, l) ((unsigned long long)(((unsigned long long)(h) << 48) | ((unsigned long long)(l) & 0xFFFFFFFFFFFFull)))
#define CONCAT17(h, l) ((unsigned long long)(((unsigned long long)(h) << 56) | ((unsigned long long)(l) & 0xFFFFFFFFFFFFFFull)))
#define CONCAT21(h, l) ((unsigned long long)(((unsigned long long)(h) << 8) | ((unsigned long long)(l) & 0xFFull)))
#define CONCAT22(h, l) ((unsigned long long)(((unsigned long long)(h) << 16) | ((unsigned long long)(l) & 0xFFFFull)))
#define CONCAT23(h, l) ((unsigned long long)(((unsigned long long)(h) << 24) | ((unsigned long long)(l) & 0xFFFFFFull)))
#define CONCAT24(h, l) ((unsigned long long)(((unsigned long long)(h) << 32) | ((unsigned long long)(l) & 0xFFFFFFFFull)))
#define CONCAT25(h, l) ((unsigned long long)(((unsigned long long)(h) << 40) | ((unsigned long long)(l) & 0xFFFFFFFFFFull)))
#define CONCAT26(h, l) ((unsigned long long)(((unsigned long long)(h) << 48) | ((unsigned long long)(l) & 0xFFFFFFFFFFFFull)))
#define CONCAT31(h, l) ((unsigned long long)(((unsigned long long)(h) << 8) | ((unsigned long long)(l) & 0xFFull)))
#define CONCAT32(h, l) ((unsigned long long)(((unsigned long long)(h) << 16) | ((unsigned long long)(l) & 0xFFFFull)))
#define CONCAT33(h, l) ((unsigned long long)(((unsigned long long)(h) << 24) | ((unsigned long long)(l) & 0xFFFFFFull)))
#define CONCAT34(h, l) ((unsigned long long)(((unsigned long long)(h) << 32) | ((unsigned long long)(l) & 0xFFFFFFFFull)))
#define CONCAT35(h, l) ((unsigned long long)(((unsigned long long)(h) << 40) | ((unsigned long long)(l) & 0xFFFFFFFFFFull)))
#define CONCAT41(h, l) ((unsigned long long)(((unsigned long long)(h) << 8) | ((unsigned long long)(l) & 0xFFull)))
#define CONCAT42(h, l) ((unsigned long long)(((unsigned long long)(h) << 16) | ((unsigned long long)(l) & 0xFFFFull)))
#define CONCAT43(h, l) ((unsigned long long)(((unsigned long long)(h) << 24) | ((unsigned long long)(l) & 0xFFFFFFull)))
#define CONCAT44(h, l) ((unsigned long long)(((unsigned long long)(h) << 32) | ((unsigned long long)(l) & 0xFFFFFFFFull)))
#define CONCAT51(h, l) ((unsigned long long)(((unsigned long long)(h) << 8) | ((unsigned long long)(l) & 0xFFull)))
#define CONCAT52(h, l) ((unsigned long long)(((unsigned long long)(h) << 16) | ((unsigned long long)(l) & 0xFFFFull)))
#define CONCAT53(h, l) ((unsigned long long)(((unsigned long long)(h) << 24) | ((unsigned long long)(l) & 0xFFFFFFull)))
#define CONCAT61(h, l) ((unsigned long long)(((unsigned long long)(h) << 8) | ((unsigned long long)(l) & 0xFFull)))
#define CONCAT62(h, l) ((unsigned long long)(((unsigned long long)(h) << 16) | ((unsigned long long)(l) & 0xFFFFull)))
#define CONCAT71(h, l) ((unsigned long long)(((unsigned long long)(h) << 8) | ((unsigned long long)(l) & 0xFFull)))
/* SUBxy(v, off): y bytes of x-byte v starting at byte off */
#define SUB41(v, o) ((unsigned char)((unsigned int)(v) >> ((o) * 8)))
#define SUB42(v, o) ((unsigned short)((unsigned int)(v) >> ((o) * 8)))
#define SUB81(v, o) ((unsigned char)((unsigned long long)(v) >> ((o) * 8)))
#define SUB82(v, o) ((unsigned short)((unsigned long long)(v) >> ((o) * 8)))
#define SUB84(v, o) ((unsigned int)((unsigned long long)(v) >> ((o) * 8)))
#define SUB101(v, o) ((unsigned char)0)
#define ZEXT14(v) ((unsigned int)(unsigned char)(v))
#define ZEXT24(v) ((unsigned int)(unsigned short)(v))
#define ZEXT48(v) ((unsigned long long)(unsigned int)(v))
#define SEXT14(v) ((int)(signed char)(v))
#define SEXT24(v) ((int)(short)(v))
#define SEXT48(v) ((long long)(int)(v))
#define SBORROW4(a, b) ((((a) ^ (b)) & ((a) ^ ((a) - (b)))) < 0)
#define CARRY4(a, b) ((unsigned int)(a) + (unsigned int)(b) < (unsigned int)(a))
#define POPCOUNT(x) __popcnt(x)
#define ROUND(x) ((float10)(long long)((x) + 0.5))
/* x87 pseudo-ops printed by the decompiler */
double __cdecl sqrt(double);
double __cdecl fabs(double);
#pragma intrinsic(sqrt, fabs)
#define SQRT(x) sqrt(x)
#define ABS(x) fabs(x)
double __cdecl sin(double);
double __cdecl cos(double);
#pragma intrinsic(sin, cos)
#define fsin(x) sin(x)
#define fcos(x) cos(x)
#define CONCAT28(h, l) ((unsigned long long)(l))  /* high 2 bytes of an 80-bit value: dropped */
