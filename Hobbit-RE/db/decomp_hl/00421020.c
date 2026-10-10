
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00421020(int param_1,int *param_2)

{
  float fVar1;
  float10 fVar2;
  
  if ((param_2[2] == *(int *)(param_1 + 8)) && (param_2[3] == *(int *)(param_1 + 0xc))) {
    return 0;
  }
  if (*param_2 != 5) {
    if (((*param_2 == 7) &&
        (*(float *)(param_1 + 0xa04) < _DAT_006e9554 !=
         (NAN(*(float *)(param_1 + 0xa04)) || NAN(_DAT_006e9554)))) &&
       (fVar1 = *(float *)(param_1 + 0xa04) + DAT_006e92e8, *(float *)(param_1 + 0xa04) = fVar1,
       _DAT_006e9554 < fVar1)) {
      *(undefined4 *)(param_1 + 0xa04) = 0x41200000;
    }
    return 0;
  }
  if (*(int *)(param_1 + 0x410) != 0) {
    *(undefined4 *)(param_1 + 0x410) = 0;
    if (DAT_0075dae8 == 0) {
      FUN_004cdf30();
    }
    else {
      fVar2 = (float10)FUN_00434c10();
      FUN_00434c40(4,(float)fVar2);
    }
    FUN_0043a3f0(1,s_C__projects_meridian_Support_Obj_007200c0,0xbbf);
  }
  return 1;
}

