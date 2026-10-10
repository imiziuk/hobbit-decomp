
undefined4 __thiscall FUN_004d3340(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00647e40(param_2,s_Rock_Can_Trigger_0072d900);
  if (iVar1 == 0) {
    if (*param_3 != 3) {
      return 0;
    }
    *(uint *)(param_1 + 0x160) =
         (param_3[0x95] << 2 ^ *(uint *)(param_1 + 0x160)) & 4 ^ *(uint *)(param_1 + 0x160);
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,&DAT_0071fac4);
  if (iVar1 == 0) {
    if (*param_3 != 3) {
      return 0;
    }
    *(uint *)(param_1 + 0x160) =
         (param_3[0x95] << 1 ^ *(uint *)(param_1 + 0x160)) & 2 ^ *(uint *)(param_1 + 0x160);
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_TargetLoops_0072d8a4);
  if (iVar1 == 0) {
    if (*param_3 != 3) {
      return 0;
    }
    *(uint *)(param_1 + 0x160) =
         (param_3[0x95] << 4 ^ *(uint *)(param_1 + 0x160)) & 0x10 ^ *(uint *)(param_1 + 0x160);
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_ReverseAnimForOff_0072d890);
  if (iVar1 == 0) {
    if (*param_3 != 3) {
      return 0;
    }
    *(uint *)(param_1 + 0x160) =
         (param_3[0x95] << 3 ^ *(uint *)(param_1 + 0x160)) & 8 ^ *(uint *)(param_1 + 0x160);
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_ToggleDelay_0072d884);
  if (iVar1 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0x164) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_TimeSinceToggle_0072d8f0);
  if (iVar1 != 0) {
    iVar1 = FUN_00647e40(param_2,s_Activated_0072d8e4);
    if (iVar1 == 0) {
      FUN_004d2760();
    }
    uVar2 = FUN_004c49a0(param_2,param_3);
    return uVar2;
  }
  if (*param_3 != 2) {
    return 0;
  }
  *(int *)(param_1 + 0x168) = param_3[0x94];
  return 1;
}

