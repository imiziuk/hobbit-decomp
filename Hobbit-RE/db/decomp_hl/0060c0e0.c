
void __thiscall FUN_0060c0e0(int param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  void **ppvVar10;
  void *local_13c;
  int local_138;
  void *local_134;
  undefined4 local_130;
  void *local_12c;
  int local_128;
  undefined1 local_124 [4];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  undefined1 local_110 [4];
  undefined1 local_10c;
  undefined4 local_10b;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e3d87;
  local_c = ExceptionList;
  local_10c = 0;
  puVar8 = &local_10b;
  for (iVar5 = 0x3f; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  *(undefined1 *)((int)puVar8 + 2) = 0;
  iVar5 = 0;
  local_128 = 0;
  local_130 = 0;
  ExceptionList = &local_c;
  FUN_006405e0(s_ArcheryTarget_00748f84,param_1 + 0x80);
  FUN_00640420(s_IdleRangedAttackDelay_00748f6c,param_1 + 0x70);
  FUN_00640450(s_WarCount_00748f60,&local_128);
  if (0 < local_128) {
    do {
      pvVar2 = operator_new(0x78);
      local_4 = 0;
      local_13c = (void *)0x0;
      local_134 = pvVar2;
      if (pvVar2 != (void *)0x0) {
        FUN_006499d0();
        *(undefined4 *)((int)pvVar2 + 0x38) = 0;
        *(undefined4 *)((int)pvVar2 + 0x34) = 0;
        *(undefined4 *)((int)pvVar2 + 0x3c) = 0;
        *(undefined4 *)((int)pvVar2 + 0x44) = 0;
        *(undefined4 *)((int)pvVar2 + 0x40) = 0;
        *(undefined4 *)((int)pvVar2 + 0x2c) = 0;
        *(undefined4 *)((int)pvVar2 + 0x30) = 0;
        local_4._0_1_ = 2;
        FUN_006a1cb0();
        local_4 = CONCAT31(local_4._1_3_,3);
        FUN_00417a80(&local_13c);
        *(undefined4 *)((int)pvVar2 + 0x70) = 1;
        FUN_0064a2e0(&DAT_00720670);
        *(undefined4 *)((int)pvVar2 + 0x68) = 0;
        *(undefined4 *)((int)pvVar2 + 0x6c) = 0;
        *(void **)((int)pvVar2 + 0x74) = local_13c;
        local_13c = pvVar2;
      }
      iVar3 = *(int *)(param_1 + 0x50);
      local_4 = 0xffffffff;
      if (*(int *)(param_1 + 0x58) < iVar3 + 1) {
        if (*(int *)(param_1 + 0x60) == 0) {
          local_138 = *(int *)(param_1 + 0x58) / 2;
          iVar6 = 1;
          if (0 < local_138) {
            iVar6 = local_138;
          }
          if (iVar6 + iVar3 < 1) {
            local_138 = 1;
          }
          else {
            if (local_138 < 1) {
              local_138 = 1;
            }
            local_138 = iVar3 + local_138;
          }
        }
        else {
          local_138 = *(int *)(param_1 + 0x60) + iVar3;
        }
        local_134 = operator_new(local_138 * 4);
        iVar3 = 0;
        if (0 < *(int *)(param_1 + 0x50)) {
          do {
            *(undefined4 *)((int)local_134 + iVar3 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x54) + iVar3 * 4);
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(param_1 + 0x50));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x54));
        *(void **)(param_1 + 0x54) = local_134;
        *(int *)(param_1 + 0x58) = local_138;
      }
      *(void **)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x50) * 4) = local_13c;
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      FUN_00649920(local_124,s_WayPointVolume_d_00748f4c,iVar5);
      iVar3 = *(int *)(*(int *)(param_1 + 0x54) + iVar5 * 4) + 0x68;
      local_4 = 4;
      uVar4 = FUN_00649940(iVar3);
      FUN_006405e0(uVar4,iVar3);
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(local_110,s_GoalListSet_d_00748f3c,iVar5);
      puVar9 = &local_10c;
      local_4 = 5;
      uVar4 = FUN_00649940(puVar9);
      FUN_00640480(uVar4,puVar9);
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_0064a2e0(&local_10c);
      FUN_00649920(local_118,s_NextWayPointName_d_00748f28,iVar5);
      puVar9 = &local_10c;
      local_4 = 6;
      uVar4 = FUN_00649940(puVar9);
      FUN_00640480(uVar4,puVar9);
      local_4 = 0xffffffff;
      FUN_00649950();
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x54) + iVar5 * 4) + 0x74) = 0;
      FUN_00649920(local_120,s_NextWayPointID_d_00748f14,iVar5);
      puVar8 = &local_130;
      local_4 = 7;
      uVar4 = FUN_00649940(puVar8);
      FUN_00640450(uVar4,puVar8);
      local_4 = 0xffffffff;
      FUN_00649950();
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x54) + iVar5 * 4) + 0x74) = local_130;
      local_12c = (void *)0x0;
      FUN_00649920(local_11c,s_NextWayPointCount_d_00748f00,iVar5);
      ppvVar10 = &local_12c;
      local_4 = 8;
      uVar4 = FUN_00649940(ppvVar10);
      FUN_00640450(uVar4,ppvVar10);
      local_4 = 0xffffffff;
      FUN_00649950();
      *(void **)(*(int *)(*(int *)(param_1 + 0x54) + iVar5 * 4) + 0x70) = local_12c;
      iVar3 = *(int *)(*(int *)(param_1 + 0x54) + iVar5 * 4);
      uVar1 = *(uint *)(iVar3 + 0x3c);
      FUN_005a2a20(uVar1 & ((int)uVar1 < 0) - 1);
      *(undefined4 *)(iVar3 + 0x34) = 0;
      iVar3 = *(int *)(*(int *)(param_1 + 0x54) + iVar5 * 4);
      local_13c = local_12c;
      if (local_12c != *(void **)(iVar3 + 0x3c)) {
        local_134 = operator_new((int)local_12c << 2);
        iVar6 = 0;
        if (0 < *(int *)(iVar3 + 0x34)) {
          do {
            *(undefined4 *)((int)local_134 + iVar6 * 4) =
                 *(undefined4 *)(*(int *)(iVar3 + 0x38) + iVar6 * 4);
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(iVar3 + 0x34));
        }
        FUN_006bf840(*(undefined4 *)(iVar3 + 0x38));
        *(void **)(iVar3 + 0x38) = local_134;
        *(void **)(iVar3 + 0x3c) = local_13c;
      }
      local_13c = (void *)0x0;
      if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0x54) + iVar5 * 4) + 0x70)) {
        do {
          local_130 = 0;
          FUN_00649920(local_114,s_NextWayPoint_d__d_00748eec,iVar5,local_13c);
          puVar8 = &local_130;
          local_4 = 9;
          uVar4 = FUN_00649940(puVar8);
          FUN_00640450(uVar4,puVar8);
          local_4 = 0xffffffff;
          FUN_00649950();
          iVar3 = *(int *)(*(int *)(param_1 + 0x54) + iVar5 * 4);
          iVar6 = *(int *)(iVar3 + 0x34);
          if (*(int *)(iVar3 + 0x3c) < iVar6 + 1) {
            if (*(int *)(iVar3 + 0x44) == 0) {
              local_138 = *(int *)(iVar3 + 0x3c) / 2;
              iVar7 = 1;
              if (0 < local_138) {
                iVar7 = local_138;
              }
              if (iVar7 + iVar6 < 1) {
                local_138 = 1;
              }
              else {
                if (local_138 < 1) {
                  local_138 = 1;
                }
                local_138 = iVar6 + local_138;
              }
            }
            else {
              local_138 = *(int *)(iVar3 + 0x44) + iVar6;
            }
            local_134 = operator_new(local_138 * 4);
            iVar6 = 0;
            if (0 < *(int *)(iVar3 + 0x34)) {
              do {
                *(undefined4 *)((int)local_134 + iVar6 * 4) =
                     *(undefined4 *)(*(int *)(iVar3 + 0x38) + iVar6 * 4);
                iVar6 = iVar6 + 1;
              } while (iVar6 < *(int *)(iVar3 + 0x34));
            }
            FUN_006bf840(*(undefined4 *)(iVar3 + 0x38));
            *(void **)(iVar3 + 0x38) = local_134;
            *(int *)(iVar3 + 0x3c) = local_138;
          }
          *(undefined4 *)(*(int *)(iVar3 + 0x38) + *(int *)(iVar3 + 0x34) * 4) = local_130;
          *(int *)(iVar3 + 0x34) = *(int *)(iVar3 + 0x34) + 1;
          local_13c = (void *)((int)local_13c + 1);
        } while ((int)local_13c < *(int *)(*(int *)(*(int *)(param_1 + 0x54) + iVar5 * 4) + 0x70));
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0x54) + iVar5 * 4);
      *(undefined4 *)(iVar3 + 0x70) = *(undefined4 *)(iVar3 + 0x34);
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_128);
  }
  FUN_005bf550(param_2);
  ExceptionList = local_c;
  return;
}

