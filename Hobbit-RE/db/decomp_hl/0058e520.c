
void __fastcall FUN_0058e520(int param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006dccb8;
  local_c = ExceptionList;
  puVar1 = (undefined4 *)(param_1 + 4);
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00549580(puVar1);
  FUN_00549350(puVar1);
  *puVar1 = 0x7fffffff;
  local_4 = 0xffffffff;
  FUN_006b7660();
  ExceptionList = local_c;
  return;
}

