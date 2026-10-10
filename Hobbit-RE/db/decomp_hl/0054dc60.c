
int FUN_0054dc60(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if ((&DAT_0076f908)[iVar2] != 0) {
      iVar1 = FUN_00647ed0(param_1,*(undefined4 *)((&DAT_0076f908)[iVar2] + 4));
      if (iVar1 == 0) {
        return iVar2;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x46);
  return 0;
}

