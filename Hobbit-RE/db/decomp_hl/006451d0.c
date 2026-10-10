
void __fastcall FUN_006451d0(undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  
  iVar3 = param_1[0xd];
  while (0 < iVar3) {
    iVar3 = *(int *)param_1[0xe];
    if (iVar3 != 0) {
      FUN_006456b0();
      FUN_006bf840(iVar3);
    }
    iVar3 = param_1[0xd] + -1;
    if (0 < iVar3) {
      iVar1 = 0;
      do {
        *(undefined4 *)(iVar1 + param_1[0xe]) = *(undefined4 *)(iVar1 + 4 + param_1[0xe]);
        iVar1 = iVar1 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = param_1[0xd] + -1;
    param_1[0xd] = iVar3;
  }
  if ((int)param_1[0xd] < (int)param_1[0xf]) {
    pvVar2 = operator_new(param_1[0xd] * 4);
    iVar3 = 0;
    if (0 < (int)param_1[0xd]) {
      do {
        *(undefined4 *)((int)pvVar2 + iVar3 * 4) = *(undefined4 *)(param_1[0xe] + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)param_1[0xd]);
    }
    FUN_006bf840(param_1[0xe]);
    param_1[0xe] = pvVar2;
    param_1[0xf] = param_1[0xd];
  }
  *param_1 = 0;
  return;
}

