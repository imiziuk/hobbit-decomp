
void FUN_0049b460(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_0064b130(*param_1);
  local_4 = 0;
  FUN_00526640(&DAT_0071da20,*puVar1,0);
  local_4 = 0xffffffff;
  FUN_0064b190();
  ExceptionList = local_c;
  return;
}

