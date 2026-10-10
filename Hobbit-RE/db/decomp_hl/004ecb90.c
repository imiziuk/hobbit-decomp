
undefined4 * __thiscall FUN_004ecb90(int param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 auStack_4cc [4];
  undefined1 auStack_4c8 [4];
  undefined1 auStack_4c4 [4];
  undefined1 auStack_4c0 [4];
  undefined4 uStack_4bc;
  undefined4 auStack_4b4 [127];
  undefined1 uStack_2b5;
  undefined1 auStack_2b4 [24];
  undefined1 uStack_29c;
  undefined1 uStack_29b;
  undefined1 uStack_29a;
  undefined1 uStack_299;
  undefined1 auStack_298 [12];
  undefined1 auStack_28c [16];
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  uint uStack_270;
  undefined4 uStack_26c;
  uint uStack_268;
  undefined4 uStack_264;
  undefined1 auStack_25c [584];
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d5e1c;
  pvStack_c = ExceptionList;
  cVar2 = *(char *)(param_1 + 0x314);
  ExceptionList = &pvStack_c;
  iVar3 = FUN_00647e40(param_3,s_DontRebuild_0072efc0);
  if (iVar3 == 0) {
    FUN_00406a80();
    uStack_4bc = 3;
    uStack_268 = 0;
    *param_2 = 3;
    FUN_00424770(auStack_4b4);
    ExceptionList = pvStack_c;
    return param_2;
  }
  iVar3 = FUN_00647e40(param_3,s_CurHeight_0072efb4);
  if (iVar3 == 0) {
    FUN_00406a80();
    uStack_26c = *(undefined4 *)(param_1 + 0x1b8);
    goto LAB_004ecc42;
  }
  iVar3 = FUN_00647e40(param_3,s_DesiredHeight_0072efa4);
  if (iVar3 == 0) {
    FUN_00406a80();
    uStack_26c = *(undefined4 *)(param_1 + 0x1bc);
    goto LAB_004ecc94;
  }
  iVar3 = FUN_00647e40(param_3,s_TransSpeed_007298cc);
  if (iVar3 == 0) {
    FUN_00406a80();
    uStack_26c = *(undefined4 *)(param_1 + 0x1c0);
    goto LAB_004ed73f;
  }
  iVar3 = FUN_00647e40(param_3,s_Water_Level_0072ef98);
  if (iVar3 == 0) {
    FUN_00406a80();
    uStack_4bc = 1;
    *param_2 = 1;
    uStack_270 = (int)cVar2;
    FUN_00424770(auStack_4b4);
    ExceptionList = pvStack_c;
    return param_2;
  }
  iVar3 = FUN_00647e40(param_3,s_Render_0072ef5c);
  if (iVar3 == 0) {
    FUN_00406a80();
    bVar1 = *(byte *)(param_1 + 0x1d2);
    uStack_4bc = 3;
    *param_2 = 3;
    uStack_268 = bVar1 >> 1 & 1;
    FUN_00424770(auStack_4b4);
    ExceptionList = pvStack_c;
    return param_2;
  }
  iVar3 = FUN_00647e40(param_3,s_Splash_0072ef54);
  if (iVar3 == 0) {
    FUN_00406a80();
    bVar1 = *(byte *)(param_1 + 0x1d3);
    uStack_4bc = 3;
    *param_2 = 3;
    uStack_268 = bVar1 & 1;
    FUN_00424770(auStack_4b4);
    ExceptionList = pvStack_c;
    return param_2;
  }
  iVar3 = FUN_00647e40(param_3,s_Quad_Size__cm__0072eec4);
  if (iVar3 == 0) {
    FUN_00406a80();
    uStack_26c = *(undefined4 *)(param_1 + 0x160);
    goto LAB_004ecc94;
  }
  iVar3 = FUN_00647e40(param_3,s_UV_Density__cm_tile__0072eeac);
  if (iVar3 == 0) {
    FUN_00406a80();
    uStack_26c = *(undefined4 *)(param_1 + 0x17c);
    goto LAB_004ed73f;
  }
  iVar3 = FUN_00647e40(param_3,s_Alpha_Minimum_0072ee9c);
  if (iVar3 == 0) {
    FUN_00406a80();
    uStack_270 = (uint)*(byte *)(param_1 + 0x1d0);
    uStack_4bc = 1;
    *param_2 = 1;
    FUN_00424770(auStack_4b4);
    ExceptionList = pvStack_c;
    return param_2;
  }
  iVar3 = FUN_00647e40(param_3,s_Alpha_Maximum_0072ee8c);
  if (iVar3 == 0) {
    FUN_00406a80();
    uStack_270 = (uint)*(byte *)(param_1 + 0x1d1);
    goto LAB_004ed43b;
  }
  FUN_00406a80();
  iVar3 = FUN_00647cf0(&DAT_00728df0);
  iVar4 = FUN_00647e80(param_3,&DAT_00728df0,iVar3);
  if (iVar4 == 0) {
    iVar4 = FUN_00647cf0(param_3);
    if (iVar3 == iVar4) {
      uStack_299 = *(undefined1 *)(param_1 + 0x177);
      uStack_29a = *(undefined1 *)(param_1 + 0x176);
      uStack_29b = *(undefined1 *)(param_1 + 0x175);
      uStack_29c = *(undefined1 *)(param_1 + 0x174);
      uStack_4bc = 0x11;
      *param_2 = 0x11;
      FUN_00424770(auStack_4b4);
      ExceptionList = pvStack_c;
      return param_2;
    }
    iVar3 = iVar3 + param_3;
    iVar4 = FUN_00647e40(&DAT_00728244,iVar3);
    if (iVar4 == 0) {
      uStack_270 = (uint)*(byte *)(param_1 + 0x176);
      goto LAB_004ecfc3;
    }
    iVar4 = FUN_00647e40(&DAT_00728240,iVar3);
    if (iVar4 == 0) {
      bVar1 = *(byte *)(param_1 + 0x175);
    }
    else {
      iVar4 = FUN_00647e40(&DAT_0072823c,iVar3);
      if (iVar4 == 0) {
        uStack_270 = (uint)*(byte *)(param_1 + 0x174);
        goto LAB_004ecfc3;
      }
      iVar3 = FUN_00647e40(&DAT_00728238,iVar3);
      if (iVar3 != 0) goto LAB_004ecfe7;
      bVar1 = *(byte *)(param_1 + 0x177);
    }
    uStack_270 = (uint)bVar1;
LAB_004ecfc3:
    uStack_4bc = 1;
    *param_2 = 1;
    FUN_00424770(auStack_4b4);
    ExceptionList = pvStack_c;
    return param_2;
  }
LAB_004ecfe7:
  iVar3 = FUN_00647e40(param_3,s_Normal_Exaggeration_0072ee78);
  if (iVar3 != 0) {
    iVar3 = FUN_00647e40(param_3,s_Freeze_Distance_0072ef44);
    if (iVar3 == 0) {
      FUN_00406a80();
      uStack_26c = *(undefined4 *)(param_1 + 0x1c4);
    }
    else {
      iVar3 = FUN_00647e40(param_3,s_Interactive_0072ecb4);
      if (iVar3 == 0) {
        FUN_00406a80();
        bVar1 = *(byte *)(param_1 + 0x1d2);
        uStack_4bc = 3;
        *param_2 = 3;
        uStack_268 = bVar1 & 1;
        FUN_00424770(auStack_4b4);
        ExceptionList = pvStack_c;
        return param_2;
      }
      iVar3 = FUN_00647e40(param_3,s_Max_Interactive_Amp_0072eed4);
      if (iVar3 == 0) {
        FUN_00406a80();
        uStack_26c = *(undefined4 *)(param_1 + 0x1c8);
        goto LAB_004ecc94;
      }
      iVar3 = FUN_00647e80(param_3,s_Water_Heights_Height_0072f008,0x15);
      if (iVar3 == 0) {
        iVar3 = FUN_00648730(param_3 + 0x14);
        FUN_00406a80();
        uStack_4bc = 2;
        uStack_26c = 0x42c80000;
        if ((-1 < iVar3) && (iVar3 < 0xb)) {
          uStack_26c = *(undefined4 *)(param_1 + 400 + iVar3 * 4);
          *param_2 = 2;
          FUN_00424770(auStack_4b4);
          ExceptionList = pvStack_c;
          return param_2;
        }
      }
      else {
        iVar3 = FUN_00647e80(param_3,s_Water_Heights_Height_0072f008,0x15);
        if (iVar3 == 0) {
          iVar3 = FUN_00648730(param_3 + 0x14);
          FUN_00406a80();
          uStack_26c = 0x42c80000;
          if ((iVar3 < 0) || (10 < iVar3)) {
LAB_004ecc42:
            uStack_4bc = 2;
            *param_2 = 2;
            FUN_00424770(auStack_4b4);
            ExceptionList = pvStack_c;
            return param_2;
          }
          uStack_26c = *(undefined4 *)(param_1 + 400 + iVar3 * 4);
          goto LAB_004ecc94;
        }
        iVar3 = FUN_00647ed0(param_3,s_Texture_Resource_0072ee64);
        if (iVar3 == 0) {
          if ((*(byte *)(param_1 + 0x1d2) & 4) != 0) {
            FUN_00406a80();
            uStack_4bc = 7;
            auStack_4b4[0]._0_1_ = 0;
            *param_2 = 7;
            FUN_00424770(auStack_4b4);
            ExceptionList = pvStack_c;
            return param_2;
          }
          iVar3 = FUN_00647e40(param_3,s_Texture_Resource_0072ee64);
          if (iVar3 == 0) {
            FUN_00406a80();
            uStack_4bc = 7;
            puVar5 = (undefined1 *)FUN_005493e0(param_1 + 0x1e0);
            if (puVar5 == (undefined1 *)0x0) {
              puVar5 = &DAT_0075b6e0;
            }
            FUN_00647d70(auStack_4b4,puVar5,0x200);
            uStack_2b5 = 0;
            *param_2 = uStack_4bc;
            FUN_00424770(auStack_4b4);
            ExceptionList = pvStack_c;
            return param_2;
          }
        }
        iVar3 = FUN_00647ed0(param_3,s_Reflection_Map_0072ee54);
        if (iVar3 == 0) {
          if ((*(byte *)(param_1 + 0x1d2) & 8) != 0) {
            FUN_00406a80();
            uStack_4bc = 7;
            auStack_4b4[0]._0_1_ = 0;
            *param_2 = 7;
            FUN_00424770(auStack_4b4);
            ExceptionList = pvStack_c;
            return param_2;
          }
          iVar3 = FUN_00647e40(param_3,s_Reflection_Map_0072ee54);
          if (iVar3 == 0) {
            FUN_00406a80();
            uStack_4bc = 7;
            puVar5 = (undefined1 *)FUN_005493e0(param_1 + 0x1e4);
            if (puVar5 == (undefined1 *)0x0) {
              puVar5 = &DAT_0075b6e0;
            }
            FUN_00647d70(auStack_4b4,puVar5,0x200);
            uStack_2b5 = 0;
            *param_2 = uStack_4bc;
            FUN_00424770(auStack_4b4);
            ExceptionList = pvStack_c;
            return param_2;
          }
        }
        iVar3 = FUN_00647ed0(param_3,s_Gloss_Map_0072ee48);
        if (iVar3 == 0) {
          if ((*(byte *)(param_1 + 0x1d2) & 0x10) != 0) {
            FUN_00406a80();
            uStack_4bc = 7;
            auStack_4b4[0]._0_1_ = 0;
            *param_2 = 7;
            FUN_00424770(auStack_4b4);
            ExceptionList = pvStack_c;
            return param_2;
          }
          iVar3 = FUN_00647e40(param_3,s_Gloss_Map_0072ee48);
          if (iVar3 == 0) {
            FUN_00406a80();
            uStack_4bc = 7;
            puVar5 = (undefined1 *)FUN_005493e0(param_1 + 0x1e8);
            if (puVar5 == (undefined1 *)0x0) {
              puVar5 = &DAT_0075b6e0;
            }
            FUN_00647d70(auStack_4b4,puVar5,0x200);
            *param_2 = uStack_4bc;
            uStack_2b5 = 0;
            FUN_00424770(auStack_4b4);
            ExceptionList = pvStack_c;
            return param_2;
          }
        }
        iVar3 = FUN_00647e40(param_3,s_Pain_Mode_0072ee3c);
        if (iVar3 == 0) {
          FUN_00406a80();
          uStack_270 = *(uint *)(param_1 + 0x180);
LAB_004ed43b:
          uStack_4bc = 1;
          *param_2 = 1;
          FUN_00424770(auStack_4b4);
          ExceptionList = pvStack_c;
          return param_2;
        }
        iVar3 = FUN_00647e40(param_3,s_Pain_Freq__sec__0072ee2c);
        if (iVar3 == 0) {
          FUN_00406a80();
          uStack_26c = *(undefined4 *)(param_1 + 0x184);
        }
        else {
          iVar3 = FUN_00647e40(param_3,s_Poison_Duration__secs___hits_evr_0072ee00);
          if (iVar3 == 0) {
            FUN_00406a80();
            uStack_26c = *(undefined4 *)(param_1 + 0x188);
            uStack_4bc = 2;
            *param_2 = 2;
            FUN_00424770(auStack_4b4);
            ExceptionList = pvStack_c;
            return param_2;
          }
          iVar3 = FUN_00647e40(param_3,s_Pain_Amount_0072edf4);
          if (iVar3 == 0) {
            FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
            FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
            uStack_26c = *(undefined4 *)(param_1 + 0x18c);
            uStack_4bc = 2;
            *param_2 = 2;
            FUN_00424770(auStack_4b4);
            ExceptionList = pvStack_c;
            return param_2;
          }
          iVar3 = 0;
          while( true ) {
            FUN_00649920(auStack_4c0,s_Wave__d_Rotation_0072edd8,iVar3);
            uStack_4 = 0;
            uVar6 = FUN_00649940();
            iVar4 = FUN_00647e40(param_3,uVar6);
            uStack_4 = 0xffffffff;
            FUN_00649950();
            if (iVar4 == 0) break;
            FUN_00649920(auStack_4c4,s_Wave__d_Amplitude_0072edc4,iVar3);
            uStack_4 = 1;
            uVar6 = FUN_00649940();
            iVar4 = FUN_00647e40(param_3,uVar6);
            uStack_4 = 0xffffffff;
            FUN_00649950();
            if (iVar4 == 0) {
              FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
              FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
              uStack_26c = *(undefined4 *)(param_1 + 0x2c0 + iVar3 * 4);
              uStack_4bc = 2;
              *param_2 = 2;
              puVar7 = auStack_4b4;
              puVar8 = param_2 + 2;
              for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              FUN_00480f60(auStack_2b4);
              FUN_00425250(&uStack_29c);
              FUN_004357e0(auStack_298);
              FUN_004357e0(auStack_28c);
              param_2[0x91] = uStack_278;
              param_2[0x90] = uStack_27c;
              param_2[0x92] = uStack_274;
              param_2[0x94] = uStack_26c;
              param_2[0x93] = uStack_270;
              param_2[0x95] = uStack_268;
              ExceptionList = pvStack_c;
              return param_2;
            }
            FUN_00649920(auStack_4cc,s_Wave__d_Wavelength_0072edb0,iVar3);
            uStack_4 = 2;
            uVar6 = FUN_00649940();
            iVar4 = FUN_00647e40(param_3,uVar6);
            uStack_4 = 0xffffffff;
            FUN_00649950();
            if (iVar4 == 0) {
              FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
              FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
              uStack_26c = *(undefined4 *)(param_1 + 0x2d0 + iVar3 * 4);
              uStack_4bc = 2;
              *param_2 = 2;
              puVar7 = auStack_4b4;
              puVar8 = param_2 + 2;
              for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              FUN_00480f60(auStack_2b4);
              FUN_00425250(&uStack_29c);
              FUN_004357e0(auStack_298);
              FUN_004357e0(auStack_28c);
              param_2[0x90] = uStack_27c;
              param_2[0x91] = uStack_278;
              param_2[0x92] = uStack_274;
              param_2[0x93] = uStack_270;
              param_2[0x94] = uStack_26c;
              param_2[0x95] = uStack_268;
              ExceptionList = pvStack_c;
              return param_2;
            }
            FUN_00649920(auStack_4c8,s_Wave__d_TimeScale_0072ed9c,iVar3);
            uStack_4 = 3;
            uVar6 = FUN_00649940();
            iVar4 = FUN_00647e40(param_3,uVar6);
            uStack_4 = 0xffffffff;
            FUN_00649950();
            if (iVar4 == 0) {
              FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
              FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
              uStack_14 = *(undefined4 *)(param_1 + 0x2f0 + iVar3 * 4);
              uStack_264 = 2;
              *param_2 = 2;
              FUN_00424770(auStack_25c);
              ExceptionList = pvStack_c;
              return param_2;
            }
            iVar3 = iVar3 + 1;
            if (3 < iVar3) {
              FUN_004e37d0(param_2,param_3);
              ExceptionList = pvStack_c;
              return param_2;
            }
          }
          FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
          FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
          uStack_26c = *(undefined4 *)(param_1 + 0x2e0 + iVar3 * 4);
        }
      }
    }
LAB_004ed73f:
    uStack_4bc = 2;
    *param_2 = 2;
    FUN_00424770(auStack_4b4);
    ExceptionList = pvStack_c;
    return param_2;
  }
  FUN_00406a80();
  uStack_26c = *(undefined4 *)(param_1 + 0x28c);
LAB_004ecc94:
  uStack_4bc = 2;
  *param_2 = 2;
  FUN_00424770(auStack_4b4);
  ExceptionList = pvStack_c;
  return param_2;
}

