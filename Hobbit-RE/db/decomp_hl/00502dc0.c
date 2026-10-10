
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00502dc0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  DAT_00762504 = 1;
  DAT_00762508 = FUN_00674e80();
  if (DAT_00762508 == 0) {
    return;
  }
  DAT_007624fc = operator_new(DAT_00762508 * 4 + 4);
  FUN_00674f40();
  iVar2 = 0;
  if (0 < DAT_00762508) {
    do {
      uVar1 = FUN_00674f50();
      *(undefined4 *)((int)DAT_007624fc + iVar2 * 4) = uVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_00762508);
  }
  FUN_00650150(s_C__projects_meridian_apps_meridi_00731c48,0xec);
  _DAT_00762500 = 0;
  while (DAT_00762504 != 0) {
    FUN_00502e60();
    FUN_00503200();
  }
  FUN_005031e0();
  return;
}

