
bool FUN_0054d020(undefined4 param_1,undefined4 param_2,float *param_3,float param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  bool bVar1;
  undefined4 uVar2;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  code *local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9858;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_obj_mgr__ApplyPain_0073d054);
  local_4 = 0;
  local_70 = 0x7f7fffff;
  local_6c = 0x7f7fffff;
  local_68 = 0x7f7fffff;
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  local_78 = 9;
  local_74 = param_8;
  FUN_00401f00(*param_3 - param_4,param_3[1] - param_4,param_3[2] - param_4);
  local_90 = param_4;
  local_8c = param_4;
  local_88 = param_4;
  uVar2 = FUN_00402130(local_18,param_3,&local_90);
  FUN_004357e0(uVar2);
  local_70 = local_84;
  local_6c = local_80;
  local_68 = local_7c;
  local_54 = *param_3;
  local_50 = param_3[1];
  local_4c = param_3[2];
  local_48 = param_4;
  local_44 = param_5;
  local_58 = FUN_0054cf70;
  local_40 = param_6;
  local_3c = param_7;
  local_38 = param_9;
  local_30 = param_1;
  local_2c = param_2;
  local_34 = param_10;
  local_28 = 0;
  local_24 = param_11;
  FUN_0058a630(&local_70,FUN_0054cdd0,&local_78);
  bVar1 = 0 < local_28;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return bVar1;
}

