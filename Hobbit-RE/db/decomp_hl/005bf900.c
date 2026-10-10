
undefined4 FUN_005bf900(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df2e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920();
  local_4 = 0;
  FUN_00649940();
  iVar1 = FUN_00647e40();
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar1 == 0) {
    if ((*param_2 == 4) || (*param_2 == 0xd)) {
      FUN_00649b20();
      local_4 = 1;
      FUN_00649b60(local_38);
      FUN_005bed00();
      local_4 = 0xffffffff;
      FUN_00649ba0();
      ExceptionList = local_c;
      return 1;
    }
  }
  ExceptionList = local_c;
  return 0;
}

