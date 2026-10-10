
void __fastcall FUN_00669c30(int *param_1)

{
  int iVar1;
  
  if (param_1[2] == *param_1) {
    iVar1 = param_1[3];
    param_1[3] = iVar1 + -4;
    iVar1 = *(int *)(iVar1 + -4);
    *param_1 = iVar1;
    param_1[2] = iVar1 + 0x1000;
    param_1[1] = iVar1 + 0x1000;
    param_1[2] = iVar1 + 0xffc;
    return;
  }
  param_1[2] = param_1[2] + -4;
  return;
}

