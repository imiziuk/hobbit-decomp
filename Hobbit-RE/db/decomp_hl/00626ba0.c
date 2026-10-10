
void __thiscall FUN_00626ba0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  switch(param_2) {
  case 5:
    iVar1 = FUN_00567b20(3);
    *(undefined4 *)(iVar1 + 0xc) = 1;
    goto LAB_00626d35;
  case 6:
  case 0xf:
    iVar1 = FUN_00567b20(2);
    pcVar5 = s_combat_idle_007492e0;
    break;
  case 7:
    iVar1 = FUN_00567b20(2);
    pcVar5 = s_run_med_0074a1d8;
    break;
  case 8:
    iVar1 = FUN_00567b20(1);
    uVar4 = FUN_005be240();
    *(undefined8 *)(iVar1 + 0x10) = uVar4;
    FUN_0064a2e0(s_run_close_0074a1cc);
    if (*(int *)(param_1 + 0x54) == 0) {
      *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0x6c);
    }
    else {
      *(undefined4 *)(iVar1 + 0x24) = DAT_006f6190;
    }
    goto LAB_00626d35;
  case 10:
    iVar1 = FUN_00567b20(2);
    *(undefined4 *)(iVar1 + 0xc) = 0x1a;
    uVar4 = FUN_005be240();
    *(undefined8 *)(iVar1 + 0x40) = uVar4;
    goto LAB_00626d35;
  case 0xb:
    iVar1 = FUN_00567b20(2);
    pcVar5 = s_leapattack_0074a1c0;
    break;
  case 0xc:
    iVar1 = FUN_00567b20(2);
    pcVar5 = s_back_med_0074a1b4;
    break;
  case 0xd:
    iVar1 = FUN_00567b20(2);
    pcVar5 = s_back_close_0074a1a8;
    break;
  case 0xe:
    iVar1 = FUN_00567b20(1);
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 8;
    piVar2 = (int *)FUN_005af120();
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x2c))();
    *(undefined4 *)(iVar1 + 0x18) = *puVar3;
    *(undefined4 *)(iVar1 + 0x1c) = puVar3[1];
    *(undefined4 *)(iVar1 + 0x20) = puVar3[2];
    *(uint *)(iVar1 + 0x5c) = *(uint *)(iVar1 + 0x5c) & 0xfffffffb;
    FUN_005af9f0(iVar1);
  case 9:
    iVar1 = FUN_00567b20(0);
    uVar4 = FUN_005be240();
    *(undefined8 *)(iVar1 + 0x10) = uVar4;
    goto LAB_00626d35;
  default:
    goto switchD_00626bb5_default;
  }
  FUN_0064a2e0(pcVar5);
  uVar4 = FUN_005be240();
  *(undefined8 *)(iVar1 + 0x40) = uVar4;
LAB_00626d35:
  FUN_005af9f0(iVar1);
switchD_00626bb5_default:
  FUN_005be710(param_2);
  return;
}

