
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00671320(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (DAT_007f23b8 < DAT_007f23d8 - (&DAT_007f23c4)[DAT_007f23b0]) {
    DAT_007f23b8 = DAT_007f23d8 - (&DAT_007f23c4)[DAT_007f23b0];
  }
  uVar2 = DAT_007f23b0 + 1 & 0x80000001;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
  }
  if ((&DAT_007f23bc)[uVar2] != DAT_007f23d0) {
    DAT_007f23b8 = 0;
    FUN_0064ff40((&DAT_007f23c4)[uVar2],s_C__projects_meridian_xCore_entro_0075064c,0xe1);
    uVar1 = thunk_FUN_0064ff70(DAT_007f23d0,s_C__projects_meridian_xCore_entro_00750688,0xe2);
    (&DAT_007f23c4)[uVar2] = uVar1;
    (&DAT_007f23bc)[uVar2] = DAT_007f23d0;
  }
  DAT_007f23b0 = uVar2;
  FUN_006712a0();
  _DAT_007f23b4 = 0;
  return;
}

