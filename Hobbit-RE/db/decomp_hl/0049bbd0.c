
void FUN_0049bbd0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = param_1[1];
  iVar1 = FUN_0054c120(*param_1,1);
  if (iVar1 != 0) {
    iVar1 = FUN_004d0b20(uVar2);
    if (-1 < iVar1) {
      uVar2 = FUN_004d0ae0(iVar1);
      *param_1 = uVar2;
      return;
    }
  }
  *param_1 = 0;
  return;
}

