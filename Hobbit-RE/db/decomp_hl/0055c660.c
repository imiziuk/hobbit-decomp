
void __fastcall FUN_0055c660(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006da350;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f3e48;
  iVar3 = 0;
  local_4 = 9;
  if (0 < (int)param_1[4]) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_1[5] + iVar3 * 4) + 0x5c);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(*(int *)(param_1[5] + iVar3 * 4) + 0x5c) = 0;
      iVar2 = *(int *)(param_1[5] + iVar3 * 4);
      if (iVar2 != 0) {
        local_4._0_1_ = 10;
        FUN_00649ba0();
        local_4 = CONCAT31(local_4._1_3_,9);
        FUN_00649ba0();
        FUN_006bf840(iVar2);
      }
      *(undefined4 *)(param_1[5] + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[4]);
  }
  if (param_1[7] == 0) {
    FUN_006bf840(param_1[5]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  param_1[4] = 0;
  iVar3 = 0;
  if (0 < (int)param_1[0xb]) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_1[0xc] + iVar3 * 4) + 0x5c);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(*(int *)(param_1[0xc] + iVar3 * 4) + 0x5c) = 0;
      iVar2 = *(int *)(param_1[0xc] + iVar3 * 4);
      if (iVar2 != 0) {
        local_4._0_1_ = 0xb;
        FUN_00649ba0();
        local_4 = CONCAT31(local_4._1_3_,9);
        FUN_00649ba0();
        FUN_006bf840(iVar2);
      }
      *(undefined4 *)(param_1[0xc] + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[0xb]);
  }
  if (param_1[0xe] == 0) {
    FUN_006bf840(param_1[0xc]);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  param_1[0xb] = 0;
  if (0 < (int)param_1[0x12]) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)(param_1[0x13] + iVar3 * 4);
      if (iVar2 != 0) {
        FUN_0055c8b0();
        FUN_006bf840(iVar2);
      }
      *(undefined4 *)(param_1[0x13] + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[0x12]);
  }
  if (param_1[0x15] == 0) {
    FUN_006bf840(param_1[0x13]);
    param_1[0x13] = 0;
    param_1[0x14] = 0;
  }
  param_1[0x12] = 0;
  local_4._0_1_ = 8;
  FUN_00649ba0();
  local_4._0_1_ = 7;
  FUN_00649ba0();
  local_4._0_1_ = 6;
  FUN_00649ba0();
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_00649ba0();
  if (param_1[0x2a] != 2) {
    FUN_006bf840(param_1[0x28]);
  }
  if (param_1[0x23] != 2) {
    FUN_006bf840(param_1[0x21]);
  }
  if (param_1[0x1c] != 2) {
    FUN_006bf840(param_1[0x1a]);
  }
  if (param_1[0x15] != 2) {
    FUN_006bf840(param_1[0x13]);
  }
  if (param_1[0xe] != 2) {
    FUN_006bf840(param_1[0xc]);
  }
  if (param_1[7] != 2) {
    FUN_006bf840(param_1[5]);
  }
  ExceptionList = local_c;
  return;
}

