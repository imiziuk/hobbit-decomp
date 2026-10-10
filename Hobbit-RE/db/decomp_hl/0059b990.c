
void __fastcall FUN_0059b990(int param_1)

{
  int iVar1;
  void **ppvVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006dd60f;
  local_c = ExceptionList;
  iVar3 = 0;
  local_4 = 4;
  ExceptionList = &local_c;
  ppvVar2 = &local_c;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0xc) + iVar3 * 4);
      if (iVar1 != 0) {
        FUN_00649ba0();
        FUN_006bf840(iVar1);
      }
      *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
      ppvVar2 = (void **)ExceptionList;
    } while (iVar3 < *(int *)(param_1 + 8));
  }
  ExceptionList = ppvVar2;
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  iVar3 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    do {
      FUN_006bf840(*(undefined4 *)(*(int *)(param_1 + 0x28) + iVar3 * 4));
      *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x24));
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    do {
      FUN_006bf840(*(undefined4 *)(*(int *)(param_1 + 0x44) + iVar3 * 4));
      *(undefined4 *)(*(int *)(param_1 + 0x44) + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x40));
  }
  if (*(int *)(param_1 + 0x4c) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x5c)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x60) + iVar3 * 4);
      if (iVar1 != 0) {
        local_4._0_1_ = 5;
        FUN_004375f0();
        local_4 = CONCAT31(local_4._1_3_,4);
        FUN_00649ba0();
        FUN_006bf840(iVar1);
      }
      *(undefined4 *)(*(int *)(param_1 + 0x60) + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x5c));
  }
  if (*(int *)(param_1 + 0x68) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x60));
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_00649ba0();
  if (*(int *)(param_1 + 0x68) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x60));
  }
  if (*(int *)(param_1 + 0x4c) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x44));
  }
  if (*(int *)(param_1 + 0x30) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x28));
  }
  if (*(int *)(param_1 + 0x14) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
  }
  ExceptionList = local_c;
  return;
}

