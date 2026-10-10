
void __thiscall FUN_004aa9e0(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3de8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = (undefined4 *)FUN_00649b80(param_2);
  local_4 = 0;
  (**(code **)(*param_1 + 0x48))(*puVar1);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00649ba0();
  ExceptionList = pvStack_10;
  return;
}

