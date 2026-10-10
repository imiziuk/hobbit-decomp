
void __thiscall FUN_006358d0(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 == 5) && (*(int *)(param_1 + 0x48) != 0 || *(int *)(param_1 + 0x4c) != 0)) {
    iVar1 = FUN_00567b20(1);
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x2c) = 8;
    FUN_005af9f0(iVar1);
  }
  FUN_005be710(param_2);
  return;
}

