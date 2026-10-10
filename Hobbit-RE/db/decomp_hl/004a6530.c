
void __thiscall FUN_004a6530(int param_1,undefined4 *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3c18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004aaa80(param_2);
  FUN_00649600(s_NPCObject__OnRotate_0072b24c);
  local_4 = 0;
  FUN_005927e0(param_2);
  *(undefined4 *)(param_1 + 0x68) = *param_2;
  *(undefined4 *)(param_1 + 0x6c) = param_2[1];
  *(undefined4 *)(param_1 + 0x70) = param_2[2];
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

