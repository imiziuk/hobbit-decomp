
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00671230(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = param_1 + 0xfU & 0xfffffff0;
  iVar3 = 0;
  DAT_007f23d0 = uVar1;
  do {
    uVar2 = thunk_FUN_0064ff70(uVar1,s_C__projects_meridian_xCore_entro_007505d4,0x8e);
    *(undefined4 *)((int)&DAT_007f23c4 + iVar3) = uVar2;
    uVar1 = DAT_007f23d0;
    *(uint *)((int)&DAT_007f23bc + iVar3) = DAT_007f23d0;
    iVar3 = iVar3 + 4;
  } while (iVar3 < 8);
  DAT_007f23b0 = 0;
  FUN_006712a0();
  _DAT_007f2420 = 1;
  DAT_007f23b8 = 0;
  _DAT_007f23b4 = 0;
  return;
}

