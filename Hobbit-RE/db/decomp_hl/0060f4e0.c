
void __thiscall FUN_0060f4e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  if (param_2 == 5) {
    iVar2 = FUN_00567b20(2);
    uVar3 = FUN_005be240();
    *(undefined8 *)(iVar2 + 0x40) = uVar3;
LAB_0060f5af:
    pcVar4 = &DAT_00749150;
  }
  else if (param_2 == 6) {
    iVar2 = FUN_00567b20(2);
    uVar3 = FUN_005be240();
    *(undefined8 *)(iVar2 + 0x40) = uVar3;
    iVar1 = *(int *)(param_1 + 0x7c);
    if (iVar1 == 3) {
      pcVar4 = s_struggle1_00749170;
    }
    else if (iVar1 == 2) {
      pcVar4 = s_struggle2_00749164;
    }
    else {
      if (iVar1 != 1) goto LAB_0060f5af;
      pcVar4 = s_struggle3_00749158;
    }
  }
  else {
    if (param_2 != 7) goto LAB_0060f5c5;
    iVar2 = FUN_00567b20(2);
    uVar3 = FUN_005be240();
    *(undefined8 *)(iVar2 + 0x40) = uVar3;
    iVar1 = *(int *)(param_1 + 0x7c);
    if (iVar1 == 4) {
      pcVar4 = s_thrash1_00749194;
    }
    else if (iVar1 == 3) {
      pcVar4 = s_thrash2_0074918c;
    }
    else if (iVar1 == 2) {
      pcVar4 = s_thrash3_00749184;
    }
    else {
      if (iVar1 != 1) goto LAB_0060f5af;
      pcVar4 = s_thrash4_0074917c;
    }
  }
  FUN_0064a2e0(pcVar4);
  FUN_005af9f0(iVar2);
LAB_0060f5c5:
  FUN_005be710(param_2);
  return;
}

