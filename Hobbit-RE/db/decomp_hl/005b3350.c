
undefined4 __thiscall
FUN_005b3350(int param_1,float param_2,float param_3,float param_4,int *param_5,uint param_6)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined1 local_74 [12];
  float local_68;
  float local_64;
  float local_60;
  undefined1 local_5c [24];
  undefined1 local_44 [24];
  float local_2c;
  float local_28;
  float local_24;
  int local_1c;
  int local_18;
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006de8e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_NavController__FindNearestNavPoi_00745534);
  *(uint *)(param_1 + 4) = param_6;
  DAT_007ba6ac = (int)(char)param_6 & 1;
  local_4 = 0;
  uVar8 = 0;
  local_68 = 100.0;
  local_64 = 100.0;
  local_60 = 100.0;
  uVar3 = FUN_00405080(local_74,&param_2,&local_68);
  FUN_004357e0(uVar3);
  uVar3 = FUN_00401f00(0x42c80000,0x42c80000,0x42c80000);
  uVar3 = FUN_00402130(local_74,&param_2,uVar3);
  FUN_004357e0(uVar3);
  local_2c = param_2;
  local_28 = param_3;
  local_24 = param_4;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0x4cbebc20;
  FUN_0058a630(local_5c,FUN_005b31f0,&local_2c);
  iVar2 = local_18;
  iVar4 = local_1c;
  if (local_1c == 0 && local_18 == 0) {
    local_68 = 2000.0;
    local_64 = 2000.0;
    local_60 = 2000.0;
    uVar3 = FUN_00405080(local_74,&param_2,&local_68);
    FUN_004357e0(uVar3);
    uVar3 = FUN_00401f00(0x44fa0000,0x44fa0000,0x44fa0000);
    uVar3 = FUN_00402130(local_74,&param_2,uVar3);
    FUN_004357e0(uVar3);
    local_2c = param_2;
    local_28 = param_3;
    local_24 = param_4;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0x4cbebc20;
    FUN_0058a630(local_44,FUN_005b31f0,&local_2c);
    iVar2 = local_18;
    iVar4 = local_1c;
    if (local_1c == 0 && local_18 == 0) {
      local_4 = 0xffffffff;
      FUN_00649720();
      ExceptionList = local_c;
      return 0;
    }
    param_5[1] = local_18;
    *param_5 = local_1c;
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4._0_1_ = 2;
    iVar4 = FUN_00406ce0(iVar4,iVar2);
    local_4 = (uint)local_4._1_3_ << 8;
    if (iVar4 == -1) {
      FUN_00649720();
      piVar9 = (int *)0x0;
    }
    else {
      uVar5 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
      piVar9 = (int *)(-(uint)((*(byte *)(uVar5 + 0x7f) & 0x10) != 0) & uVar5);
      FUN_00649720();
    }
    if (param_6 != 0) {
      uVar5 = FUN_0049dbc0();
      uVar5 = uVar5 & param_6;
      uVar6 = FUN_0049dbc0();
      if (uVar5 != uVar6) goto LAB_005b373b;
    }
    pfVar7 = (float *)(**(code **)(*piVar9 + 0x28))();
    FUN_00401f00(*pfVar7 - param_2,pfVar7[1] - param_3,pfVar7[2] - param_4);
    bVar1 = (float)piVar9[0x34] * (float)piVar9[0x34] <
            local_68 * local_68 + local_60 * local_60 + local_64 * local_64;
  }
  else {
    param_5[1] = local_18;
    *param_5 = local_1c;
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4._0_1_ = 1;
    iVar4 = FUN_00406ce0(iVar4,iVar2);
    local_4 = (uint)local_4._1_3_ << 8;
    if (iVar4 == -1) {
      FUN_00649720();
      piVar9 = (int *)0x0;
    }
    else {
      uVar5 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
      piVar9 = (int *)(-(uint)((*(byte *)(uVar5 + 0x7f) & 0x10) != 0) & uVar5);
      FUN_00649720();
    }
    if (param_6 != 0) {
      uVar5 = FUN_0049dbc0();
      uVar5 = uVar5 & param_6;
      uVar6 = FUN_0049dbc0();
      if (uVar5 != uVar6) goto LAB_005b373b;
    }
    pfVar7 = (float *)(**(code **)(*piVar9 + 0x28))();
    bVar1 = (float)piVar9[0x34] * (float)piVar9[0x34] <
            (pfVar7[2] - param_4) * (pfVar7[2] - param_4) +
            (pfVar7[1] - param_3) * (pfVar7[1] - param_3) +
            (*pfVar7 - param_2) * (*pfVar7 - param_2);
  }
  if (bVar1) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
LAB_005b373b:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return uVar8;
}

