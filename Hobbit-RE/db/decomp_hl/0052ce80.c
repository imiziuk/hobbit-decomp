
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052ce80(float *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = __ftol();
  iVar2 = FUN_006a2260(uVar1);
  *param_1 = (float)iVar2;
  uVar1 = __ftol();
  iVar2 = FUN_006a22a0(uVar1);
  param_1[1] = (float)iVar2;
  param_1[2] = DAT_006f39e8;
  param_1[3] = _DAT_006f39ec;
  return;
}

