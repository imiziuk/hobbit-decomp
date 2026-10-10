
void __fastcall FUN_006666e0(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2];
  param_1[2] = iVar1 + 4;
  if (iVar1 + 4 == param_1[1]) {
    iVar1 = param_1[3];
    param_1[3] = iVar1 + 4;
    iVar1 = *(int *)(iVar1 + 4);
    *param_1 = iVar1;
    param_1[1] = iVar1 + 0x1000;
    param_1[2] = *param_1;
  }
  return;
}

