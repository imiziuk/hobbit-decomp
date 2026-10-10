
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006712d0(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_0064ff40(*(undefined4 *)((int)&DAT_007f23c4 + iVar1),
                 s_C__projects_meridian_xCore_entro_00750610,0xa4);
    *(undefined4 *)((int)&DAT_007f23c4 + iVar1) = 0;
    *(undefined4 *)((int)&DAT_007f23bc + iVar1) = 0;
    iVar1 = iVar1 + 4;
  } while (iVar1 < 8);
  _DAT_007f23b4 = 0;
  _DAT_007f2420 = 0;
  return;
}

