
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00455640(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_00452eb0();
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 3;
    FUN_00647d10(iVar1,s_SingleShot_00725358);
    *(undefined4 *)(iVar1 + 0x84) = 2;
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 3;
      FUN_00647d10(iVar1,s_bIsCinematic_00725348);
      *(undefined4 *)(iVar1 + 0x84) = 2;
      if (DAT_0075d338 == 0) {
        iVar1 = FUN_00425010();
        *(undefined4 *)(iVar1 + 0x80) = 5;
        FUN_00647d10(iVar1,s_RedToGreen_0072533c);
        *(undefined4 *)(iVar1 + 0x84) = 0x15;
        *(undefined4 *)(iVar1 + 0x100) = 0;
        if (DAT_0075d338 == 0) {
          iVar1 = FUN_00425010();
          *(undefined4 *)(iVar1 + 0x80) = 3;
          FUN_00647d10(iVar1,s_RedToGreen_Use_As_New_Default_0072531c);
          *(undefined4 *)(iVar1 + 0x84) = 2;
          if (DAT_0075d338 == 0) {
            iVar1 = FUN_00425010();
            *(undefined4 *)(iVar1 + 0x80) = 2;
            FUN_00647d10(iVar1,s_RedToGreen_FadeOutTime_00725304);
            *(undefined4 *)(iVar1 + 0x84) = 2;
            *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
            *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
            if (DAT_0075d338 == 0) {
              iVar1 = FUN_00425010();
              *(undefined4 *)(iVar1 + 0x80) = 2;
              FUN_00647d10(iVar1,s_RedToGreen_FadeInTime_007252ec);
              *(undefined4 *)(iVar1 + 0x84) = 2;
              *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
              *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
              if (DAT_0075d338 == 0) {
                iVar1 = FUN_00425010();
                *(undefined4 *)(iVar1 + 0x80) = 2;
                FUN_00647d10(iVar1,s_RedToGreen_TargetVolume_007252d4);
                *(undefined4 *)(iVar1 + 0x84) = 2;
                *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
                *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
                if (DAT_0075d338 == 0) {
                  iVar1 = FUN_00425010();
                  *(undefined4 *)(iVar1 + 0x80) = 1;
                  FUN_00647d10(iVar1,s_RedToGreen_LoopCount_007252bc);
                  *(undefined4 *)(iVar1 + 0x84) = 2;
                  *(undefined4 *)(iVar1 + 0xf0) = 0;
                  *(undefined4 *)(iVar1 + 0xf4) = 0xffffffff;
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x1b4) == 0) {
    iVar1 = FUN_00453cd0();
    _DAT_0075ca64 = iVar1;
    if (DAT_0075d338 == 0) {
      iVar2 = FUN_00425010();
      *(undefined4 *)(iVar2 + 0x80) = 0xd;
      FUN_00647d10(iVar2,s_RedToGreen_Track_00725290);
      *(undefined4 *)(iVar2 + 0x84) = 2;
      *(undefined4 *)(iVar2 + 0xf0) = 0;
      *(undefined4 *)(iVar2 + 0xf4) = *(undefined4 *)(iVar1 + 8);
      *(int *)(iVar2 + 0x100) = iVar1;
    }
  }
  else if ((*(int *)(param_1 + 0x1b4) == 4) && (DAT_0075d338 == 0)) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 1;
    FUN_00647d10(iVar1,s_RedToGreen_Intensity_007252a4);
    *(undefined4 *)(iVar1 + 0x84) = 2;
    *(undefined4 *)(iVar1 + 0xf0) = 0;
    *(undefined4 *)(iVar1 + 0xf4) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x1c8) != 0) {
    *(undefined4 *)(param_1 + 0x1bc) = 1;
  }
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 5;
    FUN_00647d10(iVar1,s_GreenToRed_00725284);
    *(undefined4 *)(iVar1 + 0x84) = 0x15;
    *(undefined4 *)(iVar1 + 0x100) = 0;
  }
  FUN_005669e0(param_2,s_GreenToRed_Use_As_New_Default_00725264,2);
  FUN_00537ff0(param_2,s_GreenToRed_FadeOutTime_0072524c,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_2,s_GreenToRed_FadeInTime_00725234,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_2,s_GreenToRed_TargetVolume_0072521c,2,0x800000,0x7f7fffff);
  FUN_00499e60(param_2,s_GreenToRed_LoopCount_00725204,2,0,0xffffffff);
  if (*(int *)(param_1 + 0x2ac) == 0) {
    _DAT_0075ca84 = FUN_00453cd0();
    FUN_00538050(param_2,s_GreenToRed_Track_007251d8,_DAT_0075ca84,2);
  }
  else if (*(int *)(param_1 + 0x2ac) == 4) {
    FUN_00499e60(param_2,s_GreenToRed_Intensity_007251ec,2,0,0xffffffff);
  }
  if (*(int *)(param_1 + 0x2c0) != 0) {
    *(undefined4 *)(param_1 + 0x2b4) = 1;
  }
  FUN_004e30f0(param_2);
  return;
}

