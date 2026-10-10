
undefined4 FUN_00659ab0(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (param_1 & 0xffff) - 1;
  if ((((-1 < iVar1) && (iVar1 < DAT_00806800)) &&
      (iVar1 = iVar1 * 0xf8 + DAT_008067f8,
      *(uint *)(iVar1 + 0xe0) == ((int)param_1 >> 0x10 & 0xffffU))) && (iVar1 != 0)) {
    uVar2 = FUN_006788c0();
    return uVar2;
  }
  return 0;
}

