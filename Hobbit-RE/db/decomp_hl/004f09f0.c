
undefined4 * __thiscall FUN_004f09f0(int param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 auStack_250 [127];
  undefined1 uStack_51;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [16];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_00406a80();
  iVar2 = FUN_00647cf0(s_Minimum_Color_0072f254);
  iVar3 = FUN_00647e80(param_3,s_Minimum_Color_0072f254,iVar2);
  if (iVar3 != 0) {
LAB_004f0b29:
    iVar2 = FUN_00647e40(param_3,s_Breakable_by_Sting_0072f240);
    if (iVar2 == 0) {
      FUN_00425440();
      uStack_4 = *(undefined4 *)(param_1 + 0x184);
    }
    else {
      iVar2 = FUN_00647e40(param_3,s_Breakable_by_Stick_0072f22c);
      if (iVar2 == 0) {
        FUN_00425440();
        uStack_4 = *(undefined4 *)(param_1 + 0x188);
        *param_2 = 3;
        FUN_00424770(auStack_250);
        return param_2;
      }
      iVar2 = FUN_00647e40(param_3,s_Breakable_by_Stone_0072f218);
      if (iVar2 == 0) {
        FUN_00425440();
        uStack_4 = *(undefined4 *)(param_1 + 0x18c);
        *param_2 = 3;
        FUN_00424770(auStack_250);
        return param_2;
      }
      iVar2 = FUN_00647e40(param_3,s_Breakable_by_any_pain_0072f200);
      if (iVar2 != 0) {
        iVar2 = FUN_00647ed0(param_3,s_Texture_Resource_0072ee64);
        if (iVar2 == 0) {
          if (*(int *)(param_1 + 0x1f0) != 0) {
            FUN_00406a80();
            auStack_250[0]._0_1_ = 0;
            *param_2 = 7;
            FUN_00424770(auStack_250);
            return param_2;
          }
          iVar2 = FUN_00647e40(param_3,s_Texture_Resource_0072ee64);
          if (iVar2 == 0) {
            FUN_00406a80();
            puVar4 = (undefined1 *)FUN_005493e0(param_1 + 0x158);
            if (puVar4 == (undefined1 *)0x0) {
              puVar4 = &DAT_0075b6e0;
            }
            FUN_00647d70(auStack_250,puVar4,0x200);
            *param_2 = 7;
            uStack_51 = 0;
            FUN_00424770(auStack_250);
            return param_2;
          }
        }
        iVar2 = FUN_00647e40(param_3,s_Blend_Mode_0072f1f4);
        if (iVar2 == 0) {
          FUN_00406a80();
          uStack_c = *(undefined4 *)(param_1 + 0x180);
          *param_2 = 0xc;
          FUN_00424770(auStack_250);
          return param_2;
        }
        iVar2 = FUN_00647e40(param_3,s___Cells_Wide_0072f1e4);
        if (iVar2 == 0) {
          FUN_00406a80();
          uStack_c = *(undefined4 *)(param_1 + 0x164);
        }
        else {
          iVar2 = FUN_00647e40(param_3,s___Cells_High_0072f1d4);
          if (iVar2 == 0) {
            FUN_00406a80();
            uStack_c = *(undefined4 *)(param_1 + 0x168);
            *param_2 = 1;
            FUN_00424770(auStack_250);
            return param_2;
          }
          iVar2 = FUN_00647e40(param_3,s_Init_Width_0072f1c8);
          if (iVar2 == 0) {
            FUN_00406a80();
            uStack_c = *(undefined4 *)(param_1 + 0x15c);
            *param_2 = 1;
            FUN_00424770(auStack_250);
            return param_2;
          }
          iVar2 = FUN_00647e40(param_3,s_Init_Height_0072f1bc);
          if (iVar2 != 0) {
            iVar2 = FUN_00647e40(param_3,s_Texture_U_Tile_Amt_0072f1a8);
            if (iVar2 == 0) {
              FUN_00406a80();
              uStack_8 = *(undefined4 *)(param_1 + 0x16c);
              *param_2 = 2;
              FUN_00424770(auStack_250);
              return param_2;
            }
            iVar2 = FUN_00647e40(param_3,s_Texture_V_Tile_Amt_0072f194);
            if (iVar2 == 0) {
              FUN_00406a80();
              uStack_8 = *(undefined4 *)(param_1 + 0x170);
            }
            else {
              iVar2 = FUN_00647e40(param_3,s_Freeze_Distance__cm__0072f17c);
              if (iVar2 == 0) {
                FUN_00406a80();
                uStack_8 = *(undefined4 *)(param_1 + 0x174);
                *param_2 = 2;
                FUN_00424770(auStack_250);
                return param_2;
              }
              iVar2 = FUN_00647e40(param_3,s_Sleep_Time__sec__0072f168);
              if (iVar2 == 0) {
                FUN_00406a80();
                uStack_8 = *(undefined4 *)(param_1 + 0x178);
                *param_2 = 2;
                FUN_00424770(auStack_250);
                return param_2;
              }
              iVar2 = FUN_00647e40(param_3,s_Collision_Response_Scale_0072f14c);
              if (iVar2 != 0) {
                iVar2 = FUN_00647e40(param_3,s_Broken_0072f144);
                if (iVar2 == 0) {
                  FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                  uStack_4 = *(undefined4 *)(param_1 + 0x1c8);
                  *param_2 = 3;
                  puVar5 = auStack_250;
                  puVar6 = param_2 + 2;
                  for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
                    *puVar6 = *puVar5;
                    puVar5 = puVar5 + 1;
                    puVar6 = puVar6 + 1;
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
                FUN_004e6120(param_2,param_3);
                return param_2;
              }
              FUN_00406a80();
              uStack_8 = *(undefined4 *)(param_1 + 0x17c);
            }
            *param_2 = 2;
            FUN_00424770(auStack_250);
            return param_2;
          }
          FUN_00406a80();
          uStack_c = *(undefined4 *)(param_1 + 0x160);
        }
        *param_2 = 1;
        FUN_00424770(auStack_250);
        return param_2;
      }
      FUN_00406a80();
      uStack_4 = *(undefined4 *)(param_1 + 400);
    }
    *param_2 = 3;
    FUN_00424770(auStack_250);
    return param_2;
  }
  iVar3 = FUN_00647cf0(param_3);
  if (iVar2 == iVar3) {
    FUN_00425250((byte *)(param_1 + 0x198));
    *param_2 = 0x11;
    FUN_00424770(auStack_250);
    return param_2;
  }
  iVar2 = iVar2 + param_3;
  iVar3 = FUN_00647e40(&DAT_00728244,iVar2);
  if (iVar3 == 0) {
    bVar1 = *(byte *)(param_1 + 0x19a);
  }
  else {
    iVar3 = FUN_00647e40(&DAT_00728240,iVar2);
    if (iVar3 == 0) {
      uStack_c = (uint)*(byte *)(param_1 + 0x199);
      goto LAB_004f0af8;
    }
    iVar3 = FUN_00647e40(&DAT_0072823c,iVar2);
    if (iVar3 == 0) {
      uStack_c = (uint)*(byte *)(param_1 + 0x198);
      goto LAB_004f0af8;
    }
    iVar2 = FUN_00647e40(&DAT_00728238,iVar2);
    if (iVar2 != 0) goto LAB_004f0b29;
    bVar1 = *(byte *)(param_1 + 0x19b);
  }
  uStack_c = (uint)bVar1;
LAB_004f0af8:
  *param_2 = 1;
  FUN_00424770(auStack_250);
  return param_2;
}

