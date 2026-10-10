
void FUN_004504a0(undefined4 param_1)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_004ab4e0(param_1);
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 1;
    FUN_00647d10(iVar1,s_Eel_Count_00724eac);
    *(undefined4 *)(iVar1 + 0x84) = 2;
    *(undefined4 *)(iVar1 + 0xf0) = 0;
    *(undefined4 *)(iVar1 + 0xf4) = 0xffffffff;
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 3;
      FUN_00647d10(iVar1,s_Eels_Regenerate_00724e9c);
      *(undefined4 *)(iVar1 + 0x84) = 2;
      if (DAT_0075d338 == 0) {
        iVar1 = FUN_00425010();
        *(undefined4 *)(iVar1 + 0x80) = 1;
        FUN_00647d10(iVar1,&DAT_00724ce0);
        *(undefined4 *)(iVar1 + 0x84) = 2;
        *(undefined4 *)(iVar1 + 0xf0) = 0;
        *(undefined4 *)(iVar1 + 0xf4) = 0xffffffff;
        if (DAT_0075d338 == 0) {
          iVar1 = FUN_00425010();
          *(undefined4 *)(iVar1 + 0x80) = 1;
          FUN_00647d10(iVar1,s_Maximum_Active_Eels_at_One_Time_00724e7c);
          *(undefined4 *)(iVar1 + 0x84) = 2;
          *(undefined4 *)(iVar1 + 0xf0) = 0;
          *(undefined4 *)(iVar1 + 0xf4) = 0xffffffff;
        }
      }
    }
  }
  uStack_18 = 0x7f7fffff;
  uStack_14 = 0x7f7fffff;
  uStack_10 = 0x7f7fffff;
  FUN_00401f00(0x800000,0x800000,0x800000);
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_AudibleRadius_00724cc4);
    *(undefined4 *)(iVar1 + 0x80) = 8;
    FUN_004357e0(&uStack_c);
    FUN_004357e0(&uStack_18);
    *(undefined4 *)(iVar1 + 0x84) = 3;
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_AudibleRadius_00724cc4);
    FUN_00647dc0(iVar1,&DAT_00724e78);
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = uStack_c;
    *(undefined4 *)(iVar1 + 0xfc) = uStack_18;
    *(undefined4 *)(iVar1 + 0x84) = 0x12;
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_AudibleRadius_00724cc4);
    FUN_00647dc0(iVar1,&DAT_00724e74);
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = uStack_8;
    *(undefined4 *)(iVar1 + 0xfc) = uStack_14;
    *(undefined4 *)(iVar1 + 0x84) = 0x12;
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_AudibleRadius_00724cc4);
    FUN_00647dc0(iVar1,&DAT_00724e70);
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = uStack_4;
    *(undefined4 *)(iVar1 + 0xfc) = uStack_10;
    *(undefined4 *)(iVar1 + 0x84) = 0x12;
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 2;
      FUN_00647d10(iVar1,s_HoleAudibleRadius_00724cb0);
      *(undefined4 *)(iVar1 + 0x84) = 2;
      *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
      *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
      if (DAT_0075d338 == 0) {
        iVar1 = FUN_00425010();
        *(undefined4 *)(iVar1 + 0x80) = 5;
        FUN_00647d10(iVar1,s_Eel_Tweaks_00724e64);
        *(undefined4 *)(iVar1 + 0x84) = 0x17;
        *(undefined4 *)(iVar1 + 0x100) = 0;
      }
    }
  }
  FUN_00537ff0(param_1,s_Eel_Tweaks_WhipAttackFreq_00724e48,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_Eel_Tweaks_MovePatrolSpeed_00724e2c,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_Eel_Tweaks_MoveHuntSpeed_00724e10,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_Eel_Tweaks_IdleLengthMin_00724df4,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_Eel_Tweaks_IdleLengthMax_00724dd8,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_Eel_Tweaks_NoiseMemoryTime_00724dbc,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_Eel_Tweaks_AnimSpeed_00724da4,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_Eel_Tweaks_BBoxInflateX_00724d8c,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_Eel_Tweaks_BBoxInflateY_00724d74,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_Eel_Tweaks_BBoxInflateZ_00724d5c,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_Eel_Tweaks_BurstHeightMod_00724d40,2,0x800000,0x7f7fffff);
  return;
}

