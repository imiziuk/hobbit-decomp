
void __thiscall FUN_00613f30(int param_1,undefined4 param_2)

{
  int iVar1;
  float10 fVar2;
  char *pcVar3;
  
  switch(param_2) {
  case 5:
    fVar2 = (float10)FUN_00647b30(*(undefined4 *)(param_1 + 0x548),*(undefined4 *)(param_1 + 0x54c))
    ;
    *(float *)(param_1 + 0xac) = (float)fVar2;
    FUN_00617960(0);
    FUN_00617a10(1);
    iVar1 = FUN_00567b20(2);
    *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(param_1 + 0xa0);
    *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(param_1 + 0xa4);
    pcVar3 = s_attack_breathin_0074942c;
    break;
  default:
    goto switchD_00613f45_caseD_6;
  case 7:
    FUN_00617830(1);
    FUN_00617960(0);
    FUN_00617a10(0);
    iVar1 = FUN_00567b20(2);
    *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(param_1 + 0xa0);
    *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(param_1 + 0xa4);
    pcVar3 = s_attack_stomp_0074941c;
    break;
  case 8:
    FUN_00617a10(0);
    FUN_00617960(1);
    *(undefined4 *)(param_1 + 0xa8) = DAT_006f5ab4;
    iVar1 = FUN_00567b20(2);
    *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(param_1 + 0xa0);
    *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(param_1 + 0xa4);
    pcVar3 = s_attack_base_00749410;
    break;
  case 9:
    FUN_00617830(0);
    FUN_00617a10(0);
    FUN_00617960(0);
    iVar1 = FUN_00567b20(2);
    *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(param_1 + 0xa0);
    *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(param_1 + 0xa4);
    pcVar3 = s_attack_look0100_00749400;
  }
  FUN_0064a2e0(pcVar3);
  FUN_005af9f0(iVar1);
switchD_00613f45_caseD_6:
  FUN_005be710(param_2);
  return;
}

