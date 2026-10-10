
void __fastcall FUN_005fc000(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  *param_1 = &PTR_FUN_006f513c;
  if (0 < (int)param_1[5]) {
    do {
      FUN_006bf840(*(undefined4 *)(param_1[6] + iVar1 * 4));
      *(undefined4 *)(param_1[6] + iVar1 * 4) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[5]);
  }
  if (param_1[8] == 0) {
    FUN_006bf840(param_1[6]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  param_1[5] = 0;
  if (param_1[8] != 2) {
    FUN_006bf840(param_1[6]);
  }
  FUN_005f11a0();
  return;
}

