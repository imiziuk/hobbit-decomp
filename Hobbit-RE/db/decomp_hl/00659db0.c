
bool FUN_00659db0(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_1 & 0xffff) - 1;
  if ((iVar1 < 0) || (DAT_00806800 <= iVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(uint *)(iVar1 * 0xf8 + 0xe0 + DAT_008067f8) != ((int)param_1 >> 0x10 & 0xffffU)) - 1
            & iVar1 * 0xf8 + DAT_008067f8;
  }
  FUN_00678850(uVar2);
  return uVar2 != 0;
}

