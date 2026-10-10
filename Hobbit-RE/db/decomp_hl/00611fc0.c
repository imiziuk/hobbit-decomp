
void __thiscall FUN_00611fc0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  
  switch(param_2) {
  case 5:
    iVar3 = FUN_00567b20(2);
    uVar4 = FUN_005be240();
    *(undefined8 *)(iVar3 + 0x40) = uVar4;
    FUN_0064a2e0(s_combat_idle_007492e0);
    FUN_005af9f0(iVar3);
    if (*(int *)(param_1 + 200) != 0) {
      *(undefined4 *)(param_1 + 200) = 0;
      FUN_005be710(param_2);
      return;
    }
    switch(*(undefined4 *)(param_1 + 0xd4)) {
    case 1:
      uVar2 = DAT_006f5a08;
      goto LAB_00612053;
    case 2:
      *(undefined4 *)(param_1 + 0xd0) = DAT_006f5a04;
      break;
    case 3:
      *(undefined4 *)(param_1 + 0xd0) = DAT_006f5a00;
      break;
    case 4:
      uVar2 = DAT_006f59fc;
LAB_00612053:
      *(undefined4 *)(param_1 + 0xd0) = uVar2;
    }
    iVar3 = FUN_00647b10(0,100);
    *(uint *)(param_1 + 200) = (uint)(iVar3 < 0x14);
    FUN_005be710(param_2);
    return;
  case 6:
    iVar3 = FUN_00567b20(2);
    uVar4 = FUN_005be240();
    *(undefined8 *)(iVar3 + 0x40) = uVar4;
    FUN_0064a2e0(s_give_orders_007492d4);
    FUN_005af9f0(iVar3);
    piVar1 = (int *)FUN_005af120();
    uVar5 = 1;
    uVar2 = (**(code **)(*piVar1 + 0x28))(1);
    FUN_00659630(s_BOLG_11_05_007492c8,uVar2,uVar5);
    FUN_005be710(param_2);
    return;
  case 7:
    iVar3 = FUN_00567b20(2);
    uVar4 = FUN_005be240();
    pcVar6 = s_FirePrepare_007492bc;
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
    iVar3 = FUN_00567b20(2);
    uVar4 = FUN_005be240();
    pcVar6 = s_FireCrossbow_007492ac;
    break;
  case 0xc:
    iVar3 = FUN_00567b20(2);
    uVar4 = FUN_005be240();
    pcVar6 = s_FireFinish_007492a0;
    break;
  default:
    goto switchD_00611fd5_default;
  }
  *(undefined8 *)(iVar3 + 0x40) = uVar4;
  FUN_0064a2e0(pcVar6);
  FUN_005af9f0(iVar3);
switchD_00611fd5_default:
  FUN_005be710(param_2);
  return;
}

