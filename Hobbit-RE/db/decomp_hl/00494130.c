
void FUN_00494130(void)

{
  int local_64;
  undefined1 local_44 [12];
  undefined1 local_38 [12];
  undefined1 local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3158;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600();
  local_4 = 0;
  FUN_00640480();
  FUN_00640450();
  FUN_006403e0();
  FUN_00640420();
  FUN_006403a0();
  FUN_00640420();
  FUN_00640420();
  FUN_00640420();
  FUN_00640420();
  FUN_00640420();
  FUN_00640450();
  FUN_00640450();
  FUN_00640450();
  FUN_00640450();
  if (local_64 == 1) {
    FUN_00425250(local_44);
    FUN_00493c70(local_2c,local_38);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

