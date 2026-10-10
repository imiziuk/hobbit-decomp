
int FUN_005033a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d6908;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_script_rsc_loader__Load_00731d1c);
  local_4 = 0;
  FUN_0064e7d0(s_loading_script_00731d0c);
  iVar1 = FUN_00645060(param_2);
  if (iVar1 != 0) {
    FUN_00645280();
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return iVar1;
}

