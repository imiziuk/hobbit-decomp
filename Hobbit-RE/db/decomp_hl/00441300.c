
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00441300(int param_1)

{
  float10 fVar1;
  
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x75c) = 0;
  *(undefined4 *)(param_1 + 0x758) = 0;
  *(undefined4 *)(param_1 + 0x754) = 0;
  if (DAT_0075dae8 == 0) {
    FUN_004cdf30();
  }
  else {
    FUN_0044ca80();
    fVar1 = (float10)FUN_00434c10();
    FUN_00434c40(4,(float)fVar1);
  }
  FUN_00427270();
  _DAT_00763ed4 = 0;
  FUN_0041c2b0(1);
  return;
}

