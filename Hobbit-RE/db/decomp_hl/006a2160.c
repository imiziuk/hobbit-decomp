
int __fastcall FUN_006a2160(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_4;
  
  local_4 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) < local_4 + 1) {
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar1 = *(int *)(param_1 + 0x10) / 2;
      iVar4 = 1;
      if (0 < iVar1) {
        iVar4 = iVar1;
      }
      if (local_4 + iVar4 < 1) {
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
      local_4 = *(int *)(param_1 + 0x18) + local_4;
    }
    pvVar2 = operator_new(local_4 * 0x18);
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      iVar1 = 0;
      do {
        puVar5 = (undefined4 *)(*(int *)(param_1 + 0xc) + iVar1);
        puVar6 = (undefined4 *)(iVar1 + (int)pvVar2);
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + 0x18;
      } while (iVar4 < *(int *)(param_1 + 8));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
    *(void **)(param_1 + 0xc) = pvVar2;
    *(int *)(param_1 + 0x10) = local_4;
  }
  iVar4 = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 8) = iVar4;
  return *(int *)(param_1 + 0xc) + -0x18 + iVar4 * 0x18;
}

