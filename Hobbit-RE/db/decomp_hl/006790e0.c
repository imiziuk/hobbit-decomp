
void FUN_006790e0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_00649600(s_audio_voice_mgr__UpdateReleaseTi_00752a6c);
  for (iVar1 = *(int *)(param_1 + 0x10); iVar1 != param_1 + 0xc; iVar1 = *(int *)(iVar1 + 4)) {
    iVar2 = *(int *)(iVar1 + 0x10);
    if (iVar2 != 0) {
      uVar3 = __ftol();
      *(undefined4 *)(iVar2 + 0x28) = uVar3;
    }
  }
  FUN_00649720();
  return;
}

