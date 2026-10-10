
void __thiscall FUN_00636010(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 5) {
    iVar1 = FUN_00567b20(1);
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 8;
  }
  else {
    if (param_2 != 6) goto LAB_0063607d;
    iVar1 = FUN_00567b20(2);
    if (*(int *)(param_1 + 0x4c) == 1) {
      *(undefined4 *)(iVar1 + 0xc) = 0x13;
    }
    else if (*(int *)(param_1 + 0x4c) == 2) {
      *(undefined4 *)(iVar1 + 0xc) = 0x14;
    }
    else {
      *(undefined4 *)(iVar1 + 0xc) = 0x12;
    }
  }
  FUN_005af9f0(iVar1);
LAB_0063607d:
  FUN_005be710(param_2);
  return;
}

