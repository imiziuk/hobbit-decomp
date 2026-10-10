
undefined4 __thiscall FUN_00677a80(int param_1,int *param_2,undefined *param_3)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6cec;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_audio_stream_mgr__ReadStream_00752938);
  uVar2 = 0;
  local_4 = 0;
  if (param_2[0x2e] != 0) {
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return 0;
  }
  iVar1 = *(int *)(param_2[0x30] + 0x28);
  if ((*param_2 != 0) && (((iVar1 == 0 || (iVar1 == 5)) || ((iVar1 == 4 && (param_2[0x45] == 0))))))
  {
    if (param_3 == (undefined *)0x0) {
      param_3 = (&PTR_LAB_00752820)[param_2[0x3f] + param_2[0x2f] * 2];
    }
    FUN_0067a940(param_2,param_3);
    iVar1 = param_2[0x34];
    param_2[0x34] = iVar1 + param_2[0x3e];
    uVar2 = 1;
    if ((uint)param_2[0x33] <= (uint)(iVar1 + param_2[0x3e])) {
      param_2[0x2e] = 1;
    }
    *(uint *)(param_1 + 0x7b8) = *(uint *)(param_1 + 0x7b8) ^ 1;
    param_2[0x45] = 1;
    FUN_00677150(param_2[0x30]);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return uVar2;
}

