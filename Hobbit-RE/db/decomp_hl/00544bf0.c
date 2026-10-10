
undefined4 __thiscall FUN_00544bf0(int param_1,int param_2,float param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(short *)(param_1 + 0x26)) {
    do {
      iVar1 = FUN_0053f210(3);
      if (((iVar1 == param_2) &&
          (iVar1 = FUN_0053f210(0), (float)iVar1 < param_3 != ((float)iVar1 == param_3))) &&
         (iVar1 = FUN_0053f210(1), param_3 <= (float)iVar1)) {
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(short *)(param_1 + 0x26));
  }
  return 0;
}

