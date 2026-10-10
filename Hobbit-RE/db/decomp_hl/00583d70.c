
void FUN_00583d70(int param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc268;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_sRenderMgrDrawHook__xbool_0074082c);
  uVar1 = DAT_00777b60;
  local_4 = 0;
  if (param_1 == 0) {
    DAT_00777b60 = 3;
    FUN_00587d00(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

