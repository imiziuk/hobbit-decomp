
undefined4 * __fastcall FUN_005002c0(undefined4 *param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d685b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00671410();
  local_4 = 0;
  *param_1 = 0xa28;
  param_1[1] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[2] = 0;
  param_1[0x12e] = 0x3f800000;
  param_1[0x12a] = 0x3f800000;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[299] = 0x3f800000;
  FUN_00671650(0x41200000,0x47435000);
  FUN_00671930(0x42c80000,0);
  local_18 = 0x43b40000;
  local_14 = 0x43480000;
  local_10 = 0;
  FUN_00671670(&local_18);
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  FUN_006723d0(&local_18,0);
  FUN_006715c0(0x3fa78d36);
  ExceptionList = local_c;
  return param_1;
}

