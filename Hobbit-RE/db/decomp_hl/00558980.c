
void FUN_00558980(int param_1,undefined4 param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9ef8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_material2__EvaluateMap_0073e090);
  DAT_00771c50 = DAT_00771c50 + 1;
  local_4 = 0;
  iVar1 = FUN_00558850(param_1 + 0x10,param_2);
  if (iVar1 != 0) {
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 1;
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

