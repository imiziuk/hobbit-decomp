
undefined4 FUN_0067c590(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6f08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_audio_package__LoadHotSample_00752ee8);
  local_4 = 0;
  if (*(uint *)(param_2 + 0x14) < 3) {
    FUN_0064f650(param_1,*(undefined4 *)(param_2 + 4),0);
    FUN_0064f350(param_3,*(undefined4 *)(param_2 + 8),1,param_1);
    uVar1 = *(undefined4 *)(param_2 + 8);
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return uVar1;
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 0;
}

