
void __thiscall FUN_005b96e0(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if (param_2 == 5) {
    iVar1 = FUN_00567b20(2);
    uVar2 = FUN_005be240();
    pcVar3 = s_alert_base_0074576c;
  }
  else {
    if (param_2 != 6) goto LAB_005b974c;
    *(undefined4 *)(param_1 + 0x94) = 0;
    iVar1 = FUN_00567b20(2);
    uVar2 = FUN_005be240();
    pcVar3 = s_alert_snort_00745778;
  }
  *(undefined8 *)(iVar1 + 0x40) = uVar2;
  FUN_0064a2e0(pcVar3);
  FUN_005af9f0(iVar1);
LAB_005b974c:
  FUN_005be710(param_2);
  return;
}

