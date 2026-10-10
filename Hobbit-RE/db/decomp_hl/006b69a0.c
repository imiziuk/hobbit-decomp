
undefined4 FUN_006b69a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_118 [12];
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e838b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_fx_mgr__LoadEffect_char__char___00757b58);
  local_4 = 0;
  FUN_00648a60(param_2,local_118,local_10c,0,0);
  FUN_00648bc0(&DAT_00757a40,local_118,local_10c,0,0);
  iVar1 = FUN_0064f210(param_2,&DAT_00720db8);
  if (iVar1 == 0) {
    local_4 = 0xffffffff;
    FUN_00649720();
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_006b6a90(param_1,iVar1);
    FUN_0064f2b0(iVar1);
    local_4 = 0xffffffff;
    FUN_00649720();
  }
  ExceptionList = local_c;
  return uVar2;
}

