
void FUN_00583630(float *param_1,float *param_2,undefined2 param_3,undefined4 param_4)

{
  float *local_4c;
  float *local_48;
  undefined2 local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc178;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_lighting_mgr__TouchObjects_ver2_00740760);
  local_38 = param_1[1];
  local_10 = param_1[5];
  local_3c = *param_1;
  local_30 = param_1[3];
  local_34 = param_1[2];
  local_2c = param_1[4];
  local_4 = 0;
  if (*param_2 < local_3c != (NAN(*param_2) || NAN(local_3c))) {
    local_3c = *param_2;
  }
  if (param_2[1] < local_38 != (NAN(param_2[1]) || NAN(local_38))) {
    local_38 = param_2[1];
  }
  if (param_2[2] < local_34 != (NAN(param_2[2]) || NAN(local_34))) {
    local_34 = param_2[2];
  }
  if (local_30 < param_2[3]) {
    local_30 = param_2[3];
  }
  if (local_2c < param_2[4]) {
    local_2c = param_2[4];
  }
  if (local_10 < param_2[5] != (NAN(local_10) || NAN(param_2[5]))) {
    local_10 = param_2[5];
  }
  local_24 = local_3c;
  local_20 = local_38;
  local_1c = local_34;
  local_18 = local_30;
  local_48 = param_2;
  local_14 = local_2c;
  local_44 = param_3;
  local_4c = param_1;
  local_40 = param_4;
  FUN_0058a630(&local_24,FUN_00583460,&local_4c);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

