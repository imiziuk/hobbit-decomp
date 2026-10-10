
undefined4 FUN_0063e970(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5b61;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_text_in__Stricmp_0074ade0);
  local_4 = 0;
  FUN_00647d70(local_10c,param_2,param_3);
  local_10c[param_3] = 0;
  uVar1 = FUN_00647ed0(param_1,local_10c);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return uVar1;
}

