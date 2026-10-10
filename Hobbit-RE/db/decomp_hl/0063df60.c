
undefined4 __thiscall FUN_0063df60(undefined1 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5af2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_text_in__OpenFile_0074a98c);
  local_4 = 0;
  *(undefined4 *)(param_1 + 0x69c) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *param_1 = 0;
  FUN_00643a90(s_________<>_0074a9a0);
  iVar1 = FUN_00643740(param_2);
  if (iVar1 == 0) {
    uVar2 = FUN_0063dee0(param_1,s_Unable_to_open_file_0074a9ac);
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return uVar2;
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 1;
}

