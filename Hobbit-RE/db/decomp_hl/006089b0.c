
void __fastcall FUN_006089b0(int param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006e3b3b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00608a20();
  puVar1 = (undefined4 *)(param_1 + 0x44);
  local_4 = 0xffffffff;
  FUN_00549580(puVar1);
  FUN_00549350(puVar1);
  *puVar1 = 0x7fffffff;
  ExceptionList = local_c;
  return;
}

