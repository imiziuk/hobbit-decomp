
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00534cf0(int param_1)

{
  FUN_0064a2e0(s_MUSIC_Silence_00724fb8);
  if (_DAT_006e999c < *(float *)(param_1 + 0x270)) {
    if (*(int *)(param_1 + 0x28c) == 0) {
      *(undefined4 *)(param_1 + 0x28c) = 1;
      FUN_00535740(&DAT_00764560,1,0,0);
    }
    if (_DAT_006e99d8 < *(float *)(param_1 + 0x270)) {
      FUN_00534f30(4);
    }
  }
  return;
}

