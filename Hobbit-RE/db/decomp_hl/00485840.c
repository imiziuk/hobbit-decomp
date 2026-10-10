
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00485840(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  float *pfVar5;
  void *pvVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  float *pfVar13;
  float fVar14;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float afStack_100 [4];
  float fStack_f0;
  float afStack_ec [13];
  int iStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  float afStack_ac [4];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float afStack_8c [2];
  float fStack_84;
  undefined1 auStack_80 [64];
  undefined1 auStack_40 [64];
  
  (**(code **)(*param_1 + 0x40))();
  pfVar5 = (float *)(**(code **)(*param_1 + 0x38))();
  fStack_98 = *pfVar5;
  fStack_94 = pfVar5[1];
  fStack_90 = pfVar5[2];
  FUN_004357e0(pfVar5 + 3);
  FUN_006bf840(param_1[0x5a]);
  param_1[0x5c] = (int)((float)param_1[0x40] * _DAT_006e936c);
  param_1[0x59] = param_1[0x42] * param_1[0x41];
  pvVar6 = operator_new(param_1[0x42] * param_1[0x41] * 0x30);
  param_1[0x5a] = (int)pvVar6;
  afStack_8c[0] = (float)param_1[0x41] * (float)param_1[0x40];
  param_1[0x5d] = (int)afStack_8c[0];
  fStack_110 = (float)param_1[0x42] * (float)param_1[0x40];
  param_1[0x5e] = (int)fStack_110;
  fStack_98 = _DAT_006e99ec * afStack_8c[0];
  afStack_8c[0] = afStack_8c[0] * _DAT_006e936c;
  fStack_90 = fStack_110 * _DAT_006e99ec;
  fStack_84 = fStack_110 * _DAT_006e936c;
  param_1[0x2b] = (int)afStack_8c[0];
  FUN_00405080(afStack_ac,afStack_8c,&fStack_98);
  pfVar5 = (float *)(param_1 + 0xb);
  param_1[0x2c] = (int)(afStack_ac[1] * _DAT_006e936c);
  param_1[0x2d] = (int)((float)param_1[0x5e] * _DAT_006e936c);
  FUN_004357e0(&fStack_98);
  FUN_004357e0(afStack_8c);
  afStack_ec[0xc] = 0.0;
  afStack_ec[8] = 0.0;
  afStack_ec[4] = 0.0;
  iStack_b8 = 0;
  afStack_ec[9] = 0.0;
  afStack_ec[1] = 0.0;
  iStack_b4 = 0;
  afStack_ec[6] = 0.0;
  afStack_ec[2] = 0.0;
  afStack_ec[0xb] = 0.0;
  afStack_ec[7] = 0.0;
  afStack_ec[3] = 0.0;
  afStack_ec[0] = 1.0;
  afStack_ec[5] = 1.0;
  afStack_ec[10] = 1.0;
  uStack_b0 = 0x3f800000;
  FUN_00463c20(param_1 + 0x1a);
  uVar7 = FUN_0064e040(auStack_40,auStack_80,afStack_ec);
  FUN_00406570(uVar7);
  FUN_004357e0(pfVar5);
  FUN_004357e0(param_1 + 0xe);
  param_1[0xe] = (int)afStack_ec[0xc];
  *pfVar5 = afStack_ec[0xc];
  param_1[0xf] = iStack_b8;
  param_1[0xc] = iStack_b8;
  iVar8 = (int)afStack_ec - (int)pfVar5;
  fStack_110 = 4.2039e-45;
  param_1[0x10] = iStack_b4;
  param_1[0xd] = iStack_b4;
  do {
    pfVar13 = (float *)(iVar8 + (int)pfVar5);
    iVar12 = 0;
    do {
      fVar14 = *pfVar13 * *(float *)((int)afStack_ac + iVar12);
      fStack_10c = *pfVar13 * *(float *)((int)afStack_100 + iVar12);
      if (fVar14 < fStack_10c == (NAN(fVar14) || NAN(fStack_10c))) {
        *pfVar5 = fStack_10c + *pfVar5;
      }
      else {
        *pfVar5 = fVar14 + *pfVar5;
        fVar14 = fStack_10c;
      }
      iVar12 = iVar12 + 4;
      pfVar13 = pfVar13 + 4;
      pfVar5[3] = fVar14 + pfVar5[3];
    } while (iVar12 < 0xc);
    pfVar5 = pfVar5 + 1;
    fStack_110 = (float)((int)fStack_110 + -1);
  } while (fStack_110 != 0.0);
  iVar8 = (**(code **)(*param_1 + 0x38))();
  FUN_004357e0(iVar8);
  FUN_004357e0(iVar8 + 0xc);
  piVar9 = param_1 + 5;
  FUN_0042faf0(piVar9);
  FUN_0042faf0(piVar9);
  (**(code **)(*param_1 + 0x44))();
  FUN_004e2630();
  fStack_9c = -(float)param_1[0x2b];
  afStack_ac[3] = -(float)param_1[0x2d];
  afStack_ec[0xc] = 0.0;
  afStack_ec[8] = 0.0;
  afStack_ec[4] = 0.0;
  iStack_b8 = 0;
  afStack_ec[9] = 0.0;
  afStack_ec[1] = 0.0;
  iStack_b4 = 0;
  afStack_ec[6] = 0.0;
  afStack_ec[2] = 0.0;
  afStack_ec[0xb] = 0.0;
  afStack_ec[7] = 0.0;
  afStack_ec[3] = 0.0;
  afStack_ec[0] = 1.0;
  afStack_ec[5] = 1.0;
  afStack_ec[10] = 1.0;
  uStack_b0 = 0x3f800000;
  FUN_0064c8e0(param_1[0x1a],&fStack_110,&fStack_10c);
  FUN_0064c8e0(param_1[0x1b],&fStack_104,&fStack_108);
  FUN_0064c8e0(param_1[0x1c],&fStack_f0,afStack_100 + 3);
  afStack_ec[0] = afStack_100[3] * fStack_108 + fStack_f0 * fStack_110 * fStack_104;
  afStack_ec[1] = fStack_f0 * fStack_10c;
  afStack_ec[0xc] = (float)*piVar9;
  iStack_b4 = param_1[7];
  pfVar5 = (float *)(param_1 + 0x5f);
  iStack_b8 = param_1[6];
  afStack_ec[2] = fStack_f0 * fStack_110 * fStack_108 - afStack_100[3] * fStack_104;
  afStack_ec[3] = 0.0;
  afStack_ec[7] = 0.0;
  afStack_ec[0xb] = 0.0;
  uStack_b0 = 0x3f800000;
  afStack_ec[4] = fStack_104 * afStack_100[3] * fStack_110 - fStack_f0 * fStack_108;
  afStack_ec[5] = afStack_100[3] * fStack_10c;
  afStack_ec[6] = afStack_100[3] * fStack_110 * fStack_108 + fStack_f0 * fStack_104;
  afStack_ec[8] = fStack_104 * fStack_10c;
  afStack_ec[9] = -fStack_110;
  afStack_ec[10] = fStack_108 * fStack_10c;
  if (pfVar5 != afStack_ec) {
    pfVar13 = afStack_ec;
    piVar9 = param_1 + 0x61;
    do {
      piVar9[-2] = (int)*pfVar13;
      piVar9[-1] = (int)pfVar13[1];
      *piVar9 = *(int *)(((int)afStack_ec - (int)pfVar5) + (int)piVar9);
      piVar9[1] = *(int *)((int)afStack_ec + (4 - (int)pfVar5) + (int)piVar9);
      pfVar13 = pfVar13 + 4;
      piVar9 = piVar9 + 4;
    } while (pfVar13 != afStack_ac);
  }
  pfVar5 = (float *)(param_1 + 0x6f);
  if (pfVar5 != afStack_ec) {
    pfVar13 = afStack_ec;
    piVar9 = param_1 + 0x71;
    do {
      piVar9[-2] = (int)*pfVar13;
      piVar9[-1] = (int)pfVar13[1];
      *piVar9 = *(int *)(((int)afStack_ec - (int)pfVar5) + (int)piVar9);
      piVar9[1] = *(int *)((int)afStack_ec + (4 - (int)pfVar5) + (int)piVar9);
      pfVar13 = pfVar13 + 4;
      piVar9 = piVar9 + 4;
    } while (pfVar13 != afStack_ac);
  }
  FUN_0064d480();
  if (((float *)(param_1 + 0x7f) != pfVar5) && (pfVar5 != (float *)(param_1 + 0x7f))) {
    piVar9 = param_1 + 0x81;
    iVar8 = (int)pfVar5 - (int)(param_1 + 0x7f);
    do {
      piVar9[-2] = (int)*pfVar5;
      piVar9[-1] = (int)pfVar5[1];
      *piVar9 = *(int *)(iVar8 + (int)piVar9);
      piVar9[1] = (int)pfVar5[3];
      pfVar5 = pfVar5 + 4;
      piVar9 = piVar9 + 4;
    } while (pfVar5 != (float *)(param_1 + 0x7f));
  }
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  iVar8 = 0;
  if (0 < param_1[0x42] * param_1[0x41]) {
    iVar12 = 0;
    do {
      *(undefined4 *)(iVar12 + 0x18 + param_1[0x5a]) = 0;
      *(undefined4 *)(iVar12 + 0x1c + param_1[0x5a]) = 0;
      *(char *)(iVar12 + 0x20 + param_1[0x5a]) = (char)(iVar8 % param_1[0x41]);
      *(char *)(iVar12 + 0x21 + param_1[0x5a]) = (char)(iVar8 / param_1[0x41]);
      iVar10 = param_1[0x5a];
      bVar4 = *(byte *)(iVar10 + 0x21 + iVar12);
      fStack_110 = (float)(uint)*(byte *)(iVar10 + 0x20 + iVar12);
      iVar10 = iVar10 + iVar12;
      fVar14 = (float)param_1[0x40];
      fVar1 = (float)param_1[0x5c];
      fVar2 = (float)param_1[0x40];
      fVar3 = (float)param_1[0x5c];
      *(undefined4 *)(iVar10 + 0x10) = 0;
      *(float *)(iVar10 + 0xc) = (float)(int)fStack_110 * fVar2 + fVar3 + fStack_9c;
      *(float *)(iVar10 + 0x14) = (float)bVar4 * fVar14 + fVar1 + afStack_ac[3];
      puVar11 = (undefined4 *)(param_1[0x5a] + iVar12);
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[2] = 0;
      pfVar5 = (float *)(iVar12 + 0xc + param_1[0x5a]);
      FUN_00401f00(-*pfVar5,-pfVar5[1],-*(float *)(iVar12 + 0x14 + param_1[0x5a]));
      afStack_100[2] = afStack_ac[2];
      afStack_100[0] = afStack_ac[0];
      afStack_100[1] = afStack_ac[1];
      switch(param_1[0x4c]) {
      case 0:
        FUN_00404870(0,0,0);
        goto switchD_00485ebc_default;
      case 1:
        FUN_00428740(0x3fc90fdb);
        fVar14 = (float)param_1[0x51];
        break;
      case 2:
        FUN_00428740(0xbfc90fdb);
        goto LAB_00485f31;
      case 3:
        FUN_0042e1f0();
        fVar14 = -(float)param_1[0x51];
        break;
      case 4:
        FUN_0042e1f0();
        fVar14 = (float)param_1[0x51];
        break;
      case 5:
        FUN_004357e0(param_1 + 0x4e);
LAB_00485f31:
        fVar14 = (float)param_1[0x51];
        break;
      default:
        goto switchD_00485ebc_default;
      }
      FUN_00448290(fVar14);
switchD_00485ebc_default:
      FUN_004357e0(afStack_100);
      iVar8 = iVar8 + 1;
      iVar12 = iVar12 + 0x30;
    } while (iVar8 < param_1[0x42] * param_1[0x41]);
  }
  FUN_00485fa0();
  return;
}

