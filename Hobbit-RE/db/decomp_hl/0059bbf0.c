
void __fastcall FUN_0059bbf0(int param_1)

{
  int iVar1;
  void **ppvVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006dd659;
  local_c = ExceptionList;
  iVar3 = 0;
  local_4 = 3;
  ExceptionList = &local_c;
  ppvVar2 = &local_c;
  if (0 < *(int *)(param_1 + 0x4c)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4);
      if (iVar1 != 0) {
        FUN_0059b990();
        FUN_006bf840(iVar1);
      }
      *(undefined4 *)(*(int *)(param_1 + 0x50) + iVar3 * 4) = 0;
      iVar1 = *(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4);
      if (iVar1 != 0) {
        FUN_0059b990();
        FUN_006bf840(iVar1);
      }
      *(undefined4 *)(*(int *)(param_1 + 0x50) + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
      ppvVar2 = (void **)ExceptionList;
    } while (iVar3 < *(int *)(param_1 + 0x4c));
  }
  ExceptionList = ppvVar2;
  if (*(int *)(param_1 + 0x58) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x68)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x6c) + iVar3 * 4);
      if (iVar1 != 0) {
        local_4._0_1_ = 4;
        FUN_00649ba0();
        local_4 = CONCAT31(local_4._1_3_,3);
        FUN_004375f0();
        FUN_006bf840(iVar1);
      }
      *(undefined4 *)(*(int *)(param_1 + 0x6c) + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x68));
  }
  if (*(int *)(param_1 + 0x74) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x6c));
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x84)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x88) + iVar3 * 4);
      if (iVar1 != 0) {
        local_4._0_1_ = 5;
        FUN_00649ba0();
        local_4 = CONCAT31(local_4._1_3_,3);
        FUN_004375f0();
        FUN_006bf840(iVar1);
      }
      *(undefined4 *)(*(int *)(param_1 + 0x88) + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x84));
  }
  if (*(int *)(param_1 + 0x90) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  *(undefined4 *)(param_1 + 0x84) = 0;
  iVar3 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (iVar3 != 0) {
    FUN_0059b990();
    FUN_006bf840(iVar3);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (*(int *)(param_1 + 0x90) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x88));
  }
  if (*(int *)(param_1 + 0x74) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x6c));
  }
  if (*(int *)(param_1 + 0x58) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x50));
  }
  if (*(int *)(param_1 + 0x14) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
  }
  ExceptionList = local_c;
  return;
}

