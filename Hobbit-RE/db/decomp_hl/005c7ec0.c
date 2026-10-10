
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005c7ec0(int param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  int *piVar11;
  int *piVar12;
  float local_2c [3];
  float local_20;
  float local_1c;
  float local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df978;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_GroupCombatManager__OnAdvanceLog_00746408);
  piVar11 = (int *)0x0;
  local_4 = 0;
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  local_4._0_1_ = 1;
  iVar8 = FUN_00406ce0(param_3,param_4);
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar8 == -1) {
    FUN_00649720();
  }
  else {
    uVar7 = *(uint *)(DAT_0076f648 + iVar8 * 0x14);
    piVar11 = (int *)(-(uint)((*(byte *)(uVar7 + 0x7f) & 0x10) != 0) & uVar7);
    FUN_00649720();
  }
  uVar5 = *(undefined4 *)(param_1 + 0x38);
  uVar6 = *(undefined4 *)(param_1 + 0x3c);
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  local_4._0_1_ = 2;
  iVar8 = FUN_00406ce0(uVar5,uVar6);
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar8 == -1) {
    FUN_00649720();
    piVar12 = (int *)0x0;
  }
  else {
    uVar7 = *(uint *)(DAT_0076f648 + iVar8 * 0x14);
    piVar12 = (int *)(-(uint)((*(byte *)(uVar7 + 0x7f) & 0x10) != 0) & uVar7);
    FUN_00649720();
  }
  uVar5 = param_4;
  if ((piVar11 != (int *)0x0) && (piVar12 != (int *)0x0)) {
    local_2c[0] = (float)FUN_005c8340(param_3,param_4);
    if ((int)local_2c[0] < 0) {
      FUN_005c7c40(param_3,uVar5);
      local_2c[0] = (float)FUN_005c8340(param_3,uVar5);
    }
    if (local_2c[0] == 0.0) {
      if (*(int *)(param_1 + 0x24) < 4) {
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
      else {
        *(float *)(param_1 + 0x18) = param_2 + *(float *)(param_1 + 0x18);
      }
      if (_DAT_006f44e4 <= *(float *)(param_1 + 0x18)) {
        FUN_005c81a0();
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
      pfVar9 = (float *)(**(code **)(*piVar12 + 0x28))();
      pfVar10 = (float *)(**(code **)(*piVar11 + 0x28))();
      fVar1 = pfVar10[2];
      fVar2 = pfVar9[2];
      fVar3 = pfVar10[1];
      fVar4 = pfVar9[1];
      *(float *)(param_1 + 8) = *pfVar10 - *pfVar9;
      *(float *)(param_1 + 0xc) = fVar3 - fVar4;
      *(float *)(param_1 + 0x10) = fVar1 - fVar2;
    }
    local_20 = *(float *)(param_1 + 8);
    local_1c = *(float *)(param_1 + 0xc);
    local_18 = *(float *)(param_1 + 0x10);
    param_2 = ((float)(int)local_2c[0] * _DAT_006e9598) / (float)*(int *)(param_1 + 0x24);
    FUN_0064c8e0(param_2,local_2c,&param_2);
    fVar1 = param_2 * local_20 + local_18 * local_2c[0];
    local_18 = local_18 * param_2 - local_20 * local_2c[0];
    param_2 = DAT_006e92e8 / SQRT(fVar1 * fVar1 + local_1c * local_1c + local_18 * local_18);
    local_20 = fVar1;
    iVar8 = FUN_0064cf30(param_2);
    if (iVar8 == 0) {
      local_20 = 0.0;
      local_1c = 0.0;
      local_18 = 0.0;
    }
    else {
      local_20 = local_20 * param_2;
      local_1c = local_1c * param_2;
      local_18 = local_18 * param_2;
    }
    iVar8 = FUN_004aa020();
    *(float *)(iVar8 + 200) = local_20;
    *(float *)(iVar8 + 0xcc) = local_1c;
    *(float *)(iVar8 + 0xd0) = local_18;
    FUN_005c8380(param_3,uVar5);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

