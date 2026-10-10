
void __thiscall FUN_0048c0a0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 local_120 [4];
  undefined4 local_11c;
  undefined1 local_118 [12];
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d2f36;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_globals__OnImport_007294d8);
  local_4 = 0;
  FUN_0048bf50();
  FUN_00640420(s_BilboStartYaw_007294c8,&local_11c);
  *(undefined4 *)(param_1 + 0xb4) = local_11c;
  FUN_006403a0(s_BilboStartPos_007294b8,param_1 + 0xa8);
  FUN_006403e0(s_FogColor_007294ac,param_1 + 0xb8);
  FUN_00640420(s_FogStart_007294a0,param_1 + 0xbc);
  FUN_00640420(s_FogEnd_00729498,param_1 + 0xc0);
  FUN_006405b0(s_FogEnabled_0072948c,param_1 + 0xc4);
  FUN_00640480(s_LevelName_00729480,local_10c);
  FUN_00647d70(param_1 + 0xd0,local_10c,0x20);
  FUN_006405e0(s_OpeningCinema_00729470,param_1 + 200);
  FUN_00640450(s_Number_of_Quests_0072945c,param_1 + 0x128);
  iVar2 = 0;
  do {
    FUN_00649920(local_118,s_Ambient_d_00729450,iVar2);
    puVar3 = local_120;
    local_4._0_1_ = 1;
    uVar1 = FUN_00649940(puVar3);
    FUN_006403e0(uVar1,puVar3);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649950();
    FUN_005831e0(local_120,iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  FUN_00562900(param_2);
  FUN_0059d750(param_2);
  FUN_005717e0(param_2);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

