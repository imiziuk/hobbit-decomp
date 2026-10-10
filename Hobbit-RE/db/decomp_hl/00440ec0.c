
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00440ec0(int param_1)

{
  float10 fVar1;
  
  if ((NAN(_DAT_0075eba0) || NAN(DAT_006e92e8)) != (_DAT_0075eba0 == DAT_006e92e8)) {
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(param_1 + 0x434) = 0;
    *(undefined4 *)(param_1 + 0x3c0) = 0;
    *(undefined4 *)(param_1 + 0x3c8) = 0;
    *(undefined4 *)(param_1 + 0x4e60) = 0;
    FUN_00421f80();
    *(undefined4 *)(param_1 + 0x3d0) = 0;
    *(undefined4 *)(param_1 + 0x3d8) = 0;
    *(undefined4 *)(param_1 + 0x3b0) = 0;
    *(undefined4 *)(param_1 + 0x3b4) = 0;
    FUN_004343c0();
    if (DAT_0075dae8 == 0) {
      FUN_004cdf30();
    }
    else {
      FUN_0044ca80();
      fVar1 = (float10)FUN_00434c10();
      FUN_00434c40(4,(float)fVar1);
    }
    FUN_0043a3f0(1,s_C__projects_meridian_Support_Obj_00724060,0xf76);
  }
  return;
}

