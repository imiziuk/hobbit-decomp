
void FUN_00453f10(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_64;
  undefined4 local_38;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d0098;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00649b60(&stack0x00000004);
  local_4._0_1_ = 1;
  uVar2 = FUN_005496c0(local_38,s_Audio_0071ce88);
  FUN_00649b20(uVar2);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_006581c0(local_64);
  if (DAT_0075c9c0 == 0) {
    if (DAT_0075c9b8 != 0) {
      iVar1 = DAT_0075c9b8 + -4;
      FUN_006c026a(DAT_0075c9b8,0x2c,*(undefined4 *)(DAT_0075c9b8 + -4),FUN_00649ba0);
      FUN_006bf840(iVar1);
    }
    DAT_0075c9b8 = 0;
    DAT_0075c9bc = 0;
  }
  DAT_0075c9b4 = 0;
  local_4._0_1_ = 1;
  FUN_00649ba0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649ba0();
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

