
int __fastcall FUN_004fb180(int param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d62f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00671410();
  local_4 = 0;
  FUN_00671650(0x41200000,0x47435000);
  FUN_00671930(0x42c80000,0);
  local_18 = 0x43fd8000;
  local_14 = 0xc4abe000;
  local_10 = 0xc4064000;
  FUN_00671670(&local_18);
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  FUN_006723d0(&local_18,0);
  local_18 = 0x3e4c692f;
  local_14 = 0xbfe28f5c;
  local_10 = 0;
  FUN_006716a0(&local_18);
  *(undefined4 *)(param_1 + 0x48c) = 0;
  *(undefined4 *)(param_1 + 0x494) = 0;
  *(undefined4 *)(param_1 + 0x498) = 0;
  *(undefined4 *)(param_1 + 0x49c) = 0;
  *(undefined4 *)(param_1 + 0x490) = 0;
  *(undefined4 *)(param_1 + 0x480) = 1;
  *(undefined4 *)(param_1 + 0x484) = 0x42480000;
  *(undefined4 *)(param_1 + 0x488) = 0x3d8efa35;
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  *(undefined4 *)(param_1 + 0x4a4) = 0;
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  *(undefined4 *)(param_1 + 0x4ac) = 0;
  *(undefined4 *)(param_1 + 0x4cc) = 0;
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  *(undefined4 *)(param_1 + 0x4d8) = 1;
  *(undefined4 *)(param_1 + 0x4b0) = 5;
  *(undefined4 *)(param_1 + 0x4b4) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x4b8) = 0x40000000;
  *(undefined4 *)(param_1 + 0x4bc) = 0x3f800000;
  ExceptionList = local_c;
  return param_1;
}

