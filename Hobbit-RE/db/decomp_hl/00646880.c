
void __fastcall FUN_00646880(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_4;
  
  if (0 < *(int *)(param_1 + 0x28)) {
    puVar5 = (undefined4 *)(param_1 + 100);
    puVar6 = (undefined4 *)(*(int *)(param_1 + 0x28) * 0x20 + -0x20 + *(int *)(param_1 + 0x18));
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  local_4 = *(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x1c) < local_4 + 1) {
    if (*(int *)(param_1 + 0x24) == 0) {
      iVar1 = *(int *)(param_1 + 0x1c) / 2;
      iVar3 = 1;
      if (0 < iVar1) {
        iVar3 = iVar1;
      }
      if (iVar3 + local_4 < 1) {
        local_4 = 1;
      }
      else {
        if (iVar1 < 1) {
          iVar1 = 1;
        }
        local_4 = local_4 + iVar1;
      }
    }
    else {
      local_4 = *(int *)(param_1 + 0x24) + local_4;
    }
    pvVar2 = operator_new(local_4 << 5);
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      iVar1 = 0;
      do {
        puVar5 = (undefined4 *)(*(int *)(param_1 + 0x18) + iVar1);
        puVar6 = (undefined4 *)(iVar1 + (int)pvVar2);
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + 0x20;
      } while (iVar3 < *(int *)(param_1 + 0x14));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0x18));
    *(void **)(param_1 + 0x18) = pvVar2;
    *(int *)(param_1 + 0x1c) = local_4;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
}

