
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006bce60(int param_1,int param_2,uint param_3)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  short sVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  short sVar8;
  float *pfVar9;
  int iVar10;
  float afStack_20 [5];
  float fStack_c;
  float afStack_8 [2];
  
  FUN_006bad50(param_2,param_3);
  iVar2 = *(int *)(param_1 + 4);
  if ((NAN(*(float *)(iVar2 + 0x9c)) || NAN(DAT_006e92e4)) ==
      (*(float *)(iVar2 + 0x9c) == DAT_006e92e4)) {
    if ((NAN(*(float *)(iVar2 + 0xa0)) || NAN(DAT_006e92e4)) ==
        (*(float *)(iVar2 + 0xa0) == DAT_006e92e4)) {
      *(undefined4 *)(param_1 + 0xb4) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xb4) = 1;
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  FUN_006bcda0(iVar2,(int *)(param_1 + 0xb0),param_1 + 0xac);
  iVar6 = *(int *)(param_1 + 0xb0);
  *(int *)(param_1 + 0xc0) = param_1 + 0xd0;
  iVar10 = param_1 + 0xd0 + iVar6 * 0xc;
  *(int *)(param_1 + 0xc4) = iVar10;
  iVar10 = iVar10 + iVar6 * 8;
  *(int *)(param_1 + 200) = iVar10;
  *(int *)(param_1 + 0xcc) = iVar10 + iVar6 * 4;
  iVar10 = *(int *)(param_1 + 0xb4);
  if ((iVar10 == 0) || (*(int *)(iVar2 + 0x84) == 0)) {
    afStack_20[0] = 0.5;
    afStack_20[1] = -0.5;
    afStack_20[2] = *(float *)(iVar2 + 0x9c) * _DAT_006e936c;
    afStack_20[3] = *(float *)(iVar2 + 0xa0) * _DAT_006e936c;
    if (iVar10 == 1) {
      afStack_20[2] = 0.0;
    }
    if (iVar10 == -1) {
      afStack_20[3] = 0.0;
    }
    param_3 = 0;
    afStack_20[4] = (float)(*(int *)(iVar2 + 0x98) * 2);
    if (0 < (int)afStack_20[4]) {
      param_2 = 0;
      do {
        puVar5 = (undefined4 *)(*(int *)(param_1 + 0xc0) + param_2);
        fVar1 = (float)(int)param_3 * _DAT_006e9598;
        *puVar5 = 0;
        puVar5[1] = afStack_20[param_3 & 1];
        puVar5[2] = afStack_20[(param_3 & 1) + 2];
        pfVar9 = (float *)(*(int *)(param_1 + 0xc0) + param_2);
        FUN_0064c8e0(fVar1 / (float)(int)afStack_20[4],afStack_20 + 5,afStack_8);
        fVar1 = *pfVar9;
        param_3 = param_3 + 1;
        *pfVar9 = fVar1 * afStack_8[0] + fStack_c * pfVar9[2];
        pfVar9[2] = pfVar9[2] * afStack_8[0] - fVar1 * fStack_c;
        afStack_20[4] = (float)(*(int *)(iVar2 + 0x98) * 2);
        param_2 = param_2 + 0xc;
      } while ((int)param_3 < (int)afStack_20[4]);
    }
    puVar3 = *(undefined4 **)(param_1 + 0xc0);
    puVar5 = puVar3 + *(int *)(iVar2 + 0x98) * 6;
    *puVar5 = *puVar3;
    puVar5[1] = puVar3[1];
    puVar5[2] = puVar3[2];
    iVar10 = *(int *)(param_1 + 0xc0);
    puVar5 = (undefined4 *)(iVar10 + 0xc + *(int *)(iVar2 + 0x98) * 0x18);
    *puVar5 = *(undefined4 *)(iVar10 + 0xc);
    puVar5[1] = *(undefined4 *)(iVar10 + 0x10);
    puVar5[2] = *(undefined4 *)(iVar10 + 0x14);
    if (*(int *)(param_1 + 0xb4) == 0) {
      iVar10 = 0;
      if (0 < *(int *)(param_1 + 0xac)) {
        do {
          *(short *)(*(int *)(param_1 + 0xcc) + iVar10 * 2) = (short)iVar10;
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(param_1 + 0xac));
      }
    }
    else if (*(int *)(param_1 + 0xb4) == 1) {
      iVar10 = 0;
      if (0 < *(int *)(iVar2 + 0x98)) {
        iVar6 = 0;
        do {
          sVar4 = (short)iVar10;
          *(short *)(iVar6 + *(int *)(param_1 + 0xcc)) = sVar4 * 2 + 3;
          *(short *)(*(int *)(param_1 + 0xcc) + 2 + iVar6) = sVar4 * 2 + 2;
          iVar10 = iVar10 + 1;
          *(short *)(*(int *)(param_1 + 0xcc) + 4 + iVar6) = sVar4 * 2 + 1;
          iVar6 = iVar6 + 6;
        } while (iVar10 < *(int *)(iVar2 + 0x98));
      }
    }
    else {
      iVar10 = 0;
      if (0 < *(int *)(iVar2 + 0x98)) {
        iVar6 = 0;
        do {
          sVar4 = (short)iVar10;
          sVar8 = sVar4 * 2;
          *(short *)(iVar6 + *(int *)(param_1 + 0xcc)) = sVar8;
          *(short *)(*(int *)(param_1 + 0xcc) + 2 + iVar6) = sVar8 + 1;
          iVar10 = iVar10 + 1;
          *(short *)(*(int *)(param_1 + 0xcc) + 4 + iVar6) = sVar4 * 2 + 2;
          iVar6 = iVar6 + 6;
        } while (iVar10 < *(int *)(iVar2 + 0x98));
      }
    }
  }
  else {
    if (iVar10 == 1) {
      fVar1 = *(float *)(iVar2 + 0xa0);
      afStack_8[0] = 0.5;
      param_2 = 0xbf000000;
    }
    else {
      fVar1 = *(float *)(iVar2 + 0x9c);
      afStack_8[0] = -0.5;
      param_2 = 0x3f000000;
    }
    param_3 = 0;
    fStack_c = (float)*(int *)(iVar2 + 0x98);
    afStack_20[0] = fVar1 * _DAT_006e936c;
    if (0 < *(int *)(iVar2 + 0x98)) {
      iVar10 = 0xc;
      do {
        puVar5 = (undefined4 *)(*(int *)(param_1 + 0xc0) + iVar10);
        fStack_c = ((float)(int)param_3 * _DAT_006e9598) / (float)(int)fStack_c;
        *puVar5 = 0;
        puVar5[1] = param_2;
        puVar5[2] = afStack_20[0];
        pfVar9 = (float *)(*(int *)(param_1 + 0xc0) + iVar10);
        FUN_0064c8e0(fStack_c,afStack_20 + 4,afStack_20 + 2);
        fVar1 = *pfVar9;
        param_3 = param_3 + 1;
        iVar10 = iVar10 + 0xc;
        *pfVar9 = fVar1 * afStack_20[2] + afStack_20[4] * pfVar9[2];
        pfVar9[2] = pfVar9[2] * afStack_20[2] - fVar1 * afStack_20[4];
        fStack_c = (float)*(int *)(iVar2 + 0x98);
      } while ((int)param_3 < *(int *)(iVar2 + 0x98));
    }
    iVar10 = *(int *)(param_1 + 0xc0);
    puVar5 = (undefined4 *)(iVar10 + (*(int *)(iVar2 + 0x98) + 1) * 0xc);
    *puVar5 = *(undefined4 *)(iVar10 + 0xc);
    puVar5[1] = *(undefined4 *)(iVar10 + 0x10);
    puVar5[2] = *(undefined4 *)(iVar10 + 0x14);
    puVar5 = *(undefined4 **)(param_1 + 0xc0);
    *puVar5 = 0;
    puVar5[1] = afStack_8[0];
    puVar5[2] = 0;
    if (*(int *)(param_1 + 0xb4) == 1) {
      iVar10 = 0;
      if (0 < *(int *)(iVar2 + 0x98)) {
        iVar6 = 0;
        do {
          *(undefined2 *)(iVar6 + *(int *)(param_1 + 0xcc)) = 0;
          sVar4 = (short)iVar10;
          *(short *)(iVar6 + 2 + *(int *)(param_1 + 0xcc)) = sVar4 + 1;
          iVar10 = iVar10 + 1;
          *(short *)(iVar6 + 4 + *(int *)(param_1 + 0xcc)) = sVar4 + 2;
          iVar6 = iVar6 + 6;
        } while (iVar10 < *(int *)(iVar2 + 0x98));
      }
    }
    else {
      iVar10 = 0;
      if (0 < *(int *)(iVar2 + 0x98)) {
        iVar6 = 0;
        do {
          *(undefined2 *)(iVar6 + *(int *)(param_1 + 0xcc)) = 0;
          sVar4 = (short)iVar10;
          *(short *)(iVar6 + 2 + *(int *)(param_1 + 0xcc)) = sVar4 + 2;
          iVar10 = iVar10 + 1;
          *(short *)(iVar6 + 4 + *(int *)(param_1 + 0xcc)) = sVar4 + 1;
          iVar6 = iVar6 + 6;
        } while (iVar10 < *(int *)(iVar2 + 0x98));
      }
    }
  }
  if (*(int *)(iVar2 + 0x84) == 0) {
    iVar10 = *(int *)(iVar2 + 0x98);
    afStack_8[1] = (float)*(undefined4 *)(iVar2 + 0x8c);
    afStack_8[0] = 0.0;
    param_3 = 0;
    if (0 < iVar10 * 2 + 2) {
      do {
        fVar1 = (float)(int)param_3;
        pfVar9 = (float *)(*(int *)(param_1 + 0xc4) + param_3 * 8);
        uVar7 = param_3 & 1;
        param_3 = param_3 + 1;
        *pfVar9 = (fVar1 * *(float *)(iVar2 + 0x88)) / (float)(iVar10 * 2);
        pfVar9[1] = afStack_8[uVar7];
        iVar10 = *(int *)(iVar2 + 0x98);
      } while ((int)param_3 < iVar10 * 2 + 2);
    }
  }
  else {
    iVar10 = 0;
    if (0 < *(int *)(param_1 + 0xb0)) {
      iVar6 = 0;
      do {
        iVar10 = iVar10 + 1;
        *(float *)(*(int *)(param_1 + 0xc4) + -8 + iVar10 * 8) =
             (*(float *)(iVar6 + *(int *)(param_1 + 0xc0)) + _DAT_006e936c) *
             *(float *)(iVar2 + 0x88);
        *(float *)(*(int *)(param_1 + 0xc4) + -4 + iVar10 * 8) =
             (*(float *)(iVar6 + 8 + *(int *)(param_1 + 0xc0)) + _DAT_006e936c) *
             *(float *)(iVar2 + 0x8c);
        iVar6 = iVar6 + 0xc;
      } while (iVar10 < *(int *)(param_1 + 0xb0));
      return;
    }
  }
  return;
}

