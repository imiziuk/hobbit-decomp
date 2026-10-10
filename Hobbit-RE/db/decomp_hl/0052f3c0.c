
undefined4 __thiscall FUN_0052f3c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (-1 < param_2) {
    iVar1 = FUN_0052e130();
    if (param_2 < iVar1) {
      iVar2 = param_2 * 0xa8 + *(int *)(param_1 + 0xc);
      FUN_0064a320(iVar2);
      FUN_0064b7f0(iVar2 + 0x2c);
      puVar3 = (undefined4 *)(iVar2 + 0x78);
      puVar4 = (undefined4 *)(param_3 + 0x78);
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      return 1;
    }
  }
  return 0;
}

