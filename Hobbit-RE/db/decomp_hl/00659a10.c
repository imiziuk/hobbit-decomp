
undefined4 FUN_00659a10(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = (param_1 & 0xffff) - 1;
  if ((iVar1 < 0) || (DAT_00806800 <= iVar1)) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(uint *)(iVar1 * 0xf8 + 0xe0 + DAT_008067f8) != ((int)param_1 >> 0x10 & 0xffffU)) - 1
            & iVar1 * 0xf8 + DAT_008067f8;
  }
  iVar1 = (param_2 & 0xffff) - 1;
  if ((iVar1 < 0) || (DAT_00806800 <= iVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = iVar1 * 0xf8 + DAT_008067f8 &
            (*(uint *)(iVar1 * 0xf8 + 0xe0 + DAT_008067f8) != ((int)param_2 >> 0x10 & 0xffffU)) - 1;
  }
  if (uVar4 != 0) {
    uVar3 = FUN_00678880(uVar4,uVar2);
    return uVar3;
  }
  return 0;
}

