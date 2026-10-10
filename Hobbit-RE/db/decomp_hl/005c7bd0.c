
void __fastcall FUN_005c7bd0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  *param_1 = &PTR_FUN_006f44e8;
  if (0 < (int)param_1[9]) {
    do {
      iVar1 = *(int *)(param_1[10] + iVar2 * 4);
      if (iVar1 != 0) {
        FUN_006bf840(iVar1);
        *(undefined4 *)(param_1[10] + iVar2 * 4) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[9]);
  }
  if (param_1[0xc] == 0) {
    FUN_006bf840(param_1[10]);
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  param_1[9] = 0;
  if (param_1[0xc] != 2) {
    FUN_006bf840(param_1[10]);
  }
  return;
}

