
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00527850(int param_1)

{
  char *pcVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
  *(float *)(param_1 + 0x2ec) = *(float *)(param_1 + 0x2ec) - _DAT_006efa50;
  if (*(int *)(param_1 + 0x2e8) < 0xda) {
    if (0x90 < *(int *)(param_1 + 0x2e8)) goto LAB_005278cc;
    *(undefined4 *)(param_1 + 0x2dc) = 0;
    *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_1 + 0x2e0);
    pcVar1 = s_LockGadgetClickRight_00735d1c;
  }
  else {
    *(undefined4 *)(param_1 + 0x2dc) = 1;
    *(int *)(param_1 + 0x2c4) = -*(int *)(param_1 + 0x2e0);
    pcVar1 = s_LockGadgetClickLeft_00735d34;
  }
  FUN_00659600(pcVar1,1);
LAB_005278cc:
  if (*(int *)(param_1 + 0x2dc) != 0) {
    *(int *)(param_1 + 0x2e8) = *(int *)(param_1 + 0x2e8) - *(int *)(param_1 + 0x2e0);
    return;
  }
  *(int *)(param_1 + 0x2e8) = *(int *)(param_1 + 0x2e8) + *(int *)(param_1 + 0x2e0);
  return;
}

