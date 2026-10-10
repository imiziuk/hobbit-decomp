
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004b1430(int *param_1,char *param_2,int *param_3)

{
  byte bVar1;
  char cVar2;
  code *pcVar3;
  undefined2 uVar4;
  int iVar5;
  float *pfVar6;
  undefined4 uVar7;
  undefined4 uStack_518;
  char *pcStack_514;
  float *pfStack_510;
  char acStack_500 [4];
  float fStack_4fc;
  char *pcStack_4f8;
  float fStack_4f4;
  undefined1 *puStack_4f0;
  float fStack_4ec;
  char *pcStack_4e8;
  float fStack_4e4;
  float fStack_4e0;
  char *pcStack_4dc;
  float fStack_4d8;
  float fStack_4d4;
  char *pcStack_4d0;
  float fStack_4cc;
  float fStack_4c8;
  char *pcStack_4c4;
  float fStack_4c0;
  undefined4 auStack_4bc [2];
  char acStack_4b4 [512];
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 auStack_264 [2];
  char acStack_25c [512];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d4096;
  pvStack_c = ExceptionList;
  pfStack_510 = (float *)&DAT_0072b9ac;
  pcStack_514 = param_2;
  uStack_518 = 0x4b1462;
  ExceptionList = &pvStack_c;
  iVar5 = FUN_00647ed0();
  if (iVar5 == 0) {
    bVar1 = *(byte *)((int)param_1 + 0x7f);
    *(byte *)((int)param_1 + 0x7f) = bVar1 | 1;
    if ((*(byte *)((int)param_1 + 0x16f) & 8) != 0) {
      *(byte *)((int)param_1 + 0x7f) = bVar1 & 0xfe;
    }
    ExceptionList = pvStack_c;
    return 1;
  }
  pfStack_510 = (float *)s_Position_00724d1c;
  pcStack_514 = param_2;
  uStack_518 = 0x4b1497;
  iVar5 = FUN_00647e40();
  if ((iVar5 == 0) && (param_1[0x59] != -1)) {
    acStack_500[0] = -1;
    acStack_500[1] = -1;
    acStack_500[2] = -1;
    acStack_500[3] = '\x7f';
    uStack_4 = 0;
    pfStack_510 = (float *)0x4b14cb;
    pfVar6 = (float *)(**(code **)(*param_1 + 0x28))();
    fStack_4fc = *pfVar6;
    pcStack_4f8 = (char *)pfVar6[1];
    fStack_4f4 = pfVar6[2];
    pfStack_510 = (float *)&DAT_0071ef4c;
    pcStack_514 = s_ShadowDisc_xbmp_0071ef3c;
    uStack_518 = 0x4b14f3;
    pfStack_510 = (float *)FUN_005496c0();
    pcStack_514 = acStack_500;
    uStack_518 = 0x4b1503;
    FUN_00549430();
    fStack_4ec = fStack_4fc - _DAT_006e99a0;
    pfStack_510 = (float *)0x1;
    puStack_4f0 = (undefined1 *)&pcStack_514;
    pcStack_514 = pcStack_4f8;
    pcStack_4d0 = pcStack_4f8;
    fStack_4e4 = fStack_4f4 - _DAT_006e99a0;
    uStack_518 = 0xffffffff;
    pcStack_4e8 = pcStack_4f8;
    pcStack_4dc = pcStack_4f8;
    pcStack_4c4 = pcStack_4f8;
    fStack_4d8 = fStack_4f4 + _DAT_006e99a0;
    fStack_4d4 = fStack_4fc + _DAT_006e99a0;
    fStack_4e0 = fStack_4ec;
    fStack_4cc = fStack_4d8;
    fStack_4c8 = fStack_4d4;
    fStack_4c0 = fStack_4e4;
    FUN_00406b70();
    puStack_4f0 = (undefined1 *)&uStack_518;
    FUN_00469af0(acStack_500);
    FUN_0054fc60(param_1[0x59],&fStack_4ec,0x43c80000);
    pfStack_510 = (float *)acStack_500;
    uStack_4 = 0xffffffff;
    pcStack_514 = (char *)0x4b15b8;
    FUN_00549580();
    pfStack_510 = (float *)acStack_500;
    pcStack_514 = (char *)0x4b15c7;
    FUN_00549350();
  }
  pfStack_510 = (float *)&DAT_0072bbd4;
  pcStack_514 = param_2;
  uStack_518 = 0x4b15d2;
  iVar5 = FUN_00647e40();
  if (iVar5 != 0) {
    pfStack_510 = (float *)s_Amount_0072bbcc;
    pcStack_514 = param_2;
    uStack_518 = 0x4b1abe;
    iVar5 = FUN_00647e40();
    if (iVar5 == 0) {
      if (*param_3 != 1) {
        ExceptionList = pvStack_c;
        return 0;
      }
      *(short *)((int)param_1 + 0x16a) = (short)param_3[0x93];
      ExceptionList = pvStack_c;
      return 1;
    }
    pfStack_510 = (float *)s_Rotates_Slowly_0072bc50;
    pcStack_514 = param_2;
    uStack_518 = 0x4b1afb;
    iVar5 = FUN_00647e40();
    if (iVar5 == 0) {
      if (*param_3 != 3) {
        ExceptionList = pvStack_c;
        return 0;
      }
      *(ushort *)((int)param_1 + 0x16e) =
           (byte)(*(byte *)(param_3 + 0x95) ^ (byte)*(ushort *)((int)param_1 + 0x16e)) & 1 ^
           *(ushort *)((int)param_1 + 0x16e);
      ExceptionList = pvStack_c;
      return 1;
    }
    pfStack_510 = (float *)s_Bobs_Slowly_0072bc44;
    pcStack_514 = param_2;
    uStack_518 = 0x4b1b49;
    iVar5 = FUN_00647e40();
    if (iVar5 == 0) {
      if (*param_3 != 3) {
        ExceptionList = pvStack_c;
        return 0;
      }
      *(ushort *)((int)param_1 + 0x16e) =
           (byte)((char)param_3[0x95] << 1 ^ (byte)*(ushort *)((int)param_1 + 0x16e)) & 2 ^
           *(ushort *)((int)param_1 + 0x16e);
      ExceptionList = pvStack_c;
      return 1;
    }
    pfStack_510 = (float *)s_Picked_Up_0072bc38;
    pcStack_514 = param_2;
    uStack_518 = 0x4b1b98;
    iVar5 = FUN_00647ed0();
    if ((iVar5 == 0) && ((*(byte *)((int)param_1 + 0x16e) & 4) != 0)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
    pfStack_510 = (float *)s_Picked_Up_0072bc38;
    pcStack_514 = param_2;
    uStack_518 = 0x4b1bb4;
    iVar5 = FUN_00647e40();
    if (iVar5 == 0) {
      if (*param_3 != 3) {
        ExceptionList = pvStack_c;
        return 0;
      }
      *(ushort *)((int)param_1 + 0x16e) =
           (byte)((char)param_3[0x95] << 2 ^ (byte)*(ushort *)((int)param_1 + 0x16e)) & 4 ^
           *(ushort *)((int)param_1 + 0x16e);
      ExceptionList = pvStack_c;
      return 1;
    }
    pfStack_510 = (float *)s_Regenerates_0072bba4;
    pcStack_514 = param_2;
    uStack_518 = 0x4b1c05;
    iVar5 = FUN_00647e40();
    if (iVar5 == 0) {
      if (*param_3 != 3) {
        ExceptionList = pvStack_c;
        return 0;
      }
      *(ushort *)((int)param_1 + 0x16e) =
           (byte)((char)param_3[0x95] << 4 ^ (byte)*(ushort *)((int)param_1 + 0x16e)) & 0x10 ^
           *(ushort *)((int)param_1 + 0x16e);
      ExceptionList = pvStack_c;
      return 1;
    }
    pfStack_510 = (float *)s_Does_Vacuum_0072bbf0;
    pcStack_514 = param_2;
    uStack_518 = 0x4b1c55;
    iVar5 = FUN_00647e40();
    if (iVar5 == 0) {
      if (*param_3 != 3) {
        ExceptionList = pvStack_c;
        return 0;
      }
      *(ushort *)((int)param_1 + 0x16e) =
           ((short)param_3[0x95] << 9 ^ *(ushort *)((int)param_1 + 0x16e)) & 0x200 ^
           *(ushort *)((int)param_1 + 0x16e);
      ExceptionList = pvStack_c;
      return 1;
    }
    pfStack_510 = (float *)s_Glow_Off_Distance_0072bc10;
    pcStack_514 = param_2;
    uStack_518 = 0x4b1cab;
    iVar5 = FUN_00647e40();
    if ((iVar5 == 0) && (*param_3 == 1)) {
      *(short *)(param_1 + 0x5e) = (short)param_3[0x93];
    }
    pfStack_510 = (float *)s_Glow_On_Distance_0072bbfc;
    pcStack_514 = param_2;
    uStack_518 = 0x4b1cd6;
    iVar5 = FUN_00647e40();
    if ((iVar5 == 0) && (*param_3 == 1)) {
      *(short *)((int)param_1 + 0x17a) = (short)param_3[0x93];
    }
    pfStack_510 = (float *)s_Regeneration_Time_0072bc24;
    pcStack_514 = param_2;
    uStack_518 = 0x4b1cfa;
    iVar5 = FUN_00647ed0();
    if (iVar5 == 0) {
      pfStack_510 = (float *)0x4b1d12;
      uVar4 = __ftol();
      *(undefined2 *)(param_1 + 0x5d) = uVar4;
      ExceptionList = pvStack_c;
      return 1;
    }
    pfStack_510 = (float *)param_3;
    pcStack_514 = param_2;
    uStack_518 = 0x4b1d29;
    uVar7 = FUN_004c49a0();
    param_1[0x4c] = 0x3f800000;
    param_1[0x4d] = 0x3f800000;
    param_1[0x4e] = 0x3f800000;
    ExceptionList = pvStack_c;
    return uVar7;
  }
  if ((*param_3 != 0xd) && (*param_3 != 4)) {
    ExceptionList = pvStack_c;
    return 0;
  }
  pfStack_510 = (float *)(param_3 + 2);
  pcStack_514 = (char *)0x4b1604;
  FUN_00649b20();
  pfStack_510 = &fStack_4ec;
  uStack_4 = 1;
  pcStack_514 = (char *)0x4b161e;
  pfStack_510 = (float *)FUN_00434eb0();
  pcStack_514 = (char *)0x4b1626;
  FUN_004b0eb0();
  uStack_4 = 0xffffffff;
  pfStack_510 = (float *)0x4b1636;
  FUN_00649ba0();
  switch((short)param_1[0x5b]) {
  case 1:
    pfStack_510 = (float *)0x7f7fffff;
    pcStack_514 = (char *)0x7f7fffff;
    uStack_518 = 0x7f7fffff;
    FUN_00404870();
    pfStack_510 = (float *)0xff7fffff;
    pcStack_514 = (char *)0xff7fffff;
    uStack_518 = 0xff7fffff;
    FUN_00404870();
    auStack_4bc[0] = 7;
    iVar5 = 0;
    do {
      cVar2 = s_inst_silverpenny_rgeom_0072bd00[iVar5];
      acStack_4b4[iVar5] = cVar2;
      iVar5 = iVar5 + 1;
    } while (cVar2 != '\0');
    pfStack_510 = (float *)auStack_4bc;
    goto LAB_004b1a99;
  case 2:
    pfStack_510 = (float *)0x7f7fffff;
    pcStack_514 = (char *)0x7f7fffff;
    uStack_518 = 0x7f7fffff;
    FUN_00404870();
    pfStack_510 = (float *)0xff7fffff;
    pcStack_514 = (char *)0xff7fffff;
    uStack_518 = 0xff7fffff;
    FUN_00404870();
    auStack_4bc[0] = 7;
    iVar5 = 0;
    do {
      cVar2 = s_stonepile_rgeom_0072247c[iVar5];
      acStack_4b4[iVar5] = cVar2;
      iVar5 = iVar5 + 1;
    } while (cVar2 != '\0');
    pfStack_510 = (float *)auStack_4bc;
    pcStack_514 = s_Geometry_Resource_007299e4;
    uStack_518 = 0x4b16b3;
    (**(code **)(*param_1 + 0xb4))();
    break;
  default:
    goto switchD_004b1647_caseD_3;
  case 4:
    pfStack_510 = (float *)0x7f7fffff;
    pcStack_514 = (char *)0x7f7fffff;
    uStack_518 = 0x7f7fffff;
    FUN_00404870();
    pfStack_510 = (float *)0xff7fffff;
    pcStack_514 = (char *)0xff7fffff;
    uStack_518 = 0xff7fffff;
    FUN_00404870();
    auStack_4bc[0] = 7;
    iVar5 = 0;
    do {
      cVar2 = s_health_rgeom_0072246c[iVar5];
      acStack_4b4[iVar5] = cVar2;
      iVar5 = iVar5 + 1;
    } while (cVar2 != '\0');
    pfStack_510 = (float *)auStack_4bc;
    goto LAB_004b1a99;
  case 9:
    pfStack_510 = (float *)0x7f7fffff;
    pcStack_514 = (char *)0x7f7fffff;
    uStack_518 = 0x7f7fffff;
    FUN_00404870();
    pfStack_510 = (float *)0xff7fffff;
    pcStack_514 = (char *)0xff7fffff;
    uStack_518 = 0xff7fffff;
    FUN_00404870();
    auStack_4bc[0] = 7;
    iVar5 = 0;
    do {
      cVar2 = s_CouragePoints_rgeom_0072bcec[iVar5];
      acStack_4b4[iVar5] = cVar2;
      iVar5 = iVar5 + 1;
    } while (cVar2 != '\0');
    pfStack_510 = (float *)auStack_4bc;
    goto LAB_004b1a99;
  case 10:
    pfStack_510 = (float *)0x7f7fffff;
    pcStack_514 = (char *)0x7f7fffff;
    uStack_518 = 0x7f7fffff;
    FUN_00404870();
    pfStack_510 = (float *)0xff7fffff;
    pcStack_514 = (char *)0xff7fffff;
    uStack_518 = 0xff7fffff;
    FUN_00404870();
    auStack_4bc[0] = 7;
    iVar5 = 0;
    do {
      cVar2 = s_inst_couragepoint_1_rgeom_0072bcd0[iVar5];
      acStack_4b4[iVar5] = cVar2;
      iVar5 = iVar5 + 1;
    } while (cVar2 != '\0');
    pfStack_510 = (float *)auStack_4bc;
    pcStack_514 = s_Geometry_Resource_007299e4;
    uStack_518 = 0x4b182b;
    (**(code **)(*param_1 + 0xb4))();
    *(undefined2 *)((int)param_1 + 0x16a) = 1;
    break;
  case 0xb:
    pfStack_510 = (float *)0x7f7fffff;
    pcStack_514 = (char *)0x7f7fffff;
    uStack_518 = 0x7f7fffff;
    FUN_00404870();
    pfStack_510 = (float *)0xff7fffff;
    pcStack_514 = (char *)0xff7fffff;
    uStack_518 = 0xff7fffff;
    FUN_00404870();
    auStack_4bc[0] = 7;
    iVar5 = 0;
    do {
      cVar2 = s_inst_couragepoint_5_rgeom_0072bcb4[iVar5];
      acStack_4b4[iVar5] = cVar2;
      iVar5 = iVar5 + 1;
    } while (cVar2 != '\0');
    pfStack_510 = (float *)auStack_4bc;
    pcStack_514 = s_Geometry_Resource_007299e4;
    uStack_518 = 0x4b18a3;
    (**(code **)(*param_1 + 0xb4))();
    *(undefined2 *)((int)param_1 + 0x16a) = 5;
    break;
  case 0xc:
    pfStack_510 = (float *)0xff7fffff;
    pcStack_514 = (char *)0xff7fffff;
    uStack_518 = 0xff7fffff;
    uStack_2b4 = 0x7f7fffff;
    uStack_2b0 = 0x7f7fffff;
    uStack_2ac = 0x7f7fffff;
    FUN_00404870();
    auStack_4bc[0] = 7;
    iVar5 = 0;
    do {
      cVar2 = s_inst_couragepoint_10_rgeom_0072bc98[iVar5];
      acStack_4b4[iVar5] = cVar2;
      iVar5 = iVar5 + 1;
    } while (cVar2 != '\0');
    pfStack_510 = (float *)auStack_4bc;
    pcStack_514 = s_Geometry_Resource_007299e4;
    uStack_518 = 0x4b1923;
    (**(code **)(*param_1 + 0xb4))();
    *(undefined2 *)((int)param_1 + 0x16a) = 10;
    break;
  case 0xd:
    pfStack_510 = (float *)0xff7fffff;
    pcStack_514 = (char *)0xff7fffff;
    uStack_518 = 0xff7fffff;
    uStack_2b4 = 0x7f7fffff;
    uStack_2b0 = 0x7f7fffff;
    uStack_2ac = 0x7f7fffff;
    FUN_00404870();
    auStack_4bc[0] = 7;
    iVar5 = 0;
    do {
      cVar2 = s_inst_couragepoint_20_rgeom_0072bc7c[iVar5];
      acStack_4b4[iVar5] = cVar2;
      iVar5 = iVar5 + 1;
    } while (cVar2 != '\0');
    pfStack_510 = (float *)auStack_4bc;
    pcStack_514 = s_Geometry_Resource_007299e4;
    uStack_518 = 0x4b19a3;
    (**(code **)(*param_1 + 0xb4))();
    *(undefined2 *)((int)param_1 + 0x16a) = 0x19;
    break;
  case 0xe:
    pfStack_510 = (float *)0xff7fffff;
    pcStack_514 = (char *)0xff7fffff;
    uStack_518 = 0xff7fffff;
    uStack_2b4 = 0x7f7fffff;
    uStack_2b0 = 0x7f7fffff;
    uStack_2ac = 0x7f7fffff;
    FUN_00404870();
    auStack_4bc[0] = 7;
    iVar5 = 0;
    do {
      cVar2 = s_inst_couragepoint_50_rgeom_0072bc60[iVar5];
      acStack_4b4[iVar5] = cVar2;
      iVar5 = iVar5 + 1;
    } while (cVar2 != '\0');
    pfStack_510 = (float *)auStack_4bc;
    pcStack_514 = s_Geometry_Resource_007299e4;
    uStack_518 = 0x4b1a23;
    (**(code **)(*param_1 + 0xb4))();
    *(undefined2 *)((int)param_1 + 0x16a) = 0x32;
    break;
  case 0xf:
    pfStack_510 = (float *)0xff7fffff;
    pcStack_514 = (char *)0xff7fffff;
    uStack_518 = 0xff7fffff;
    uStack_5c = 0x7f7fffff;
    uStack_58 = 0x7f7fffff;
    uStack_54 = 0x7f7fffff;
    FUN_00404870();
    auStack_264[0] = 7;
    iVar5 = 0;
    do {
      cVar2 = s_coinbag_rgeom_007223a4[iVar5];
      acStack_25c[iVar5] = cVar2;
      iVar5 = iVar5 + 1;
    } while (cVar2 != '\0');
    pfStack_510 = (float *)auStack_264;
LAB_004b1a99:
    pcStack_514 = s_Geometry_Resource_007299e4;
    uStack_518 = 0x4b1aa9;
    (**(code **)(*param_1 + 0xb4))();
switchD_004b1647_caseD_3:
  }
  ExceptionList = pvStack_c;
  return 1;
}

