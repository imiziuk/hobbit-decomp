
void __thiscall FUN_0053b1a0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_118 [3];
  undefined1 local_10c;
  undefined4 local_10b [63];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d90ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_music_trigger__OnImport_0073774c);
  *(byte *)(param_1 + 0x7a) = *(byte *)(param_1 + 0x7a) | 1;
  local_10c = 0;
  puVar2 = local_10b;
  for (iVar1 = 0x3f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_4 = 0;
  local_118[0] = 0;
  FUN_006405b0(s_SingleShot_00725358,param_1 + 0x120);
  FUN_00640450(s_TriggerActionTypeRedToGreen_00725738,local_118);
  *(undefined4 *)(param_1 + 0x1b4) = local_118[0];
  local_118[0] = 0;
  FUN_00640450(s_SwitchTypeRedToGreen_00725720,local_118);
  *(undefined4 *)(param_1 + 0x1b8) = local_118[0];
  local_10c = 0;
  FUN_00640480(s_SuiteRedToGreen_00725710,&local_10c);
  FUN_0064a2e0(&local_10c);
  local_10c = 0;
  FUN_00640480(s_TrackRedToGreen_00725700,&local_10c);
  FUN_0064a2e0(&local_10c);
  FUN_006405b0(s_UseAsDefaultRedToGreen_007256e8,param_1 + 0x1bc);
  FUN_00640450(s_DesiredIntensityRedToGreen_007256cc,param_1 + 0x1b0);
  FUN_00640420(s_FadeOutTimeRedToGreen_007256b4,param_1 + 0x1c0);
  FUN_00640420(s_FadeInTimeRedToGreen_0072569c,param_1 + 0x1c4);
  FUN_00640450(s_MaxLoopCountRedToGreen_00725684,param_1 + 0x1c8);
  FUN_00640450(s_TriggerActionTypeGreenToRed_00725638,local_118);
  *(undefined4 *)(param_1 + 0x2ac) = local_118[0];
  local_118[0] = 0;
  FUN_00640450(s_SwitchTypeGreenToRed_00725620,local_118);
  *(undefined4 *)(param_1 + 0x2b0) = local_118[0];
  local_10c = 0;
  FUN_00640480(s_SuiteGreenToRed_00725610,&local_10c);
  FUN_0064a2e0(&local_10c);
  local_10c = 0;
  FUN_00640480(s_TrackGreenToRed_00725600,&local_10c);
  FUN_0064a2e0(&local_10c);
  FUN_006405b0(s_UseAsDefaultGreenToRed_007255e8,param_1 + 0x2b4);
  FUN_00640450(s_DesiredIntensityGreenToRed_007255cc,param_1 + 0x2a8);
  FUN_00640420(s_FadeOutTimeGreenToRed_007255b4,param_1 + 0x2b8);
  FUN_00640420(s_FadeInTimeGreenToRed_0072559c,param_1 + 700);
  FUN_00640450(s_MaxLoopCountGreenToRed_00725584,param_1 + 0x2c0);
  local_10c = 0;
  FUN_00640480(s_RedToGreenDefaultState_0072566c,&local_10c);
  FUN_0064a2e0(&local_10c);
  local_10c = 0;
  FUN_00640480(s_GreenToRedDefaultState_00725554,&local_10c);
  FUN_0064a2e0(&local_10c);
  FUN_004e2c00(param_2);
  *(byte *)(param_1 + 0x7a) = *(byte *)(param_1 + 0x7a) | 1;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

