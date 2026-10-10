
undefined4 FUN_0052f760(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint local_4;
  
  local_4 = 0;
  FUN_0064f350(&local_4,4,1,param_2);
  iVar1 = DAT_007f23d8;
  DAT_007f23d8 = DAT_007f23d8 + (local_4 * 2 + 0x11 & 0xfffffff0);
  FUN_0064f350(iVar1,1,local_4 + 1,param_2);
  uVar2 = 0;
  if (local_4 != 0) {
    do {
      if (*(char *)(iVar1 + uVar2) == '\0') {
        FUN_0064f350(iVar1 + 1 + local_4,1,local_4 + 1,param_2);
        FUN_0064b0f0(iVar1);
        return param_1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < local_4);
  }
  FUN_0064b130(iVar1);
  return param_1;
}

