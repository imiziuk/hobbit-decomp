
void __fastcall FUN_006a2380(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006e77d4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006fcc14;
  local_4 = 2;
  FUN_006a3050();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00649ba0();
  if (param_1[0x41] != 2) {
    FUN_006bf840(param_1[0x3f]);
  }
  local_4 = 0xffffffff;
  FUN_006a2eb0();
  ExceptionList = local_c;
  return;
}

