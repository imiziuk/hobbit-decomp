
undefined4 FUN_00675e90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_1ac [40];
  int local_184;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  int local_124;
  undefined4 local_110;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6c15;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00680660();
  local_124 = param_1;
  local_12c = *(undefined4 *)(param_1 + 0x10);
  local_4 = 0;
  local_130 = 0;
  local_134 = 0;
  local_128 = 0;
  local_110 = 0;
  FUN_006806b0(&local_134,param_2,param_3,param_4,1,0,0,0,0);
  FUN_00677150(local_1ac);
  while (local_184 < 4) {
    Sleep(1);
  }
  local_4 = 0xffffffff;
  if (local_184 == 4) {
    FUN_006806a0();
    ExceptionList = local_c;
    return param_4;
  }
  FUN_006806a0();
  ExceptionList = local_c;
  return 0;
}

