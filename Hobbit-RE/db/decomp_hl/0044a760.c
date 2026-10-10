
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0044a760(int param_1,float param_2,float param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  
  fVar5 = SQRT(param_2 * param_2 + param_3 * param_3 + param_4 * param_4);
  if (fVar5 < _DAT_006e9360 != (NAN(fVar5) || NAN(_DAT_006e9360))) {
    return;
  }
  fVar6 = DAT_006e92e8 / fVar5;
  fVar7 = param_2 * fVar6;
  do {
    iVar10 = *(int *)(param_1 + 0x465c);
    pfVar1 = (float *)(param_1 + 0x3a58 + iVar10 * 0x18);
    fVar2 = *(float *)(param_1 + 0x3a64 + iVar10 * 0x18) - *pfVar1;
    fVar3 = pfVar1[4] - pfVar1[1];
    fVar8 = pfVar1[5] - pfVar1[2];
    param_2 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar8 * fVar8);
    fVar4 = param_2;
    if (param_2 < DAT_006e92e4 != (NAN(param_2) || NAN(DAT_006e92e4))) {
      fVar4 = -param_2;
    }
    if (fVar4 < _DAT_007245dc != (NAN(fVar4) || NAN(_DAT_007245dc))) {
      param_2 = 0.1;
    }
    fVar9 = DAT_006e92e8 / param_2;
    fVar4 = param_2 * *(float *)(param_1 + 0x4660);
    if (fVar2 * fVar9 * fVar7 + fVar3 * fVar9 * param_3 * fVar6 + param_4 * fVar6 * fVar8 * fVar9 <=
        DAT_006e92e4) {
      fVar4 = fVar4 - fVar5;
      if (fVar4 < DAT_006e92e4 == (NAN(fVar4) || NAN(DAT_006e92e4))) goto LAB_0044a913;
      if (iVar10 < 3) {
        *(undefined4 *)(param_1 + 0x4660) = 0;
        return;
      }
      fVar5 = -fVar4;
      iVar10 = iVar10 + -1;
      *(undefined4 *)(param_1 + 0x4660) = 0x3f800000;
    }
    else {
      fVar4 = fVar4 + fVar5;
      if (fVar4 <= param_2) {
LAB_0044a913:
        *(float *)(param_1 + 0x4660) = fVar4 / param_2;
        return;
      }
      if (iVar10 == *(int *)(param_1 + 0x4658) + -1) {
        *(undefined4 *)(param_1 + 0x4660) = 0x3f800000;
        return;
      }
      fVar5 = fVar5 - param_2;
      iVar10 = iVar10 + 1;
      *(undefined4 *)(param_1 + 0x4660) = 0;
    }
    fVar2 = _DAT_006e9360;
    *(int *)(param_1 + 0x465c) = iVar10;
    if (fVar5 <= fVar2) {
      return;
    }
  } while( true );
}

