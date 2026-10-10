
undefined4 * __thiscall FUN_004cca90(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 auStack_250 [127];
  undefined1 uStack_51;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [16];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = FUN_00647e40(param_3,s_Current_Length_0072d364);
  if (iVar1 == 0) {
    FUN_00406a80();
    uStack_8 = *(undefined4 *)(param_1 + 0x130);
  }
  else {
    iVar1 = FUN_00647e40(param_3,s_Desired_Length_0072d384);
    if (iVar1 == 0) {
      FUN_00406a80();
      uStack_8 = *(undefined4 *)(param_1 + 0x134);
      goto LAB_004cd104;
    }
    iVar1 = FUN_00647e40(param_3,s_Current_State_0072d374);
    if (iVar1 == 0) {
      FUN_00406a80();
      uStack_c = *(undefined4 *)(param_1 + 300);
      *param_2 = 1;
      FUN_00424770(auStack_250);
      return param_2;
    }
    iVar1 = FUN_00647e40(param_3,s_Rope_Type_0072d440);
    if (iVar1 == 0) {
      FUN_00406a80();
      uStack_c = *(undefined4 *)(param_1 + 0x188);
      *param_2 = 0xc;
      FUN_00424770(auStack_250);
      return param_2;
    }
    iVar1 = FUN_00647e40(param_3,s_EndAnchor_Locked_0072d404);
    if (iVar1 == 0) {
      FUN_00406a80();
      uStack_4 = *(undefined4 *)(param_1 + 0xc4);
LAB_004ccc00:
      *param_2 = 3;
      FUN_00424770(auStack_250);
      return param_2;
    }
    FUN_00406a80();
    iVar1 = FUN_00647cf0(s_EndAnchor_Pos_0072d3f4);
    iVar2 = FUN_00647e80(param_3,s_EndAnchor_Pos_0072d3f4,iVar1);
    if (iVar2 == 0) {
      iVar2 = FUN_00647cf0(param_3);
      if (iVar1 == iVar2) {
        uStack_34 = *(undefined4 *)(param_1 + 0xb4);
        uStack_30 = *(undefined4 *)(param_1 + 0xb8);
        uStack_2c = *(undefined4 *)(param_1 + 0xbc);
        *param_2 = 8;
        FUN_00424770(auStack_250);
        return param_2;
      }
      iVar1 = iVar1 + param_3;
      iVar2 = FUN_00647e40(&DAT_00724e78,iVar1);
      if (iVar2 == 0) {
        uStack_8 = *(undefined4 *)(param_1 + 0xb4);
LAB_004ccd40:
        *param_2 = 2;
        FUN_00424770(auStack_250);
        return param_2;
      }
      iVar2 = FUN_00647e40(&DAT_00724e74,iVar1);
      if (iVar2 == 0) {
        uStack_8 = *(undefined4 *)(param_1 + 0xb8);
        *param_2 = 2;
        FUN_00424770(auStack_250);
        return param_2;
      }
      iVar1 = FUN_00647e40(&DAT_00724e70,iVar1);
      if (iVar1 == 0) {
        uStack_8 = *(undefined4 *)(param_1 + 0xbc);
        goto LAB_004ccd40;
      }
    }
    iVar1 = FUN_00647e40(param_3,s_Wiggle_0072d3dc);
    if (iVar1 == 0) {
      FUN_00425440();
      uStack_4 = 0;
      *param_2 = 3;
      FUN_00424770(auStack_250);
      return param_2;
    }
    iVar1 = FUN_00647e40(param_3,s_DoesRegenerate_0072d24c);
    if (iVar1 == 0) {
      FUN_00425440();
      uStack_4 = *(undefined4 *)(param_1 + 0x108);
      goto LAB_004ccc00;
    }
    iVar1 = FUN_00647e40(param_3,s_Length_0072d2d4);
    if (iVar1 == 0) {
      FUN_00406a80();
      uStack_8 = *(undefined4 *)(param_1 + 200);
LAB_004cce14:
      *param_2 = 2;
      FUN_00424770(auStack_250);
      return param_2;
    }
    iVar1 = FUN_00647e40(param_3,s_SegmentLength_0072d3e4);
    if (iVar1 != 0) {
      iVar1 = FUN_00647e40(param_3,s_Weight_0072d2c0);
      if (iVar1 == 0) {
        FUN_00406a80();
        uStack_8 = *(undefined4 *)(param_1 + 0xd0);
LAB_004cd104:
        *param_2 = 2;
        FUN_00424770(auStack_250);
        return param_2;
      }
      iVar1 = FUN_00647e40(param_3,s_RenderHeigthAbove_0072d3c8);
      if (iVar1 == 0) {
        FUN_00406a80();
        uStack_8 = *(undefined4 *)(param_1 + 0xe8);
        goto LAB_004cce14;
      }
      iVar1 = FUN_00647e40(param_3,s_IsFallaway_0072d2a0);
      if (iVar1 == 0) {
        FUN_00406a80();
        uStack_4 = *(undefined4 *)(param_1 + 0xf0);
      }
      else {
        iVar1 = FUN_00647e40(param_3,s_RegenerationDelay_0072d418);
        if (iVar1 == 0) {
          FUN_00406a80();
          uStack_8 = *(undefined4 *)(param_1 + 0x104);
          goto LAB_004cd104;
        }
        iVar1 = FUN_00647e40(param_3,s_GrowRate_0072d230);
        if (iVar1 == 0) {
          FUN_00406a80();
          uStack_8 = *(undefined4 *)(param_1 + 0xfc);
          goto LAB_004cce14;
        }
        iVar1 = FUN_00647e40(param_3,s_ShrinkRate_0072d224);
        if (iVar1 == 0) {
          FUN_00406a80();
          uStack_8 = *(undefined4 *)(param_1 + 0x100);
          goto LAB_004ccac6;
        }
        iVar1 = FUN_00647e40(param_3,s_IsElevator_0072d294);
        if (iVar1 == 0) {
          FUN_00406a80();
          uStack_4 = *(undefined4 *)(param_1 + 0xf4);
          goto LAB_004ccc00;
        }
        iVar1 = FUN_00647e40(param_3,s_ElevatorDestLength_0072d42c);
        if (iVar1 == 0) {
          FUN_00406a80();
          uStack_8 = *(undefined4 *)(param_1 + 0xf8);
          goto LAB_004cce14;
        }
        iVar1 = FUN_00647e40(param_3,s_PainAtTop_0072d288);
        if (iVar1 != 0) {
          iVar1 = FUN_00647e40(param_3,s_PainDistAboveRope_0072d274);
          if (iVar1 == 0) {
            FUN_00406a80();
            uStack_8 = *(undefined4 *)(param_1 + 0x110);
          }
          else {
            iVar1 = FUN_00647e40(param_3,s_PainRadius_00725a64);
            if (iVar1 == 0) {
              FUN_00406a80();
              uStack_8 = *(undefined4 *)(param_1 + 0x114);
              *param_2 = 2;
              FUN_00424770(auStack_250);
              return param_2;
            }
            iVar1 = FUN_00647e40(param_3,s_PainAmount_0072d268);
            if (iVar1 == 0) {
              FUN_00406a80();
              uStack_8 = *(undefined4 *)(param_1 + 0x118);
              *param_2 = 2;
              FUN_00424770(auStack_250);
              return param_2;
            }
            iVar1 = FUN_00647e40(param_3,s_AttachWeight_0072d1f8);
            if (iVar1 != 0) {
              iVar1 = FUN_00647e40(param_3,s_AttachToObject_0072d394);
              if (iVar1 == 0) {
                FUN_00406a80();
                uStack_18 = *(undefined4 *)(param_1 + 0x168);
                uStack_14 = *(undefined4 *)(param_1 + 0x16c);
                *param_2 = 0xf;
                FUN_00424770(auStack_250);
                return param_2;
              }
              iVar1 = FUN_00647ed0(param_3,s_Texture___Top_0072d3b8);
              if (iVar1 == 0) {
                if ((*(byte *)(param_1 + 0x18c) & 2) != 0) {
                  FUN_00406a80();
                  auStack_250[0]._0_1_ = 0;
                  *param_2 = 7;
                  FUN_00424770(auStack_250);
                  return param_2;
                }
                iVar1 = FUN_00647e40(param_3,s_Texture___Top_0072d3b8);
                if (iVar1 == 0) {
                  FUN_00406a80();
                  puVar3 = (undefined1 *)FUN_005493e0(param_1 + 0xe0);
                  if (puVar3 == (undefined1 *)0x0) {
                    puVar3 = &DAT_0075b6e0;
                  }
                  FUN_00647d70(auStack_250,puVar3,0x200);
                  uStack_51 = 0;
                  *param_2 = 7;
                  FUN_00424770(auStack_250);
                  return param_2;
                }
              }
              iVar1 = FUN_00647ed0(param_3,s_Texture___Bottom_0072d3a4);
              if (iVar1 == 0) {
                if ((*(byte *)(param_1 + 0x18c) & 1) != 0) {
                  FUN_00406a80();
                  auStack_250[0]._0_1_ = 0;
                  *param_2 = 7;
                  FUN_00424770(auStack_250);
                  return param_2;
                }
                iVar1 = FUN_00647e40(param_3,s_Texture___Bottom_0072d3a4);
                if (iVar1 == 0) {
                  FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                  puVar3 = (undefined1 *)FUN_005493e0(param_1 + 0xdc);
                  if (puVar3 == (undefined1 *)0x0) {
                    puVar3 = &DAT_0075b6e0;
                  }
                  FUN_00647d70(auStack_250,puVar3,0x200);
                  *param_2 = 7;
                  uStack_51 = 0;
                  puVar4 = auStack_250;
                  puVar5 = param_2 + 2;
                  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
                    *puVar5 = *puVar4;
                    puVar4 = puVar4 + 1;
                    puVar5 = puVar5 + 1;
                  }
                  FUN_00480f60(auStack_50);
                  FUN_00425250(auStack_38);
                  FUN_004357e0(&uStack_34);
                  FUN_004357e0(auStack_28);
                  param_2[0x90] = uStack_18;
                  param_2[0x93] = uStack_c;
                  param_2[0x91] = uStack_14;
                  param_2[0x92] = uStack_10;
                  param_2[0x94] = uStack_8;
                  param_2[0x95] = uStack_4;
                  return param_2;
                }
              }
              FUN_004abdf0(param_2,param_3);
              return param_2;
            }
            FUN_00406a80();
            uStack_8 = *(undefined4 *)(param_1 + 0x170);
          }
          goto LAB_004cd104;
        }
        FUN_00406a80();
        uStack_4 = *(undefined4 *)(param_1 + 0x10c);
      }
      *param_2 = 3;
      goto LAB_004ccae2;
    }
    FUN_00406a80();
    uStack_8 = *(undefined4 *)(param_1 + 0xcc);
  }
LAB_004ccac6:
  *param_2 = 2;
LAB_004ccae2:
  FUN_00424770(auStack_250);
  return param_2;
}

