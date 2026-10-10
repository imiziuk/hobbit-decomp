
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_006b67d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x400; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x400;
  for (iVar1 = 0x400; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x800] = FUN_006b6650;
  param_1[0x801] = FUN_00429100;
  _DAT_008157e8 = 0x7f7fffff;
  _DAT_008157ec = 0x7f7fffff;
  _DAT_008157f0 = 0x7f7fffff;
  _DAT_008157f4 = 0xff7fffff;
  _DAT_008157f8 = 0xff7fffff;
  _DAT_008157fc = 0xff7fffff;
  FUN_00648600(&DAT_00815c80,0,0xe);
  _DAT_00815d04 = 0;
  _DAT_00815cdc = 0;
  _DAT_00815cf8 = 0;
  _DAT_00815cf4 = 0;
  _DAT_00815cd4 = 0;
  _DAT_00815ce8 = 0;
  _DAT_00815cc8 = 0;
  _DAT_00815ce0 = 0;
  return param_1;
}

