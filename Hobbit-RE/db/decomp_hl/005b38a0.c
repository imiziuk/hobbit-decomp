
undefined4
FUN_005b38a0(float param_1,float param_2,float param_3,int param_4,int param_5,float param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined1 local_40 [12];
  undefined1 local_34 [12];
  float local_28;
  undefined1 local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006de930;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_NavController__InNavSphere_00745570);
  iVar2 = param_5;
  iVar3 = param_4;
  uVar7 = 0;
  local_4 = 0;
  if (param_4 == 0 && param_5 == 0) {
    FUN_00401f00(param_1 - param_6,param_2 - param_6,param_3 - param_6);
    uVar5 = FUN_00401f00(param_6,param_6,param_6);
    uVar5 = FUN_00402130(local_40,&param_1,uVar5);
    FUN_004357e0(uVar5);
    DAT_007ba6a8 = 0;
    FUN_004357e0(&param_1);
    local_28 = param_6;
    FUN_0058a630(local_24,FUN_005b3790,local_34);
    if (0 < DAT_007ba6a8) {
LAB_005b3a86:
      uVar7 = 1;
    }
LAB_005b3a8b:
    local_4 = 0xffffffff;
    FUN_00649720();
  }
  else {
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4._0_1_ = 1;
    iVar3 = FUN_00406ce0(iVar3,iVar2);
    local_4 = (uint)local_4._1_3_ << 8;
    if (iVar3 == -1) {
      FUN_00649720();
    }
    else {
      uVar1 = *(uint *)(DAT_0076f648 + iVar3 * 0x14);
      piVar6 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
      FUN_00649720();
      if (piVar6 != (int *)0x0) {
        pfVar4 = (float *)(**(code **)(*piVar6 + 0x28))();
        if ((pfVar4[2] - param_3) * (pfVar4[2] - param_3) +
            (pfVar4[1] - param_2) * (pfVar4[1] - param_2) +
            (*pfVar4 - param_1) * (*pfVar4 - param_1) <=
            (float)piVar6[0x34] * (float)piVar6[0x34] + param_6 * param_6) goto LAB_005b3a86;
        uVar7 = 0;
        goto LAB_005b3a8b;
      }
    }
    local_4 = 0xffffffff;
    FUN_00649720();
    uVar7 = 0;
  }
  ExceptionList = local_c;
  return uVar7;
}

