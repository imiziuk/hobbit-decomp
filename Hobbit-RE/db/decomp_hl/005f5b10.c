
void __thiscall FUN_005f5b10(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int local_24;
  int local_20;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e2860;
  local_c = ExceptionList;
  local_24 = 0;
  ExceptionList = &local_c;
  FUN_00649920(&local_20,s_NPCCount_d_0074841c,*(undefined4 *)(param_1 + 4));
  piVar7 = &local_24;
  local_4 = 0;
  uVar1 = FUN_00649940(piVar7);
  uVar6 = param_2;
  FUN_00640450(uVar1,piVar7);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_20 = 0;
  if (0 < local_24) {
    do {
      iVar4 = local_20;
      local_14 = 0;
      local_10 = 0;
      FUN_00649920(local_1c,s_Trigger_dNPC_d_0074840c,*(undefined4 *)(param_1 + 4),local_20);
      puVar8 = &local_14;
      local_4 = 1;
      uVar1 = FUN_00649940(puVar8);
      FUN_006405e0(uVar1,puVar8);
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
        iVar4 = local_20;
        uVar6 = param_2;
      }
      iVar5 = *(int *)(param_1 + 0x14);
      iVar2 = *(int *)(param_1 + 0x18);
      *(undefined4 *)(iVar2 + iVar5 * 8) = local_14;
      *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = local_10;
      local_20 = iVar4 + 1;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    } while (local_20 < local_24);
  }
  FUN_00649920(&param_2,s_ExitState_d_00748400,*(undefined4 *)(param_1 + 4));
  iVar5 = param_1 + 0x28;
  local_4 = 2;
  uVar1 = FUN_00649940(iVar5);
  FUN_00640450(uVar1,iVar5);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_18,s_EnterState_d_007483f0,*(undefined4 *)(param_1 + 4));
  param_1 = param_1 + 0x2c;
  local_4 = 3;
  uVar1 = FUN_00649940(param_1);
  FUN_00640450(uVar1,param_1);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_005f1cf0(uVar6);
  ExceptionList = local_c;
  return;
}

