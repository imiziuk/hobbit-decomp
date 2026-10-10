
void FUN_00488700(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d2cb8;
  local_c = ExceptionList;
  local_10 = 0x7fffffff;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00549a40(param_1,&local_10);
  puVar1 = (undefined1 *)FUN_005493e0(&local_10);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0075b6e0;
  }
  FUN_005491a0(puVar1);
  local_4 = 0xffffffff;
  FUN_00549580(&local_10);
  FUN_00549350(&local_10);
  ExceptionList = local_c;
  return;
}

