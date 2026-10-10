
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0068b113(int param_1,uint param_2,uint param_3,uint param_4)

{
  undefined2 uVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  float *pfVar14;
  ushort *puVar15;
  
  if (*(int *)(param_1 + 0x1088) == 0) {
    iVar13 = -0x7ff8fff2;
  }
  else {
    if ((((param_2 < *(uint *)(param_1 + 0x106c)) || (*(uint *)(param_1 + 0x1074) <= param_2)) ||
        (param_3 < *(uint *)(param_1 + 0x1078))) || (*(uint *)(param_1 + 0x107c) <= param_3)) {
      iVar13 = FUN_0068af20();
      if (iVar13 < 0) {
        return iVar13;
      }
      *(uint *)(param_1 + 0x1074) = param_2 + 1;
      *(uint *)(param_1 + 0x106c) = param_2;
      *(uint *)(param_1 + 0x1078) = param_3;
      *(uint *)(param_1 + 0x107c) = param_3 + 1;
      fVar12 = _DAT_006ef418;
      fVar11 = DAT_006e92e8;
      fVar10 = DAT_006e92e4;
      if (param_4 != 0) {
        param_4 = *(uint *)(param_1 + 0x1068);
        pfVar14 = *(float **)(param_1 + 0x1064);
        puVar15 = (ushort *)
                  (*(int *)(param_1 + 0x1048) * param_2 + *(int *)(param_1 + 0x104c) * param_3 +
                   param_4 * 2 + *(int *)(param_1 + 0x18));
        if (param_4 < *(uint *)(param_1 + 0x1070)) {
          do {
            uVar1 = *(undefined2 *)(param_1 + 0x108c);
            uVar2 = puVar15[1];
            fVar8 = (float)(*puVar15 >> ((byte)*(undefined2 *)(param_1 + 0x1090) & 0x1f) & 0xff) -
                    _DAT_006ee9c4;
            fVar5 = (float)(uVar2 >> ((byte)*(undefined2 *)(param_1 + 0x1090) & 0x1f) & 0xff) -
                    _DAT_006ee9c4;
            fVar6 = fVar5 * _DAT_006f9f3c;
            fVar4 = ((float)(*puVar15 >> ((byte)*(undefined2 *)(param_1 + 0x108c) & 0x1f) & 0xff) -
                    fVar12) * _DAT_006f9f38;
            fVar7 = fVar4 + fVar6;
            *pfVar14 = fVar7;
            fVar9 = fVar8 * _DAT_006f9f34;
            fVar5 = fVar5 * _DAT_006f9f30;
            fVar3 = (fVar4 - fVar9) - fVar5;
            pfVar14[1] = fVar3;
            fVar8 = fVar8 * _DAT_006f9f2c;
            fVar4 = fVar8 + fVar4;
            pfVar14[2] = fVar4;
            pfVar14[3] = 1.0;
            if (fVar7 < fVar10 == (NAN(fVar7) || NAN(fVar10))) {
              if (fVar11 < fVar7) {
                fVar7 = 1.0;
              }
            }
            else {
              fVar7 = 0.0;
            }
            *pfVar14 = fVar7;
            if (fVar3 < fVar10 == (NAN(fVar3) || NAN(fVar10))) {
              if (fVar11 < fVar3) {
                fVar3 = 1.0;
              }
            }
            else {
              fVar3 = 0.0;
            }
            pfVar14[1] = fVar3;
            if (fVar4 < fVar10 == (NAN(fVar4) || NAN(fVar10))) {
              if (fVar11 < fVar4) {
                fVar4 = 1.0;
              }
            }
            else {
              fVar4 = 0.0;
            }
            pfVar14[2] = fVar4;
            fVar3 = ((float)(uVar2 >> ((byte)uVar1 & 0x1f) & 0xff) - fVar12) * _DAT_006f9f38;
            fVar6 = fVar3 + fVar6;
            pfVar14[4] = fVar6;
            fVar5 = (fVar3 - fVar9) - fVar5;
            pfVar14[5] = fVar5;
            fVar3 = fVar3 + fVar8;
            pfVar14[6] = fVar3;
            pfVar14[7] = 1.0;
            if (fVar6 < fVar10 == (NAN(fVar6) || NAN(fVar10))) {
              if (fVar11 < fVar6) {
                fVar6 = 1.0;
              }
            }
            else {
              fVar6 = 0.0;
            }
            pfVar14[4] = fVar6;
            if (fVar5 < fVar10 == (NAN(fVar5) || NAN(fVar10))) {
              if (fVar11 < fVar5) {
                fVar5 = 1.0;
              }
            }
            else {
              fVar5 = 0.0;
            }
            pfVar14[5] = fVar5;
            if (fVar3 < fVar10 == (NAN(fVar3) || NAN(fVar10))) {
              if (fVar11 < fVar3) {
                fVar3 = 1.0;
              }
            }
            else {
              fVar3 = 0.0;
            }
            param_4 = param_4 + 2;
            pfVar14[6] = fVar3;
            puVar15 = puVar15 + 2;
            pfVar14 = pfVar14 + 8;
          } while (param_4 < *(uint *)(param_1 + 0x1070));
        }
      }
    }
    iVar13 = 0;
  }
  return iVar13;
}

