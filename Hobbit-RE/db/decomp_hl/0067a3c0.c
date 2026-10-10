
void FUN_0067a3c0(int param_1)

{
  int iVar1;
  float fVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6df8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_audio_voice_mgr__UpdateVoicePitc_00752c64);
  local_4 = 0;
  *(float *)(param_1 + 0x94) =
       *(float *)(param_1 + 0x90) * *(float *)(param_1 + 0x28) *
       *(float *)(*(int *)(param_1 + 8) + 0x154);
  for (iVar1 = *(int *)(param_1 + 0x10); param_1 + 0xc != iVar1; iVar1 = *(int *)(iVar1 + 4)) {
    fVar2 = *(float *)(*(int *)(iVar1 + 8) + 0x94) * *(float *)(iVar1 + 0x7c) *
            *(float *)(iVar1 + 0x1c);
    *(float *)(iVar1 + 0x78) = fVar2;
    if (*(int *)(iVar1 + 0x94) == 1) {
      FUN_0067ae80(*(undefined4 *)(iVar1 + 0x10),fVar2);
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

