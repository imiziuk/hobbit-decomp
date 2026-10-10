
undefined4 FUN_00594390(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd110;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600();
  local_4 = 0;
  if (param_1 != 0) {
    iVar1 = FUN_00647e40();
    if (iVar1 != 0) {
      iVar1 = FUN_00647e40();
      if (iVar1 != 0) {
        FUN_00649b20(param_1);
        local_4 = local_4 & 0xffffff00;
        FUN_00592920();
        uVar2 = FUN_0059b640();
        uVar2 = FUN_005b72f0(uVar2);
        local_4 = 0xffffffff;
        FUN_00649720();
        ExceptionList = local_c;
        return uVar2;
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 0;
}

