
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00634010(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (((*(float *)(param_1 + 0x54) <= *(float *)(param_1 + 0x50)) ||
      (*(short *)(param_1 + 0x42) == 6)) && (_DAT_006e936c < *(float *)(param_1 + 0x58))) {
    iVar1 = FUN_005af060(0x3f800000);
    if (iVar1 != 0) {
      iVar1 = FUN_005af780(7);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x58) = 0;
        FUN_005bec70(7);
        return;
      }
      iVar1 = FUN_005af780(4);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x58) = 0;
        FUN_005bec70(4);
        return;
      }
      iVar1 = FUN_005af780(3);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x58) = 0;
        FUN_005bec70(3);
        return;
      }
      iVar1 = FUN_005af780(1);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x58) = 0;
        FUN_005bec70(1);
        return;
      }
    }
  }
  FUN_005bec70(param_2);
  return;
}

