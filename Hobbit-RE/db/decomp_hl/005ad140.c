
void __fastcall FUN_005ad140(int param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_8c [4];
  undefined4 uStack_88;
  undefined4 *puStack_84;
  undefined1 auStack_80 [16];
  undefined4 uStack_70;
  undefined1 **ppuStack_6c;
  char *pcStack_68;
  undefined1 *local_50;
  undefined1 *local_4c;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  void *local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006de230;
  pvStack_c = ExceptionList;
  pcStack_68 = (char *)0x5ad16c;
  ExceptionList = &pvStack_c;
  FUN_00649600();
  local_4 = 0;
  pcStack_68 = (char *)0x5ad180;
  piVar1 = (int *)FUN_005af720();
  if (piVar1 != (int *)0x0) {
    if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xbc) + 0x18))();
    }
    FUN_005af2e0();
    local_1c = (void *)0x0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    local_14 = 0;
    local_28 = 0;
    local_24 = 0;
    local_4._0_1_ = 1;
    pcStack_68 = (char *)0x5ad1c8;
    pvVar2 = operator_new(4);
    iVar3 = 0;
    if (0 < local_20) {
      do {
        *(undefined4 *)((int)pvVar2 + iVar3 * 4) = *(undefined4 *)((int)local_1c + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_20);
    }
    pcStack_68 = (char *)0x5ad1f4;
    FUN_006bf840();
    local_18 = 1;
    *(undefined4 *)((int)pvVar2 + local_20 * 4) = 0x30;
    local_2c = *(undefined4 *)(param_1 + 0xc0);
    local_38 = *(undefined4 *)(param_1 + 0x170);
    local_20 = local_20 + 1;
    local_34 = *(undefined4 *)(param_1 + 0x174);
    local_40 = 9;
    local_30 = 0;
    if (*(int *)(param_1 + 0xbc) != 0) {
      local_30 = (uint)*(byte *)(*(int *)(param_1 + 0xbc) + 0x44);
    }
    local_50 = auStack_80;
    puStack_84 = &local_28;
    uStack_88 = 0x5ad26b;
    local_1c = pvVar2;
    FUN_0042a610();
    puStack_84 = (undefined4 *)0x5ad275;
    FUN_0054e3f0();
    iVar3 = FUN_005af120();
    if (*(int *)(iVar3 + 0x254) != 0) {
      FUN_005bece0();
      ppuStack_6c = &local_50;
      pcStack_68 = s_Entering_State__s_00744ba4;
      uStack_70 = 0x5ad29b;
      FUN_00649920();
      local_4._0_1_ = 2;
      uVar4 = FUN_00649940();
      local_4c = auStack_8c;
      FUN_00649b20(uVar4);
      local_4._0_1_ = 2;
      FUN_005af120();
      FUN_004a27c0();
      local_4._0_1_ = 1;
      FUN_00649950();
    }
    *(int **)(param_1 + 0xbc) = piVar1;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    (**(code **)(*piVar1 + 4))();
    *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) | 8;
    FUN_005aee10();
    if (local_14 != 2) {
      pcStack_68 = (char *)0x5ad30f;
      FUN_006bf840();
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

