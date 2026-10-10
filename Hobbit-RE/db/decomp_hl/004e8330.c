
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004e8330(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  float *pfVar15;
  undefined1 *puVar16;
  int iStack_90;
  float *pfStack_88;
  float *pfStack_84;
  float fStack_80;
  float local_70;
  float local_6c;
  float local_68;
  float *pfStack_64;
  float *pfStack_60;
  float *pfStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_44;
  float local_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float fStack_20;
  float local_1c;
  float local_18;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d5b78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_water__Render___BuildNormals_0072eb78);
  pfVar15 = &local_70;
  local_4 = 0;
  FUN_0065fce0(0,pfVar15);
  FUN_00672260(pfVar15);
  iVar11 = *param_1;
  pfVar15 = &local_3c;
  local_24 = local_70 * (float)param_1[0x8d] +
             local_6c * (float)param_1[0x91] + local_68 * (float)param_1[0x95] +
             (float)param_1[0x99];
  local_18 = local_70 * (float)param_1[0x8c] +
             local_6c * (float)param_1[0x90] + local_68 * (float)param_1[0x94] +
             (float)param_1[0x98];
  local_30 = local_70 * (float)param_1[0x8b] +
             local_6c * (float)param_1[0x8f] + local_68 * (float)param_1[0x93] +
             (float)param_1[0x97];
  fVar6 = DAT_006e92e8 / ((float)param_1[0x59] + (float)param_1[0x59]);
  local_1c = fVar6 * (float)param_1[0xa3];
  local_2c = (DAT_006e92e8 / ((float)param_1[0x5a] + (float)param_1[0x5a])) * (float)param_1[0xa3];
  local_28 = (float)(int)((uint)*(byte *)((int)param_1 + 0x1d1) - (uint)*(byte *)(param_1 + 0x74));
  FUN_0065fce0(0,pfVar15);
  uVar9 = FUN_00672260(pfVar15);
  bVar7 = (**(code **)(iVar11 + 0xcc))(uVar9);
  iStack_90 = 1;
  if (1 < *(short *)((int)param_1 + 0x1ce) + -1) {
    do {
      iVar13 = (int)(short)param_1[0x73];
      iVar10 = iVar13 * iStack_90 + 1;
      iVar11 = param_1[0x75];
      pfStack_5c = (float *)(iVar11 + (iVar10 - iVar13) * 0xc);
      pfStack_88 = (float *)(iVar11 + (iVar13 + iVar10) * 0xc);
      pfStack_84 = (float *)(iVar11 + -0xc + iVar10 * 0xc);
      pfStack_60 = (float *)(iVar11 + (iVar13 * iStack_90 + 4 + iVar10 * 2) * 4);
      puVar16 = (undefined1 *)(param_1[200] + iVar10 * 4);
      pfStack_64 = (float *)(param_1[0x77] + iVar10 * 8);
      if ((float)(iVar13 + -2) != 0.0) {
        local_24 = (float)(uint)bVar7;
        pfVar15 = pfStack_5c + iVar13 * 3 + 1;
        local_68 = (float)(iVar13 + -2);
        do {
          fVar1 = (*pfStack_60 - *pfStack_84) * fStack_80;
          fVar4 = (pfStack_60[1] - pfStack_84[1]) * fStack_20;
          fVar5 = (pfStack_60[2] - pfStack_84[2]) * fStack_80;
          fVar2 = (*pfStack_88 - *pfStack_5c) * fVar6;
          local_3c = (pfStack_88[1] - pfStack_5c[1]) * local_30;
          fStack_38 = (pfStack_88[2] - pfStack_5c[2]) * fVar6;
          fVar3 = fVar2 * fVar4 - local_3c * fVar1;
          fVar1 = fStack_38 * fVar1 - fVar2 * fVar5;
          fVar2 = local_3c * fVar5 - fStack_38 * fVar4;
          fVar4 = DAT_006e92e8 / SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
          iVar11 = FUN_0064cf30(fVar4);
          if (iVar11 == 0) {
            fStack_44 = 0.0;
            fVar2 = DAT_006e92e4;
            fVar1 = DAT_006e92e4;
          }
          else {
            fStack_44 = fVar3 * fVar4;
            fVar2 = fVar2 * fVar4;
            fVar1 = fVar1 * fVar4;
          }
          fStack_50 = pfVar15[1] - local_28;
          fStack_54 = *pfVar15 - local_1c;
          fStack_58 = pfVar15[-1];
          puVar16[3] = *(undefined1 *)((int)param_1 + 0x177);
          fStack_58 = fStack_58 - fStack_34;
          puVar16[2] = *(undefined1 *)((int)param_1 + 0x176);
          puVar16[1] = *(undefined1 *)((int)param_1 + 0x175);
          *puVar16 = (char)param_1[0x5d];
          fVar3 = DAT_006e92e8 /
                  SQRT(fStack_50 * fStack_50 + fStack_54 * fStack_54 + fStack_58 * fStack_58);
          fStack_58 = fStack_58 * fVar3;
          fStack_54 = fStack_54 * fVar3;
          fStack_50 = fStack_50 * fVar3;
          fVar1 = (fVar2 * fStack_58 + fVar1 * fStack_54 + fStack_44 * fStack_50) * _DAT_006ef7fc;
          fStack_4c = fVar2 * fVar1 + fStack_58;
          fStack_44 = fStack_44 * fVar1 + fStack_50;
          cVar8 = __ftol();
          iVar11 = (uint)(byte)(*(char *)((int)param_1 + 0x1d1) - cVar8) * (int)local_24;
          fVar1 = (fStack_44 + DAT_006e92e8) * _DAT_006e936c;
          fVar2 = (fStack_4c + DAT_006e92e8) * _DAT_006e936c;
          puVar16[3] = ((char)(iVar11 / 0xff) + (char)(iVar11 >> 0x1f)) -
                       (char)((longlong)iVar11 * 0x80808081 >> 0x3f);
          *pfStack_64 = fVar2;
          pfStack_64[1] = fVar1;
          pfStack_64 = pfStack_64 + 2;
          pfStack_84 = pfStack_84 + 3;
          pfStack_5c = pfStack_5c + 3;
          pfStack_88 = pfStack_88 + 3;
          pfStack_60 = pfStack_60 + 3;
          pfVar15 = pfVar15 + 3;
          puVar16 = puVar16 + 4;
          local_68 = (float)((int)local_68 + -1);
        } while (local_68 != 0.0);
      }
      iStack_90 = iStack_90 + 1;
    } while (iStack_90 < *(short *)((int)param_1 + 0x1ce) + -1);
  }
  iVar11 = (int)(short)param_1[0x73];
  puVar14 = (undefined4 *)param_1[0x77];
  puVar12 = (undefined4 *)((*(short *)((int)param_1 + 0x1ce) * 8 + -8) * iVar11 + (int)puVar14);
  iVar10 = 0;
  if (0 < iVar11) {
    do {
      *puVar14 = puVar14[iVar11 * 2];
      puVar14[1] = puVar14[iVar11 * 2 + 1];
      iVar11 = param_1[0x73];
      *puVar12 = puVar12[(short)iVar11 * -2];
      puVar12[1] = (puVar12 + (short)iVar11 * -2)[1];
      iVar11 = (int)(short)param_1[0x73];
      puVar14 = puVar14 + 2;
      puVar12 = puVar12 + 2;
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar11);
  }
  puVar12 = (undefined4 *)param_1[0x77];
  iVar11 = 0;
  puVar14 = puVar12 + (short)param_1[0x73] * 2 + -2;
  if (0 < *(short *)((int)param_1 + 0x1ce)) {
    do {
      *puVar12 = puVar12[2];
      puVar12[1] = puVar12[3];
      *puVar14 = puVar14[-2];
      puVar14[1] = puVar14[-1];
      puVar12 = puVar12 + (short)param_1[0x73] * 2;
      puVar14 = puVar14 + (short)param_1[0x73] * 2;
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(short *)((int)param_1 + 0x1ce));
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_10;
  return;
}

