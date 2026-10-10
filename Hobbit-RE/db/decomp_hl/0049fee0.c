
void __thiscall FUN_0049fee0(int param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_1b0 [4];
  undefined1 local_1ac [4];
  undefined1 local_1a8 [4];
  undefined1 local_1a4 [4];
  uint local_1a0;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d392a;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_006501d0();
  local_4._0_1_ = 1;
  switch(param_2) {
  case 1:
    FUN_00649b80();
    local_4._0_1_ = 2;
    iVar4 = FUN_00647e40();
    local_4._0_1_ = 1;
    FUN_00649ba0();
    if (iVar4 != 0) {
      if (*(int *)(param_1 + 0x260) == 0) {
        puVar5 = (undefined4 *)operator_new(0x70);
        local_4._0_1_ = 3;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          FUN_0064afa0();
          puVar5[8] = 1;
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar5[5] = 0;
          puVar5[6] = 0;
          puVar5[7] = 0;
        }
        local_4._0_1_ = 1;
        *(undefined4 **)(param_1 + 0x260) = puVar5;
      }
      FUN_00649600();
      local_4._0_1_ = 4;
      iVar4 = FUN_00406ce0();
      local_4 = CONCAT31(local_4._1_3_,1);
      if (iVar4 == -1) {
        FUN_00649720();
      }
      else {
        uVar2 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
        bVar1 = *(byte *)(uVar2 + 0x7f);
        FUN_00649720();
        if ((-(uint)((bVar1 & 0x10) != 0) & uVar2) != 0) {
          FUN_004aaa60();
        }
      }
      uVar8 = FUN_0054b7c0(&DAT_00720234);
      *(undefined8 *)(*(int *)(param_1 + 0x260) + 8) = uVar8;
      FUN_00649600();
      local_4._0_1_ = 5;
      iVar4 = FUN_00406ce0();
      local_4 = CONCAT31(local_4._1_3_,1);
      if (iVar4 == -1) {
        FUN_00649720();
        piVar7 = (int *)0x0;
      }
      else {
        uVar2 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
        piVar7 = (int *)(-(uint)((*(byte *)(uVar2 + 0x7f) & 0x10) != 0) & uVar2);
        FUN_00649720();
      }
      FUN_004aa9e0();
      FUN_004d22c0();
      FUN_00649b80();
      local_4._0_1_ = 6;
      FUN_00649920(local_1a4);
      iVar4 = *piVar7;
      local_4._0_1_ = 7;
      FUN_00649940();
      FUN_005496c0();
      (**(code **)(iVar4 + 0xd0))();
      local_4._0_1_ = 6;
      FUN_00649950();
      local_4._0_1_ = 1;
      FUN_00649ba0();
      FUN_004b9220();
      FUN_004aac20();
      if (*(int *)(param_1 + 0x1a4) == 1) {
        uVar11 = 0xff;
        uVar10 = 0xc4;
        uVar9 = 0x80;
      }
      else {
        uVar11 = 0x80;
        uVar10 = 0x40;
        uVar9 = 0xff;
      }
      FUN_00413480(uVar9,uVar10,uVar11,0xff);
      FUN_004b9230(4,2);
    }
    break;
  case 2:
    FUN_00649b80();
    local_4._0_1_ = 8;
    iVar4 = FUN_00647e40();
    local_4._0_1_ = 1;
    FUN_00649ba0();
    if (iVar4 != 0) {
      if (*(int *)(param_1 + 0x260) == 0) {
        puVar5 = (undefined4 *)operator_new(0x70);
        local_4._0_1_ = 9;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          FUN_0064afa0();
          puVar5[8] = 1;
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar5[5] = 0;
          puVar5[6] = 0;
          puVar5[7] = 0;
        }
        local_4._0_1_ = 1;
        *(undefined4 **)(param_1 + 0x260) = puVar5;
      }
      FUN_00649600();
      local_4._0_1_ = 10;
      iVar4 = FUN_00406ce0();
      local_4 = CONCAT31(local_4._1_3_,1);
      if (iVar4 == -1) {
        FUN_00649720();
      }
      else {
        uVar2 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
        bVar1 = *(byte *)(uVar2 + 0x7f);
        FUN_00649720();
        if ((-(uint)((bVar1 & 0x10) != 0) & uVar2) != 0) {
          FUN_004aaa60();
        }
      }
      uVar8 = FUN_0054b7c0(&DAT_00720234);
      **(undefined8 **)(param_1 + 0x260) = uVar8;
      FUN_00649600();
      local_4._0_1_ = 0xb;
      iVar4 = FUN_00406ce0();
      local_4 = CONCAT31(local_4._1_3_,1);
      if (iVar4 == -1) {
        FUN_00649720();
        piVar7 = (int *)0x0;
      }
      else {
        uVar2 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
        piVar7 = (int *)(-(uint)((*(byte *)(uVar2 + 0x7f) & 0x10) != 0) & uVar2);
        FUN_00649720();
      }
      FUN_004aa9e0();
      FUN_004d22c0();
      FUN_00649b80();
      local_4._0_1_ = 0xc;
      FUN_00649920(local_1a8);
      iVar4 = *piVar7;
      local_4._0_1_ = 0xd;
      FUN_00649940();
      FUN_005496c0();
      (**(code **)(iVar4 + 0xd0))();
      local_4 = CONCAT31(local_4._1_3_,0xc);
      FUN_00649950();
LAB_004a0a3d:
      local_4._0_1_ = 1;
      FUN_00649ba0();
      FUN_004aac20();
    }
    break;
  case 4:
    FUN_00649b80();
    local_4._0_1_ = 0xe;
    iVar4 = FUN_00647e40();
    local_4._0_1_ = 1;
    FUN_00649ba0();
    if (iVar4 != 0) {
      if (*(int *)(param_1 + 0x260) == 0) {
        puVar5 = (undefined4 *)operator_new(0x70);
        local_4._0_1_ = 0xf;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          FUN_0064afa0();
          puVar5[8] = 1;
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar5[5] = 0;
          puVar5[6] = 0;
          puVar5[7] = 0;
        }
        local_4._0_1_ = 1;
        *(undefined4 **)(param_1 + 0x260) = puVar5;
      }
      uVar2 = *(uint *)(*(int *)(param_1 + 0x260) + 0x10);
      uVar3 = *(uint *)(*(int *)(param_1 + 0x260) + 0x14);
      local_1a0 = uVar2;
      FUN_00649600();
      iVar6 = (int)*(short *)(&DAT_0076cd88 + ((uVar2 ^ uVar3) * -0xfb & 0xfff) * 2);
      for (iVar4 = iVar6; iVar4 != -1; iVar4 = (int)*(short *)(DAT_0076f648 + iVar4 * 0x14 + 0xe)) {
      }
      if (iVar6 == -1) {
LAB_004a054e:
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_00649720();
      }
      else {
        do {
          piVar7 = (int *)(DAT_0076f648 + iVar6 * 0x14);
          iVar4 = *piVar7;
          if (((iVar4 != 0) && (*(uint *)(iVar4 + 8) == local_1a0)) &&
             (*(uint *)(iVar4 + 0xc) == uVar3)) {
            if (iVar6 == -1) goto LAB_004a054e;
            uVar2 = *(uint *)(DAT_0076f648 + iVar6 * 0x14);
            bVar1 = *(byte *)(uVar2 + 0x7f);
            local_4 = CONCAT31(local_4._1_3_,1);
            FUN_00649720();
            if ((-(uint)((bVar1 & 0x10) != 0) & uVar2) != 0) {
              FUN_004aaa60();
            }
            goto LAB_004a0591;
          }
          iVar6 = (int)*(short *)((int)piVar7 + 0xe);
        } while (iVar6 != -1);
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_00649720();
      }
LAB_004a0591:
      uVar8 = FUN_0054b7c0(&DAT_00720234);
      *(undefined8 *)(*(int *)(param_1 + 0x260) + 0x10) = uVar8;
      uVar2 = *(uint *)(*(int *)(param_1 + 0x260) + 0x10);
      uVar3 = *(uint *)(*(int *)(param_1 + 0x260) + 0x14);
      FUN_00649600();
      iVar6 = (int)*(short *)(&DAT_0076cd88 + ((uVar2 ^ uVar3) * -0xfb & 0xfff) * 2);
      for (iVar4 = iVar6; iVar4 != -1; iVar4 = (int)*(short *)(DAT_0076f648 + iVar4 * 0x14 + 0xe)) {
      }
      if (iVar6 == -1) {
LAB_004a064f:
        local_4._0_1_ = 1;
        FUN_00649720();
      }
      else {
        do {
          iVar4 = *(int *)(DAT_0076f648 + iVar6 * 0x14);
          if (((iVar4 != 0) && (*(uint *)(iVar4 + 8) == uVar2)) && (*(uint *)(iVar4 + 0xc) == uVar3)
             ) {
            if (iVar6 == -1) goto LAB_004a064f;
            uVar2 = *(uint *)(DAT_0076f648 + iVar6 * 0x14);
            local_4._0_1_ = 1;
            piVar7 = (int *)(-(uint)((*(byte *)(uVar2 + 0x7f) & 0x10) != 0) & uVar2);
            FUN_00649720();
            if (piVar7 == (int *)0x0) goto switchD_0049ff38_caseD_3;
            FUN_004aa9e0();
            FUN_004d22c0();
            FUN_00649b80();
            local_4._0_1_ = 0x12;
            FUN_00649920(local_1b0);
            iVar4 = *piVar7;
            local_4._0_1_ = 0x13;
            FUN_00649940();
            FUN_005496c0();
            (**(code **)(iVar4 + 0xd0))();
            local_4 = CONCAT31(local_4._1_3_,0x12);
            FUN_00649950();
            goto LAB_004a0a3d;
          }
          iVar6 = (int)*(short *)(DAT_0076f648 + iVar6 * 0x14 + 0xe);
        } while (iVar6 != -1);
        local_4._0_1_ = 1;
        FUN_00649720();
      }
    }
    break;
  case 8:
    FUN_00649b80();
    local_4._0_1_ = 0x1a;
    iVar4 = FUN_00647e40();
    local_4._0_1_ = 1;
    FUN_00649ba0();
    if (iVar4 != 0) {
      if (*(int *)(param_1 + 0x260) == 0) {
        puVar5 = (undefined4 *)operator_new(0x70);
        local_4._0_1_ = 0x1b;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          FUN_0064afa0();
          puVar5[8] = 1;
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar5[5] = 0;
          puVar5[6] = 0;
          puVar5[7] = 0;
        }
        local_4._0_1_ = 1;
        *(undefined4 **)(param_1 + 0x260) = puVar5;
      }
      FUN_0064b7f0();
    }
    break;
  case 0x10:
    FUN_00649b80();
    local_4._0_1_ = 0x14;
    iVar4 = FUN_00647e40();
    local_4._0_1_ = 1;
    FUN_00649ba0();
    if (iVar4 != 0) {
      if (*(int *)(param_1 + 0x260) == 0) {
        puVar5 = (undefined4 *)operator_new(0x70);
        local_4._0_1_ = 0x15;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          FUN_0064afa0();
          puVar5[8] = 1;
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar5[5] = 0;
          puVar5[6] = 0;
          puVar5[7] = 0;
        }
        local_4._0_1_ = 1;
        *(undefined4 **)(param_1 + 0x260) = puVar5;
      }
      uVar2 = *(uint *)(*(int *)(param_1 + 0x260) + 0x18);
      uVar3 = *(uint *)(*(int *)(param_1 + 0x260) + 0x1c);
      local_1a0 = uVar2;
      FUN_00649600();
      iVar6 = (int)*(short *)(&DAT_0076cd88 + ((uVar2 ^ uVar3) * -0xfb & 0xfff) * 2);
      for (iVar4 = iVar6; iVar4 != -1; iVar4 = (int)*(short *)(DAT_0076f648 + iVar4 * 0x14 + 0xe)) {
      }
      if (iVar6 == -1) {
LAB_004a086e:
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_00649720();
      }
      else {
        do {
          iVar4 = *(int *)(DAT_0076f648 + iVar6 * 0x14);
          if (((iVar4 != 0) && (*(uint *)(iVar4 + 8) == local_1a0)) &&
             (*(uint *)(iVar4 + 0xc) == uVar3)) {
            if (iVar6 == -1) goto LAB_004a086e;
            uVar2 = *(uint *)(DAT_0076f648 + iVar6 * 0x14);
            bVar1 = *(byte *)(uVar2 + 0x7f);
            local_4 = CONCAT31(local_4._1_3_,1);
            FUN_00649720();
            if ((-(uint)((bVar1 & 0x10) != 0) & uVar2) != 0) {
              FUN_004aaa60();
            }
            goto LAB_004a08b1;
          }
          iVar6 = (int)*(short *)(DAT_0076f648 + iVar6 * 0x14 + 0xe);
        } while (iVar6 != -1);
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_00649720();
      }
LAB_004a08b1:
      uVar8 = FUN_0054b7c0(&DAT_00720234);
      *(undefined8 *)(*(int *)(param_1 + 0x260) + 0x18) = uVar8;
      uVar2 = *(uint *)(*(int *)(param_1 + 0x260) + 0x18);
      uVar3 = *(uint *)(*(int *)(param_1 + 0x260) + 0x1c);
      FUN_00649600();
      iVar6 = (int)*(short *)(&DAT_0076cd88 + ((uVar2 ^ uVar3) * -0xfb & 0xfff) * 2);
      for (iVar4 = iVar6; iVar4 != -1; iVar4 = (int)*(short *)(DAT_0076f648 + iVar4 * 0x14 + 0xe)) {
      }
      if (iVar6 == -1) {
LAB_004a096f:
        local_4._0_1_ = 1;
        FUN_00649720();
      }
      else {
        do {
          iVar4 = *(int *)(DAT_0076f648 + iVar6 * 0x14);
          if (((iVar4 != 0) && (*(uint *)(iVar4 + 8) == uVar2)) && (*(uint *)(iVar4 + 0xc) == uVar3)
             ) {
            if (iVar6 == -1) goto LAB_004a096f;
            uVar2 = *(uint *)(DAT_0076f648 + iVar6 * 0x14);
            local_4._0_1_ = 1;
            piVar7 = (int *)(-(uint)((*(byte *)(uVar2 + 0x7f) & 0x10) != 0) & uVar2);
            FUN_00649720();
            if (piVar7 == (int *)0x0) goto switchD_0049ff38_caseD_3;
            FUN_004aa9e0();
            FUN_004d22c0();
            FUN_00649b80();
            local_4._0_1_ = 0x18;
            FUN_00649920(local_1ac);
            iVar4 = *piVar7;
            local_4._0_1_ = 0x19;
            FUN_00649940();
            FUN_005496c0();
            (**(code **)(iVar4 + 0xd0))();
            local_4 = CONCAT31(local_4._1_3_,0x18);
            FUN_00649950();
            goto LAB_004a0a3d;
          }
          iVar6 = (int)*(short *)(DAT_0076f648 + iVar6 * 0x14 + 0xe);
        } while (iVar6 != -1);
        local_4._0_1_ = 1;
        FUN_00649720();
      }
    }
  }
switchD_0049ff38_caseD_3:
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_006501e0();
  local_4 = 0xffffffff;
  FUN_0064b190();
  ExceptionList = pvStack_c;
  return;
}

