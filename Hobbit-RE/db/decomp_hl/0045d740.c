
float * __thiscall FUN_0045d740(int *param_1,float *param_2,float param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
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
  float fStack_8;
  float fStack_4;
  
  iVar6 = FUN_0045da60();
  if (iVar6 == 0) {
    pfVar7 = (float *)(**(code **)(*param_1 + 0x28))();
    *param_2 = *pfVar7;
    param_2[1] = pfVar7[1];
    param_2[2] = pfVar7[2];
    return param_2;
  }
  piVar8 = (int *)FUN_004021c0(param_3,param_4);
  if (piVar8 != (int *)0x0) {
    pfVar7 = (float *)(**(code **)(*piVar8 + 0x28))();
    fVar1 = *pfVar7;
    fVar2 = pfVar7[1];
    fVar3 = pfVar7[2];
    FUN_00460e50(&fStack_24,0);
    FUN_00460e50(&fStack_18,0x3f800000);
    FUN_00401f00(fStack_18 - fStack_24,fStack_14 - fStack_20,fStack_10 - fStack_1c);
    FUN_00401f00(fVar1 - fStack_24,fVar2 - fStack_20,fVar3 - fStack_1c);
    param_3 = (fStack_c * fStack_3c + fStack_38 * fStack_8 + fStack_34 * fStack_4) /
              (fStack_3c * fStack_3c + fStack_34 * fStack_34 + fStack_38 * fStack_38);
    if (param_3 < DAT_006e92e8 == (NAN(param_3) || NAN(DAT_006e92e8))) {
      param_3 = 1.0;
    }
    else if (param_3 < DAT_006e92e4) {
      param_3 = 0.0;
    }
    FUN_00460e50(&fStack_30,param_3);
    FUN_00401f00(fVar1 - fStack_30,fVar2 - fStack_2c,fVar3 - fStack_28);
    fVar5 = SQRT(fStack_54 * fStack_54 + fStack_4c * fStack_4c + fStack_50 * fStack_50);
    if ((fVar5 < (float)param_1[0x30]) ||
       ((float)param_1[0x31] < fVar5 != (NAN((float)param_1[0x31]) || NAN(fVar5)))) {
      fVar4 = fVar5;
      if ((float)param_1[0x31] <= fVar5) {
        fVar4 = (float)param_1[0x31];
      }
      if ((float)param_1[0x30] <= fVar4) {
        fStack_58 = fVar5;
        if ((float)param_1[0x31] <= fVar5) {
          fStack_58 = (float)param_1[0x31];
        }
      }
      else {
        fStack_58 = (float)param_1[0x30];
      }
      fVar5 = DAT_006e92e8 / fVar5;
      iVar6 = FUN_0064cf30(fVar5);
      if (iVar6 == 0) {
        fStack_4c = 0.0;
        fStack_30 = DAT_006e92e4;
        fStack_2c = DAT_006e92e4;
      }
      else {
        fVar5 = fVar5 * fStack_58;
        fStack_4c = fStack_4c * fVar5;
        fStack_30 = fVar5 * fStack_54;
        fStack_2c = fStack_50 * fVar5;
      }
      fStack_30 = fVar1 - fStack_30;
      fStack_2c = fVar2 - fStack_2c;
      fStack_28 = fVar3 - fStack_4c;
    }
    *param_2 = fStack_30;
    param_2[2] = fStack_28;
    param_2[1] = fStack_2c;
    return param_2;
  }
  FUN_00460e50(param_2,0);
  return param_2;
}

