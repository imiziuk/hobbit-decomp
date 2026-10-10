
undefined4 __thiscall FUN_004dabc0(int *param_1,int param_2,int *param_3)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 auStack_5c [6];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [64];
  
  iVar2 = FUN_00647e40(param_2,s_Geometry_Resource_007299e4);
  if ((iVar2 == 0) || (iVar2 = FUN_00647e40(param_2,s_High_LOD_0072dfa8), iVar2 == 0)) {
    if ((*param_3 != 4) && (*param_3 != 7)) {
      return 0;
    }
    piVar5 = param_1 + 0x2a;
LAB_004dac7b:
    FUN_00549430(piVar5,param_3 + 2);
    uVar3 = (**(code **)(*param_1 + 0x28))();
    FUN_004d90d0(uVar3);
    return 1;
  }
  iVar2 = FUN_00647e40(param_2,s_Med_LOD_0072dfa0);
  if (iVar2 == 0) {
    if ((*param_3 != 4) && (*param_3 != 7)) {
      return 0;
    }
    piVar5 = param_1 + 0x2b;
    goto LAB_004dac7b;
  }
  iVar2 = FUN_00647e40(param_2,s_Low_LOD_0072df98);
  if (iVar2 == 0) {
    if ((*param_3 != 4) && (*param_3 != 7)) {
      return 0;
    }
    piVar5 = param_1 + 0x2c;
    goto LAB_004dac7b;
  }
  iVar2 = FUN_00647e40(param_2,s_High_Med_Distance_0072df84);
  if (iVar2 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    param_1[0x3b] = param_3[0x94];
    return 1;
  }
  iVar2 = FUN_00647e40(param_2,s_Med_Low_Distance_0072df70);
  if (iVar2 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    param_1[0x3c] = param_3[0x94];
    return 1;
  }
  iVar2 = FUN_00647e40(param_2,s_Transition_Time__sec__0072df58);
  if (iVar2 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    param_1[0x3d] = param_3[0x94];
    return 1;
  }
  iVar2 = FUN_00647e40(param_2,s_Max_Pitch_0072df3c);
  if (iVar2 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    param_1[0x2d] = param_3[0x94];
    return 1;
  }
  iVar2 = FUN_00647e40(param_2,s_Max_Roll_0072df30);
  if (iVar2 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    param_1[0x2e] = param_3[0x94];
    return 1;
  }
  iVar2 = FUN_00647e40(param_2,s_Base_Roll_0072df24);
  if (iVar2 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    param_1[0x2f] = param_3[0x94];
    return 1;
  }
  iVar2 = FUN_00647e40(param_2,s_Time_Scale_0072df08);
  if (iVar2 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    param_1[0x32] = param_3[0x94];
    return 1;
  }
  iVar2 = FUN_00647cf0(&DAT_00728df0);
  iVar4 = FUN_00647e80(param_2,&DAT_00728df0,iVar2);
  if (iVar4 == 0) {
    iVar4 = FUN_00647cf0(param_2);
    if (iVar2 == iVar4) {
      if (*param_3 == 0x11) {
        *(undefined1 *)((int)param_1 + 0xeb) = *(undefined1 *)((int)param_3 + 0x223);
        *(undefined1 *)((int)param_1 + 0xea) = *(undefined1 *)((int)param_3 + 0x222);
        *(undefined1 *)((int)param_1 + 0xe9) = *(undefined1 *)((int)param_3 + 0x221);
        *(char *)(param_1 + 0x3a) = (char)param_3[0x88];
      }
    }
    else {
      iVar2 = iVar2 + param_2;
      iVar4 = FUN_00647e40(&DAT_00728244,iVar2);
      if (iVar4 == 0) {
        if (*param_3 == 1) {
          *(char *)((int)param_1 + 0xea) = (char)param_3[0x93];
        }
      }
      else {
        iVar4 = FUN_00647e40(&DAT_00728240,iVar2);
        if (iVar4 == 0) {
          if (*param_3 == 1) {
            *(char *)((int)param_1 + 0xe9) = (char)param_3[0x93];
          }
        }
        else {
          iVar4 = FUN_00647e40(&DAT_0072823c,iVar2);
          if (iVar4 == 0) {
            if (*param_3 == 1) {
              *(char *)(param_1 + 0x3a) = (char)param_3[0x93];
            }
          }
          else {
            iVar2 = FUN_00647e40(&DAT_00728238,iVar2);
            if ((iVar2 == 0) && (*param_3 == 1)) {
              *(char *)((int)param_1 + 0xeb) = (char)param_3[0x93];
            }
          }
        }
      }
    }
  }
  iVar2 = FUN_00647e40(param_2,s_Randomness__0_100__0072dfb4);
  if (iVar2 == 0) {
    if (*param_3 != 1) {
      return 0;
    }
    auStack_5c[0] = 0;
    iVar2 = __ftol();
    if (iVar2 < 1) {
LAB_004dafdb:
      iVar2 = 1;
    }
    else if (iVar2 < 0x11) {
      if (iVar2 < 1) goto LAB_004dafdb;
    }
    else {
      iVar2 = 0x10;
    }
    param_1[0x30] = iVar2;
  }
  iVar2 = FUN_00647e40(param_2,s___Phases__1_16__0072df14);
  if (iVar2 != 0) {
    iVar2 = FUN_00647e40(param_2,s_Freeze_Start_Distance_0072dedc);
    if (iVar2 == 0) {
      if (*param_3 != 2) {
        return 0;
      }
      fVar1 = (float)param_1[0x38] - DAT_006e92e8;
      if ((float)param_3[0x94] < fVar1 != (NAN((float)param_3[0x94]) || NAN(fVar1))) {
        fVar1 = (float)param_3[0x94];
      }
      param_1[0x39] = (int)fVar1;
    }
    iVar2 = FUN_00647e40(param_2,s_Freeze_End_Distance_0072def4);
    if (iVar2 == 0) {
      if (*param_3 != 2) {
        return 0;
      }
      fVar1 = (float)param_1[0x39] + DAT_006e92e8;
      if (fVar1 < (float)param_3[0x94]) {
        fVar1 = (float)param_3[0x94];
      }
      param_1[0x38] = (int)fVar1;
    }
    iVar2 = FUN_00647e40(param_2,s_OccluderOnDist_0072dddc);
    if ((iVar2 == 0) && (*param_3 == 2)) {
      param_1[0x3f] = param_3[0x94];
    }
    iVar2 = FUN_00647e40(param_2,s_OccluderWidth_0072ddcc);
    if ((iVar2 == 0) && (*param_3 == 2)) {
      param_1[0x40] = param_3[0x94];
    }
    iVar2 = FUN_00647e40(param_2,s_OccluderPosY_0072ddbc);
    if ((iVar2 == 0) && (*param_3 == 2)) {
      param_1[0x41] = param_3[0x94];
    }
    iVar2 = FUN_00647e40(param_2,s_OccluderNegY_0072ddac);
    if ((iVar2 == 0) && (*param_3 == 2)) {
      param_1[0x42] = param_3[0x94];
    }
    uVar3 = FUN_004ab750(param_2,param_3);
    iVar2 = FUN_00647ed0(param_2,s_Position_00724d1c);
    if ((((iVar2 == 0) || (iVar2 = FUN_00647ed0(param_2,s_Rotation_007207f0), iVar2 == 0)) ||
        (iVar2 = FUN_00647ed0(param_2,s_OccluderOnDist_0072dddc), iVar2 == 0)) ||
       (((iVar2 = FUN_00647ed0(param_2,s_OccluderWidth_0072ddcc), iVar2 == 0 ||
         (iVar2 = FUN_00647ed0(param_2,s_OccluderPosY_0072ddbc), iVar2 == 0)) ||
        (iVar2 = FUN_00647ed0(param_2,s_OccluderNegY_0072ddac), iVar2 == 0)))) {
      (**(code **)(*param_1 + 0x34))(auStack_40);
      piVar5 = (int *)FUN_004d91c0(auStack_5c,auStack_44);
      param_1[0xb] = *piVar5;
      param_1[0xc] = piVar5[1];
      param_1[0xd] = piVar5[2];
      param_1[0xe] = piVar5[3];
      param_1[0xf] = piVar5[4];
      param_1[0x10] = piVar5[5];
      (**(code **)(*param_1 + 0x14))(param_1 + 5,0);
    }
    return uVar3;
  }
  if (*param_3 != 1) {
    return 0;
  }
  uVar6 = param_3[0x93];
  if (uVar6 != 0) {
    if (0x10 < uVar6) {
      param_1[0x30] = 0x10;
      return 1;
    }
    if (uVar6 != 0) goto LAB_004db03b;
  }
  uVar6 = 1;
LAB_004db03b:
  param_1[0x30] = uVar6;
  return 1;
}

