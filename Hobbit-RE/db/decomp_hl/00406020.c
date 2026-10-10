
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00406020(int param_1)

{
  if (_DAT_006e9318 < *(float *)(param_1 + 0x34c)) {
    *(undefined4 *)(param_1 + 0x1fc) = 0;
    _DAT_0075b6ac = 0;
    DAT_0075b6b4 = FUN_00659600(s_MineCartMoveAir_Loop_0071d550,1);
    DAT_0075b6b8 = FUN_00659600(s_MineCartMoveRattle_Loop_0071d538,1);
    FUN_004063f0(0,0);
  }
  return;
}

