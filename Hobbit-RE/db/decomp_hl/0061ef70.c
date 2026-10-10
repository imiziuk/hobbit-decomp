
void FUN_0061ef70(undefined4 param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  switch(param_1) {
  case 5:
    iVar1 = FUN_00567b20(3);
    *(undefined4 *)(iVar1 + 0xc) = 1;
    goto LAB_0061f111;
  case 6:
  case 7:
    uVar4 = 0;
    FUN_005af120(0);
    FUN_004a0fc0(uVar4);
    uVar4 = 0;
    FUN_005af120(0);
    FUN_004a0fe0(uVar4);
    iVar1 = FUN_00567b20(2);
    pcVar3 = &DAT_00749150;
    break;
  case 8:
    uVar4 = 1;
    FUN_005af120(1);
    FUN_004a0fc0(uVar4);
    uVar4 = 1;
    FUN_005af120(1);
    FUN_004a0fe0(uVar4);
    iVar1 = FUN_00567b20(2);
    pcVar3 = s_burst_00749d68;
    break;
  case 9:
    uVar4 = 1;
    FUN_005af120(1);
    FUN_004a0fc0(uVar4);
    uVar4 = 1;
    FUN_005af120(1);
    FUN_004a0fe0(uVar4);
    iVar1 = FUN_00567b20(2);
    pcVar3 = &DAT_00749d60;
    break;
  case 10:
    uVar4 = 1;
    FUN_005af120(1);
    FUN_004a0fc0(uVar4);
    uVar4 = 1;
    FUN_005af120(1);
    FUN_004a0fe0(uVar4);
    iVar1 = FUN_00567b20(2);
    pcVar3 = s_strike_00749d58;
    break;
  case 0xb:
    uVar4 = 1;
    FUN_005af120(1);
    FUN_004a0fc0(uVar4);
    uVar4 = 1;
    FUN_005af120(1);
    FUN_004a0fe0(uVar4);
    iVar1 = FUN_00567b20(2);
    pcVar3 = &DAT_00749150;
    break;
  case 0xc:
    uVar4 = 1;
    FUN_005af120(1);
    FUN_004a0fc0(uVar4);
    uVar4 = 1;
    FUN_005af120(1);
    FUN_004a0fe0(uVar4);
    iVar1 = FUN_00567b20(2);
    FUN_0064a2e0(s_retract_00749cdc);
    goto LAB_0061f111;
  default:
    goto switchD_0061ef85_default;
  }
  FUN_0064a2e0(pcVar3);
  uVar2 = FUN_005af0f0();
  *(undefined8 *)(iVar1 + 0x40) = uVar2;
LAB_0061f111:
  FUN_005af9f0(iVar1);
switchD_0061ef85_default:
  FUN_005be710(param_1);
  return;
}

