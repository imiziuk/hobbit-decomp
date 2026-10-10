
undefined4 * __fastcall FUN_006754c0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006e6b91;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_4 = 0;
  FUN_006c043b(param_1 + 8,0x150,1,&LAB_00680590,&LAB_006805e0);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00655850();
  param_1[0x4ff] = 0;
  param_1[0x500] = 0;
  param_1[0x4fe] = 0xffffffff;
  param_1[0x5c] = 10;
  ExceptionList = local_c;
  return param_1;
}

