
int __fastcall FUN_0063ddb0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5aae;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00643920();
  local_4 = 0;
  FUN_00649600(s_text_in__text_in_0074a8c8);
  *(undefined4 *)(param_1 + 0x6b4) = 0;
  *(undefined4 *)(param_1 + 0x6b8) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x6a4) = 0;
  *(undefined4 *)(param_1 + 0x6a8) = 0;
  FUN_00649720();
  ExceptionList = local_c;
  return param_1;
}

