
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00626f70(int param_1,undefined4 *param_2)

{
  if ((*(int *)(param_1 + 0x48) == 0) && (*(float *)(param_1 + 0x58) < *(float *)(param_1 + 0x5c)))
  {
    return 0;
  }
  if ((*(int *)(param_1 + 0x54) != 0) && (_DAT_006f6198 < *(float *)(param_1 + 0x4c))) {
    *param_2 = 0xb;
    return 1;
  }
  *param_2 = 10;
  return 1;
}

