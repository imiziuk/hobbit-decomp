
void FUN_0060c7f0(int param_1)

{
  int iVar1;
  
  if (param_1 == 5) {
    iVar1 = FUN_00567b20(2);
    *(undefined4 *)(iVar1 + 0xc) = 1;
  }
  else if (param_1 == 6) {
    iVar1 = FUN_00567b20(2);
    *(undefined4 *)(iVar1 + 0xc) = 0x11;
  }
  else {
    if (param_1 != 7) goto LAB_0060c84e;
    iVar1 = FUN_00567b20(2);
    *(undefined4 *)(iVar1 + 0xc) = 0x31;
  }
  FUN_005af9f0(iVar1);
LAB_0060c84e:
  FUN_005be710(param_1);
  return;
}

