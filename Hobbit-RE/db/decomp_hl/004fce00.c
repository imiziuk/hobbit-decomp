
void FUN_004fce00(undefined4 param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d6538;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(&param_1,s_________s__007308a0,param_1);
  local_4 = 0;
  uVar1 = FUN_00649940();
  FUN_00650010(uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return;
}

