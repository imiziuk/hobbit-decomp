
undefined4 * __thiscall FUN_005e7eb0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e1a53;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005cc290(param_2);
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  iVar5 = 1;
  local_4 = 1;
  *param_1 = &PTR_FUN_006f4b68;
  param_2 = (undefined4 *)operator_new(0x10);
  if (param_2 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)0x0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0x41200000;
  }
  iVar3 = param_1[8];
  if ((int)param_1[10] < iVar3 + 1) {
    if (param_1[0xc] == 0) {
      iVar1 = (int)param_1[10] / 2;
      iVar4 = 1;
      if (0 < iVar1) {
        iVar4 = iVar1;
      }
      if (0 < iVar3 + iVar4) {
        if (iVar1 < 1) {
          iVar1 = 1;
        }
        iVar5 = iVar3 + iVar1;
      }
    }
    else {
      iVar5 = param_1[0xc] + iVar3;
    }
    pvVar2 = operator_new(iVar5 * 4);
    iVar3 = 0;
    if (0 < (int)param_1[8]) {
      do {
        *(undefined4 *)((int)pvVar2 + iVar3 * 4) = *(undefined4 *)(param_1[9] + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)param_1[8]);
    }
    FUN_006bf840(param_1[9]);
    param_1[9] = pvVar2;
    param_1[10] = iVar5;
  }
  *(undefined4 **)(param_1[9] + param_1[8] * 4) = param_2;
  param_1[8] = param_1[8] + 1;
  ExceptionList = local_c;
  return param_1;
}

