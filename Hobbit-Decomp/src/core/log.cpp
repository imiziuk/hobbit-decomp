#include "core/log.h"

#include <cstdarg>
#include <cstdio>

void Log(const char* fmt, ...) {
    FILE* f = fopen("hobbit_decomp.log", "a");
    if (!f) return;
    va_list ap;
    va_start(ap, fmt);
    vfprintf(f, fmt, ap);
    va_end(ap);
    fputc('\n', f);
    fclose(f);
}
