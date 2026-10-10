
void __thiscall FUN_0061e090(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  switch(param_2) {
  case 5:
  case 6:
    uVar1 = 0;
    FUN_005af120(0);
    FUN_004a0fc0(uVar1);
    uVar1 = 0;
    FUN_005af120(0);
    FUN_004a0fe0(uVar1);
    uVar1 = FUN_00567b20(2);
    pcVar2 = &DAT_00749150;
    break;
  case 7:
    uVar1 = 1;
    FUN_005af120(1);
    FUN_004a0fc0(uVar1);
    uVar1 = 1;
    FUN_005af120(1);
    FUN_004a0fe0(uVar1);
    uVar1 = FUN_00567b20(2);
    FUN_0064a2e0(&DAT_00749ce4);
    FUN_005af9f0(uVar1);
    *(undefined4 *)(param_1 + 0x50) = 0;
    FUN_005be710(param_2);
    return;
  case 8:
    uVar1 = 1;
    FUN_005af120(1);
    FUN_004a0fc0(uVar1);
    uVar1 = 1;
    FUN_005af120(1);
    FUN_004a0fe0(uVar1);
    uVar1 = FUN_00567b20(2);
    pcVar2 = s_retract_00749cdc;
    break;
  default:
    goto switchD_0061e0a5_default;
  }
  FUN_0064a2e0(pcVar2);
  FUN_005af9f0(uVar1);
switchD_0061e0a5_default:
  FUN_005be710(param_2);
  return;
}

