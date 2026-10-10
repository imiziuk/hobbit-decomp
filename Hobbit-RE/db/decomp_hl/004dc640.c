
undefined4 * __fastcall FUN_004dc640(undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d566e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_004e1d60();
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x44] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x50] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x5a] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x61] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x68] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *param_1 = &PTR_FUN_006ef420;
  local_4 = 5;
  if (param_1[0x62] == 0) {
    FUN_006bf840(param_1[0x60]);
    param_1[0x60] = 0;
    param_1[0x61] = 0;
  }
  param_1[0x5f] = 0;
  if (param_1[0x61] != 8) {
    pvVar1 = operator_new(0x20);
    iVar2 = 0;
    if (0 < (int)param_1[0x5f]) {
      do {
        *(undefined4 *)((int)pvVar1 + iVar2 * 4) = *(undefined4 *)(param_1[0x60] + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)param_1[0x5f]);
    }
    FUN_006bf840(param_1[0x60]);
    param_1[0x60] = pvVar1;
    param_1[0x61] = 8;
  }
  local_14 = param_1[0x5f];
  if ((int)param_1[0x61] < local_14 + 1) {
    if (param_1[99] == 0) {
      iVar3 = (int)param_1[0x61] / 2;
      iVar2 = 1;
      if (0 < iVar3) {
        iVar2 = iVar3;
      }
      if (local_14 + iVar2 < 1) {
        local_14 = 1;
      }
      else {
        if (iVar3 < 1) {
          iVar3 = 1;
        }
        local_14 = local_14 + iVar3;
      }
    }
    else {
      local_14 = param_1[99] + local_14;
    }
    pvVar1 = operator_new(local_14 * 4);
    iVar2 = 0;
    if (0 < (int)param_1[0x5f]) {
      do {
        *(undefined4 *)((int)pvVar1 + iVar2 * 4) = *(undefined4 *)(param_1[0x60] + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)param_1[0x5f]);
    }
    FUN_006bf840(param_1[0x60]);
    param_1[0x60] = pvVar1;
    param_1[0x61] = local_14;
  }
  *(undefined4 *)(param_1[0x60] + param_1[0x5f] * 4) = 0x17;
  param_1[0x5f] = param_1[0x5f] + 1;
  local_14 = 0x1c;
  FUN_00417a80(&local_14);
  local_14 = 0x12;
  FUN_00417a80(&local_14);
  local_14 = 0x19;
  FUN_00417a80(&local_14);
  local_14 = 0x37;
  FUN_00417a80(&local_14);
  local_14 = 0x25;
  FUN_00417a80(&local_14);
  local_14 = 5;
  FUN_00417a80(&local_14);
  DAT_0075e040 = DAT_0075e040 + 1;
  FUN_004dcad0();
  ExceptionList = local_c;
  return param_1;
}

