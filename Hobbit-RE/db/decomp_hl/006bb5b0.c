
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006bb5b0(int param_1,int param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  float fVar7;
  short sVar8;
  short sVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  uint uVar15;
  float *pfVar16;
  int iStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float afStack_8 [2];
  
  FUN_006bad50(param_2,param_3);
  iVar4 = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  FUN_006bb520(iVar4,(int *)(param_1 + 0xb0),param_1 + 0xac);
  iVar12 = *(int *)(param_1 + 0xb0);
  iVar11 = param_1 + 0xcc;
  if (*(int *)(iVar4 + 0xa8) == 0) {
    fStack_1c = _DAT_006e936c - *(float *)(iVar4 + 0xa4) * _DAT_006e936c;
    fStack_c = *(float *)(iVar4 + 0x98) * *(float *)(iVar4 + 0x8c);
    iVar13 = *(int *)(iVar4 + 0x9c);
    *(int *)(param_1 + 0xbc) = iVar11;
    iVar11 = iVar11 + iVar12 * 0xc;
    *(int *)(param_1 + 0xc0) = iVar11;
    iVar11 = iVar11 + iVar12 * 8;
    *(int *)(param_1 + 0xc4) = iVar11;
    fVar1 = DAT_006e92e8 / ((float)iVar13 + (float)iVar13);
    *(int *)(param_1 + 200) = iVar11 + iVar12 * 4;
    param_3 = 0;
    afStack_8[0] = (float)(*(int *)(iVar4 + 0x9c) + 1);
    if (0 < *(int *)(iVar4 + 0x9c)) {
      iStack_44 = 0;
      fStack_3c = (float)((int)afStack_8[0] * 0x24);
      fStack_40 = (float)((int)afStack_8[0] * 0x18);
      param_2 = 0;
      iVar11 = (int)afStack_8[0] * 0xc;
      do {
        puVar10 = (undefined4 *)(*(int *)(param_1 + 0xbc) + iStack_44);
        fStack_28 = (float)param_2 * _DAT_006e9598;
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0x3f000000;
        fStack_28 = fStack_28 * fVar1;
        pfVar16 = (float *)(*(int *)(param_1 + 0xbc) + iStack_44);
        fStack_18 = (float)(param_2 + 1) * _DAT_006e9598 * fVar1;
        FUN_0064c8e0(fStack_28,&fStack_34,&fStack_38);
        fVar2 = *pfVar16;
        *pfVar16 = fVar2 * fStack_38 + fStack_34 * pfVar16[2];
        pfVar16[2] = pfVar16[2] * fStack_38 - fVar2 * fStack_34;
        iVar12 = *(int *)(param_1 + 0xbc);
        *(undefined4 *)(iVar12 + iVar11) = 0;
        iVar12 = iVar12 + iVar11;
        *(undefined4 *)(iVar12 + 4) = 0x3f000000;
        *(float *)(iVar12 + 8) = fStack_1c;
        pfVar16 = (float *)(*(int *)(param_1 + 0xbc) + iVar11);
        FUN_0064c8e0(fStack_18,&fStack_2c,&fStack_30);
        fVar2 = *pfVar16;
        *pfVar16 = fVar2 * fStack_30 + fStack_2c * pfVar16[2];
        pfVar16[2] = pfVar16[2] * fStack_30 - fVar2 * fStack_2c;
        puVar10 = (undefined4 *)(*(int *)(param_1 + 0xbc) + (int)fStack_40);
        puVar10[2] = _DAT_006e936c - *(float *)(iVar4 + 0xa0) * _DAT_006e936c;
        *puVar10 = 0;
        puVar10[1] = 0;
        pfVar16 = (float *)(*(int *)(param_1 + 0xbc) + (int)fStack_40);
        FUN_0064c8e0(fStack_28,&fStack_20,&fStack_24);
        fVar2 = *pfVar16;
        *pfVar16 = fVar2 * fStack_24 + fStack_20 * pfVar16[2];
        pfVar16[2] = pfVar16[2] * fStack_24 - fVar2 * fStack_20;
        iVar12 = *(int *)(param_1 + 0xbc);
        *(undefined4 *)(iVar12 + (int)fStack_3c) = 0;
        iVar12 = iVar12 + (int)fStack_3c;
        *(undefined4 *)(iVar12 + 4) = 0xbf000000;
        *(float *)(iVar12 + 8) = fStack_1c;
        pfVar16 = (float *)(*(int *)(param_1 + 0xbc) + (int)fStack_3c);
        FUN_0064c8e0(fStack_18,&fStack_10,&fStack_14);
        fVar2 = *pfVar16;
        param_2 = param_2 + 2;
        *pfVar16 = fVar2 * fStack_14 + fStack_10 * pfVar16[2];
        param_3 = param_3 + 1;
        iVar11 = iVar11 + 0xc;
        pfVar16[2] = pfVar16[2] * fStack_14 - fVar2 * fStack_10;
        iStack_44 = iStack_44 + 0xc;
        fStack_40 = (float)((int)fStack_40 + 0xc);
        fStack_3c = (float)((int)fStack_3c + 0xc);
      } while ((int)param_3 < *(int *)(iVar4 + 0x9c));
    }
    iVar11 = 0;
    if (0 < *(int *)(param_1 + 0xb0)) {
      iVar12 = *(int *)(iVar4 + 0x9c);
      do {
        puVar10 = (undefined4 *)(*(int *)(param_1 + 0xbc) + iVar11 * 0xc);
        puVar5 = (undefined4 *)(*(int *)(param_1 + 0xbc) + (iVar12 + iVar11) * 0xc);
        *puVar5 = *puVar10;
        puVar5[1] = puVar10[1];
        puVar5[2] = puVar10[2];
        iVar12 = *(int *)(iVar4 + 0x9c);
        iVar11 = iVar11 + 1 + iVar12;
      } while (iVar11 < *(int *)(param_1 + 0xb0));
    }
    iVar11 = 0;
    if (*(int *)(iVar4 + 0x84) == 0) {
      if (0 < *(int *)(iVar4 + 0x9c)) {
        fStack_3c = (float)((int)afStack_8[0] * 0x18);
        param_2 = (int)afStack_8[0] * 8;
        param_3 = 0;
        iVar12 = (int)afStack_8[0] << 4;
        do {
          pfVar16 = (float *)(*(int *)(param_1 + 0xc0) + iVar11 * 8);
          fVar7 = -((float)(int)param_3 * *(float *)(iVar4 + 0x88) * fVar1);
          fVar2 = *(float *)(iVar4 + 0x88);
          pfVar16[1] = 0.0;
          fVar2 = -((float)(int)(param_3 + 1) * fVar2 * fVar1);
          *pfVar16 = fVar7;
          iVar13 = *(int *)(param_1 + 0xc0);
          *(float *)(iVar13 + param_2) = fVar2;
          *(float *)(iVar13 + param_2 + 4) = fStack_c;
          iVar13 = *(int *)(param_1 + 0xc0);
          uVar3 = *(undefined4 *)(iVar4 + 0x8c);
          *(float *)(iVar13 + iVar12) = fVar7;
          *(undefined4 *)(iVar13 + iVar12 + 4) = uVar3;
          iVar13 = *(int *)(param_1 + 0xc0);
          *(float *)(iVar13 + (int)fStack_3c) = fVar2;
          iVar11 = iVar11 + 1;
          *(float *)(iVar13 + (int)fStack_3c + 4) = fStack_c;
          param_3 = param_3 + 2;
          param_2 = param_2 + 8;
          iVar12 = iVar12 + 8;
          fStack_3c = (float)((int)fStack_3c + 8);
        } while (iVar11 < *(int *)(iVar4 + 0x9c));
      }
      iVar11 = 0;
      if (0 < *(int *)(param_1 + 0xb0)) {
        iVar12 = *(int *)(iVar4 + 0x9c);
        do {
          iVar13 = *(int *)(param_1 + 0xc0);
          puVar10 = (undefined4 *)(iVar13 + (iVar12 + iVar11) * 8);
          *puVar10 = *(undefined4 *)(iVar13 + iVar11 * 8);
          puVar10[1] = *(undefined4 *)(iVar13 + 4 + iVar11 * 8);
          iVar12 = *(int *)(iVar4 + 0x9c) + iVar11;
          *(float *)(*(int *)(param_1 + 0xc0) + iVar12 * 8) =
               *(float *)(*(int *)(param_1 + 0xc0) + iVar12 * 8) - *(float *)(iVar4 + 0x88);
          iVar12 = *(int *)(iVar4 + 0x9c);
          iVar11 = iVar11 + 1 + iVar12;
        } while (iVar11 < *(int *)(param_1 + 0xb0));
      }
    }
    iVar12 = *(int *)(iVar4 + 0x9c);
    iVar13 = 0;
    iVar11 = iVar12 * 2 + 3;
    if (iVar12 != -1 && -1 < iVar12 + 1) {
      fStack_c = (float)(iVar11 * 4);
      iVar12 = iVar11 * 2;
      do {
        sVar9 = SUB42(afStack_8[0],0);
        sVar8 = (short)iVar13;
        *(short *)(*(int *)(param_1 + 200) + iVar13 * 4) = sVar8 + sVar9 * 2;
        sVar14 = sVar9 * 3 + sVar8;
        *(short *)(*(int *)(param_1 + 200) + 2 + iVar13 * 4) = sVar14;
        *(short *)(iVar12 + *(int *)(param_1 + 200)) = sVar8;
        *(short *)(iVar12 + 2 + *(int *)(param_1 + 200)) = sVar14;
        *(short *)((int)fStack_c + *(int *)(param_1 + 200)) = sVar8;
        *(short *)((int)fStack_c + 2 + *(int *)(param_1 + 200)) = sVar8 + sVar9;
        fStack_c = (float)((int)fStack_c + 4);
        *(short *)(*(int *)(param_1 + 200) + iVar11 * 6 + iVar13 * 4) = sVar8 + sVar9 * 2;
        *(short *)(*(int *)(param_1 + 200) + iVar11 * 6 + 2 + iVar13 * 4) = sVar8 + sVar9;
        iVar13 = iVar13 + 1;
        iVar12 = iVar12 + 4;
      } while (iVar13 < *(int *)(iVar4 + 0x9c) + 1);
    }
    *(undefined2 *)(*(int *)(param_1 + 200) + -2 + iVar11 * 2) = 0xffff;
    *(undefined2 *)(*(int *)(param_1 + 200) + -2 + iVar11 * 4) = 0xffff;
    *(undefined2 *)(*(int *)(param_1 + 200) + -2 + iVar11 * 6) = 0xffff;
    *(undefined2 *)(*(int *)(param_1 + 200) + -2 + iVar11 * 8) = 0xffff;
  }
  else {
    iVar13 = *(int *)(iVar4 + 0x9c);
    afStack_8[0] = 0.5;
    afStack_8[1] = *(float *)(iVar4 + 0xa0) * _DAT_006e936c;
    *(int *)(param_1 + 0xbc) = iVar11;
    iVar11 = iVar11 + iVar12 * 0xc;
    *(int *)(param_1 + 0xc0) = iVar11;
    iVar6 = iVar13 * 2;
    iVar11 = iVar11 + iVar12 * 8;
    afStack_8[1] = _DAT_006e936c - afStack_8[1];
    *(int *)(param_1 + 0xc4) = iVar11;
    *(int *)(param_1 + 200) = iVar11 + iVar12 * 4;
    param_3 = 0;
    if (0 < iVar6) {
      fStack_c = (float)iVar6;
      param_2 = 0;
      do {
        puVar10 = (undefined4 *)(*(int *)(param_1 + 0xbc) + param_2);
        puVar10[2] = afStack_8[param_3 & 1];
        *puVar10 = 0;
        puVar10[1] = 0;
        pfVar16 = (float *)(*(int *)(param_1 + 0xbc) + param_2);
        FUN_0064c8e0(((float)(int)param_3 * _DAT_006e9598) / fStack_c,&fStack_40,&fStack_3c);
        fVar1 = *pfVar16;
        param_3 = param_3 + 1;
        param_2 = param_2 + 0xc;
        *pfVar16 = fVar1 * fStack_3c + fStack_40 * pfVar16[2];
        pfVar16[2] = pfVar16[2] * fStack_3c - fVar1 * fStack_40;
      } while ((int)param_3 < iVar6);
    }
    puVar5 = *(undefined4 **)(param_1 + 0xbc);
    puVar10 = puVar5 + iVar13 * 6;
    *puVar10 = *puVar5;
    puVar10[1] = puVar5[1];
    puVar10[2] = puVar5[2];
    iVar11 = *(int *)(param_1 + 0xbc);
    puVar10 = (undefined4 *)(iVar11 + (iVar13 * 6 + 3) * 4);
    *puVar10 = *(undefined4 *)(iVar11 + 0xc);
    puVar10[1] = *(undefined4 *)(iVar11 + 0x10);
    puVar10[2] = *(undefined4 *)(iVar11 + 0x14);
    if (*(int *)(iVar4 + 0x84) == 0) {
      afStack_8[1] = *(float *)(iVar4 + 0x8c);
      afStack_8[0] = 0.0;
      param_3 = 0;
      if (0 < iVar6) {
        do {
          fVar1 = (float)(int)param_3;
          pfVar16 = (float *)(*(int *)(param_1 + 0xc0) + param_3 * 8);
          uVar15 = param_3 & 1;
          param_3 = param_3 + 1;
          *pfVar16 = -((fVar1 * *(float *)(iVar4 + 0x88)) / (float)iVar6);
          pfVar16[1] = afStack_8[uVar15];
        } while ((int)param_3 < iVar6);
      }
      pfVar16 = *(float **)(param_1 + 0xc0);
      fVar1 = *pfVar16;
      fVar2 = *(float *)(iVar4 + 0x88);
      pfVar16[iVar13 * 4 + 1] = 0.0;
      pfVar16[iVar13 * 4] = fVar1 - fVar2;
      iVar11 = *(int *)(param_1 + 0xc0);
      *(float *)(iVar11 + 8 + iVar13 * 0x10) = *(float *)(iVar11 + 8) - *(float *)(iVar4 + 0x88);
      *(float *)(iVar11 + 0xc + iVar13 * 0x10) = afStack_8[1];
    }
    iVar11 = 0;
    if (0 < *(int *)(param_1 + 0xb0)) {
      do {
        *(short *)(*(int *)(param_1 + 200) + iVar11 * 2) = (short)iVar11;
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(param_1 + 0xb0));
    }
  }
  if ((*(int *)(iVar4 + 0x84) != 0) && (iVar11 = 0, 0 < *(int *)(param_1 + 0xb0))) {
    iVar12 = 0;
    do {
      iVar11 = iVar11 + 1;
      *(float *)(*(int *)(param_1 + 0xc0) + -8 + iVar11 * 8) =
           (*(float *)(iVar12 + *(int *)(param_1 + 0xbc)) + _DAT_006e936c) *
           *(float *)(iVar4 + 0x88);
      *(float *)(*(int *)(param_1 + 0xc0) + -4 + iVar11 * 8) =
           (*(float *)(iVar12 + 8 + *(int *)(param_1 + 0xbc)) + _DAT_006e936c) *
           *(float *)(iVar4 + 0x8c);
      iVar12 = iVar12 + 0xc;
    } while (iVar11 < *(int *)(param_1 + 0xb0));
  }
  return;
}

