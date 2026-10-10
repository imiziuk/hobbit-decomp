
void __thiscall FUN_005f8c60(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int local_20;
  int local_1c;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e2bf0;
  local_c = ExceptionList;
  local_20 = 0;
  ExceptionList = &local_c;
  FUN_00649920(&local_1c,s_NPCCount_d_0074841c,*(undefined4 *)(param_1 + 4));
  piVar6 = &local_20;
  local_4 = 0;
  uVar1 = FUN_00649940(piVar6);
  FUN_00640450(uVar1,piVar6);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_1c = 0;
  if (0 < local_20) {
    do {
      iVar4 = local_1c;
      local_14 = 0;
      local_10 = 0;
      FUN_00649920(local_18,s_Trigger_dNPC_d_0074840c,*(undefined4 *)(param_1 + 4),local_1c);
      puVar7 = &local_14;
      local_4 = 1;
      uVar1 = FUN_00649940(puVar7);
      FUN_006405e0(uVar1,puVar7);
      local_4 = 0xffffffff;
      FUN_00649950();
      iVar5 = *(int *)(param_1 + 0x14);
      if (*(int *)(param_1 + 0x1c) < iVar5 + 1) {
        if (*(int *)(param_1 + 0x24) == 0) {
          iVar2 = *(int *)(param_1 + 0x1c) / 2;
          iVar4 = 1;
          if (0 < iVar2) {
            iVar4 = iVar2;
          }
          if (iVar4 + iVar5 < 1) {
            iVar5 = 1;
          }
          else {
            if (iVar2 < 1) {
              iVar2 = 1;
            }
            iVar5 = iVar5 + iVar2;
          }
        }
        else {
          iVar5 = *(int *)(param_1 + 0x24) + iVar5;
        }
        pvVar3 = operator_new(iVar5 * 8);
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 0x14)) {
          do {
            iVar2 = *(int *)(param_1 + 0x18);
            *(undefined4 *)((int)pvVar3 + iVar4 * 8) = *(undefined4 *)(iVar2 + iVar4 * 8);
            *(undefined4 *)((int)pvVar3 + iVar4 * 8 + 4) = *(undefined4 *)(iVar2 + 4 + iVar4 * 8);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_1 + 0x14));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x18));
        *(void **)(param_1 + 0x18) = pvVar3;
        *(int *)(param_1 + 0x1c) = iVar5;
        iVar4 = local_1c;
      }
      iVar5 = *(int *)(param_1 + 0x14);
      iVar2 = *(int *)(param_1 + 0x18);
      *(undefined4 *)(iVar2 + iVar5 * 8) = local_14;
      *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = local_10;
      local_1c = iVar4 + 1;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    } while (local_1c < local_20);
  }
  FUN_005f1cf0(param_2);
  ExceptionList = local_c;
  return;
}

