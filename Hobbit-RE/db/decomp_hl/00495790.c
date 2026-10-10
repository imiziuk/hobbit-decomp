
undefined4 * __thiscall FUN_00495790(int param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 auStack_250 [128];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [16];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  FUN_00406a80();
  iVar2 = FUN_00647cf0(s_Color_00728924);
  iVar3 = FUN_00647e80(param_3,s_Color_00728924,iVar2);
  if (iVar3 != 0) {
LAB_004958c9:
    iVar2 = FUN_00647e40(param_3,s_Light_Type_00729bc4);
    if (iVar2 == 0) {
      FUN_00425440();
      uStack_c = *(undefined4 *)(param_1 + 0x10c);
      *param_2 = 0xc;
      FUN_00424770(auStack_250);
      return param_2;
    }
    iVar2 = FUN_00647e40(param_3,s_Intensity_0072550c);
    if (iVar2 == 0) {
      FUN_00406a80();
      uStack_8 = *(undefined4 *)(param_1 + 0xd4);
      *param_2 = 2;
      FUN_00424770(auStack_250);
      return param_2;
    }
    iVar2 = FUN_00647e40(param_3,s_Flicker_Amp_00729b84);
    if (iVar2 == 0) {
      FUN_00406a80();
      uStack_8 = *(undefined4 *)(param_1 + 0xec);
      *param_2 = 2;
      FUN_00424770(auStack_250);
      return param_2;
    }
    iVar2 = FUN_00647e40(param_3,s_Flicker_Jitter_00729b74);
    if (iVar2 == 0) {
      FUN_00406a80();
      uStack_8 = *(undefined4 *)(param_1 + 0xf0);
    }
    else {
      iVar2 = FUN_00647e40(param_3,s_Flicker_Speed_00729b64);
      if (iVar2 == 0) {
        FUN_00406a80();
        uStack_8 = *(undefined4 *)(param_1 + 0xe8);
        *param_2 = 2;
        FUN_00424770(auStack_250);
        return param_2;
      }
      iVar2 = FUN_00647e40(param_3,s_Attenuation_Start_00729ba0);
      if (iVar2 == 0) {
        FUN_00406a80();
        uStack_8 = *(undefined4 *)(param_1 + 0xe0);
        *param_2 = 2;
        FUN_00424770(auStack_250);
        return param_2;
      }
      iVar2 = FUN_00647e40(param_3,s_Attenuation_End_00729b90);
      if (iVar2 != 0) {
        iVar2 = FUN_00647e40(param_3,s_Dynamic_00729a88);
        if (iVar2 == 0) {
          FUN_00406a80();
          bVar1 = *(byte *)(param_1 + 0x111);
          *param_2 = 3;
          uStack_4 = bVar1 & 1;
          FUN_00424770(auStack_250);
          return param_2;
        }
        iVar2 = FUN_00647e40(param_3,s_Flicker_00729a80);
        if (iVar2 == 0) {
          FUN_00406a80();
          bVar1 = *(byte *)(param_1 + 0x111);
          *param_2 = 3;
          uStack_4 = bVar1 >> 1 & 1;
          FUN_00424770(auStack_250);
          return param_2;
        }
        iVar2 = FUN_00647e40(param_3,s_Light_Player_00729b54);
        if (iVar2 == 0) {
          FUN_00406a80();
          uStack_4 = *(uint *)(param_1 + 0x108) >> 6 & 1;
          *param_2 = 3;
          FUN_00424770(auStack_250);
          return param_2;
        }
        iVar2 = FUN_00647e40(param_3,s_Light_NPC_00729b48);
        if (iVar2 == 0) {
          FUN_00406a80();
          uStack_4 = *(uint *)(param_1 + 0x108) >> 4 & 1;
          *param_2 = 3;
          FUN_00424770(auStack_250);
          return param_2;
        }
        iVar2 = FUN_00647e40(param_3,s_Light_Internal_00729b38);
        if (iVar2 == 0) {
          FUN_00406a80();
          uStack_4 = *(uint *)(param_1 + 0x108) >> 10 & 1;
          *param_2 = 3;
          FUN_00424770(auStack_250);
          return param_2;
        }
        iVar2 = FUN_00647e40(param_3,s_Light_Playsurfaces_00729b24);
        if (iVar2 == 0) {
          FUN_00406a80();
          uStack_4 = *(uint *)(param_1 + 0x108) >> 0xb & 1;
          *param_2 = 3;
          FUN_00424770(auStack_250);
          return param_2;
        }
        iVar2 = FUN_00647e40(param_3,s_Light_Rigid_Instances_00729b0c);
        if (iVar2 == 0) {
          FUN_00406a80();
          uStack_4 = *(uint *)(param_1 + 0x108) >> 0xc & 1;
          *param_2 = 3;
          FUN_00424770(auStack_250);
          return param_2;
        }
        iVar2 = FUN_00647e40(param_3,s_Ambient_00729b04);
        if (iVar2 == 0) {
          FUN_00406a80();
          bVar1 = *(byte *)(param_1 + 0x111);
          *param_2 = 3;
          uStack_4 = (bVar1 & 8) >> 3;
          FUN_00424770(auStack_250);
          return param_2;
        }
        iVar2 = FUN_00647e40(param_3,s_Light_Channel_00729bb4);
        if (iVar2 != 0) {
          FUN_004abdf0(param_2,param_3);
          return param_2;
        }
        iVar2 = 0;
        do {
          iVar3 = iVar2;
          if (((uint)*(byte *)(param_1 + 0x110) & 1 << ((byte)iVar2 & 0x1f)) != 0) break;
          iVar2 = iVar2 + 1;
          iVar3 = 0;
        } while (iVar2 < 8);
        FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
        FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
        uStack_c = iVar3;
        *param_2 = 1;
        puVar4 = auStack_250;
        puVar5 = param_2 + 2;
        for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        FUN_00480f60(auStack_50);
        FUN_00425250(auStack_38);
        FUN_004357e0(auStack_34);
        FUN_004357e0(auStack_28);
        param_2[0x92] = uStack_10;
        param_2[0x90] = uStack_18;
        param_2[0x91] = uStack_14;
        param_2[0x95] = uStack_4;
        param_2[0x93] = uStack_c;
        param_2[0x94] = uStack_8;
        return param_2;
      }
      FUN_00406a80();
      uStack_8 = *(undefined4 *)(param_1 + 0xe4);
    }
    *param_2 = 2;
    FUN_00424770(auStack_250);
    return param_2;
  }
  iVar3 = FUN_00647cf0(param_3);
  if (iVar2 == iVar3) {
    FUN_00425250((byte *)(param_1 + 0xcc));
    *param_2 = 0x11;
    FUN_00424770(auStack_250);
    return param_2;
  }
  iVar2 = iVar2 + param_3;
  iVar3 = FUN_00647e40(&DAT_00728244,iVar2);
  if (iVar3 == 0) {
    bVar1 = *(byte *)(param_1 + 0xce);
  }
  else {
    iVar3 = FUN_00647e40(&DAT_00728240,iVar2);
    if (iVar3 == 0) {
      uStack_c = (uint)*(byte *)(param_1 + 0xcd);
      goto LAB_00495898;
    }
    iVar3 = FUN_00647e40(&DAT_0072823c,iVar2);
    if (iVar3 == 0) {
      uStack_c = (uint)*(byte *)(param_1 + 0xcc);
      goto LAB_00495898;
    }
    iVar2 = FUN_00647e40(&DAT_00728238,iVar2);
    if (iVar2 != 0) goto LAB_004958c9;
    bVar1 = *(byte *)(param_1 + 0xcf);
  }
  uStack_c = (uint)bVar1;
LAB_00495898:
  *param_2 = 1;
  FUN_00424770(auStack_250);
  return param_2;
}

