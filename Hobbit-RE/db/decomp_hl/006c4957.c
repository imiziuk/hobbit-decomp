
void FUN_006c4957(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_006c56f9(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}

