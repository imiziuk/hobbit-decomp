
void __thiscall FUN_0061dca0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  if (param_2 != 5) {
    FUN_00638b00(param_2);
    FUN_005be710(param_2);
    return;
  }
  *(undefined4 *)(param_1 + 0x50) = 0x3f000000;
  if (*(int *)(param_1 + 0x48) == 0) {
    iVar1 = FUN_00567b20(2);
    *(undefined4 *)(iVar1 + 0xc) = 0x35;
    FUN_005af9f0(iVar1);
    FUN_005be710(5);
    return;
  }
  iVar1 = FUN_00567b20(2);
  iVar2 = FUN_00647b10(0,100);
  if (iVar2 < 0x32) {
    pcVar3 = s_Squawk1_00749cd4;
  }
  else {
    pcVar3 = s_Squawk2_00749ccc;
  }
  FUN_0064a2e0(pcVar3);
  *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
  FUN_005af9f0(iVar1);
  FUN_005be710(5);
  return;
}

