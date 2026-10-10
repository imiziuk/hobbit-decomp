
void __fastcall FUN_0069ed00(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006e730c;
  local_c = ExceptionList;
  local_4 = 0x11;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x5d4) != 2) {
    ExceptionList = &local_c;
    FUN_006bf840(*(undefined4 *)(param_1 + 0x5cc));
  }
  FUN_006c026a(param_1 + 0x570,0x28,2,FUN_00425890);
  local_4._0_1_ = 0x10;
  FUN_006c026a(param_1 + 0x520,0x28,2,FUN_00425890);
  local_4._0_1_ = 0xf;
  FUN_006c026a(param_1 + 0x4d0,0x28,2,FUN_00425890);
  local_4._0_1_ = 0xe;
  FUN_006c026a(param_1 + 0x480,0x28,2,FUN_00425890);
  local_4._0_1_ = 0xd;
  FUN_006c026a(param_1 + 0x430,0x28,2,FUN_00425890);
  local_4._0_1_ = 0xc;
  FUN_006c026a(param_1 + 0x3e0,0x28,2,FUN_00425890);
  local_4._0_1_ = 0xb;
  FUN_006c026a(param_1 + 0x390,0x28,2,FUN_00425890);
  local_4._0_1_ = 10;
  FUN_006c026a(param_1 + 0x340,0x28,2,FUN_00425890);
  local_4._0_1_ = 9;
  FUN_006c026a(param_1 + 0x2f0,0x28,2,FUN_00425890);
  local_4._0_1_ = 8;
  FUN_006c026a(param_1 + 0x2a0,0x28,2,FUN_00425890);
  local_4._0_1_ = 7;
  FUN_006c026a(param_1 + 0x250,0x28,2,FUN_00425890);
  local_4._0_1_ = 6;
  FUN_006c026a(param_1 + 0x200,0x28,2,FUN_00425890);
  local_4._0_1_ = 5;
  FUN_006c026a(param_1 + 0x1b0,0x28,2,FUN_00425890);
  local_4._0_1_ = 4;
  FUN_006c026a(param_1 + 0x160,0x28,2,FUN_00425890);
  local_4._0_1_ = 3;
  FUN_006c026a(param_1 + 0x110,0x28,2,FUN_00425890);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_006c026a(param_1 + 0xc0,0x28,2,FUN_00425890);
  ExceptionList = local_c;
  return;
}

