
void __thiscall FUN_005bb680(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  if (param_2 == 5) {
    iVar2 = FUN_00567b20(2);
    uVar3 = FUN_005be240();
    *(undefined8 *)(iVar2 + 0x40) = uVar3;
    FUN_0064a2e0(s_sleep_idle_0074594c);
  }
  else {
    if (param_2 != 6) {
      if (param_2 == 7) {
        iVar1 = FUN_00567b20(2);
        uVar3 = FUN_005be240();
        *(undefined8 *)(iVar1 + 0x40) = uVar3;
        iVar2 = *(int *)(param_1 + 0x120);
        if (iVar2 == 1) {
          FUN_0064a2e0(s_sleep_fidget1_00745994);
        }
        else if (iVar2 == 2) {
          FUN_0064a2e0(s_sleep_snort_00745988);
        }
        else if (iVar2 == 3) {
          FUN_0064a2e0(s_sleep_wake50_00745978);
          *(undefined4 *)(param_1 + 0x124) = DAT_006f4354;
        }
        else {
          FUN_0064a2e0(s_sleep_wake75_00745968);
          *(undefined4 *)(param_1 + 0x128) = DAT_006f4354;
        }
        *(undefined4 *)(param_1 + 0x120) = 0;
        FUN_005af9f0(iVar1);
        if (DAT_0075d2b4 != 0) {
          FUN_00659c80(DAT_0075d2b4,0);
          DAT_0075d2b4 = 0;
          FUN_005be710(7);
          return;
        }
      }
      goto LAB_005bb801;
    }
    iVar2 = FUN_00567b20(2);
    uVar3 = FUN_005be240();
    *(undefined8 *)(iVar2 + 0x40) = uVar3;
    iVar1 = FUN_00647b10(0,100);
    if (iVar1 < 0x21) {
      pcVar4 = s_sleep_snort_00745988;
    }
    else if (iVar1 < 0x42) {
      pcVar4 = s_sleep_fidget1_00745994;
    }
    else {
      pcVar4 = s_sleep_snuzzle_00745958;
    }
    FUN_0064a2e0(pcVar4);
    if (DAT_0075d2b4 != 0) {
      FUN_00659c80(DAT_0075d2b4,0);
      DAT_0075d2b4 = 0;
    }
  }
  FUN_005af9f0(iVar2);
LAB_005bb801:
  FUN_005be710(param_2);
  return;
}

