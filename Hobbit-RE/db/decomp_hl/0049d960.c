
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0049d960(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int local_30;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d35d0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600();
  iVar10 = 0;
  local_4 = 0;
  iVar3 = FUN_00647b10();
  if (iVar3 < 0xb) {
    local_30 = 0;
    if (0 < param_1[0x2c]) {
      do {
        FUN_00649600();
        local_4._0_1_ = 1;
        iVar3 = FUN_00406ce0();
        local_4 = (uint)local_4._1_3_ << 8;
        if (iVar3 == -1) {
          FUN_00649720();
LAB_0049da20:
          iVar8 = (param_1[0x2c] - local_30) + -1;
          iVar3 = iVar10;
          if (0 < iVar8) {
            do {
              puVar1 = (undefined4 *)(iVar3 + 0x10 + param_1[0x2d]);
              puVar9 = (undefined4 *)(param_1[0x2d] + iVar3);
              *puVar9 = *puVar1;
              puVar9[1] = puVar1[1];
              puVar9[2] = puVar1[2];
              iVar8 = iVar8 + -1;
              puVar9[3] = puVar1[3];
              iVar3 = iVar3 + 0x10;
            } while (iVar8 != 0);
          }
          param_1[0x2c] = param_1[0x2c] + -1;
        }
        else {
          uVar2 = *(uint *)(DAT_0076f648 + iVar3 * 0x14);
          piVar7 = (int *)(-(uint)((*(byte *)(uVar2 + 0x7f) & 0x10) != 0) & uVar2);
          FUN_00649720();
          if (piVar7 == (int *)0x0) goto LAB_0049da20;
          pfVar4 = (float *)(**(code **)(*piVar7 + 0x28))();
          pfVar5 = (float *)(**(code **)(*param_1 + 0x28))();
          fStack_10 = pfVar5[2] + pfVar4[2];
          fStack_14 = pfVar5[1] + pfVar4[1];
          fStack_18 = *pfVar5 + *pfVar4;
          iVar3 = *(int *)(iVar10 + 0xc + param_1[0x2d]);
          if (iVar3 == 0) {
            fStack_18 = fStack_18 * _DAT_006e936c;
            fStack_14 = fStack_14 * _DAT_006e936c;
            fStack_10 = fStack_10 * _DAT_006e936c;
            FUN_00406b70(0xffffffff);
            uVar6 = (**(code **)(*param_1 + 0x28))(&fStack_18);
            FUN_00669ca0(uVar6);
          }
          else if (iVar3 == 1) {
            FUN_00406b70(0xffffff00);
            uVar6 = (**(code **)(*piVar7 + 0x28))();
            uVar6 = (**(code **)(*param_1 + 0x28))(uVar6);
            FUN_00669ca0(uVar6);
            FUN_00406b70(0xffffff00);
            uVar6 = (**(code **)(*piVar7 + 0x28))(0x42200000);
            FUN_0066a6e0(uVar6);
          }
        }
        local_30 = local_30 + 1;
        iVar10 = iVar10 + 0x10;
      } while (local_30 < param_1[0x2c]);
    }
    if (DAT_0072a514 != 0) {
      FUN_00406b70(0xffffff00);
      uVar6 = (**(code **)(*param_1 + 0x28))(param_1[0x34]);
      FUN_0066a6e0(uVar6);
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

