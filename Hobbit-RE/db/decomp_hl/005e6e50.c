
undefined4 * __thiscall FUN_005e6e50(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006e1953;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_005cc290(param_2);
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_006f4b3c;
  local_20 = param_1[8];
  local_c = 1;
  if ((int)param_1[10] < local_20 + 1) {
    if (param_1[0xc] == 0) {
      iVar1 = (int)param_1[10] / 2;
      iVar3 = 1;
      if (0 < iVar1) {
        iVar3 = iVar1;
      }
      if (iVar3 + local_20 < 1) {
        local_20 = 1;
      }
      else {
        if (iVar1 < 1) {
          iVar1 = 1;
        }
        local_20 = local_20 + iVar1;
      }
    }
    else {
      local_20 = param_1[0xc] + local_20;
    }
    pvVar2 = operator_new(local_20 * 8);
    iVar3 = 0;
    if (0 < (int)param_1[8]) {
      do {
        iVar1 = param_1[9];
        *(undefined4 *)((int)pvVar2 + iVar3 * 8) = *(undefined4 *)(iVar1 + iVar3 * 8);
        *(undefined4 *)((int)pvVar2 + iVar3 * 8 + 4) = *(undefined4 *)(iVar1 + 4 + iVar3 * 8);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)param_1[8]);
    }
    FUN_006bf840(param_1[9]);
    param_1[9] = pvVar2;
    param_1[10] = local_20;
  }
  iVar3 = param_1[8];
  iVar1 = param_1[9];
  *(undefined4 *)(iVar1 + iVar3 * 8) = 0;
  *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = 0;
  param_1[8] = param_1[8] + 1;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  ExceptionList = local_14;
  return param_1;
}

