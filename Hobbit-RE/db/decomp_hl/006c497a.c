
void FUN_006c497a(uint param_1)

{
  if ((0x757faf < param_1) && (param_1 < 0x758211)) {
    FUN_006c575a(((int)(param_1 - 0x757fb0) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}

