
longlong __fastcall FUN_005c7180(int param_1)

{
  void *pvVar1;
  uint extraout_EDX;
  int extraout_EDX_00;
  void *pvVar2;
  int iVar3;
  
  iVar3 = (int)*(short *)(param_1 + 0x1c);
  pvVar1 = operator_new(iVar3 * 0x28);
  if (pvVar1 == (void *)0x0) {
    return (ulonglong)extraout_EDX << 0x20;
  }
  pvVar2 = pvVar1;
  if (-1 < iVar3 + -1) {
    do {
      func_0x005c5cf0();
      pvVar2 = (void *)(extraout_EDX_00 + 0x28);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return CONCAT44(pvVar2,pvVar1);
}

