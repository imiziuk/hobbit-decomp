
void __thiscall
FUN_005356a0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x24c);
  if (iVar2 == 1) {
    iVar2 = param_1 + 0x1bc;
  }
  else {
    if ((iVar2 != 3) && (iVar2 != 5)) goto LAB_005356d3;
    iVar2 = param_1 + 0x1e8;
  }
  FUN_0064a320(iVar2);
LAB_005356d3:
  if (param_3 != 0) {
    FUN_0064a320(param_2);
  }
  *(undefined4 *)(param_1 + 0x15c) = 1;
  uVar1 = FUN_00531210(&DAT_00764560,*(undefined4 *)(param_1 + 0x264));
  FUN_0064a2e0(uVar1);
  *(undefined4 *)(param_1 + 0x160) = 0;
  FUN_00532370(param_2,param_3,param_4,param_5);
  return;
}

