
void __fastcall FUN_0047c640(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00659e10(*(undefined4 *)(param_1 + 0x48));
  if (iVar1 == 0) {
    iVar1 = FUN_00659e70(*(undefined4 *)(param_1 + 0x48));
    if (iVar1 == 0) goto LAB_0047c677;
  }
  FUN_00659c80(*(undefined4 *)(param_1 + 0x48),0);
LAB_0047c677:
  FUN_0064e870(6,s_CINEMA__Skipping_audio_0072833c);
  FUN_004754d0();
  return;
}

