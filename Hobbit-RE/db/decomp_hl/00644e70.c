
void __fastcall FUN_00644e70(int param_1)

{
  void **ppvVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006e5fc1;
  iVar3 = *(int *)(param_1 + 0x34);
  local_4 = 2;
  ppvVar1 = &local_c;
  local_c = ExceptionList;
  while (ExceptionList = ppvVar1, 0 < iVar3) {
    iVar3 = **(int **)(param_1 + 0x38);
    if (iVar3 != 0) {
      FUN_006456b0();
      FUN_006bf840(iVar3);
    }
    iVar3 = *(int *)(param_1 + 0x34) + -1;
    if (0 < iVar3) {
      iVar2 = 0;
      do {
        *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x38)) =
             *(undefined4 *)(iVar2 + 4 + *(int *)(param_1 + 0x38));
        iVar2 = iVar2 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = *(int *)(param_1 + 0x34) + -1;
    *(int *)(param_1 + 0x34) = iVar3;
    ppvVar1 = (void **)ExceptionList;
  }
  iVar3 = *(int *)(param_1 + 0x50);
  while (0 < iVar3) {
    FUN_006bf840(**(undefined4 **)(param_1 + 0x54));
    iVar3 = *(int *)(param_1 + 0x50) + -1;
    if (0 < iVar3) {
      iVar2 = 0;
      do {
        *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x54)) =
             *(undefined4 *)(iVar2 + 4 + *(int *)(param_1 + 0x54));
        iVar2 = iVar2 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = *(int *)(param_1 + 0x50) + -1;
    *(int *)(param_1 + 0x50) = iVar3;
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_0064ff40(*(int *)(param_1 + 8),s_C__projects_meridian_Support_Scr_0074b8bc,0x5a);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  local_4._0_1_ = 1;
  if (*(int *)(param_1 + 0x5c) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x54));
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (*(int *)(param_1 + 0x40) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x38));
  }
  local_4 = 0xffffffff;
  if (*(int *)(param_1 + 0x20) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x18));
  }
  ExceptionList = local_c;
  return;
}

