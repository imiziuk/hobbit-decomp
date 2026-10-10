
void __thiscall FUN_0059c380(int param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  float *pfVar7;
  float *pfVar8;
  int *piVar9;
  int *piVar10;
  float10 fVar11;
  int *local_d8;
  int local_d0;
  undefined4 local_c4;
  undefined4 local_c0;
  int local_bc;
  void *local_b8;
  undefined4 local_b4;
  int local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  float fStack_9c;
  float fStack_94;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd732;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600();
  local_4 = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (*(int *)(param_1 + 0x40) != 0) {
      local_b8 = (void *)0x0;
      local_bc = 0;
      local_b4 = 0;
      local_ac = 0;
      local_b0 = 0;
      local_c4 = 0;
      local_c0 = 0;
      local_4._0_1_ = 1;
      local_4._1_3_ = 0;
      pvVar3 = operator_new(4);
      iVar4 = 0;
      if (0 < local_bc) {
        do {
          *(undefined4 *)((int)pvVar3 + iVar4 * 4) = *(undefined4 *)((int)local_b8 + iVar4 * 4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < local_bc);
      }
      FUN_006bf840();
      local_b4 = 1;
      *(undefined4 *)((int)pvVar3 + local_bc * 4) = 0x30;
      local_bc = local_bc + 1;
      local_b8 = pvVar3;
      FUN_00649b60();
      local_4._0_1_ = 2;
      local_70 = 0;
      local_6c = 0;
      local_78 = 4;
      FUN_006499d0();
      local_4._0_1_ = 3;
      FUN_0064a320();
      local_4._0_1_ = 1;
      FUN_00649ba0();
      local_4 = CONCAT31(local_4._1_3_,4);
      FUN_0042a610(&local_c4);
      FUN_0054e3f0();
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 8)) {
        do {
          FUN_00649600();
          local_4._0_1_ = 5;
          iVar5 = FUN_00406ce0();
          local_4 = CONCAT31(local_4._1_3_,4);
          if (iVar5 == -1) {
            FUN_00649720();
          }
          else {
            uVar1 = *(uint *)(DAT_0076f648 + iVar5 * 0x14);
            piVar9 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
            FUN_00649720();
            if (piVar9 != (int *)0x0) {
              (**(code **)(*piVar9 + 0xf4))();
            }
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(param_1 + 8));
      }
      *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      FUN_0059c9e0();
      iVar4 = *(int *)(param_1 + 0x1c);
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x9c) == 1)) {
        local_d0 = 0;
        if (0 < *(int *)(iVar4 + 0x40)) {
          do {
            FUN_00649600();
            local_4._0_1_ = 6;
            iVar4 = FUN_00406ce0();
            local_4 = CONCAT31(local_4._1_3_,4);
            if (iVar4 == -1) {
              FUN_00649720();
              local_d8 = (int *)0x0;
            }
            else {
              uVar1 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
              local_d8 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
              FUN_00649720();
            }
            FUN_00649600();
            local_4._0_1_ = 7;
            iVar4 = FUN_00406ce0();
            local_4 = CONCAT31(local_4._1_3_,4);
            if (iVar4 == -1) {
              FUN_00649720();
              piVar9 = (int *)0x0;
            }
            else {
              uVar1 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
              piVar9 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
              FUN_00649720();
            }
            FUN_00649600();
            local_4._0_1_ = 8;
            iVar4 = FUN_00406ce0();
            local_4 = CONCAT31(local_4._1_3_,4);
            if (iVar4 == -1) {
              FUN_00649720();
              piVar10 = (int *)0x0;
            }
            else {
              uVar1 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
              piVar10 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
              FUN_00649720();
            }
            if (local_d8 != (int *)0x0) {
              if (piVar9 != (int *)0x0) {
                (**(code **)(*piVar9 + 0x28))();
                (**(code **)(*local_d8 + 300))();
              }
              if (piVar10 != (int *)0x0) {
                puVar6 = (undefined4 *)(**(code **)(*local_d8 + 0x30))();
                uStack_a8 = *puVar6;
                fStack_a4 = (float)puVar6[1];
                uStack_a0 = puVar6[2];
                if (piVar9 == (int *)0x0) {
                  iVar4 = *local_d8;
                }
                else {
                  iVar4 = *piVar9;
                }
                pfVar7 = (float *)(**(code **)(iVar4 + 0x28))();
                pfVar8 = (float *)(**(code **)(*piVar10 + 0x28))();
                fStack_94 = pfVar8[2] - pfVar7[2];
                fStack_9c = *pfVar8 - *pfVar7;
                fVar11 = (float10)FUN_0064ca10();
                fStack_a4 = (float)fVar11;
                (**(code **)(*local_d8 + 0x1c))();
              }
            }
            local_d0 = local_d0 + 1;
          } while (local_d0 < *(int *)(*(int *)(param_1 + 0x1c) + 0x40));
        }
        FUN_004fb100();
      }
      local_4._0_1_ = 1;
      FUN_00649ba0();
      local_4 = (uint)local_4._1_3_ << 8;
      if (local_b0 != 2) {
        FUN_006bf840();
      }
      if (*(int *)(param_1 + 0x40) != 0) goto LAB_0059c9a9;
    }
    *(float *)(param_1 + 0x38) = param_2 + *(float *)(param_1 + 0x38);
    iVar4 = FUN_00659e10();
    if (iVar4 == 0) {
      if ((NAN(*(float *)(param_1 + 0x34)) || NAN(DAT_006e92e4)) !=
          (*(float *)(param_1 + 0x34) == DAT_006e92e4)) {
        iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) + *(int *)(param_1 + 0x28) * 4);
        uVar1 = *(uint *)(iVar4 + 0x30);
        uVar2 = *(uint *)(iVar4 + 0x34);
        FUN_00649600();
        iVar5 = (int)*(short *)(&DAT_0076cd88 + ((uVar1 ^ uVar2) * -0xfb & 0xfff) * 2);
        for (iVar4 = iVar5; iVar4 != -1; iVar4 = (int)*(short *)(DAT_0076f648 + iVar4 * 0x14 + 0xe))
        {
        }
        if (iVar5 == -1) {
LAB_0059c903:
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_00649720();
        }
        else {
          do {
            piVar9 = (int *)(DAT_0076f648 + iVar5 * 0x14);
            iVar4 = *piVar9;
            if (((iVar4 != 0) && (*(uint *)(iVar4 + 8) == uVar1)) &&
               (*(uint *)(iVar4 + 0xc) == uVar2)) {
              if (iVar5 == -1) goto LAB_0059c903;
              uVar1 = *(uint *)(DAT_0076f648 + iVar5 * 0x14);
              local_4 = (uint)local_4._1_3_ << 8;
              piVar9 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
              FUN_00649720();
              if (piVar9 != (int *)0x0) {
                (**(code **)(*piVar9 + 0x100))();
              }
              goto LAB_0059c94b;
            }
            iVar5 = (int)*(short *)((int)piVar9 + 0xe);
          } while (iVar5 != -1);
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_00649720();
        }
      }
LAB_0059c94b:
      param_2 = param_2 + *(float *)(param_1 + 0x34);
      *(float *)(param_1 + 0x34) = param_2;
      if (*(float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) +
                             *(int *)(param_1 + 0x28) * 4) + 0x38) <= param_2) {
        *(undefined4 *)(param_1 + 0x34) = 0;
        *(undefined4 *)(param_1 + 0x38) = 0;
        FUN_0059c9e0();
      }
    }
    if ((*(int *)(param_1 + 0x1c) != 0) && (*(int *)(*(int *)(param_1 + 0x1c) + 0x9c) == 1)) {
      FUN_0059ce30();
    }
    if ((*(int *)(param_1 + 0x1c) != 0) && (*(int *)(*(int *)(param_1 + 0x1c) + 0x9c) == 1)) {
      FUN_0059ce70();
    }
  }
LAB_0059c9a9:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

