
void FUN_0067a480(int param_1)

{
  int iVar1;
  float fVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6e18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_audio_voice_mgr__UpdateVoiceEffe_00752c88);
  local_4 = 0;
  *(float *)(param_1 + 0x9c) =
       *(float *)(param_1 + 0x98) * *(float *)(param_1 + 0x50) *
       *(float *)(*(int *)(param_1 + 8) + 0x160);
  for (iVar1 = *(int *)(param_1 + 0x10); param_1 + 0xc != iVar1; iVar1 = *(int *)(iVar1 + 4)) {
    fVar2 = *(float *)(*(int *)(iVar1 + 8) + 0x9c) * *(float *)(iVar1 + 0x44);
    *(float *)(iVar1 + 0x80) = fVar2;
    if (*(int *)(iVar1 + 0x94) == 1) {
      FUN_0067aef0(*(undefined4 *)(iVar1 + 0x10),fVar2);
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

