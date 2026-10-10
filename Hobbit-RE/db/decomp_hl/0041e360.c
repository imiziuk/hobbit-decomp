
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0041e360(int *param_1,float param_2)

{
  uint *puVar1;
  int *piVar2;
  float fVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float *pfVar15;
  uint uVar16;
  float10 fVar17;
  float10 fVar18;
  longlong lVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  char *pcVar22;
  undefined4 uVar23;
  float afStack_3c [2];
  float local_34;
  float fStack_30;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cf420;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_bilbo__OnAdvanceLogic_007202e8);
  local_4 = 0;
  iVar5 = FUN_004698c0();
  if (iVar5 != 0) goto LAB_0041fb85;
  _DAT_0075ba38 = 1;
  FUN_0044c360();
  if (DAT_0075fbf4 != 0) {
    fVar17 = (float10)FUN_00434c10();
    FUN_00434c40(4,(float)fVar17);
  }
  fVar3 = (float)param_1[0x165c] - param_2;
  param_1[0x165c] = (int)fVar3;
  if (fVar3 < DAT_006e92e4 != (NAN(fVar3) || NAN(DAT_006e92e4))) {
    param_1[0x165c] = 0;
  }
  if (DAT_0075ba44 != 0) {
    (**(code **)(*param_1 + 0x14))(&DAT_0075b810,0);
    DAT_0075ba44 = 0;
    goto LAB_0041fb85;
  }
  param_1[0x248] = (int)param_2;
  if (param_1[0x4a] != 0) {
    FUN_0041fd30();
    *(undefined1 *)((int)param_1 + 0x4ea9) = 0xff;
    FUN_00467ed0(param_2);
    goto LAB_0041fb85;
  }
  iVar5 = FUN_00467e90();
  if (iVar5 == 0) {
    uVar23 = 0x3f490fdb;
  }
  else {
    uVar23 = 0x3fb2b8c3;
  }
  fVar17 = (float10)FUN_0064c8d0(uVar23);
  *(float *)(param_1[0x114] + 0x58) = (float)fVar17;
  fVar3 = (float)param_1[0x10c];
  param_1[0x35] = *(int *)(param_1[0x114] + 0x58);
  param_1[0x109] = 0;
  param_1[0x10c] = (int)(fVar3 - param_2);
  param_1[0x10e] = (int)((float)param_1[0x10e] - param_2);
  if (DAT_006e92e4 < fVar3 - param_2) {
    param_1[0x109] = 1;
  }
  param_1[0x10d] = (int)((float)param_1[0x10d] - param_2);
  param_1[0x1d4] = (int)((float)param_1[0x248] + (float)param_1[0x1d4]);
  fVar3 = (float)param_1[0xf9] - param_2;
  param_1[0xf9] = (int)fVar3;
  if (fVar3 < DAT_006e92e4 != (NAN(fVar3) || NAN(DAT_006e92e4))) {
    param_1[0xf9] = 0;
  }
  fVar3 = (float)param_1[0x101] - param_2;
  param_1[0x101] = (int)fVar3;
  if (fVar3 < DAT_006e92e4 != (NAN(fVar3) || NAN(DAT_006e92e4))) {
    param_1[0x101] = 0;
  }
  fVar3 = (float)param_1[0x119b] - (float)param_1[0x248];
  param_1[0x119b] = (int)fVar3;
  if (fVar3 < DAT_006e92e4 != (NAN(fVar3) || NAN(DAT_006e92e4))) {
    param_1[0x119b] = 0;
  }
  fVar3 = (float)param_1[0x1fe] - (float)param_1[0x248];
  param_1[0x1fe] = (int)fVar3;
  if (fVar3 < DAT_006e92e4 != (NAN(fVar3) || NAN(DAT_006e92e4))) {
    param_1[0x1fe] = 0;
  }
  fVar3 = (float)param_1[0xe8c] - (float)param_1[0x248];
  param_1[0xe8c] = (int)fVar3;
  if (fVar3 < DAT_006e92e4 != (NAN(fVar3) || NAN(DAT_006e92e4))) {
    param_1[0xe8c] = 0;
  }
  param_1[0x17ce] = (int)((float)param_1[0x17ce] - (float)param_1[0x248]);
  if ((param_1[0x17cd] != 0) && (iVar5 = FUN_00472df0(), iVar5 == 0)) {
    FUN_00426ed0();
  }
  if (DAT_006e92e4 < (float)param_1[0x17d8]) {
    fVar3 = (float)param_1[0x17d8] - (float)param_1[0x248];
    param_1[0x17d8] = (int)fVar3;
    if (fVar3 < DAT_006e92e4 != (NAN(fVar3) || NAN(DAT_006e92e4))) {
      param_1[0x17d8] = 0;
    }
  }
  if ((param_1[0x235] != 0x1a) &&
     ((NAN((float)param_1[0x17d8]) || NAN(DAT_006e92e4)) != ((float)param_1[0x17d8] == DAT_006e92e4)
     )) {
    if (param_1[0x17bf] == -1) goto LAB_0041e68c;
    FUN_00549470(param_1 + 0x17be);
    FUN_00549580(param_1 + 0x17be);
    iVar5 = FUN_0053cc70(s_equip_weapon_007202d8);
    if (param_1[0x17bf] == iVar5) goto LAB_0041e772;
    if (param_1[0x17bf] == -1) {
LAB_0041e68c:
      FUN_00549470(param_1 + 0x17be);
      FUN_00549580(param_1 + 0x17be);
      uVar21 = 0;
      uVar23 = FUN_0053cc70(s_blink_007202d0);
      FUN_005434b0(uVar23,uVar21);
      (**(code **)(param_1[0x17bd] + 0x10))(0x3f800000);
    }
    else {
      FUN_00549470(param_1 + 0x17be);
      FUN_00549580(param_1 + 0x17be);
      iVar5 = FUN_0053cc70(s_blink_007202d0);
      if (param_1[0x17bf] != iVar5) goto LAB_0041e68c;
    }
    if (param_1[0x17bf] != -1) {
      FUN_00549470(param_1 + 0x17be);
      FUN_00549580(param_1 + 0x17be);
      iVar5 = FUN_0053cc70(s_blink_007202d0);
      if ((param_1[0x17bf] == iVar5) &&
         ((0 < param_1[0x17c2] ||
          (local_34 = (float)(param_1[0x17c0] + -2),
          (float)(int)local_34 < (float)param_1[0x17c1] !=
          ((float)(int)local_34 == (float)param_1[0x17c1]))))) {
        iVar5 = FUN_00647b10(0,100);
        local_34 = (float)param_1[0x14d];
        if ((((float)(int)local_34 < DAT_006e92e8 !=
              (NAN((float)(int)local_34) || NAN(DAT_006e92e8))) && (iVar5 < 0x31)) ||
           (_DAT_006e999c <= (float)(int)local_34)) {
          (**(code **)(param_1[0x17bd] + 8))();
          param_1[0x17d8] = 0x41200000;
        }
      }
    }
  }
LAB_0041e772:
  if (((float)param_1[0x281] < _DAT_006e9554 != (NAN((float)param_1[0x281]) || NAN(_DAT_006e9554)))
     && (fVar3 = (float)param_1[0x281], param_1[0x281] = (int)((float)param_1[0x248] + fVar3),
        _DAT_006e9554 < (float)param_1[0x248] + fVar3)) {
    param_1[0x281] = 0x41200000;
  }
  fVar17 = (float10)FUN_00434ca0(0x37);
  if ((((NAN(fVar17) || NAN((float10)DAT_006e92e4)) == (fVar17 == (float10)DAT_006e92e4)) ||
      (fVar17 = (float10)FUN_00434ca0(0x36),
      (NAN(fVar17) || NAN((float10)DAT_006e92e4)) == (fVar17 == (float10)DAT_006e92e4))) ||
     (fVar17 = (float10)FUN_00434ca0(0x38),
     (NAN(fVar17) || NAN((float10)DAT_006e92e4)) == (fVar17 == (float10)DAT_006e92e4))) {
    fVar17 = (float10)FUN_00434ca0(0x37);
    if ((NAN(fVar17) || NAN((float10)DAT_006e92e4)) == (fVar17 == (float10)DAT_006e92e4)) {
      FUN_00434dd0(0x37,param_1[0x248]);
    }
    fVar17 = (float10)FUN_00434ca0(0x36);
    if ((NAN(fVar17) || NAN((float10)DAT_006e92e4)) == (fVar17 == (float10)DAT_006e92e4)) {
      FUN_00434dd0(0x36,param_1[0x248]);
    }
    fVar17 = (float10)FUN_00434ca0(0x38);
    if ((NAN(fVar17) || NAN((float10)DAT_006e92e4)) == (fVar17 == (float10)DAT_006e92e4)) {
      FUN_00434dd0(0x38,param_1[0x248]);
    }
  }
  if (((((param_1[0x1a8] != 0) || (param_1[0x94] != 0)) &&
       ((param_1[0x107] == 0 &&
        (((float)param_1[0x1671] < DAT_006e92e4 != ((float)param_1[0x1671] == DAT_006e92e4) &&
         (iVar5 = param_1[0x235], iVar5 != 5)))))) && (iVar5 != 0x10)) &&
     (((iVar5 != 0x17 && (iVar5 != 0x13)) && (iVar5 != 0x1a)))) {
    iVar5 = FUN_00423c80();
    if (iVar5 == 0) {
      if (param_1[0x17bf] != -1) {
        FUN_00549470(param_1 + 0x17be);
        FUN_00549580(param_1 + 0x17be);
        iVar5 = FUN_0053cc70(s_equip_weapon_007202d8);
        if (param_1[0x17bf] == iVar5) {
          (**(code **)(param_1[0x17bd] + 8))();
        }
      }
      if (param_1[0xf0] == 0) {
        if (param_1[0xf4] == 0) {
          if (param_1[0xec] == 0) {
            param_1[0x11b3] = -1;
          }
          else {
            param_1[0x11b3] = 2;
            param_1[0x19f] = 0;
            param_1[0x1a0] = 1;
            param_1[0x1a2] = 0;
          }
        }
        else {
          param_1[0x11b3] = 1;
          param_1[0x19f] = 0;
          param_1[0x1a0] = 0;
          param_1[0x1a2] = 1;
        }
      }
      else {
        param_1[0x11b3] = 0;
        param_1[0x19f] = 1;
        param_1[0x1a0] = 0;
        param_1[0x1a2] = 0;
      }
    }
    else {
      iVar5 = param_1[0x11b3];
      if (iVar5 == 0) {
        param_1[0x19f] = 1;
      }
      else if (iVar5 == 1) {
        param_1[0x1a2] = 1;
      }
      else if (iVar5 == 2) {
        param_1[0x1a0] = 1;
      }
    }
    uVar23 = 0;
    iVar5 = FUN_00423c80(0);
    FUN_00423c90(iVar5 == 0,uVar23);
    if (param_1[0x94] != 0) {
      param_1[0x94] = 0;
    }
  }
  if ((DAT_006e92e4 < (float)param_1[0x1671]) && (iVar5 = FUN_00423c80(), iVar5 != 0)) {
    iVar5 = param_1[0x11b3];
    if (iVar5 == 0) {
      param_1[0x19f] = 1;
    }
    else if (iVar5 == 1) {
      param_1[0x1a0] = 1;
    }
    else if (iVar5 == 2) {
      param_1[0x1a2] = 1;
    }
    FUN_00423c90(0,0);
  }
  if ((param_1[0x235] == 0x15) && (param_1[0xec] == 0)) {
    param_1[0x1a0] = 1;
  }
  piVar2 = param_1 + 0x17bd;
  local_34 = 0.0;
  if (param_1[0x17bf] == -1) {
    afStack_3c[0] = 0.0;
  }
  else {
    FUN_00549470(param_1 + 0x17be);
    FUN_00549580(param_1 + 0x17be);
    iVar5 = FUN_0053cc70(s_equip_weapon_007202d8);
    afStack_3c[0] = (float)(uint)(param_1[0x17bf] == iVar5);
  }
  if ((((((DAT_0075b674 == 0) && (iVar5 = param_1[0x235], iVar5 != 0x10)) && (iVar5 != 0x28)) &&
       ((iVar5 != 5 && (iVar5 != 6)))) && (iVar5 != 0x13)) &&
     (((iVar5 != 0x17 && (iVar5 != 0x26)) &&
      ((iVar5 != 0x25 && ((iVar5 != 0x1a && (param_1[0x1634] == 0)))))))) {
    if (param_1[0x1aa] != 0) {
      if (param_1[0xec] == 0) {
        if (param_1[0xf4] == 0) {
          if (param_1[0xf0] == 0) goto LAB_0041ebd3;
          fVar18 = (float10)FUN_00434ca0(2);
          fVar17 = (float10)DAT_006e92e4;
          param_1[0x19f] = 0;
          if ((NAN(fVar18) || NAN(fVar17)) == (fVar18 == fVar17)) {
            param_1[0x1a2] = 0;
            param_1[0x1a0] = 1;
            goto LAB_0041ebe5;
          }
          goto LAB_0041ebd9;
        }
        fVar18 = (float10)FUN_00434ca0(0x33);
        fVar17 = (float10)DAT_006e92e4;
        param_1[0x1a2] = 0;
        if ((NAN(fVar18) || NAN(fVar17)) != (fVar18 == fVar17)) {
          param_1[0x1a0] = 1;
          param_1[0x19f] = 0;
          goto LAB_0041ebe5;
        }
        param_1[0x19f] = 1;
      }
      else {
LAB_0041ebd3:
        param_1[0x19f] = 0;
LAB_0041ebd9:
        param_1[0x1a2] = 1;
      }
      param_1[0x1a0] = 0;
    }
LAB_0041ebe5:
    if ((param_1[0x19f] == 0) || ((param_1[0xf0] != 0 && (param_1[0x108] == 0)))) {
      if ((param_1[0x1a0] != 0) &&
         (((param_1[0xec] == 0 || (param_1[0x108] != 0)) &&
          (fVar17 = (float10)FUN_00434ca0(2),
          (NAN(fVar17) || NAN((float10)DAT_006e92e4)) == (fVar17 == (float10)DAT_006e92e4))))) {
        FUN_00435820(3,6,1);
        FUN_00435900(3);
        if (param_1[0xf0] == 0) {
          if (param_1[0xf4] != 0) {
            param_1[0x11b3] = 1;
          }
        }
        else {
          param_1[0x11b3] = 0;
        }
        iVar5 = FUN_00423c80();
        if ((iVar5 == 0) || (param_1[0xec] == 0)) {
          if (afStack_3c[0] == 0.0) {
            uVar23 = FUN_00435870();
            iVar5 = FUN_00435800(uVar23);
            if (iVar5 == 6) {
              FUN_00423c90(0,0);
              FUN_00659600(s_StonesReady_007202b8,1);
            }
          }
        }
        else {
          param_1[0xec] = 0;
          param_1[0xed] = 0;
        }
        iVar5 = param_1[0x235];
        if (((iVar5 == 0x23) || (iVar5 == 0xc)) || ((iVar5 == 0xd || (iVar5 == 0xe)))) {
          uVar23 = FUN_00435870();
          iVar5 = FUN_00435800(uVar23);
          if (iVar5 != 6) goto LAB_0041ed22;
          param_1[0xec] = 1;
          param_1[0xed] = 1;
          param_1[0xf0] = 0;
          param_1[0xf2] = 0;
          param_1[0x1398] = 0;
          FUN_00421f80();
          param_1[0xf4] = 0;
          param_1[0xf6] = 0;
        }
        else {
          local_34 = 1.4013e-45;
        }
      }
    }
    else {
      fVar17 = (float10)FUN_00434ca0(0x33);
      if ((NAN(fVar17) || NAN((float10)DAT_006e92e4)) == (fVar17 == (float10)DAT_006e92e4)) {
        FUN_00435820(0,3,1);
        FUN_00435900(0);
        if (param_1[0xec] == 0) {
          if (param_1[0xf4] != 0) {
            param_1[0x11b3] = 1;
          }
        }
        else {
          param_1[0x11b3] = 2;
        }
        iVar5 = FUN_00423c80();
        if ((iVar5 == 0) || (param_1[0xf0] == 0)) {
          if (afStack_3c[0] == 0.0) {
            uVar23 = FUN_00435870();
            iVar5 = FUN_00435800(uVar23);
            if ((iVar5 == 3) && (param_1[0x106] == 0)) {
              FUN_00423c90(0,0);
              FUN_00659600(s_StingReady_007202c4,1);
            }
          }
        }
        else {
          param_1[0xf0] = 0;
          param_1[0xf2] = 0;
          param_1[0x1398] = 0;
          FUN_00421f80();
        }
        iVar5 = param_1[0x235];
        if ((((iVar5 == 0x23) || (iVar5 == 0xc)) || (iVar5 == 0xd)) || (iVar5 == 0xe)) {
          uVar23 = FUN_00435870();
          iVar5 = FUN_00435800(uVar23);
          if (iVar5 == 3) {
            param_1[0xf0] = 1;
            param_1[0xf2] = 1;
            param_1[0xf4] = 0;
            param_1[0xf6] = 0;
LAB_0041ed22:
            param_1[0xec] = 0;
            param_1[0xed] = 0;
          }
          else {
            param_1[0xf0] = 0;
            param_1[0xf2] = 0;
            param_1[0x1398] = 0;
            FUN_00421f80();
          }
        }
        else {
          local_34 = 1.4013e-45;
        }
      }
    }
    if ((param_1[0x1a2] == 0) || ((param_1[0xf4] != 0 && (param_1[0x108] == 0)))) {
      if (param_1[0x1a1] != 0) {
        FUN_00435880();
      }
LAB_0041f031:
      if (local_34 == 0.0) goto LAB_0041f0df;
    }
    else {
      fVar17 = (float10)FUN_00434ca0(0x74);
      if (((NAN(fVar17) || NAN((float10)DAT_006e92e4)) == (fVar17 == (float10)DAT_006e92e4)) &&
         (fVar17 = (float10)FUN_00434ca0(0x35),
         (NAN(fVar17) || NAN((float10)DAT_006e92e4)) != (fVar17 == (float10)DAT_006e92e4))) {
        FUN_00434cf0(0x35);
      }
      fVar17 = (float10)FUN_00434ca0(0x35);
      if ((NAN(fVar17) || NAN((float10)DAT_006e92e4)) != (fVar17 == (float10)DAT_006e92e4))
      goto LAB_0041f031;
      FUN_00435820(1,5,1);
      FUN_00435900(1);
      if (param_1[0xec] == 0) {
        if (param_1[0xf0] != 0) {
          param_1[0x11b3] = 0;
        }
      }
      else {
        param_1[0x11b3] = 2;
      }
      iVar5 = FUN_00423c80();
      if ((iVar5 == 0) || (param_1[0xf4] == 0)) {
        if (afStack_3c[0] == 0.0) {
          uVar23 = FUN_00435870();
          iVar5 = FUN_00435800(uVar23);
          if (iVar5 == 5) {
            FUN_00423c90(0,0);
            FUN_00659600(s_StickReady_007202ac,1);
          }
        }
      }
      else {
        param_1[0xf4] = 0;
        param_1[0xf6] = 0;
      }
      iVar5 = param_1[0x235];
      if ((((iVar5 == 0x23) || (iVar5 == 0xc)) || (iVar5 == 0xd)) || (iVar5 == 0xe)) {
        uVar23 = FUN_00435870();
        iVar5 = FUN_00435800(uVar23);
        if (iVar5 == 5) {
          param_1[0xf4] = 1;
          param_1[0xf6] = 1;
          param_1[0xec] = 0;
          param_1[0xed] = 0;
          param_1[0xf0] = 0;
          param_1[0xf2] = 0;
          param_1[0x1398] = 0;
          FUN_00421f80();
        }
        else {
          param_1[0xf4] = 0;
          param_1[0xf6] = 0;
        }
        goto LAB_0041f031;
      }
    }
    if (param_1[0x17bf] != -1) {
      FUN_00549470(param_1 + 0x17be);
      FUN_00549580(param_1 + 0x17be);
      iVar5 = FUN_0053cc70(s_equip_weapon_007202d8);
      if (param_1[0x17bf] == iVar5) goto LAB_0041f0df;
    }
    (**(code **)(*piVar2 + 8))();
    FUN_00549470(param_1 + 0x17be);
    FUN_00549580(param_1 + 0x17be);
    uVar21 = 0;
    uVar23 = FUN_0053cc70(s_equip_weapon_007202d8);
    FUN_005434b0(uVar23,uVar21);
    (**(code **)(*piVar2 + 0x10))(0x3f800000);
    fVar17 = (float10)FUN_0064c6b0(0,(float)param_1[0x17c0] - DAT_006e92e8);
    param_1[0x17c1] = (int)(float)fVar17;
    param_1[0x17c6] = 0x40000000;
    param_1[4999] = 0;
  }
LAB_0041f0df:
  if (param_1[0x17bf] != -1) {
    FUN_00549470(param_1 + 0x17be);
    FUN_00549580(param_1 + 0x17be);
    iVar5 = FUN_0053cc70(s_equip_weapon_007202d8);
    if ((param_1[0x17bf] == iVar5) &&
       ((0 < param_1[0x17c2] ||
        (local_34 = (float)(param_1[0x17c0] + -2),
        (float)(int)local_34 < (float)param_1[0x17c1] !=
        ((float)(int)local_34 == (float)param_1[0x17c1]))))) {
      (**(code **)(*piVar2 + 8))();
    }
  }
  if ((param_1[0x1d0] != 0) && (DAT_00763ed8 == 0)) {
    FUN_00432940();
  }
  if (param_1[0x17b0] != 0) {
    FUN_0042fe80();
  }
  lVar19 = FUN_00468420();
  if (lVar19 != 0) {
    uVar20 = FUN_00468420();
    uVar16 = (uint)((ulonglong)uVar20 >> 0x20);
    afStack_3c[0] = (float)uVar20;
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    iVar6 = (int)*(short *)(&DAT_0076cd88 + (((uint)(float)uVar20 ^ uVar16) * -0xfb & 0xfff) * 2);
    for (iVar5 = iVar6; iVar5 != -1; iVar5 = (int)*(short *)(DAT_0076f648 + iVar5 * 0x14 + 0xe)) {
    }
    if (iVar6 == -1) {
LAB_0041f20b:
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649720();
    }
    else {
      do {
        piVar2 = (int *)(DAT_0076f648 + iVar6 * 0x14);
        iVar5 = *piVar2;
        if (((iVar5 != 0) && (*(float *)(iVar5 + 8) == afStack_3c[0])) &&
           (*(uint *)(iVar5 + 0xc) == uVar16)) {
          if (iVar6 == -1) goto LAB_0041f20b;
          uVar16 = *(uint *)(DAT_0076f648 + iVar6 * 0x14);
          bVar4 = *(byte *)(uVar16 + 0x7f);
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_00649720();
          if ((-(uint)((bVar4 & 0x10) != 0) & uVar16) != 0) {
            fVar3 = (float)param_1[0x48] - param_2;
            param_1[0x48] = (int)fVar3;
            if ((fVar3 < DAT_006e92e4 != (fVar3 == DAT_006e92e4)) && (param_1[399] != 0)) {
              FUN_00468450();
              FUN_00468410();
            }
          }
          goto LAB_0041f277;
        }
        iVar6 = (int)*(short *)((int)piVar2 + 0xe);
      } while (iVar6 != -1);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649720();
    }
  }
LAB_0041f277:
  uVar23 = FUN_0054c5c0(0x30,s_C__projects_meridian_Support_Obj_007200c0,0x7ef);
  lVar19 = FUN_0054c790();
  uVar16 = (uint)((ulonglong)lVar19 >> 0x20);
  afStack_3c[0] = (float)lVar19;
  FUN_0054c880(uVar23);
  if (lVar19 != 0) {
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    iVar6 = (int)*(short *)(&DAT_0076cd88 + (((uint)(float)lVar19 ^ uVar16) * -0xfb & 0xfff) * 2);
    for (iVar5 = iVar6; iVar5 != -1; iVar5 = (int)*(short *)(DAT_0076f648 + iVar5 * 0x14 + 0xe)) {
    }
    while (iVar6 != -1) {
      piVar2 = (int *)(DAT_0076f648 + iVar6 * 0x14);
      iVar5 = *piVar2;
      if (((iVar5 != 0) && (*(float *)(iVar5 + 8) == afStack_3c[0])) &&
         (*(uint *)(iVar5 + 0xc) == uVar16)) {
        if (iVar6 != -1) {
          uVar16 = *(uint *)(DAT_0076f648 + iVar6 * 0x14);
          local_4 = (uint)local_4._1_3_ << 8;
          uVar16 = -(uint)((*(byte *)(uVar16 + 0x7f) & 0x10) != 0) & uVar16;
          FUN_00649720();
          goto LAB_0041f367;
        }
        break;
      }
      iVar6 = (int)*(short *)((int)piVar2 + 0xe);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
    uVar16 = 0;
LAB_0041f367:
    if ((DAT_0075b6b0 != 0) ||
       ((((iVar5 = FUN_00647f20(uVar16 + 0xd0,s_Swordlight_007202a0), iVar5 != 0 &&
          (fVar17 = (float10)FUN_0064cd90(), (float10)*(float *)(param_1[0x114] + 0x164) < fVar17))
         && (iVar5 = FUN_006710d0(0x7d,0), iVar5 != 0)) &&
        (((iVar5 = FUN_006710d0(0x61,0), iVar5 != 0 && (iVar5 = FUN_006710d0(0x62,0), iVar5 != 0))
         && (fVar17 = (float10)FUN_0064cd90(), (float10)*(float *)(param_1[0x114] + 0x164) < fVar17)
         ))))) {
      FUN_0064cc30();
      FUN_0064cc00();
      if (param_1[0x235] == 0x1e) {
        if (DAT_0075b6b0 != 0) goto LAB_0041f4a0;
        FUN_004057b0();
        uVar21 = 0x80e;
        uVar23 = 6;
      }
      else {
        FUN_00402d40(0);
        uVar21 = 0x807;
        param_1[0x160] = 1;
        param_1[0x163] = param_1[0x163] + 1;
        param_1[0x164] = 1;
        param_1[0x167] = param_1[0x167] + 1;
        param_1[0x11d] = 0;
        uVar23 = 0x1e;
      }
      FUN_0043a3f0(uVar23,s_C__projects_meridian_Support_Obj_007200c0,uVar21);
    }
  }
LAB_0041f4a0:
  FUN_00426c60();
  FUN_004425a0();
  FUN_00649600(s_bilbo__CheckFor____0072028c);
  local_4 = CONCAT31(local_4._1_3_,3);
  uVar16 = FUN_0054d4a0(0x35);
  uVar7 = FUN_0054d4a0(0x34);
  uVar8 = FUN_0054d4a0(0x40);
  uVar9 = FUN_0054d4a0(0x42);
  uVar10 = FUN_0054d4a0(0x33);
  uVar11 = FUN_0054d4a0(0x24);
  uVar12 = FUN_0054d4a0(0x31);
  uVar13 = FUN_0054d4a0(0x26);
  uVar14 = FUN_0054d4a0(0x1c);
  fStack_1c = (float)param_1[7] - _DAT_006e9358;
  fStack_20 = (float)param_1[6] - _DAT_006e9358;
  fStack_24 = (float)param_1[5] - _DAT_006e9358;
  fStack_10 = (float)param_1[7] + _DAT_006e9358;
  fStack_14 = (float)param_1[6] + _DAT_006e9358;
  fStack_18 = (float)param_1[5] + _DAT_006e9358;
  FUN_0054d4f0(afStack_3c,0xffffffff,
               uVar16 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12 | uVar13 |
               uVar14 | 0x40283000,&fStack_24);
  FUN_0041fbd0(afStack_3c[0]);
  FUN_00447c60(afStack_3c[0]);
  FUN_00447160();
  FUN_00437880(afStack_3c[0]);
  FUN_00449b80(afStack_3c[0]);
  FUN_00423aa0(afStack_3c[0]);
  param_1[0x164e] = 0;
  param_1[0x164f] = 0;
  param_1[0x1650] = 0x7f7fffff;
  FUN_0044d410(afStack_3c[0]);
  uVar16 = FUN_0044d490();
  FUN_0044d530(afStack_3c[0]);
  uVar7 = FUN_0044d5b0();
  FUN_00448590(afStack_3c[0]);
  uVar8 = FUN_00448920();
  FUN_0044d650(afStack_3c[0]);
  uVar9 = FUN_0044d6d0();
  FUN_0044d940(afStack_3c[0]);
  uVar10 = FUN_0044dd20();
  FUN_0044d2f0(afStack_3c[0]);
  uVar11 = FUN_0044d3a0();
  uVar11 = uVar16 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11;
  if (param_1[0x235] != 0x28) {
    FUN_0044d770(afStack_3c[0]);
    uVar16 = FUN_0044d8d0();
    uVar11 = uVar11 | uVar16;
  }
  iVar5 = param_1[0x164e];
  iVar6 = param_1[0x164f];
  if (iVar5 != 0 || iVar6 != 0) {
    if ((iVar5 != param_1[0x13b2]) || (iVar6 != param_1[0x13b3])) {
      param_1[0x13b2] = 0;
      param_1[0x13b3] = 0;
    }
    if ((iVar5 != param_1[0x13b4]) || (iVar6 != param_1[0x13b5])) {
      param_1[0x13b4] = 0;
      param_1[0x13b5] = 0;
    }
    if ((iVar5 != param_1[0x163e]) || (iVar6 != param_1[0x163f])) {
      param_1[0x163e] = 0;
      param_1[0x163f] = 0;
    }
    if ((iVar5 != param_1[0x1646]) || (iVar6 != param_1[0x1647])) {
      param_1[0x1646] = 0;
      param_1[0x1647] = 0;
    }
    if ((iVar5 != param_1[0x1652]) || (iVar6 != param_1[0x1653])) {
      param_1[0x1652] = 0;
      param_1[0x1653] = 0;
    }
    if ((iVar5 != param_1[0x1640]) || (iVar6 != param_1[0x1641])) {
      param_1[0x1640] = 0;
      param_1[0x1641] = 0;
    }
    if ((iVar5 != param_1[0x1654]) || (iVar6 != param_1[0x1655])) {
      param_1[0x1654] = 0;
      param_1[0x1655] = 0;
    }
  }
  FUN_00439850(afStack_3c[0]);
  FUN_00422fc0(afStack_3c[0]);
  if (param_1[0x235] == 0x1e) {
    if (uVar11 == 0) {
LAB_0041f7b3:
      iVar5 = FUN_00472fa0();
      if (iVar5 != 0) goto LAB_0041f7bc;
    }
    else {
      param_1[0x196] = 0;
      param_1[400] = 0;
    }
  }
  else {
    if (uVar11 == 0) goto LAB_0041f7b3;
LAB_0041f7bc:
    param_1[0x194] = 0;
    param_1[0x196] = 0;
    param_1[400] = 0;
    FUN_00472fb0();
  }
  FUN_00588b20(afStack_3c[0]);
  param_1[0x1f1] = param_1[5];
  param_1[0x1f2] = param_1[6];
  param_1[499] = param_1[7];
  local_4 = local_4 & 0xffffff00;
  FUN_00649720();
  FUN_00420330();
  if (param_1[0x1b9] != 0) {
    FUN_0043a3f0(2,s_C__projects_meridian_Support_Obj_007200c0,0x8c1);
  }
  FUN_00439a60();
  FUN_00442f50();
  FUN_00446ed0();
  if (param_1[0x235] != 0x15) {
    local_34 = (float)param_1[0x186];
    fStack_30 = (float)param_1[0x187];
    if (DAT_00762b04 != 0) {
      local_34 = -local_34;
    }
    if (DAT_00762b08 != 0) {
      fStack_30 = -fStack_30;
    }
    FUN_0056b520(&local_34,param_1[0x248]);
  }
  FUN_0041fd30();
  FUN_00429100();
  FUN_00446010();
  FUN_0044ea20(param_2);
  FUN_00420560();
  param_1[0x100] = 0;
  param_1[0x169] = param_1[0x11d];
  param_1[0x168] = param_1[0x11c];
  param_1[0x16a] = param_1[0x11e];
  _DAT_0075ba38 = 0;
  if ((param_1[0x1d8] != 0) && ((*(byte *)((int)param_1 + 0xb1) & 0x10) != 0)) {
    uVar23 = 0xffffd8f0;
    if (DAT_0075fbf4 != 0) {
      uVar23 = 0;
    }
    (**(code **)(*param_1 + 0x128))(uVar23);
  }
  if (param_1[0x235] == 0x15) {
    *(undefined1 *)((int)param_1 + 0x4ea9) = 0xff;
  }
  else {
    iVar5 = __ftol();
    uVar16 = (uint)*(byte *)((int)param_1 + 0x4ea9) - iVar5;
    if (0xff < uVar16) {
      uVar16 = 0xff;
    }
    *(char *)((int)param_1 + 0x4ea9) = (char)uVar16;
    if ((DAT_00772858 != 7) && (DAT_00772858 != 8)) {
      FUN_0056bb40(&fStack_24);
      pfVar15 = (float *)(**(code **)(*param_1 + 0x28))();
      fStack_20 = 0.0;
      afStack_3c[0] =
           ((float)param_1[0x16] - (float)param_1[0x13]) *
           ((float)param_1[0x16] - (float)param_1[0x13]) +
           ((float)param_1[0x14] - (float)param_1[0x11]) *
           ((float)param_1[0x14] - (float)param_1[0x11]);
      local_34 = (fStack_1c - pfVar15[2]) * (fStack_1c - pfVar15[2]) +
                 (fStack_24 - *pfVar15) * (fStack_24 - *pfVar15);
      if (local_34 < _DAT_006e9994 == (NAN(local_34) || NAN(_DAT_006e9994))) {
        if (local_34 < afStack_3c[0] != (NAN(local_34) || NAN(afStack_3c[0]))) {
          uVar8 = (uint)*(byte *)((int)param_1 + 0x4ea9);
          uVar16 = __ftol();
          uVar7 = uVar8;
          if (uVar16 <= uVar8) {
            uVar7 = uVar16;
          }
          uVar9 = __ftol();
          if (uVar9 <= uVar8 - uVar7) {
            if (uVar8 < uVar16) {
              uVar16 = uVar8;
            }
            uVar9 = uVar8 - uVar16;
          }
          *(char *)((int)param_1 + 0x4ea9) = (char)uVar9;
        }
      }
      else {
        *(undefined1 *)((int)param_1 + 0x4ea9) = 0;
      }
    }
  }
  FUN_004f3140(param_1[0x13ae]);
  FUN_00587cf0(_DAT_006e936c <= (float)param_1[0x13ae]);
  if ((float)param_1[0x13ae] <= _DAT_006e936c) {
    *(byte *)((int)param_1 + 0x4ec1) = *(byte *)((int)param_1 + 0x4ec1) & 0xfe;
  }
  else {
    fVar3 = (float)param_1[0x13af] - param_2;
    *(byte *)((int)param_1 + 0x4ec1) = *(byte *)((int)param_1 + 0x4ec1) | 1;
    param_1[0x13af] = (int)fVar3;
    if (fVar3 < DAT_006e92e4 != (NAN(fVar3) || NAN(DAT_006e92e4))) {
      FUN_0044c120(8,0x3f800000);
      puVar1 = (uint *)(param_1 + 0x98);
      *puVar1 = *puVar1 ^ 1;
      if (*puVar1 == 0) {
        pcVar22 = s_Heartbeat_Down_0072026c;
      }
      else {
        pcVar22 = s_Heartbeat_Up_0072027c;
      }
      FUN_00659600(pcVar22,1);
      param_1[0x13af] =
           (int)(_DAT_0075ebc8 * _DAT_006e9990 + (float)param_1[0x13af] + _DAT_006e9568);
    }
  }
  FUN_00467ed0(param_2);
  FUN_004346d0();
  FUN_00422190();
  FUN_0044c860();
  iVar5 = FUN_00423c80();
  if (iVar5 != 0) {
    param_1[0xf0] = 0;
    param_1[0xf2] = 0;
    param_1[0x1398] = 0;
    param_1[0xf4] = 0;
    param_1[0xf6] = 0;
    param_1[0xec] = 0;
    param_1[0xed] = 0;
    FUN_00435900(0xffffffff);
  }
  FUN_0044c360();
LAB_0041fb85:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

