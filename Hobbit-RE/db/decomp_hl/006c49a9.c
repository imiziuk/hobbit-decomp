
void FUN_006c49a9(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_006c575a(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}

