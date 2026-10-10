
void FUN_006115c0(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  if (param_1 == 5) {
    uVar1 = FUN_00567b20(2);
    pcVar2 = &DAT_00749150;
  }
  else {
    if (param_1 != 6) goto LAB_0061160c;
    uVar1 = FUN_00567b20(2);
    pcVar2 = s_flinch_00749298;
  }
  FUN_0064a2e0(pcVar2);
  FUN_005af9f0(uVar1);
LAB_0061160c:
  FUN_005be710(param_1);
  return;
}

