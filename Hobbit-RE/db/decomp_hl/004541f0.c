
void __thiscall FUN_004541f0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x7a) = *(byte *)(param_1 + 0x7a) | 1;
  *(byte *)(param_1 + 0x7f) = *(byte *)(param_1 + 0x7f) | 1;
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 0xe;
    FUN_00647d10(iVar1,s_PackageName_007250fc);
    *(undefined4 *)(iVar1 + 0x84) = 0;
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 2;
      FUN_00647d10(iVar1,s_MinSilenceTime_00725094);
      *(undefined4 *)(iVar1 + 0x84) = 2;
      *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
      *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
      if (DAT_0075d338 == 0) {
        iVar1 = FUN_00425010();
        *(undefined4 *)(iVar1 + 0x80) = 2;
        FUN_00647d10(iVar1,s_MaxSilenceTime_00725084);
        *(undefined4 *)(iVar1 + 0x84) = 2;
        *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
        *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
        if (DAT_0075d338 == 0) {
          iVar1 = FUN_00425010();
          *(undefined4 *)(iVar1 + 0x80) = 2;
          FUN_00647d10(iVar1,s_VolumeFadeTime_00725074);
          *(undefined4 *)(iVar1 + 0x84) = 2;
          *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
          *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
        }
      }
    }
  }
  iVar1 = FUN_00425010();
  *(undefined4 *)(iVar1 + 0x80) = 0xd;
  FUN_00647d10(iVar1,s_m_TrackName_007250f0);
  *(undefined4 *)(iVar1 + 0x84) = 0x38;
  *(undefined4 *)(iVar1 + 0xf0) = 0;
  *(undefined4 *)(iVar1 + 0xf4) = DAT_0075c9d0;
  *(undefined **)(iVar1 + 0x100) = &DAT_0075c9c8;
  iVar1 = FUN_00425010();
  *(undefined4 *)(iVar1 + 0x80) = 2;
  FUN_00647d10(iVar1,s_m_FadeInTime_007250e0);
  *(undefined4 *)(iVar1 + 0x84) = 0x38;
  *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
  *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
  iVar1 = FUN_00425010();
  *(undefined4 *)(iVar1 + 0x80) = 2;
  FUN_00647d10(iVar1,s_m_FadeOutTime_007250d0);
  *(undefined4 *)(iVar1 + 0x84) = 0x38;
  *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
  *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
  iVar1 = FUN_00425010();
  *(undefined4 *)(iVar1 + 0x80) = 1;
  FUN_00647d10(iVar1,s_m_SwitchType_007250c0);
  *(undefined4 *)(iVar1 + 0x84) = 0x38;
  *(undefined4 *)(iVar1 + 0xf0) = 0;
  *(undefined4 *)(iVar1 + 0xf4) = 0xffffffff;
  iVar1 = FUN_00425010();
  *(undefined4 *)(iVar1 + 0x80) = 3;
  FUN_00647d10(iVar1,s_LevelReset_0072073c);
  *(undefined4 *)(iVar1 + 0x84) = 0x38;
  FUN_004ab4e0(param_2);
  return;
}

