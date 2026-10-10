
undefined4 __thiscall FUN_00597640(int param_1,undefined4 *param_2)

{
  float fVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int *piVar9;
  float10 fVar10;
  float fStack_68;
  float fStack_64;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd3b0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_PhysController__DoAnimate_0074313c);
  *param_2 = 0;
  local_4 = 0;
  if ((*(int *)(param_1 + 400) == 0) || (iVar4 = FUN_00566dd0(), iVar4 != 2)) {
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return 1;
  }
  iVar4 = *(int *)(param_1 + 400);
  iVar8 = *(int *)(iVar4 + 0x44);
  if (*(int *)(iVar4 + 0x40) != 0 || iVar8 != 0) {
    uVar2 = *(undefined4 *)(iVar4 + 0x40);
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4._0_1_ = 1;
    iVar4 = FUN_00406ce0(uVar2,iVar8);
    local_4 = (uint)local_4._1_3_ << 8;
    if (iVar4 == -1) {
      FUN_00649720();
      goto LAB_00597a5c;
    }
    uVar3 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
    piVar9 = (int *)(-(uint)((*(byte *)(uVar3 + 0x7f) & 0x10) != 0) & uVar3);
    FUN_00649720();
    if (piVar9 == (int *)0x0) goto LAB_00597a5c;
    piVar5 = (int *)FUN_00592920();
    pfVar6 = (float *)(**(code **)(*piVar5 + 0x28))();
    pfVar7 = (float *)(**(code **)(*piVar9 + 0x28))();
    FUN_00401f00(*pfVar7 - *pfVar6,pfVar7[1] - pfVar6[1],pfVar7[2] - pfVar6[2]);
    iVar4 = FUN_00592190();
    fVar1 = *(float *)(iVar4 + 0x6c);
    FUN_00401f00(fStack_58 * *(float *)(iVar4 + 0x4c) +
                 *(float *)(iVar4 + 0x50) * fStack_54 + *(float *)(iVar4 + 0x54) * fStack_50 +
                 *(float *)(iVar4 + 0x58),
                 *(float *)(iVar4 + 0x5c) * fStack_58 +
                 *(float *)(iVar4 + 0x60) * fStack_54 + *(float *)(iVar4 + 100) * fStack_50 +
                 *(float *)(iVar4 + 0x68),
                 fStack_54 * *(float *)(iVar4 + 0x70) +
                 fVar1 * fStack_58 + *(float *)(iVar4 + 0x74) * fStack_50 + *(float *)(iVar4 + 0x78)
                );
    fVar10 = (float10)FUN_0064ca10(fVar1,fStack_64);
    *(float *)(param_1 + 0x234) = (float)fVar10;
    piVar9 = (int *)FUN_00592920();
    pfVar6 = (float *)(**(code **)(*piVar9 + 0x28))();
    FUN_00401f00(fVar1 + *pfVar6,fStack_68 + pfVar6[1],fStack_64 + pfVar6[2]);
    *(float *)(param_1 + 0x2b0) = fVar1;
    *(float *)(param_1 + 0x2b4) = fStack_68;
    *(float *)(param_1 + 0x2b8) = fStack_64;
  }
  if (DAT_006e92e4 < *(float *)(*(int *)(param_1 + 400) + 0x54)) {
    if (*(float *)(*(int *)(param_1 + 400) + 0x54) <= *(float *)(param_1 + 0x29c)) {
      *param_2 = 1;
      local_4 = 0xffffffff;
      FUN_00649720();
      ExceptionList = local_c;
      return 1;
    }
    FUN_00592190();
    iVar4 = FUN_0059b610();
    if ((iVar4 != 0) && (*(int *)(param_1 + 0x144) < 1)) {
      iVar4 = FUN_00592190();
      iVar4 = *(int *)(iVar4 + 0xd4);
      iVar8 = FUN_004258a0();
      if ((*(byte *)(iVar4 * 0x50 + 0x2e + *(int *)(iVar8 + 0x58)) & 1) == 0) {
        iVar4 = FUN_00592190();
        *(int *)(iVar4 + 0x148) = *(int *)(iVar4 + 0x148) + 1;
        *(undefined4 *)(iVar4 + 300) = 1;
        *(int *)(iVar4 + 0x138) = *(int *)(iVar4 + 0x138) + 1;
        *(undefined4 *)(iVar4 + 0x13c) = 1;
        *(undefined4 *)(iVar4 + 0xe0) = 0;
        iVar4 = FUN_00592190();
        *(undefined4 *)(iVar4 + 300) = 1;
        *(int *)(iVar4 + 0x138) = *(int *)(iVar4 + 0x138) + 1;
        *(undefined4 *)(iVar4 + 0x13c) = 1;
        *(int *)(iVar4 + 0x148) = *(int *)(iVar4 + 0x148) + 1;
        fVar10 = (float10)FUN_0064c6b0(0,(float)*(int *)(iVar4 + 0xd8) - DAT_006e92e8);
        *(float *)(iVar4 + 0xdc) = (float)fVar10;
      }
    }
    goto LAB_005979de;
  }
  iVar4 = FUN_00592190();
  iVar4 = *(int *)(iVar4 + 0xec);
  iVar8 = FUN_00592190();
  if (*(int *)(iVar8 + 0xe0) <= iVar4) {
    FUN_00592190();
    iVar4 = FUN_0059b610();
    if (iVar4 == 0) goto LAB_005979de;
    iVar4 = FUN_00592190();
    iVar4 = *(int *)(iVar4 + 0xd4);
    iVar8 = FUN_004258a0();
    if ((*(byte *)(iVar4 * 0x50 + 0x2e + *(int *)(iVar8 + 0x58)) & 1) != 0) goto LAB_005979de;
  }
  if (*(int *)(param_1 + 0x144) < 1) {
    *param_2 = 1;
LAB_00597a5c:
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return 1;
  }
LAB_005979de:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 0;
}

