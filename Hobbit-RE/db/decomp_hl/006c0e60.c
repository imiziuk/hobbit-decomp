
int FUN_006c0e60(int param_1)

{
  bool bVar1;
  
  if (DAT_00815f34 == 0) {
    if ((0x40 < param_1) && (param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_00816368);
    bVar1 = DAT_00816364 != 0;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_00816368);
      FUN_006c56f9(0x13);
    }
    param_1 = FUN_006c0ecf(param_1);
    if (bVar1) {
      FUN_006c575a(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_00816368);
    }
  }
  return param_1;
}

