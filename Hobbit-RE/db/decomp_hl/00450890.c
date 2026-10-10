
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00450890(int param_1,int param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  float fStack_c;
  float fStack_8;
  
  iVar5 = FUN_00647e40(param_2,s_Eels_Regenerate_00724e9c);
  if (iVar5 == 0) {
    if (*param_3 == 3) {
      *(ushort *)(param_1 + 0xf4) =
           (byte)((char)param_3[0x95] << 1 ^ (byte)*(ushort *)(param_1 + 0xf4)) & 2 ^
           *(ushort *)(param_1 + 0xf4);
      return 1;
    }
    return 0;
  }
  iVar5 = FUN_00647e40(param_2,s_Eel_Count_00724eac);
  if (iVar5 == 0) {
    if (*param_3 == 1) {
      iVar5 = param_3[0x93];
      *(int *)(param_1 + 0xb4) = iVar5;
      if (0x1f < iVar5) {
        iVar5 = 0x1f;
      }
      *(int *)(param_1 + 0xb4) = iVar5;
      return 1;
    }
    return 0;
  }
  iVar5 = FUN_00647e40(param_2,&DAT_00724ce0);
  if (iVar5 == 0) {
    if (*param_3 == 1) {
      *(int *)(param_1 + 0xb8) = param_3[0x93];
      return 1;
    }
    return 0;
  }
  iVar5 = FUN_00647e40(param_2,s_Maximum_Active_Eels_at_One_Time_00724e7c);
  fVar1 = DAT_0075c83c;
  fVar4 = DAT_0075c838;
  fVar2 = DAT_0075c834;
  if (iVar5 == 0) {
    if (*param_3 == 1) {
      DAT_0075c82c = param_3[0x93];
      if (0x1f < DAT_0075c82c) {
        DAT_0075c82c = 0x1f;
      }
      return 1;
    }
    return 0;
  }
  fStack_c = DAT_0075c834;
  fStack_8 = DAT_0075c838;
  iVar5 = FUN_00647cf0(s_AudibleRadius_00724cc4);
  iVar6 = FUN_00647e80(param_2,s_AudibleRadius_00724cc4,iVar5);
  if (iVar6 == 0) {
    iVar6 = FUN_00647cf0(param_2);
    if (iVar5 == iVar6) {
      if (*param_3 == 8) {
        fStack_c = (float)param_3[0x89];
        fVar1 = (float)param_3[0x8b];
        fStack_8 = (float)param_3[0x8a];
        goto LAB_00450aca;
      }
    }
    else {
      iVar5 = iVar5 + param_2;
      iVar6 = FUN_00647e40(&DAT_00724e78,iVar5);
      if (iVar6 == 0) {
        if (*param_3 == 2) {
          fStack_c = (float)param_3[0x94];
          goto LAB_00450aca;
        }
      }
      else {
        iVar6 = FUN_00647e40(&DAT_00724e74,iVar5);
        if (iVar6 == 0) {
          if (*param_3 == 2) {
            fStack_8 = (float)param_3[0x94];
LAB_00450aca:
            fVar2 = _DAT_006e99d0;
            if (fStack_c < _DAT_006e99d0 != (NAN(fStack_c) || NAN(_DAT_006e99d0))) {
              fVar2 = fStack_c;
            }
            if (DAT_0075c840 <= fVar2) {
              if (fStack_c < _DAT_006e99d0 == (NAN(fStack_c) || NAN(_DAT_006e99d0))) {
                fStack_c = 1e+06;
              }
            }
            else {
              fStack_c = DAT_0075c840;
            }
            if ((fStack_8 < _DAT_006e99d0 == (NAN(fStack_8) || NAN(_DAT_006e99d0))) ||
               (DAT_006e92e4 <= fStack_8)) {
              if (fStack_8 < _DAT_006e99d0 == (NAN(fStack_8) || NAN(_DAT_006e99d0))) {
                fStack_8 = 1e+06;
              }
            }
            else {
              fStack_8 = 0.0;
            }
            fVar2 = _DAT_006e99d0;
            if (fVar1 < _DAT_006e99d0 != (NAN(fVar1) || NAN(_DAT_006e99d0))) {
              fVar2 = fVar1;
            }
            DAT_0075c83c = DAT_0075c840;
            if ((DAT_0075c840 <= fVar2) &&
               (DAT_0075c83c = fVar1, fVar1 < _DAT_006e99d0 == (NAN(fVar1) || NAN(_DAT_006e99d0))))
            {
              DAT_0075c83c = _DAT_006e99d0;
            }
            DAT_0075c838 = fStack_8;
            DAT_0075c834 = fStack_c;
            return 1;
          }
        }
        else {
          iVar5 = FUN_00647e40(&DAT_00724e70,iVar5);
          if ((iVar5 == 0) && (*param_3 == 2)) {
            fVar1 = (float)param_3[0x94];
            goto LAB_00450aca;
          }
        }
      }
    }
  }
  iVar5 = FUN_00647e40(param_2,s_HoleAudibleRadius_00724cb0);
  if (iVar5 == 0) {
    if (*param_3 == 2) {
      DAT_0075c840 = (float)param_3[0x94];
      if ((DAT_0075c840 < _DAT_006e99d0 == (NAN(DAT_0075c840) || NAN(_DAT_006e99d0))) ||
         (DAT_006e92e4 <= DAT_0075c840)) {
        if (DAT_0075c840 < _DAT_006e99d0 == (NAN(DAT_0075c840) || NAN(_DAT_006e99d0))) {
          DAT_0075c840 = 1e+06;
        }
      }
      else {
        DAT_0075c840 = 0.0;
      }
      fVar3 = _DAT_006e99d0;
      if (fVar2 < _DAT_006e99d0 != (NAN(fVar2) || NAN(_DAT_006e99d0))) {
        fVar3 = fVar2;
      }
      if (DAT_0075c840 <= fVar3) {
        if (fVar2 < _DAT_006e99d0 == (NAN(fVar2) || NAN(_DAT_006e99d0))) {
          fStack_c = 1e+06;
        }
      }
      else {
        fStack_c = DAT_0075c840;
      }
      if ((fVar4 < _DAT_006e99d0 == (NAN(fVar4) || NAN(_DAT_006e99d0))) || (DAT_006e92e4 <= fVar4))
      {
        if (fVar4 < _DAT_006e99d0 == (NAN(fVar4) || NAN(_DAT_006e99d0))) {
          fStack_8 = 1e+06;
        }
      }
      else {
        fStack_8 = 0.0;
      }
      fVar2 = _DAT_006e99d0;
      if (fVar1 < _DAT_006e99d0 != (NAN(fVar1) || NAN(_DAT_006e99d0))) {
        fVar2 = fVar1;
      }
      DAT_0075c83c = DAT_0075c840;
      if ((DAT_0075c840 <= fVar2) &&
         (DAT_0075c83c = fVar1, fVar1 < _DAT_006e99d0 == (NAN(fVar1) || NAN(_DAT_006e99d0)))) {
        DAT_0075c83c = _DAT_006e99d0;
      }
      DAT_0075c834 = fStack_c;
      DAT_0075c838 = fStack_8;
      return 1;
    }
    return 0;
  }
  iVar5 = FUN_00647e40(param_2,s_Eel_Tweaks_WhipAttackFreq_00724e48);
  if (iVar5 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    DAT_0075c84c = (float)param_3[0x94];
    if ((DAT_0075c84c < DAT_006e92e8 != (NAN(DAT_0075c84c) || NAN(DAT_006e92e8))) &&
       (DAT_0075c84c < DAT_006e92e4)) {
      DAT_0075c84c = 0.0;
      return 1;
    }
    if (DAT_0075c84c < DAT_006e92e8 == (NAN(DAT_0075c84c) || NAN(DAT_006e92e8))) {
      DAT_0075c84c = 1.0;
    }
    return 1;
  }
  iVar5 = FUN_00647e40(param_2,s_Eel_Tweaks_MovePatrolSpeed_00724e2c);
  if (iVar5 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    DAT_0075c850 = (float)param_3[0x94];
    if ((DAT_0075c850 < _DAT_006e99d0 != (NAN(DAT_0075c850) || NAN(_DAT_006e99d0))) &&
       (DAT_0075c850 < DAT_006e92e4)) {
      DAT_0075c850 = 0.0;
      return 1;
    }
    if (DAT_0075c850 < _DAT_006e99d0 == (NAN(DAT_0075c850) || NAN(_DAT_006e99d0))) {
      DAT_0075c850 = 1e+06;
    }
    return 1;
  }
  iVar5 = FUN_00647e40(param_2,s_Eel_Tweaks_MoveHuntSpeed_00724e10);
  if (iVar5 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    DAT_0075c854 = (float)param_3[0x94];
    if ((DAT_0075c854 < _DAT_006e99d0 != (NAN(DAT_0075c854) || NAN(_DAT_006e99d0))) &&
       (DAT_0075c854 < DAT_006e92e4)) {
      DAT_0075c854 = 0.0;
      return 1;
    }
    if (DAT_0075c854 < _DAT_006e99d0 == (NAN(DAT_0075c854) || NAN(_DAT_006e99d0))) {
      DAT_0075c854 = 1e+06;
    }
    return 1;
  }
  iVar5 = FUN_00647e40(param_2,s_Eel_Tweaks_IdleLengthMin_00724df4);
  if (iVar5 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    DAT_0075c858 = (float)param_3[0x94];
    fVar1 = DAT_0075c85c;
    if (DAT_0075c858 < DAT_0075c85c != (NAN(DAT_0075c858) || NAN(DAT_0075c85c))) {
      fVar1 = DAT_0075c858;
    }
    if (DAT_006e92e4 <= fVar1) {
      if (DAT_0075c858 < DAT_0075c85c == (NAN(DAT_0075c858) || NAN(DAT_0075c85c))) {
        DAT_0075c858 = DAT_0075c85c;
      }
      return 1;
    }
    DAT_0075c858 = 0.0;
    return 1;
  }
  iVar5 = FUN_00647e40(param_2,s_Eel_Tweaks_IdleLengthMax_00724dd8);
  if (iVar5 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    DAT_0075c85c = (float)param_3[0x94];
    fVar1 = _DAT_006e99d0;
    if (DAT_0075c85c < _DAT_006e99d0 != (NAN(DAT_0075c85c) || NAN(_DAT_006e99d0))) {
      fVar1 = DAT_0075c85c;
    }
    if (DAT_0075c858 <= fVar1) {
      if (DAT_0075c85c < _DAT_006e99d0 == (NAN(DAT_0075c85c) || NAN(_DAT_006e99d0))) {
        DAT_0075c85c = 1e+06;
      }
      return 1;
    }
    DAT_0075c85c = DAT_0075c858;
    return 1;
  }
  iVar5 = FUN_00647e40(param_2,s_Eel_Tweaks_NoiseMemoryTime_00724dbc);
  if (iVar5 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    DAT_0075c860 = (float)param_3[0x94];
    if ((DAT_0075c860 < _DAT_006e99d0 != (NAN(DAT_0075c860) || NAN(_DAT_006e99d0))) &&
       (DAT_0075c860 < DAT_006e92e4)) {
      DAT_0075c860 = 0.0;
      return 1;
    }
    if (DAT_0075c860 < _DAT_006e99d0 == (NAN(DAT_0075c860) || NAN(_DAT_006e99d0))) {
      DAT_0075c860 = 1e+06;
    }
    return 1;
  }
  iVar5 = FUN_00647e40(param_2,s_Eel_Tweaks_YawRate_00724eb8);
  if (iVar5 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    DAT_0075c864 = (float)param_3[0x94];
    if ((DAT_0075c864 < _DAT_006e99d0 != (NAN(DAT_0075c864) || NAN(_DAT_006e99d0))) &&
       (DAT_0075c864 < DAT_006e92e4)) {
      DAT_0075c864 = 0.0;
      return 1;
    }
    if (DAT_0075c864 < _DAT_006e99d0 == (NAN(DAT_0075c864) || NAN(_DAT_006e99d0))) {
      DAT_0075c864 = 1e+06;
    }
    return 1;
  }
  iVar5 = FUN_00647e40(param_2,s_Eel_Tweaks_AnimSpeed_00724da4);
  if (iVar5 != 0) {
    iVar5 = FUN_00647e40(param_2,s_Eel_Tweaks_BBoxInflateX_00724d8c);
    if (iVar5 == 0) {
      if (*param_3 != 2) {
        return 0;
      }
      DAT_0075c868 = (float)param_3[0x94];
      if ((DAT_0075c868 < _DAT_006e99d0 != (NAN(DAT_0075c868) || NAN(_DAT_006e99d0))) &&
         (DAT_0075c868 < _DAT_006ec214)) {
        DAT_0075c868 = -49.0;
        return 1;
      }
      if (DAT_0075c868 < _DAT_006e99d0 == (NAN(DAT_0075c868) || NAN(_DAT_006e99d0))) {
        DAT_0075c868 = 1e+06;
      }
      return 1;
    }
    iVar5 = FUN_00647e40(param_2,s_Eel_Tweaks_BBoxInflateY_00724d74);
    if (iVar5 == 0) {
      if (*param_3 != 2) {
        return 0;
      }
      DAT_0075c86c = (float)param_3[0x94];
      if ((DAT_0075c86c < _DAT_006e99d0 != (NAN(DAT_0075c86c) || NAN(_DAT_006e99d0))) &&
         (DAT_0075c86c < DAT_006e92e4)) {
        DAT_0075c86c = 0.0;
        return 1;
      }
      if (DAT_0075c86c < _DAT_006e99d0 == (NAN(DAT_0075c86c) || NAN(_DAT_006e99d0))) {
        DAT_0075c86c = 1e+06;
      }
      return 1;
    }
    iVar5 = FUN_00647e40(param_2,s_Eel_Tweaks_BBoxInflateZ_00724d5c);
    if (iVar5 != 0) {
      iVar5 = FUN_00647e40(param_2,s_Eel_Tweaks_BurstHeightMod_00724d40);
      if (iVar5 != 0) {
        uVar7 = FUN_004ab750(param_2,param_3);
        return uVar7;
      }
      if (*param_3 == 2) {
        DAT_0075c878 = (float)param_3[0x94];
        if ((DAT_0075c878 < _DAT_006e9590 != (NAN(DAT_0075c878) || NAN(_DAT_006e9590))) &&
           (DAT_0075c878 < _DAT_006ec0cc)) {
          DAT_0075c878 = -200.0;
          return 1;
        }
        if (DAT_0075c878 < _DAT_006e9590 == (NAN(DAT_0075c878) || NAN(_DAT_006e9590))) {
          DAT_0075c878 = 500.0;
        }
        return 1;
      }
      return 0;
    }
    if (*param_3 != 2) {
      return 0;
    }
    DAT_0075c870 = (float)param_3[0x94];
    if ((DAT_0075c870 < _DAT_006e99d0 != (NAN(DAT_0075c870) || NAN(_DAT_006e99d0))) &&
       (DAT_0075c870 < _DAT_006ec214)) {
      DAT_0075c870 = -49.0;
      return 1;
    }
    if (DAT_0075c870 < _DAT_006e99d0 == (NAN(DAT_0075c870) || NAN(_DAT_006e99d0))) {
      DAT_0075c870 = 1e+06;
    }
    return 1;
  }
  if (*param_3 != 2) {
    return 0;
  }
  DAT_0075c87c = (float)param_3[0x94];
  if ((DAT_0075c87c < _DAT_006e958c != (NAN(DAT_0075c87c) || NAN(_DAT_006e958c))) &&
     (DAT_0075c87c < _DAT_006e9360)) {
    DAT_0075c87c = 0.01;
    return 1;
  }
  if (DAT_0075c87c < _DAT_006e958c == (NAN(DAT_0075c87c) || NAN(_DAT_006e958c))) {
    DAT_0075c87c = 3.0;
  }
  return 1;
}

