
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_004af640(undefined4 *param_1)

{
  FUN_004c0370();
  *(undefined2 *)(param_1 + 0x5c) = 0;
  param_1[0x58] = 0;
  *(undefined2 *)(param_1 + 0x5e) = 2000;
  *(undefined2 *)((int)param_1 + 0x17a) = 1000;
  *param_1 = &PTR_FUN_006ee1b8;
  _DAT_0075d3c0 = _DAT_0075d3c0 + 1;
  return param_1;
}

