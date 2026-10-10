
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0054e940(undefined4 *param_1,undefined4 param_2,float param_3,int param_4)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  undefined8 uVar7;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d99c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_subtitle_mgr__StartSUBTITLE_0073d270);
  uVar5 = param_2;
  fVar2 = _DAT_006e958c;
  local_4 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  fVar1 = _DAT_006e958c;
  if (fVar2 < param_3) {
    fVar1 = param_3;
  }
  param_1[2] = fVar1;
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined2 *)(param_1 + 0x416) = 0;
  param_1[8] = 0;
  param_1[6] = param_4;
  param_1[7] = 0;
  param_1[3] = 0;
  FUN_00647d70(param_1 + 0x833,param_2,0x20);
  FUN_00649920(&param_3,s___________SubTitle__s_Started_0073d250,uVar5);
  local_4._0_1_ = 1;
  uVar3 = FUN_00649940();
  FUN_0064e870(6,uVar3);
  local_4._0_1_ = 0;
  FUN_00649950();
  if (DAT_0075fbf0 != 0) {
    FUN_00649920(&param_3,s____________s_Is_Reloading_0073d234,param_1 + 10);
    local_4._0_1_ = 2;
    uVar3 = FUN_00649940();
    FUN_0064e870(7,uVar3);
    local_4._0_1_ = 0;
    FUN_00649950();
    FUN_006aafd0(s_subtitlepackage_0073d0e0);
    uVar3 = FUN_0052ac90();
    FUN_00649920(&param_3,s_SubTitles__s_0073d0f0,uVar3);
    local_4._0_1_ = 3;
    uVar3 = FUN_00649940();
    uVar3 = FUN_005496c0(param_1 + 10,uVar3);
    iVar4 = FUN_006aae30(s_subtitlepackage_0073d0e0,uVar3);
    local_4._0_1_ = 0;
    FUN_00649950();
    if (iVar4 == 0) goto LAB_0054ec0e;
  }
  FUN_00647d70(param_1 + 0x827,uVar5,0x30);
  FUN_00647cf0(uVar5);
  iVar4 = FUN_006ab1a0(s_subtitlepackage_0073d0e0,uVar5);
  if (iVar4 == 0) {
    FUN_00649920(&param_3,s___________SubTitle___s__<Not_Fou_0073d20c,uVar5);
    local_4._0_1_ = 4;
    uVar5 = FUN_00649940();
    FUN_0064e870(6,uVar5);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649950();
    param_1[6] = 0;
  }
  else {
    FUN_00649920(&param_3,s___________SubTitle___s__<Found_>_0073d1e8,uVar5);
    local_4._0_1_ = 5;
    uVar3 = FUN_00649940();
    FUN_0064e870(6,uVar3);
    local_4._0_1_ = 0;
    FUN_00649950();
    param_1[0x826] = param_1[0x826] + 1;
    uVar7 = FUN_0064cb70();
    fVar6 = (float10)FUN_0064cbc0(uVar7);
    *(double *)(param_1 + 4) = (double)fVar6;
    FUN_00648190(param_1 + 0x16,iVar4,0x800);
    uVar3 = FUN_006480e0(iVar4);
    FUN_00649920(&param_2,s___________SubTitle_Size___i__0073d1c8,uVar3);
    local_4._0_1_ = 6;
    uVar3 = FUN_00649940();
    FUN_0064e870(6,uVar3);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649950();
    uVar3 = 0x20;
    param_1 = param_1 + 0x816;
    uVar5 = FUN_006ab1d0(s_subtitlepackage_0073d0e0,uVar5);
    FUN_00648190(param_1,uVar5,uVar3);
    iVar4 = FUN_006480e0(param_1);
    if (iVar4 < 0) {
      FUN_00648110(param_1,0);
    }
    FUN_006480e0(param_1);
    if (param_4 == 0) {
      FUN_00526600();
    }
  }
LAB_0054ec0e:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

