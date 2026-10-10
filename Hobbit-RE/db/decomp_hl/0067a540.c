
void FUN_0067a540(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6e38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_audio_voice_mgr__UpdateStatePaus_00752cb0);
  iVar1 = *(int *)(param_1 + 0x10);
  local_4 = 0;
  for (; param_1 + 0xc != iVar1; iVar1 = *(int *)(iVar1 + 4)) {
    if ((((*(int *)(iVar1 + 0x94) == 1) && (uVar2 = *(uint *)(iVar1 + 0x10), DAT_00806b04 <= uVar2))
        && (uVar2 <= DAT_00806b08)) && (*(int *)(uVar2 + 0x54) == 2)) {
      FUN_0067ad20(uVar2);
      *(undefined4 *)(iVar1 + 0x94) = 2;
    }
  }
  *(undefined4 *)(param_1 + 0xe4) = param_2;
  *(undefined4 *)(param_1 + 0xf0) = 4;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

