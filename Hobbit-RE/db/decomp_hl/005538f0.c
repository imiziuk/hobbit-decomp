
void __fastcall FUN_005538f0(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9b88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_material_mgr__RebuildSortedList_0073d3c8);
  iVar5 = 0;
  local_4 = 0;
  if (*(int *)(param_1 + 0xb8) != 0) {
    FUN_006bf840(*(int *)(param_1 + 0xb8));
  }
  pvVar2 = operator_new(*(int *)(param_1 + 0x4c) << 2);
  iVar1 = *(int *)(param_1 + 0x4c);
  iVar4 = 0;
  local_18 = iVar1 + -1;
  *(void **)(param_1 + 0xb8) = pvVar2;
  if (0 < iVar1) {
    do {
      iVar3 = FUN_00558b50();
      if (iVar3 == 0) {
        *(int *)(*(int *)(param_1 + 0xb8) + local_18 * 4) = iVar5;
        local_18 = local_18 + -1;
      }
      else {
        *(int *)(*(int *)(param_1 + 0xb8) + iVar4 * 4) = iVar5;
        iVar4 = iVar4 + 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x4c));
  }
  FUN_00647700(*(undefined4 *)(param_1 + 0xb8),iVar4,4,&LAB_00553a20);
  iVar5 = (iVar1 - local_18) + -1;
  FUN_00647700(*(int *)(param_1 + 0xb8) + 4 + local_18 * 4,iVar5,4,&LAB_00553a20);
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(int *)(param_1 + 0xe4) = iVar5;
  *(int *)(param_1 + 0xe0) = iVar4;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

