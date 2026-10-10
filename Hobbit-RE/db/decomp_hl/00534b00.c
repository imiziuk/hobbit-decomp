
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00534b00(int param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_0064a2e0(s_MUSIC_Silence_00724fb8);
  if (_DAT_006e936c < *(float *)(param_1 + 0x270)) {
    FUN_00535740(&DAT_00764518,1,0,0);
  }
  piVar1 = (int *)FUN_0041bcc0();
  iVar2 = (**(code **)(*piVar1 + 0x108))(1);
  if (iVar2 != 0) {
    FUN_00534f30(*(undefined4 *)(param_1 + 0x298));
  }
  return;
}

