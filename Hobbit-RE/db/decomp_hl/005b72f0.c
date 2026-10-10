
undefined4 FUN_005b72f0(void)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006dec08;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_005b71e0();
  if (iVar1 == 0) {
    local_4 = 0xffffffff;
    FUN_00649ba0();
    ExceptionList = local_c;
    return 0;
  }
  FUN_00649b60(&stack0x00000008);
  uVar2 = FUN_005b6b80();
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return uVar2;
}

