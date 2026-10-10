
undefined4 * __thiscall FUN_00482460(int param_1,undefined4 *param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 auStack_250 [127];
  undefined1 uStack_51;
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [16];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  iVar2 = FUN_00647ed0(param_3,s_Mask_Texture_00728bd8);
  if (iVar2 == 0) {
    iVar2 = FUN_00647e40(param_3,s_Mask_Texture_00728bd8);
    if (iVar2 != 0) goto LAB_0048250d;
    FUN_00406a80();
    param_1 = param_1 + 0x160;
LAB_004824ad:
    puVar3 = (undefined1 *)FUN_005493e0(param_1);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0075b6e0;
    }
    FUN_00647d70(auStack_250,puVar3,0x200);
    uStack_51 = 0;
    *param_2 = 7;
  }
  else {
LAB_0048250d:
    iVar2 = FUN_00647ed0(param_3,s_Fog_Texture_1_00728bc8);
    if (iVar2 == 0) {
      iVar2 = FUN_00647e40(param_3,s_Fog_Texture_1_00728bc8);
      if (iVar2 == 0) {
        FUN_00406a80();
        param_1 = param_1 + 0x158;
        goto LAB_004824ad;
      }
    }
    iVar2 = FUN_00647ed0(param_3,s_Fog_Texture_2_00728bb8);
    if (iVar2 == 0) {
      iVar2 = FUN_00647e40(param_3,s_Fog_Texture_2_00728bb8);
      if (iVar2 == 0) {
        FUN_00406a80();
        param_1 = param_1 + 0x15c;
        goto LAB_004824ad;
      }
    }
    iVar2 = FUN_00647ed0(param_3,s_Double_Sided_00728ba8);
    if (iVar2 == 0) {
      bVar1 = *(byte *)(param_1 + 0x288);
      iVar2 = FUN_00647e40(param_3,s_Double_Sided_00728ba8);
      if (iVar2 == 0) {
        FUN_00406a80();
        *param_2 = 3;
        uStack_4 = bVar1 & 1;
        FUN_00424770(auStack_250);
        return param_2;
      }
    }
    iVar2 = FUN_00647e40(param_3,s_Layer_Blend_Mode_00728b94);
    if (iVar2 == 0) {
      FUN_00406a80();
      uStack_c = *(undefined4 *)(param_1 + 0x238);
      *param_2 = 0xc;
    }
    else {
      iVar2 = FUN_00647e40(param_3,s_Final_Blend_Mode_00728b80);
      if (iVar2 == 0) {
        FUN_00406a80();
        uStack_c = *(undefined4 *)(param_1 + 0x23c);
        *param_2 = 0xc;
        FUN_00424770(auStack_250);
        return param_2;
      }
      iVar2 = FUN_00647e40(param_3,s_Layer_1_Anim_Mode_00728b6c);
      if (iVar2 == 0) {
        FUN_00406a80();
        uStack_c = *(undefined4 *)(param_1 + 0x280);
LAB_004826bb:
        *param_2 = 0xc;
        FUN_00424770(auStack_250);
        return param_2;
      }
      iVar2 = FUN_00647e40(param_3,s_Layer_1_U_Tile_00728b5c);
      if (iVar2 == 0) {
        FUN_00406a80();
        uStack_8 = *(undefined4 *)(param_1 + 0x240);
      }
      else {
        iVar2 = FUN_00647e40(param_3,s_Layer_1_V_Tile_00728b4c);
        if (iVar2 == 0) {
          FUN_00406a80();
          uStack_8 = *(undefined4 *)(param_1 + 0x248);
          goto LAB_00482740;
        }
        iVar2 = FUN_00647e40(param_3,s_Layer_1_Linear_U_Speed_00728b34);
        if (iVar2 == 0) {
          FUN_00406a80();
          uStack_8 = *(undefined4 *)(param_1 + 0x250);
LAB_00482a5b:
          *param_2 = 2;
          FUN_00424770(auStack_250);
          return param_2;
        }
        iVar2 = FUN_00647e40(param_3,s_Layer_1_Linear_V_Speed_00728b1c);
        if (iVar2 == 0) {
          FUN_00406a80();
          uStack_8 = *(undefined4 *)(param_1 + 600);
        }
        else {
          iVar2 = FUN_00647e40(param_3,s_Layer_1_Wave_U_Amp_00728b08);
          if (iVar2 == 0) {
            FUN_00406a80();
            uStack_8 = *(undefined4 *)(param_1 + 0x260);
            goto LAB_00482740;
          }
          iVar2 = FUN_00647e40(param_3,s_Layer_1_Wave_V_Amp_00728af4);
          if (iVar2 == 0) {
            FUN_00406a80();
            uStack_8 = *(undefined4 *)(param_1 + 0x270);
            goto LAB_00482a5b;
          }
          iVar2 = FUN_00647e40(param_3,s_Layer_1_Wave_U_Freq_00728ae0);
          if (iVar2 == 0) {
            FUN_00406a80();
            uStack_8 = *(undefined4 *)(param_1 + 0x268);
          }
          else {
            iVar2 = FUN_00647e40(param_3,s_Layer_1_Wave_V_Freq_00728acc);
            if (iVar2 == 0) {
              FUN_00406a80();
              uStack_8 = *(undefined4 *)(param_1 + 0x278);
LAB_00482740:
              *param_2 = 2;
              FUN_00424770(auStack_250);
              return param_2;
            }
            iVar2 = FUN_00647e40(param_3,s_Layer_2_Anim_Mode_00728ab8);
            if (iVar2 == 0) {
              FUN_00406a80();
              uStack_c = *(undefined4 *)(param_1 + 0x284);
              goto LAB_004826bb;
            }
            iVar2 = FUN_00647e40(param_3,s_Layer_2_U_Tile_00728aa8);
            if (iVar2 != 0) {
              iVar2 = FUN_00647e40(param_3,s_Layer_2_V_Tile_00728a98);
              if (iVar2 != 0) {
                iVar2 = FUN_00647e40(param_3,s_Layer_2_Linear_U_Speed_00728a80);
                if (iVar2 == 0) {
                  FUN_00406a80();
                  uStack_8 = *(undefined4 *)(param_1 + 0x254);
                }
                else {
                  iVar2 = FUN_00647e40(param_3,s_Layer_2_Linear_V_Speed_00728a68);
                  if (iVar2 == 0) {
                    FUN_00406a80();
                    uStack_8 = *(undefined4 *)(param_1 + 0x25c);
                    *param_2 = 2;
                    FUN_00424770(auStack_250);
                    return param_2;
                  }
                  iVar2 = FUN_00647e40(param_3,s_Layer_2_Wave_U_Amp_00728a54);
                  if (iVar2 == 0) {
                    FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                    uStack_8 = *(undefined4 *)(param_1 + 0x264);
                    *param_2 = 2;
                    FUN_00424770(auStack_250);
                    return param_2;
                  }
                  iVar2 = FUN_00647e40(param_3,s_Layer_2_Wave_V_Amp_00728a40);
                  if (iVar2 != 0) {
                    iVar2 = FUN_00647e40(param_3,s_Layer_2_Wave_U_Freq_00728a2c);
                    if (iVar2 == 0) {
                      FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                      FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                      uStack_8 = *(undefined4 *)(param_1 + 0x26c);
                      *param_2 = 2;
                      puVar4 = auStack_250;
                      puVar5 = param_2 + 2;
                      for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
                        *puVar5 = *puVar4;
                        puVar4 = puVar4 + 1;
                        puVar5 = puVar5 + 1;
                      }
                      FUN_00480f60(auStack_50);
                    }
                    else {
                      iVar2 = FUN_00647e40(param_3,s_Layer_2_Wave_V_Freq_00728a18);
                      if (iVar2 != 0) {
                        FUN_004e6120(param_2,param_3);
                        return param_2;
                      }
                      FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                      FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                      uStack_8 = *(undefined4 *)(param_1 + 0x27c);
                      *param_2 = 2;
                      puVar4 = auStack_250;
                      puVar5 = param_2 + 2;
                      for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
                        *puVar5 = *puVar4;
                        puVar4 = puVar4 + 1;
                        puVar5 = puVar5 + 1;
                      }
                      FUN_004357e0(auStack_50);
                      FUN_004357e0(auStack_44);
                    }
                    FUN_00425250(auStack_38);
                    FUN_004357e0(auStack_34);
                    FUN_004357e0(auStack_28);
                    param_2[0x90] = uStack_18;
                    param_2[0x91] = uStack_14;
                    param_2[0x92] = uStack_10;
                    param_2[0x93] = uStack_c;
                    param_2[0x94] = uStack_8;
                    param_2[0x95] = uStack_4;
                    return param_2;
                  }
                  FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                  uStack_8 = *(undefined4 *)(param_1 + 0x274);
                }
                goto LAB_00482a5b;
              }
              FUN_00406a80();
              uStack_8 = *(undefined4 *)(param_1 + 0x24c);
              goto LAB_00482740;
            }
            FUN_00406a80();
            uStack_8 = *(undefined4 *)(param_1 + 0x244);
          }
        }
      }
      *param_2 = 2;
    }
  }
  FUN_00424770(auStack_250);
  return param_2;
}

