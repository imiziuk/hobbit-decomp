
undefined4 * __fastcall FUN_0044ed70(undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cfcb6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004aa170();
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x38] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *param_1 = &PTR_FUN_006ec120;
  param_1[0x2a] = &DAT_0075c828;
  local_4 = 1;
  if (DAT_0075c828 == 0) {
    FUN_0044eeb0();
  }
  if (param_1[0x38] != 0x1f) {
    pvVar2 = operator_new(0xf8);
    iVar3 = 0;
    if (0 < (int)param_1[0x36]) {
      do {
        iVar1 = param_1[0x37];
        *(undefined4 *)((int)pvVar2 + iVar3 * 8) = *(undefined4 *)(iVar1 + iVar3 * 8);
        *(undefined4 *)((int)pvVar2 + iVar3 * 8 + 4) = *(undefined4 *)(iVar1 + 4 + iVar3 * 8);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)param_1[0x36]);
    }
    FUN_006bf840(param_1[0x37]);
    param_1[0x37] = pvVar2;
    param_1[0x38] = 0x1f;
  }
  param_1[0x39] = 1;
  param_1[0x2c] = 0;
  param_1[0x30] = 0;
  FUN_0044f5a0();
  FUN_0044f5d0();
  param_1[0x2e] = 2;
  ExceptionList = local_c;
  return param_1;
}

