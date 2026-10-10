
void __thiscall FUN_005d5950(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int *piVar9;
  int local_64;
  undefined4 *local_60;
  undefined1 local_5c [4];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e063b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005cc3d0(param_2);
  iVar7 = 0;
  local_64 = 0;
  FUN_00649920(&param_2,s_Action_dSpawnCount_00746f28,*(undefined4 *)(param_1 + 4));
  piVar9 = &local_64;
  local_4 = 0;
  uVar1 = FUN_00649940(piVar9);
  FUN_00640450(uVar1,piVar9);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (0 < local_64) {
    do {
      puVar2 = (undefined4 *)operator_new(0x68);
      param_2 = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        local_60 = (undefined4 *)0x0;
      }
      else {
        puVar2[3] = 0;
        puVar2[2] = 0;
        puVar2[4] = 0;
        puVar2[6] = 0;
        puVar2[5] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        local_4 = 2;
        FUN_006499d0();
        puVar2[8] = 0;
        puVar2[9] = 0;
        puVar2[10] = 0;
        puVar2[0xb] = 0;
        puVar2[0xc] = 0;
        puVar2[0xd] = 0;
        local_60 = puVar2;
      }
      local_4 = 0xffffffff;
      if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x20) + 1) {
        iVar5 = *(int *)(param_1 + 0x30);
        if (iVar5 == 0) {
          iVar3 = *(int *)(param_1 + 0x28) / 2;
          iVar6 = 1;
          if (0 < iVar3) {
            iVar6 = iVar3;
          }
          iVar5 = *(int *)(param_1 + 0x20);
          if (0 < iVar6 + iVar5) {
            if (iVar3 < 1) {
              iVar3 = 1;
            }
            goto LAB_005d5a92;
          }
          param_2 = (undefined4 *)0x1;
        }
        else {
          iVar3 = *(int *)(param_1 + 0x20);
LAB_005d5a92:
          param_2 = (undefined4 *)(iVar5 + iVar3);
        }
        pvVar4 = operator_new((int)param_2 * 4);
        iVar5 = 0;
        if (0 < *(int *)(param_1 + 0x20)) {
          do {
            *(undefined4 *)((int)pvVar4 + iVar5 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x24) + iVar5 * 4);
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(param_1 + 0x20));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x24));
        *(void **)(param_1 + 0x24) = pvVar4;
        *(undefined4 **)(param_1 + 0x28) = param_2;
      }
      *(undefined4 **)(*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x20) * 4) = local_60;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      FUN_00649920(local_5c,s_Action_dNPCGuid_d_00746f14,*(undefined4 *)(param_1 + 4),iVar7);
      iVar5 = *(int *)(*(int *)(param_1 + 0x24) + iVar7 * 4) + 0x20;
      local_4 = 3;
      uVar1 = FUN_00649940(iVar5);
      FUN_006405e0(uVar1,iVar5);
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(local_58,s_Action_dLocationGuid_d_00746efc,*(undefined4 *)(param_1 + 4),iVar7);
      iVar5 = *(int *)(*(int *)(param_1 + 0x24) + iVar7 * 4) + 0x28;
      local_4 = 4;
      uVar1 = FUN_00649940(iVar5);
      FUN_006405e0(uVar1,iVar5);
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(local_54,s_Action_dFacingGuid_d_00746ee4,*(undefined4 *)(param_1 + 4),iVar7);
      iVar5 = *(int *)(*(int *)(param_1 + 0x24) + iVar7 * 4) + 0x30;
      local_4 = 5;
      uVar1 = FUN_00649940(iVar5);
      FUN_006405e0(uVar1,iVar5);
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(local_50,s_Action_dAnimation_d_00746ed0,*(undefined4 *)(param_1 + 4),iVar7);
      puVar8 = local_4c;
      local_4 = 6;
      uVar1 = FUN_00649940(puVar8);
      FUN_00640480(uVar1,puVar8);
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_0064a2e0(local_4c);
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_64);
  }
  ExceptionList = local_c;
  return;
}

