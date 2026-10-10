
undefined4 FUN_00677990(int *param_1,undefined *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6cda;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_audio_stream_mgr__WarmStream_007528e8);
  param_1[0x35] = 0;
  iVar1 = *(int *)(param_1[0x30] + 0x28);
  local_4 = 0;
  if ((*param_1 != 0) && (((iVar1 == 0 || (iVar1 == 4)) || (iVar1 == 5)))) {
    param_1[0x34] = 0;
    param_1[0x3f] = 0;
    if (param_2 == (undefined *)0x0) {
      param_2 = (&PTR_LAB_00752858)[param_1[0x3f] + param_1[0x2f] * 2];
    }
    uVar2 = FUN_00677a80(param_1,param_2);
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return uVar2;
  }
  FUN_0064e7d0(s_Couldn_t_warm_stream___bad_thing_00752908);
  param_1[0x43] = 1;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 0;
}

