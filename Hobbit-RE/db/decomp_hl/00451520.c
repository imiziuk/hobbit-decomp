
undefined4 * __thiscall FUN_00451520(int param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_250 [540];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  iVar2 = FUN_00647e40(param_3,s_Eels_Regenerate_00724e9c);
  if (iVar2 == 0) {
    FUN_00425440();
    bVar1 = *(byte *)(param_1 + 0xf4);
    *param_2 = 3;
    uStack_4 = bVar1 >> 1 & 1;
    FUN_00424770(auStack_250);
    return param_2;
  }
  iVar2 = FUN_00647e40(param_3,s_Eel_Count_00724eac);
  if (iVar2 == 0) {
    FUN_00406a80();
    uStack_c = *(undefined4 *)(param_1 + 0xb4);
    *param_2 = 1;
    FUN_00424770(auStack_250);
    return param_2;
  }
  iVar2 = FUN_00647e40(param_3,&DAT_00724ce0);
  if (iVar2 == 0) {
    FUN_00406a80();
    uStack_c = *(undefined4 *)(param_1 + 0xb8);
    *param_2 = 1;
    FUN_00424770(auStack_250);
    return param_2;
  }
  iVar2 = FUN_00647e40(param_3,s_Maximum_Active_Eels_at_One_Time_00724e7c);
  if (iVar2 == 0) {
    FUN_00406a80();
    uStack_c = DAT_0075c82c;
    *param_2 = 1;
    FUN_00424770(auStack_250);
    return param_2;
  }
  FUN_00406a80();
  iVar2 = FUN_00647cf0(s_AudibleRadius_00724cc4);
  iVar3 = FUN_00647e80(param_3,s_AudibleRadius_00724cc4,iVar2);
  if (iVar3 == 0) {
    iVar3 = FUN_00647cf0(param_3);
    if (iVar2 == iVar3) {
      uStack_34 = DAT_0075c834;
      uStack_2c = DAT_0075c83c;
      uStack_30 = DAT_0075c838;
      *param_2 = 8;
      FUN_00424770(auStack_250);
      return param_2;
    }
    iVar2 = iVar2 + param_3;
    iVar3 = FUN_00647e40(&DAT_00724e78,iVar2);
    uStack_8 = DAT_0075c834;
    if (iVar3 == 0) {
LAB_00451786:
      *param_2 = 2;
      FUN_00424770(auStack_250);
      return param_2;
    }
    iVar3 = FUN_00647e40(&DAT_00724e74,iVar2);
    if (iVar3 == 0) {
      uStack_8 = DAT_0075c838;
      goto LAB_00451786;
    }
    iVar2 = FUN_00647e40(&DAT_00724e70,iVar2);
    uStack_8 = DAT_0075c83c;
    if (iVar2 == 0) goto LAB_00451786;
  }
  iVar2 = FUN_00647e40(param_3,s_HoleAudibleRadius_00724cb0);
  if (iVar2 == 0) {
    FUN_00425440();
    uStack_8 = DAT_0075c840;
  }
  else {
    iVar2 = FUN_00647e40(param_3,s_Eel_Tweaks_WhipAttackFreq_00724e48);
    if (iVar2 == 0) {
      FUN_00425440();
      uStack_8 = DAT_0075c84c;
LAB_004517f9:
      *param_2 = 2;
      FUN_00424770(auStack_250);
      return param_2;
    }
    iVar2 = FUN_00647e40(param_3,s_Eel_Tweaks_MovePatrolSpeed_00724e2c);
    if (iVar2 == 0) {
      FUN_00406a80();
      uStack_8 = DAT_0075c850;
LAB_00451854:
      *param_2 = 2;
      FUN_00424770(auStack_250);
      return param_2;
    }
    iVar2 = FUN_00647e40(param_3,s_Eel_Tweaks_MoveHuntSpeed_00724e10);
    if (iVar2 == 0) {
      FUN_00406a80();
      uStack_8 = DAT_0075c854;
    }
    else {
      iVar2 = FUN_00647e40(param_3,s_Eel_Tweaks_IdleLengthMin_00724df4);
      if (iVar2 == 0) {
        FUN_00406a80();
        uStack_8 = DAT_0075c858;
        goto LAB_004517f9;
      }
      iVar2 = FUN_00647e40(param_3,s_Eel_Tweaks_IdleLengthMax_00724dd8);
      if (iVar2 == 0) {
        FUN_00406a80();
        uStack_8 = DAT_0075c85c;
        goto LAB_00451854;
      }
      iVar2 = FUN_00647e40(param_3,s_Eel_Tweaks_NoiseMemoryTime_00724dbc);
      if (iVar2 == 0) {
        FUN_00406a80();
        uStack_8 = DAT_0075c860;
      }
      else {
        iVar2 = FUN_00647e40(param_3,s_Eel_Tweaks_YawRate_00724eb8);
        if (iVar2 == 0) {
          FUN_00406a80();
          uStack_8 = DAT_0075c864;
          goto LAB_004517f9;
        }
        iVar2 = FUN_00647e40(param_3,s_Eel_Tweaks_AnimSpeed_00724da4);
        if (iVar2 == 0) {
          FUN_00406a80();
          uStack_8 = DAT_0075c87c;
          goto LAB_00451854;
        }
        iVar2 = FUN_00647e40(param_3,s_Eel_Tweaks_BBoxInflateX_00724d8c);
        if (iVar2 == 0) {
          FUN_00406a80();
          uStack_8 = DAT_0075c868;
        }
        else {
          iVar2 = FUN_00647e40(param_3,s_Eel_Tweaks_BBoxInflateY_00724d74);
          if (iVar2 == 0) {
            FUN_00406a80();
            uStack_8 = DAT_0075c86c;
            *param_2 = 2;
            FUN_00424770(auStack_250);
            return param_2;
          }
          iVar2 = FUN_00647e40(param_3,s_Eel_Tweaks_BBoxInflateZ_00724d5c);
          if (iVar2 == 0) {
            FUN_00406a80();
            uStack_8 = DAT_0075c870;
            *param_2 = 2;
            FUN_00424770(auStack_250);
            return param_2;
          }
          iVar2 = FUN_00647e40(param_3,s_Eel_Tweaks_BurstHeightMod_00724d40);
          if (iVar2 != 0) {
            FUN_004abdf0(param_2,param_3);
            return param_2;
          }
          FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
          FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
          uStack_8 = DAT_0075c878;
        }
      }
    }
  }
  *param_2 = 2;
  FUN_00424770(auStack_250);
  return param_2;
}

