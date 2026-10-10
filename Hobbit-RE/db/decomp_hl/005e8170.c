
void __thiscall FUN_005e8170(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_1c;
  undefined4 *local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e1a98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005e8050();
  FUN_005cc3d0(param_2);
  local_1c = 0;
  FUN_00649920(&local_18,s_Action_dRopeCount_00747a08,*(undefined4 *)(param_1 + 4));
  piVar8 = &local_1c;
  local_4 = 0;
  uVar1 = FUN_00649940(piVar8);
  FUN_00640450(uVar1,piVar8);
  local_4 = 0xffffffff;
  FUN_00649950();
  iVar7 = 0;
  if (0 < local_1c) {
    do {
      local_18 = (undefined4 *)operator_new(0x10);
      if (local_18 == (undefined4 *)0x0) {
        local_18 = (undefined4 *)0x0;
      }
      else {
        *local_18 = 0;
        local_18[1] = 0;
        local_18[2] = 0x41200000;
      }
      iVar6 = *(int *)(param_1 + 0x20);
      if (*(int *)(param_1 + 0x28) < iVar6 + 1) {
        if (*(int *)(param_1 + 0x30) == 0) {
          iVar2 = *(int *)(param_1 + 0x28) / 2;
          iVar4 = 1;
          if (0 < iVar2) {
            iVar4 = iVar2;
          }
          if (iVar4 + iVar6 < 1) {
            iVar6 = 1;
          }
          else {
            if (iVar2 < 1) {
              iVar2 = 1;
            }
            iVar6 = iVar6 + iVar2;
          }
        }
        else {
          iVar6 = iVar6 + *(int *)(param_1 + 0x30);
        }
        pvVar3 = operator_new(iVar6 * 4);
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 0x20)) {
          do {
            *(undefined4 *)((int)pvVar3 + iVar4 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x24) + iVar4 * 4);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_1 + 0x20));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x24));
        *(void **)(param_1 + 0x24) = pvVar3;
        *(int *)(param_1 + 0x28) = iVar6;
      }
      *(undefined4 **)(*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x20) * 4) = local_18;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      FUN_00649920(local_14,s_Action_dRopeGuid_d_007479f4,*(undefined4 *)(param_1 + 4),iVar7);
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x24) + iVar7 * 4);
      local_4 = 1;
      uVar5 = FUN_00649940(uVar1);
      FUN_006405e0(uVar5,uVar1);
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(local_10,s_Action_dRopeLength_d_007479dc,*(undefined4 *)(param_1 + 4),iVar7);
      iVar6 = *(int *)(*(int *)(param_1 + 0x24) + iVar7 * 4) + 8;
      local_4 = 2;
      uVar1 = FUN_00649940(iVar6);
      FUN_00640420(uVar1,iVar6);
      local_4 = 0xffffffff;
      FUN_00649950();
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_1c);
  }
  ExceptionList = local_c;
  return;
}

