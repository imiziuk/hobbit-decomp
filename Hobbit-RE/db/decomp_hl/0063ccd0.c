
void FUN_0063ccd0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = param_2;
  if (0x1f < param_2) {
    iVar2 = 0x20;
  }
  uVar3 = 0;
  uVar1 = FUN_0063dcd0(iVar2);
  if (0 < param_2 - iVar2) {
    uVar3 = FUN_0063dcd0(param_2 - iVar2);
  }
  param_1[1] = uVar3;
  *param_1 = uVar1;
  return;
}

