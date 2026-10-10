
void __thiscall FUN_005dded0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_20;
  int local_1c;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e0f50;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005cc3d0(param_2);
  FUN_00649920(&local_1c,s_Action_dNPCGuid_00747554,*(undefined4 *)(param_1 + 4));
  iVar5 = param_1 + 0x38;
  local_4 = 0;
  uVar1 = FUN_00649940(iVar5);
  FUN_006405e0(uVar1,iVar5);
  local_4 = 0xffffffff;
  FUN_00649950();
  param_2 = 0;
  FUN_00649920(&local_1c,s_Action_dCinemaCount_00747540,*(undefined4 *)(param_1 + 4));
  puVar6 = &param_2;
  local_4 = 1;
  uVar1 = FUN_00649940(puVar6);
  FUN_00640450(uVar1,puVar6);
  local_4 = 0xffffffff;
  FUN_00649950();
  local_20 = 0;
  FUN_00649920(&local_1c,s_Action_dSelectionMethod_00747528,*(undefined4 *)(param_1 + 4));
  puVar6 = &local_20;
  local_4 = 2;
  uVar1 = FUN_00649940(puVar6);
  FUN_00640450(uVar1,puVar6);
  local_4 = 0xffffffff;
  FUN_00649950();
  *(undefined4 *)(param_1 + 0x34) = local_20;
  local_1c = 0;
  if (0 < param_2) {
    do {
      iVar4 = local_1c;
      local_14 = 0;
      local_10 = 0;
      FUN_00649920(local_18,s_Action_dCinema_d_00747514,*(undefined4 *)(param_1 + 4),local_1c);
      puVar6 = &local_14;
      local_4 = 3;
      uVar1 = FUN_00649940(puVar6);
      FUN_006405e0(uVar1,puVar6);
      local_4 = 0xffffffff;
      FUN_00649950();
      iVar5 = *(int *)(param_1 + 0x48);
      if (*(int *)(param_1 + 0x50) < iVar5 + 1) {
        if (*(int *)(param_1 + 0x58) == 0) {
          iVar2 = *(int *)(param_1 + 0x50) / 2;
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
          iVar5 = *(int *)(param_1 + 0x58) + iVar5;
        }
        pvVar3 = operator_new(iVar5 * 8);
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 0x48)) {
          do {
            iVar2 = *(int *)(param_1 + 0x4c);
            *(undefined4 *)((int)pvVar3 + iVar4 * 8) = *(undefined4 *)(iVar2 + iVar4 * 8);
            *(undefined4 *)((int)pvVar3 + iVar4 * 8 + 4) = *(undefined4 *)(iVar2 + 4 + iVar4 * 8);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_1 + 0x48));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x4c));
        *(void **)(param_1 + 0x4c) = pvVar3;
        *(int *)(param_1 + 0x50) = iVar5;
        iVar4 = local_1c;
      }
      iVar5 = *(int *)(param_1 + 0x48);
      iVar2 = *(int *)(param_1 + 0x4c);
      *(undefined4 *)(iVar2 + iVar5 * 8) = local_14;
      *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = local_10;
      local_1c = iVar4 + 1;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    } while (local_1c < param_2);
  }
  ExceptionList = local_c;
  return;
}

