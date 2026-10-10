
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0065b180(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  float *pfVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = param_3;
  iVar8 = param_2;
  *(int *)(param_1 + 0x21e0) = param_2;
  *(int *)(param_1 + 0x21ec) = param_5;
  puVar5 = (undefined4 *)(param_1 + 0x1688);
  *(int *)(param_1 + 0x21e8) = param_4;
  *(int *)(param_1 + 0x21e4) = param_3;
  *(undefined4 *)(param_1 + 0x21f0) = param_6;
  param_3 = 0;
  puVar3 = puVar5;
  do {
    fVar1 = (float)param_3;
    param_3 = param_3 + 1;
    *puVar3 = 0;
    puVar3[1] = 0;
    fVar1 = fVar1 * _DAT_006e957c;
    puVar3[-2] = SQRT(DAT_006e92e8 - fVar1);
    puVar3[-1] = SQRT(fVar1);
    puVar3 = puVar3 + 4;
  } while (param_3 < 0xb5);
  switch(param_6) {
  case 1:
    *(undefined4 *)(param_1 + 0x21d0) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x21d4) = 0;
    *(undefined4 *)(param_1 + 0x21d8) = 0;
    *(undefined4 *)(param_1 + 0x21dc) = 0;
    puVar3 = (undefined4 *)(param_1 + 8);
    iVar8 = 0x168;
    do {
      puVar3[-2] = 0x3f800000;
      puVar3[-1] = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3 = puVar3 + 4;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    iVar8 = 0xb5;
    do {
      puVar5[-2] = 0x3f800000;
      puVar5[-1] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5 = puVar5 + 4;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    return;
  case 2:
    fVar1 = (float)_DAT_006f9440;
    iVar6 = iVar10 - param_2;
    *(undefined4 *)(param_1 + 0x21d8) = 0;
    *(undefined4 *)(param_1 + 0x21dc) = 0;
    fVar1 = DAT_006e92e8 / SQRT(fVar1);
    *(float *)(param_1 + 0x21d0) = fVar1;
    *(float *)(param_1 + 0x21d4) = fVar1;
    param_2 = iVar6;
    if (iVar6 < 0) {
      param_2 = -iVar6;
    }
    if (iVar8 <= iVar10) {
      fVar1 = DAT_006e92e8 / (float)param_2;
      param_2 = 0;
      iVar9 = iVar8 << 4;
      iVar6 = iVar6 + 1;
      do {
        iVar7 = iVar9;
        if (iVar9 < 0) {
          iVar7 = iVar9 + 0x1680;
        }
        *(undefined4 *)(iVar7 + 8 + param_1) = 0;
        *(undefined4 *)(iVar7 + 0xc + param_1) = 0;
        iVar9 = iVar9 + 0x10;
        fVar2 = (float)param_2 * fVar1;
        *(float *)(iVar7 + param_1) = SQRT(DAT_006e92e8 - fVar2);
        *(float *)(iVar7 + 4 + param_1) = SQRT(fVar2);
        param_2 = param_2 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = (iVar8 - iVar10) + 0x168;
    if (iVar6 < 0) {
      iVar6 = -iVar6;
    }
    if (iVar10 <= iVar8 + 0x168) {
      fVar1 = DAT_006e92e8 / (float)iVar6;
      param_2 = 0;
      iVar8 = ((iVar8 + 0x168) - iVar10) + 1;
      puVar5 = (undefined4 *)(iVar10 * 0x10 + 8 + param_1);
      do {
        *puVar5 = 0;
        puVar5[1] = 0;
        fVar2 = (float)param_2 * fVar1;
        param_2 = param_2 + 1;
        iVar8 = iVar8 + -1;
        puVar5[-2] = SQRT(DAT_006e92e8 - fVar2);
        puVar5[-1] = SQRT(fVar2);
        puVar5 = puVar5 + 4;
      } while (iVar8 != 0);
      return;
    }
    break;
  case 3:
    fVar1 = (float)_DAT_006efe48;
    iVar6 = iVar10 - param_2;
    *(undefined4 *)(param_1 + 0x21dc) = 0;
    fVar1 = DAT_006e92e8 / SQRT(fVar1);
    *(float *)(param_1 + 0x21d0) = fVar1;
    *(float *)(param_1 + 0x21d4) = fVar1;
    *(float *)(param_1 + 0x21d8) = fVar1;
    param_2 = iVar6;
    if (iVar6 < 0) {
      param_2 = -iVar6;
    }
    if (iVar8 <= iVar10) {
      fVar1 = DAT_006e92e8 / (float)param_2;
      param_2 = 0;
      iVar9 = iVar8 << 4;
      iVar6 = iVar6 + 1;
      do {
        iVar7 = iVar9;
        if (iVar9 < 0) {
          iVar7 = iVar9 + 0x1680;
        }
        *(undefined4 *)(iVar7 + 8 + param_1) = 0;
        *(undefined4 *)(iVar7 + 0xc + param_1) = 0;
        iVar9 = iVar9 + 0x10;
        fVar2 = (float)param_2 * fVar1;
        *(float *)(iVar7 + param_1) = SQRT(DAT_006e92e8 - fVar2);
        *(float *)(iVar7 + 4 + param_1) = SQRT(fVar2);
        param_2 = param_2 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = param_4 - iVar10;
    param_2 = iVar6;
    if (iVar6 < 0) {
      param_2 = -iVar6;
    }
    if (iVar10 <= param_4) {
      fVar1 = DAT_006e92e8 / (float)param_2;
      param_2 = 0;
      iVar6 = iVar6 + 1;
      pfVar4 = (float *)(iVar10 * 0x10 + 8 + param_1);
      do {
        pfVar4[-2] = 0.0;
        pfVar4[1] = 0.0;
        fVar2 = (float)param_2 * fVar1;
        param_2 = param_2 + 1;
        iVar6 = iVar6 + -1;
        pfVar4[-1] = SQRT(DAT_006e92e8 - fVar2);
        *pfVar4 = SQRT(fVar2);
        pfVar4 = pfVar4 + 4;
      } while (iVar6 != 0);
    }
    iVar10 = (iVar8 - param_4) + 0x168;
    if (iVar10 < 0) {
      iVar10 = -iVar10;
    }
    if (param_4 <= iVar8 + 0x168) {
      fVar1 = DAT_006e92e8 / (float)iVar10;
      param_2 = 0;
      iVar8 = ((iVar8 + 0x168) - param_4) + 1;
      pfVar4 = (float *)(param_4 * 0x10 + 8 + param_1);
      do {
        pfVar4[-1] = 0.0;
        pfVar4[1] = 0.0;
        fVar2 = (float)param_2 * fVar1;
        param_2 = param_2 + 1;
        iVar8 = iVar8 + -1;
        pfVar4[-2] = SQRT(fVar2);
        *pfVar4 = SQRT(DAT_006e92e8 - fVar2);
        pfVar4 = pfVar4 + 4;
      } while (iVar8 != 0);
      return;
    }
    break;
  case 4:
    iVar6 = iVar10 - param_2;
    fVar1 = DAT_006e92e8 / SQRT((float)_DAT_006f9438);
    *(float *)(param_1 + 0x21d0) = fVar1;
    *(float *)(param_1 + 0x21d4) = fVar1;
    *(float *)(param_1 + 0x21d8) = fVar1;
    *(float *)(param_1 + 0x21dc) = fVar1;
    param_2 = iVar6;
    if (iVar6 < 0) {
      param_2 = -iVar6;
    }
    if (iVar8 <= iVar10) {
      fVar1 = DAT_006e92e8 / (float)param_2;
      param_2 = 0;
      iVar9 = iVar8 << 4;
      iVar6 = iVar6 + 1;
      do {
        iVar7 = iVar9;
        if (iVar9 < 0) {
          iVar7 = iVar9 + 0x1680;
        }
        *(undefined4 *)(iVar7 + 8 + param_1) = 0;
        *(undefined4 *)(iVar7 + 0xc + param_1) = 0;
        iVar9 = iVar9 + 0x10;
        fVar2 = (float)param_2 * fVar1;
        *(float *)(iVar7 + param_1) = SQRT(DAT_006e92e8 - fVar2);
        *(float *)(iVar7 + 4 + param_1) = SQRT(fVar2);
        param_2 = param_2 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = param_4 - iVar10;
    param_2 = iVar6;
    if (iVar6 < 0) {
      param_2 = -iVar6;
    }
    if (iVar10 <= param_4) {
      fVar1 = DAT_006e92e8 / (float)param_2;
      param_2 = 0;
      iVar6 = iVar6 + 1;
      pfVar4 = (float *)(iVar10 * 0x10 + 8 + param_1);
      do {
        pfVar4[-2] = 0.0;
        pfVar4[1] = 0.0;
        fVar2 = (float)param_2 * fVar1;
        param_2 = param_2 + 1;
        iVar6 = iVar6 + -1;
        pfVar4[-1] = SQRT(DAT_006e92e8 - fVar2);
        *pfVar4 = SQRT(fVar2);
        pfVar4 = pfVar4 + 4;
      } while (iVar6 != 0);
    }
    iVar10 = param_5 - param_4;
    param_2 = iVar10;
    if (iVar10 < 0) {
      param_2 = -iVar10;
    }
    if (param_4 <= param_5) {
      fVar1 = DAT_006e92e8 / (float)param_2;
      param_2 = 0;
      iVar10 = iVar10 + 1;
      pfVar4 = (float *)(param_4 * 0x10 + 8 + param_1);
      do {
        pfVar4[-2] = 0.0;
        pfVar4[-1] = 0.0;
        fVar2 = (float)param_2 * fVar1;
        param_2 = param_2 + 1;
        iVar10 = iVar10 + -1;
        *pfVar4 = SQRT(DAT_006e92e8 - fVar2);
        pfVar4[1] = SQRT(fVar2);
        pfVar4 = pfVar4 + 4;
      } while (iVar10 != 0);
    }
    iVar10 = (iVar8 - param_5) + 0x168;
    if (iVar10 < 0) {
      iVar10 = -iVar10;
    }
    if (param_5 <= iVar8 + 0x168) {
      fVar1 = DAT_006e92e8 / (float)iVar10;
      param_2 = 0;
      iVar8 = ((iVar8 + 0x168) - param_5) + 1;
      puVar5 = (undefined4 *)(param_5 * 0x10 + 8 + param_1);
      do {
        puVar5[-1] = 0;
        *puVar5 = 0;
        fVar2 = (float)param_2 * fVar1;
        param_2 = param_2 + 1;
        iVar8 = iVar8 + -1;
        puVar5[-2] = SQRT(fVar2);
        puVar5[1] = SQRT(DAT_006e92e8 - fVar2);
        puVar5 = puVar5 + 4;
      } while (iVar8 != 0);
    }
  }
  return;
}

