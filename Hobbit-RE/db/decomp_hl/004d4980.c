
void FUN_004d4980(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 local_f4 [92];
  undefined1 local_98 [76];
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4fe1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_00649b80(param_1);
  local_4 = 0;
  FUN_00648a60(*puVar1,0,0,local_4c,local_f4);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar2 = FUN_0064b130(local_4c);
  local_4 = 1;
  FUN_0064b7f0(uVar2);
  local_4 = 0xffffffff;
  FUN_0064b190();
  FUN_0064b130(local_f4);
  local_4 = 2;
  FUN_0064bcb0(local_98);
  local_4 = 0xffffffff;
  FUN_0064b190();
  ExceptionList = local_c;
  return;
}

