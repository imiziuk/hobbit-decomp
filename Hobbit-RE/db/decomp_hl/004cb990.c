
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004cb990(int *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float local_c;
  float local_8;
  float local_4;
  
  if (param_1[0x5a] != 0 || param_1[0x5b] != 0) {
    FUN_004cb020(&local_c);
    fVar5 = local_c - (float)param_1[5];
    fVar6 = local_8 - (float)param_1[6];
    fVar3 = (float)param_1[7];
    param_1[6] = (int)local_8;
    param_1[5] = (int)local_c;
    param_1[7] = (int)local_4;
    fVar4 = (float)((float10)local_4 - (float10)fVar3);
    fVar10 = (float10)fVar5 * (float10)fVar5 +
             (float10)fVar6 * (float10)fVar6 + ((float10)local_4 - (float10)fVar3) * (float10)fVar4;
    if ((float10)DAT_006e92e8 < fVar10) {
      fVar10 = (float10)FUN_004cafe0();
    }
    fVar3 = DAT_006e92e4;
    if (DAT_006e92e4 < (float)param_1[0x5c]) {
      fVar3 = (float)param_1[0x5c];
    }
    param_1[0x5c] = (int)fVar3;
    fVar7 = DAT_006e92e8;
    if (fVar3 < DAT_006e92e8 != (NAN(fVar3) || NAN(DAT_006e92e8))) {
      fVar7 = fVar3;
    }
    param_1[0x5c] = (int)fVar7;
    fVar7 = DAT_006e92e8 - fVar7;
    iVar8 = 0;
    if (0 < param_1[0x48]) {
      iVar9 = 0;
      do {
        pfVar1 = (float *)(param_1[0x49] + 0xc + iVar9);
        pfVar2 = (float *)(param_1[0x49] + 0xc + iVar9);
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + 0x2c;
        *pfVar2 = fVar5 * fVar7 + *pfVar1;
        pfVar2[1] = fVar6 * fVar7 + pfVar2[1];
        pfVar2[2] = fVar4 * fVar7 + pfVar2[2];
      } while (iVar8 < param_1[0x48]);
    }
    if ((float10)_DAT_006e9364 < fVar10) {
      iVar8 = 0;
      if (0 < param_1[0x48]) {
        iVar9 = 0;
        do {
          pfVar1 = (float *)(param_1[0x49] + 0xc + iVar9);
          pfVar2 = (float *)(param_1[0x49] + 0xc + iVar9);
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + 0x2c;
          *pfVar2 = (fVar5 - fVar5 * fVar7) + *pfVar1;
          pfVar2[1] = (fVar6 - fVar6 * fVar7) + pfVar2[1];
          pfVar2[2] = (fVar4 - fVar4 * fVar7) + pfVar2[2];
        } while (iVar8 < param_1[0x48]);
      }
      (**(code **)(*param_1 + 0x14))(param_1 + 5,0);
    }
  }
  return;
}

