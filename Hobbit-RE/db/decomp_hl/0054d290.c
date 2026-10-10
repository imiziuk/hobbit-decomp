
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0054d290(undefined4 param_1,undefined4 param_2,float *param_3,float param_4,
                 undefined4 param_5,uint param_6,undefined4 param_7)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 *local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9878;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_obj_mgr__ApplyNoise_0073d068);
  local_4 = 0;
  if (_DAT_006e9344 < param_4) {
    param_4 = 1500.0;
  }
  local_78 = 0x7f7fffff;
  local_74 = 0x7f7fffff;
  local_70 = 0x7f7fffff;
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  local_7c = param_6 | 0x4000;
  local_80 = 1;
  FUN_00401f00(*param_3 - param_4,param_3[1] - param_4,param_3[2] - param_4);
  local_38 = param_4;
  local_34 = param_4;
  local_30 = param_4;
  uVar2 = FUN_00402130(local_18,param_3,&local_38);
  FUN_004357e0(uVar2);
  local_70 = local_24;
  local_78 = local_2c;
  local_74 = local_28;
  local_54 = param_3[2];
  local_5c = *param_3;
  local_58 = param_3[1];
  local_48 = param_1;
  local_50 = param_4;
  local_4c = param_7;
  local_60 = &LAB_0054d250;
  local_44 = param_2;
  local_3c = 0;
  local_40 = param_5;
  FUN_0058a630(&local_78,FUN_0054cdd0,&local_80);
  bVar1 = 0 < local_3c;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return bVar1;
}

