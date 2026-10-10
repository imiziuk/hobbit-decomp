
undefined4 FUN_006c6a0e(int param_1)

{
  int iVar1;
  
  DAT_0081636c = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_0081636c != (HANDLE)0x0) {
    DAT_00816370 = FUN_006c68c6();
    if (DAT_00816370 == 3) {
      iVar1 = FUN_006c8899(0x3f8);
    }
    else {
      if (DAT_00816370 != 2) {
        return 1;
      }
      iVar1 = FUN_006c93e0();
    }
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_0081636c);
  }
  return 0;
}

