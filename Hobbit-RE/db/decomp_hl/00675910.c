
int __thiscall FUN_00675910(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int *piStack_13c;
  int local_138;
  int local_134;
  int local_130;
  int *piStack_12c;
  int iStack_128;
  undefined1 auStack_120 [4];
  int local_11c;
  undefined1 local_110 [260];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6c00;
  pvStack_c = ExceptionList;
  local_134 = 0;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_io_fs__MountFileSystem_00750774);
  local_4 = 0;
  FUN_006501d0(s_io_fs__MountFileSystem_0075078c);
  local_11c = param_1 + 0x1404;
  local_4._0_1_ = 1;
  FUN_00655890(1);
  FUN_00675e20(local_110,param_2);
  FUN_00649920(&local_138,s__s_DFS_007507a4,local_110);
  uVar8 = 0;
  local_4._0_1_ = 2;
  uVar1 = FUN_00649940(0);
  iVar2 = FUN_00677180(uVar1,uVar8);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00649950();
  if (iVar2 == 0) goto LAB_00675dca;
  uVar1 = FUN_006747f0(*(undefined4 *)(iVar2 + 0x10));
  iVar3 = FUN_00675e90(iVar2,uVar1,0,*(undefined4 *)(iVar2 + 0x10));
  if (iVar3 == 0) {
LAB_00675a0f:
    FUN_00674810(uVar1);
    local_130 = 0;
  }
  else {
    local_130 = FUN_006804b0(uVar1);
    if (local_130 == 0) {
      uVar1 = 0;
      local_130 = 0;
      goto LAB_00675a0f;
    }
    local_134 = 1;
  }
  FUN_006771a0(iVar2);
  if (local_134 != 0) {
    local_138 = *(int *)(param_1 + 8);
    if (*(int *)(param_1 + 0x10) < local_138 + 1) {
      if (*(int *)(param_1 + 0x18) == 0) {
        iVar2 = *(int *)(param_1 + 0x10) / 2;
        iVar3 = 1;
        if (0 < iVar2) {
          iVar3 = iVar2;
        }
        if (local_138 + iVar3 < 1) {
          iVar2 = 1;
        }
        else {
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          iVar2 = local_138 + iVar2;
        }
      }
      else {
        iVar2 = *(int *)(param_1 + 0x18) + local_138;
      }
      piStack_12c = (int *)operator_new(iVar2 * 0x50 + 4);
      iVar3 = 0;
      local_4._0_1_ = 3;
      if (piStack_12c == (int *)0x0) {
        piStack_13c = (int *)0x0;
      }
      else {
        piStack_13c = piStack_12c + 1;
        *piStack_12c = iVar2;
        FUN_006c043b(piStack_13c,0x50,iVar2,FUN_00676e90,FUN_00676ec0);
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      if (0 < *(int *)(param_1 + 8)) {
        iVar7 = 0;
        do {
          FUN_00676e00(*(int *)(param_1 + 0xc) + iVar7);
          iVar3 = iVar3 + 1;
          iVar7 = iVar7 + 0x50;
        } while (iVar3 < *(int *)(param_1 + 8));
      }
      if (*(int *)(param_1 + 0xc) != 0) {
        FUN_00676da0(3);
      }
      *(int **)(param_1 + 0xc) = piStack_13c;
      *(int *)(param_1 + 0x10) = iVar2;
    }
    piVar6 = (int *)(local_138 * 0x50);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    piStack_12c = piVar6;
    FUN_0064a2e0(param_2);
    *(undefined4 *)((int)piVar6 + 0x2c + *(int *)(param_1 + 0xc)) = param_3;
    *(int *)((int)piVar6 + 0x30 + *(int *)(param_1 + 0xc)) = local_130;
    iVar3 = *(int *)(local_130 + 0x14);
    iVar2 = (int)piVar6 + 0x34 + *(int *)(param_1 + 0xc);
    if (iVar3 != *(int *)((int)piVar6 + 0x44 + *(int *)(param_1 + 0xc))) {
      pvVar4 = operator_new(iVar3 * 4);
      iVar7 = 0;
      if (0 < *(int *)(iVar2 + 8)) {
        do {
          *(undefined4 *)((int)pvVar4 + iVar7 * 4) =
               *(undefined4 *)(*(int *)(iVar2 + 0xc) + iVar7 * 4);
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar2 + 8));
      }
      FUN_006bf840(*(undefined4 *)(iVar2 + 0xc));
      *(void **)(iVar2 + 0xc) = pvVar4;
      *(int *)(iVar2 + 0x10) = iVar3;
    }
    piStack_13c = (int *)0x0;
    if (0 < *(int *)(local_130 + 0x14)) {
      do {
        if (local_134 == 0) goto LAB_00675cfa;
        FUN_00649920(auStack_120,s__s__03d_007507ac,local_110,piStack_13c);
        uVar8 = 0;
        local_4._0_1_ = 4;
        uVar1 = FUN_00649940(0);
        iVar2 = FUN_00677180(uVar1,uVar8);
        local_4 = CONCAT31(local_4._1_3_,1);
        iStack_128 = iVar2;
        FUN_00649950();
        if (iVar2 == 0) {
          local_134 = 0;
        }
        else {
          *(int *)(iVar2 + 8) = local_130;
          iVar7 = *(int *)(param_1 + 0xc);
          iVar3 = *(int *)((int)piVar6 + 0x3c + iVar7);
          iVar5 = *(int *)((int)piVar6 + 0x44 + iVar7);
          iVar7 = (int)piVar6 + 0x34 + iVar7;
          if (iVar5 < iVar3 + 1) {
            if (*(int *)(iVar7 + 0x18) == 0) {
              iVar5 = iVar5 / 2;
              iVar2 = 1;
              if (0 < iVar5) {
                iVar2 = iVar5;
              }
              if (iVar2 + iVar3 < 1) {
                iVar3 = 1;
              }
              else {
                if (iVar5 < 1) {
                  iVar5 = 1;
                }
                iVar3 = iVar3 + iVar5;
              }
            }
            else {
              iVar3 = *(int *)(iVar7 + 0x18) + iVar3;
            }
            pvVar4 = operator_new(iVar3 * 4);
            iVar2 = 0;
            if (0 < *(int *)(iVar7 + 8)) {
              do {
                *(undefined4 *)((int)pvVar4 + iVar2 * 4) =
                     *(undefined4 *)(*(int *)(iVar7 + 0xc) + iVar2 * 4);
                iVar2 = iVar2 + 1;
              } while (iVar2 < *(int *)(iVar7 + 8));
            }
            FUN_006bf840(*(undefined4 *)(iVar7 + 0xc));
            *(void **)(iVar7 + 0xc) = pvVar4;
            *(int *)(iVar7 + 0x10) = iVar3;
            piVar6 = piStack_12c;
            iVar2 = iStack_128;
          }
          iVar3 = *(int *)(iVar7 + 8) + 1;
          *(int *)(iVar7 + 8) = iVar3;
          *(int *)(*(int *)(iVar7 + 0xc) + -4 + iVar3 * 4) = iVar2;
        }
        piStack_13c = (int *)((int)piStack_13c + 1);
      } while ((int)piStack_13c < *(int *)(local_130 + 0x14));
    }
    if (local_134 == 0) {
LAB_00675cfa:
      iVar2 = *(int *)(param_1 + 0xc);
      iVar3 = 0;
      if (0 < *(int *)(iVar2 + 0x3c + (int)piVar6)) {
        do {
          FUN_006771a0(*(undefined4 *)(*(int *)(iVar2 + (int)piVar6 + 0x40) + iVar3 * 4));
          iVar2 = *(int *)(param_1 + 0xc);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(iVar2 + 0x3c + (int)piVar6));
      }
      iVar2 = (int)piVar6 + 0x34 + *(int *)(param_1 + 0xc);
      if (*(int *)((int)piVar6 + 0x48 + *(int *)(param_1 + 0xc)) == 0) {
        FUN_006bf840(*(undefined4 *)(iVar2 + 0xc));
        *(undefined4 *)(iVar2 + 0xc) = 0;
        *(undefined4 *)(iVar2 + 0x10) = 0;
      }
      *(undefined4 *)(iVar2 + 8) = 0;
      FUN_00674810(*(undefined4 *)((int)piVar6 + 0x30 + *(int *)(param_1 + 0xc)));
      iVar2 = (*(int *)(param_1 + 8) - local_138) + -1;
      if (0 < iVar2) {
        do {
          local_138 = iVar2;
          iVar3 = (int)piVar6 + 0x50 + *(int *)(param_1 + 0xc);
          iVar2 = (int)piVar6 + *(int *)(param_1 + 0xc);
          FUN_0064a320(iVar3);
          *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(iVar3 + 0x2c);
          *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)(iVar3 + 0x30);
          FUN_004e1ae0(iVar3 + 0x34);
          piVar6 = (int *)((int)piVar6 + 0x50);
          local_138 = local_138 + -1;
          iVar2 = local_138;
        } while (local_138 != 0);
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      if (local_134 == 0) goto LAB_00675dca;
    }
    DAT_007f8718 = DAT_007f8718 + 1;
    *(undefined4 *)(param_1 + 0x13f8) = 0xffffffff;
  }
LAB_00675dca:
  FUN_006558d0(1);
  local_4 = local_4 & 0xffffff00;
  FUN_006501e0();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return local_134;
}

