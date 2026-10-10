
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004383b0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float local_14;
  float local_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (param_1[0x11a0] == 0 && param_1[0x11a1] == 0) {
    return 0;
  }
  fVar1 = SQRT(((float)param_1[5] - (float)param_1[0x11a8]) *
               ((float)param_1[5] - (float)param_1[0x11a8]) +
               ((float)param_1[6] - (float)param_1[0x11a9]) *
               ((float)param_1[6] - (float)param_1[0x11a9]) +
               ((float)param_1[7] - (float)param_1[0x11aa]) *
               ((float)param_1[7] - (float)param_1[0x11aa]));
  if (fVar1 < _DAT_006e9984 == (NAN(fVar1) || NAN(_DAT_006e9984))) {
    piVar4 = (int *)FUN_004021c0(param_1[0x11a0],param_1[0x11a1]);
    pfVar5 = (float *)(**(code **)(*param_1 + 0x28))();
    pfVar6 = (float *)(**(code **)(*piVar4 + 0x28))();
    fStack_c = *pfVar6 - *pfVar5;
    fStack_8 = pfVar6[1] - pfVar5[1];
    fStack_4 = pfVar6[2] - pfVar5[2];
    local_14 = DAT_006e92e8 / SQRT(fStack_c * fStack_c + fStack_8 * fStack_8 + fStack_4 * fStack_4);
    iVar7 = FUN_0064cf30(local_14);
    fVar1 = DAT_006e92e4;
    fVar2 = DAT_006e92e4;
    fVar3 = DAT_006e92e4;
    if (iVar7 != 0) {
      fVar1 = fStack_c * local_14;
      fVar2 = fStack_4 * local_14;
      fVar3 = fStack_8 * local_14;
    }
    if (DAT_006e92e4 <
        fVar1 * (float)param_1[0x11ae] +
        fVar3 * (float)param_1[0x11af] + fVar2 * (float)param_1[0x11b0]) {
      return 0;
    }
    FUN_0064c8e0(param_1[0x11d],&local_14,&local_10);
    if (_DAT_006ec050 <
        (float)param_1[0x11af] * DAT_006e92e4 +
        (local_10 * DAT_006e92e4 + local_14) * (float)param_1[0x11ae] +
        (local_10 - local_14 * DAT_006e92e4) * (float)param_1[0x11b0]) {
      return 0;
    }
  }
  else {
    FUN_0064c8e0(param_1[0x11d],&local_10,&local_14);
    fVar1 = (float)param_1[0x11af] * DAT_006e92e4 +
            (local_14 * DAT_006e92e4 + local_10) * (float)param_1[0x11ae] +
            (local_14 - local_10 * DAT_006e92e4) * (float)param_1[0x11b0];
    if (fVar1 < _DAT_006e99a4 != (NAN(fVar1) || NAN(_DAT_006e99a4))) {
      return 0;
    }
  }
  return 1;
}

