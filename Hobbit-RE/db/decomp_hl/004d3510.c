
undefined4 * __thiscall FUN_004d3510(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_250 [584];
  undefined4 uStack_8;
  uint uStack_4;
  
  iVar1 = FUN_00647e40(param_3,s_Rock_Can_Trigger_0072d900);
  if (iVar1 == 0) {
    FUN_00406a80();
    uStack_4 = *(uint *)(param_1 + 0x160) >> 2 & 1;
  }
  else {
    iVar1 = FUN_00647e40(param_3,&DAT_0071fac4);
    if (iVar1 == 0) {
      FUN_00406a80();
      uStack_4 = *(uint *)(param_1 + 0x160) >> 1 & 1;
    }
    else {
      iVar1 = FUN_00647e40(param_3,s_TargetLoops_0072d8a4);
      if (iVar1 == 0) {
        FUN_00406a80();
        uStack_4 = *(uint *)(param_1 + 0x160) >> 4 & 1;
        *param_2 = 3;
        FUN_00424770(auStack_250);
        return param_2;
      }
      iVar1 = FUN_00647e40(param_3,s_ReverseAnimForOff_0072d890);
      if (iVar1 == 0) {
        FUN_00406a80();
        uStack_4 = *(uint *)(param_1 + 0x160) >> 3 & 1;
        *param_2 = 3;
        FUN_00424770(auStack_250);
        return param_2;
      }
      iVar1 = FUN_00647e40(param_3,s_ToggleDelay_0072d884);
      if (iVar1 == 0) {
        FUN_00406a80();
        uStack_8 = *(undefined4 *)(param_1 + 0x164);
        *param_2 = 2;
        FUN_00424770(auStack_250);
        return param_2;
      }
      iVar1 = FUN_00647e40(param_3,s_TimeSinceToggle_0072d8f0);
      if (iVar1 == 0) {
        FUN_00406a80();
        uStack_8 = *(undefined4 *)(param_1 + 0x168);
        *param_2 = 2;
        FUN_00424770(auStack_250);
        return param_2;
      }
      iVar1 = FUN_00647e40(param_3,s_Activated_0072d8e4);
      if (iVar1 != 0) {
        FUN_004c5ba0(param_2,param_3);
        return param_2;
      }
      FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
      FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
      uStack_4 = 1;
    }
  }
  *param_2 = 3;
  FUN_00424770(auStack_250);
  return param_2;
}

