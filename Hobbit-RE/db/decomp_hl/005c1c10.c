
void __fastcall FUN_005c1c10(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = *(int *)(param_1[5] + iVar2 * 4);
      if (iVar1 != 0) {
        FUN_0063af20();
        FUN_006bf840(iVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[4]);
  }
  iVar2 = 0;
  if (0 < (int)param_1[0xb]) {
    do {
      iVar1 = *(int *)(param_1[0xc] + iVar2 * 4);
      if (iVar1 != 0) {
        FUN_0063af20();
        FUN_006bf840(iVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[0xb]);
  }
  *param_1 = 0;
  if (param_1[7] == 0) {
    FUN_006bf840(param_1[5]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  param_1[4] = 0;
  if (param_1[0xe] == 0) {
    FUN_006bf840(param_1[0xc]);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  param_1[0xb] = 0;
  return;
}

