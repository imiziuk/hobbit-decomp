
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004cc200(int param_1,undefined4 param_2,int *param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar4 = FUN_00647e40(param_2,s_Current_State_0072d374);
  if (iVar4 == 0) {
    if (*param_3 != 1) {
      return 0;
    }
    *(int *)(param_1 + 300) = param_3[0x93];
    return 1;
  }
  iVar4 = FUN_00647e40(param_2,s_Rope_Type_0072d440);
  if (iVar4 == 0) {
    if ((*param_3 != 0xc) && (*param_3 != 1)) {
      return 0;
    }
    iVar4 = param_3[0x93];
    *(int *)(param_1 + 0x188) = iVar4;
    if (2 < iVar4) {
      *(undefined4 *)(param_1 + 0x188) = 2;
    }
    if (*(int *)(param_1 + 0x188) < 0) {
      *(undefined4 *)(param_1 + 0x188) = 0;
    }
    return 1;
  }
  iVar4 = FUN_00647e40(param_2,s_Weight_0072d2c0);
  if (iVar4 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0xd0) = param_3[0x94];
    return 1;
  }
  iVar4 = FUN_00647e40(param_2,s_RenderHeigthAbove_0072d3c8);
  if (iVar4 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0xe8) = param_3[0x94];
    return 1;
  }
  iVar4 = FUN_00647e40(param_2,s_IsFallaway_0072d2a0);
  if (iVar4 == 0) {
    if (*param_3 != 3) {
      return 0;
    }
    *(int *)(param_1 + 0xf0) = param_3[0x95];
    return 1;
  }
  iVar4 = FUN_00647e40(param_2,s_IsElevator_0072d294);
  if (iVar4 == 0) {
    if (*param_3 != 3) {
      return 0;
    }
    *(int *)(param_1 + 0xf4) = param_3[0x95];
    return 1;
  }
  iVar4 = FUN_00647e40(param_2,s_RegenerationDelay_0072d418);
  if (iVar4 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0x104) = param_3[0x94];
    return 1;
  }
  iVar4 = FUN_00647e40(param_2,s_DoesRegenerate_0072d24c);
  if (iVar4 == 0) {
    if (*param_3 != 3) {
      return 0;
    }
    *(int *)(param_1 + 0x108) = param_3[0x95];
    return 1;
  }
  iVar4 = FUN_00647e40(param_2,s_GrowRate_0072d230);
  if (iVar4 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0xfc) = param_3[0x94];
    return 1;
  }
  iVar4 = FUN_00647e40(param_2,s_ShrinkRate_0072d224);
  if (iVar4 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0x100) = param_3[0x94];
    return 1;
  }
  iVar4 = FUN_00647e40(param_2,s_PainAtTop_0072d288);
  if (iVar4 == 0) {
    if (*param_3 != 3) {
      return 0;
    }
    *(int *)(param_1 + 0x10c) = param_3[0x95];
    return 1;
  }
  iVar4 = FUN_00647e40(param_2,s_PainDistAboveRope_0072d274);
  if (iVar4 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0x110) = param_3[0x94];
    return 1;
  }
  iVar4 = FUN_00647e40(param_2,s_PainRadius_00725a64);
  if (iVar4 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0x114) = param_3[0x94];
    return 1;
  }
  iVar4 = FUN_00647e40(param_2,s_PainAmount_0072d268);
  if (iVar4 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0x118) = param_3[0x94];
    return 1;
  }
  iVar4 = FUN_00647e40(param_2,s_AttachWeight_0072d1f8);
  if (iVar4 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0x170) = param_3[0x94];
    return 1;
  }
  iVar4 = FUN_00647ed0(param_2,s_ElevatorDestLength_0072d42c);
  if (iVar4 == 0) {
    fVar2 = (float)param_3[0x94];
    *(float *)(param_1 + 0xf8) = fVar2;
    if (fVar2 < *(float *)(param_1 + 0xcc) != (NAN(fVar2) || NAN(*(float *)(param_1 + 0xcc)))) {
      *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0xcc);
    }
    return 1;
  }
  iVar4 = FUN_00647e80(param_2,s_Position_00724d1c,8);
  if (iVar4 == 0) {
    uVar5 = FUN_004ab750(param_2,param_3);
    FUN_004c9290(0);
    return uVar5;
  }
  iVar4 = FUN_00647e40(param_2,s_EndAnchor_Locked_0072d404);
  if (iVar4 == 0) {
    if (*param_3 != 3) {
      return 0;
    }
    *(int *)(param_1 + 0xc4) = param_3[0x95];
    FUN_004cafe0();
    return 1;
  }
  iVar4 = FUN_00647e40(param_2,s_Wiggle_0072d3dc);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x120);
    if (0 < iVar4) {
      iVar6 = iVar4 / 3;
      if (iVar6 < iVar4) {
        iVar4 = iVar6 * 0x2c;
        do {
          iVar3 = *(int *)(param_1 + 0x124);
          fVar2 = *(float *)(iVar4 + 0x18 + iVar3) + _DAT_006ee2f0;
          pfVar1 = (float *)(iVar4 + 0x18 + iVar3);
          pfVar1[1] = *(float *)(iVar4 + 0x1c + iVar3);
          *pfVar1 = fVar2;
          pfVar1[2] = pfVar1[2];
          iVar6 = iVar6 + 1;
          iVar4 = iVar4 + 0x2c;
        } while (iVar6 < *(int *)(param_1 + 0x120));
      }
      FUN_004cafe0();
    }
    return 1;
  }
  iVar4 = FUN_00647e40(param_2,s_Desired_Length_0072d384);
  if (iVar4 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0x134) = param_3[0x94];
    return 1;
  }
  iVar4 = FUN_00647e40(param_2,s_Length_0072d2d4);
  if (iVar4 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 200) = param_3[0x94];
    FUN_004c9290(0);
    return 1;
  }
  iVar4 = FUN_00647e40(param_2,s_Current_Length_0072d364);
  if (iVar4 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0x130) = param_3[0x94];
    FUN_004c9290(1);
    return 1;
  }
  iVar4 = FUN_00647e40(param_2,s_SegmentLength_0072d3e4);
  if (iVar4 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0xcc) = param_3[0x94];
    FUN_004c9290(0);
    return 1;
  }
  iVar4 = FUN_00647e40(param_2,s_EndAnchor_Pos_0072d3f4);
  if (iVar4 == 0) {
    if (*param_3 != 8) {
      return 0;
    }
    *(int *)(param_1 + 0xb4) = param_3[0x89];
    *(int *)(param_1 + 0xb8) = param_3[0x8a];
    *(int *)(param_1 + 0xbc) = param_3[0x8b];
    FUN_004c9290(0);
    return 1;
  }
  iVar4 = FUN_00647e40(param_2,s_Anchor1_Pos_X_0072d474);
  if (iVar4 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0xb4) = param_3[0x94];
    FUN_004c9290(0);
    return 1;
  }
  iVar4 = FUN_00647e40(param_2,s_Anchor1_Pos_Y_0072d464);
  if (iVar4 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0xb8) = param_3[0x94];
    FUN_004c9290(0);
    return 1;
  }
  iVar4 = FUN_00647e40(param_2,s_Anchor1_Pos_Z_0072d454);
  if (iVar4 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0xbc) = param_3[0x94];
    FUN_004c9290(0);
    return 1;
  }
  iVar4 = FUN_00647e40(param_2,s_Texture___Top_0072d3b8);
  if (iVar4 == 0) {
    if ((*param_3 != 4) && (*param_3 != 7)) {
      return 0;
    }
    if ((char)param_3[2] == '\0') {
      uVar5 = FUN_005496c0(s_thornvine_xbmp_0072d144,s_Props_00720224);
      FUN_00549430(param_1 + 0xe0,uVar5);
      *(byte *)(param_1 + 0x18c) = *(byte *)(param_1 + 0x18c) | 2;
      return 1;
    }
    FUN_00549430(param_1 + 0xe0,param_3 + 2);
    *(byte *)(param_1 + 0x18c) = *(byte *)(param_1 + 0x18c) & 0xfd;
    return 1;
  }
  iVar4 = FUN_00647e40(param_2,s_Texture___Bottom_0072d3a4);
  if (iVar4 != 0) {
    iVar4 = FUN_00647e40(param_2,s_AttachToObject_0072d394);
    if (iVar4 == 0) {
      if (*param_3 != 0xf) {
        return 0;
      }
      *(int *)(param_1 + 0x168) = param_3[0x90];
      *(int *)(param_1 + 0x16c) = param_3[0x91];
      FUN_004cb990();
    }
    uVar5 = FUN_004ab750(param_2,param_3);
    return uVar5;
  }
  if ((*param_3 != 4) && (*param_3 != 7)) {
    return 0;
  }
  if ((char)param_3[2] == '\0') {
    uVar5 = FUN_005496c0(s_hangvine_xbmp_0072d154,s_Props_00720224);
    FUN_00549430(param_1 + 0xdc,uVar5);
    *(byte *)(param_1 + 0x18c) = *(byte *)(param_1 + 0x18c) | 1;
    return 1;
  }
  FUN_00549430(param_1 + 0xdc,param_3 + 2);
  *(byte *)(param_1 + 0x18c) = *(byte *)(param_1 + 0x18c) & 0xfe;
  return 1;
}

