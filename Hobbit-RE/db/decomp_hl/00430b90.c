
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00430b90(int *param_1,float param_2,float param_3,float param_4,float *param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  int *piVar8;
  float *pfVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float local_54;
  float fStack_50;
  float local_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float local_30;
  float local_2c;
  float local_28;
  undefined1 auStack_18 [12];
  undefined1 local_c [12];
  
  FUN_00405080(local_c,param_1 + 0x14,param_1 + 0x11);
  fVar11 = (float10)FUN_00404890();
  fVar13 = (float10)_DAT_006e936c;
  fVar5 = (float)param_1[5];
  fVar6 = (float)param_1[7];
  fVar7 = (float10)_DAT_006ebff8;
  fVar1 = (float)param_1[6];
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  piVar8 = (int *)FUN_004021c0(param_1[0x17b4],param_1[0x17b5]);
  if ((piVar8 != (int *)0x0) && ((char)piVar8[0x1f] == '\x1c')) {
    pfVar9 = (float *)FUN_00405080(local_c,piVar8 + 0x14,piVar8 + 0x11);
    fVar2 = pfVar9[2];
    fVar3 = pfVar9[1];
    fVar4 = *pfVar9;
    pfVar9 = (float *)(**(code **)(*piVar8 + 0x28))();
    local_30 = *pfVar9;
    local_28 = pfVar9[2];
    local_2c = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4) * _DAT_006e936c * _DAT_006ebff8 +
               pfVar9[1];
  }
  local_54 = param_2 - (float)param_1[5];
  local_4c = param_4 - (float)param_1[7];
  param_2 = DAT_006e92e8 / SQRT(local_54 * local_54 + local_4c * local_4c);
  iVar10 = FUN_0064cf30(param_2);
  if (iVar10 == 0) {
    local_54 = 0.0;
    fStack_50 = 0.0;
    local_4c = 0.0;
  }
  else {
    local_54 = local_54 * param_2;
    fStack_50 = param_2 * DAT_006e92e4;
    local_4c = local_4c * param_2;
  }
  fVar12 = (float10)(**(code **)(*param_1 + 0x10c))();
  param_3 = (float)fVar12;
  param_2 = 0.0;
  param_4 = 0.0;
  FUN_00429030(&param_2);
  fVar2 = local_54 * 0.0 + fStack_50 * 0.0 + local_4c * 1.0;
  if (fVar2 <= DAT_006e92e4) {
    *param_6 = 0.0;
    *param_5 = 0.0;
    fVar13 = (float10)(**(code **)(param_1[0x17a8] + 0x14))();
    param_6 = (float *)(float)fVar13;
    if ((float10)DAT_006e92e4 < fVar13) {
      param_6 = (float *)((float)param_6 - (float)param_1[0x248] * _DAT_006e99bc);
      if ((float)param_6 < DAT_006e92e4 != (NAN((float)param_6) || NAN(DAT_006e92e4))) {
        param_6 = (float *)0x0;
      }
    }
  }
  else {
    FUN_00401f00(DAT_006e92e4 * 0.0 - 1.0,DAT_006e92e4 * 1.0 - DAT_006e92e4 * 0.0,
                 0.0 - DAT_006e92e4 * 0.0);
    param_2 = DAT_006e92e8 /
              SQRT(fStack_48 * fStack_48 + fStack_40 * fStack_40 + fStack_44 * fStack_44);
    iVar10 = FUN_0064cf30(param_2);
    if (iVar10 == 0) {
      fStack_48 = 0.0;
      fStack_44 = 0.0;
      fStack_40 = 0.0;
    }
    else {
      fStack_48 = fStack_48 * param_2;
      fStack_44 = fStack_44 * param_2;
      fStack_40 = fStack_40 * param_2;
    }
    if (fStack_48 * local_54 + fStack_40 * local_4c + fStack_44 * fStack_50 <= DAT_006e92e4) {
      *param_6 = fVar2 - DAT_006e92e8;
    }
    else {
      *param_6 = DAT_006e92e8 - fVar2;
    }
    FUN_00401f00(local_30 - fVar5,local_2c - (float)((float10)fVar1 + fVar11 * fVar13 * fVar7),
                 local_28 - fVar6);
    FUN_0042e1f0();
    FUN_00401f00(0,0x3f800000,0);
    fVar13 = (float10)FUN_00402020(auStack_18);
    fVar13 = fVar13 + fVar13;
    *param_5 = (float)fVar13;
    if (fVar13 < (float10)_DAT_006e9370 == (NAN(fVar13) || NAN((float10)_DAT_006e9370))) {
      if ((float10)DAT_006e92e8 < fVar13) {
        *param_5 = 1.0;
      }
    }
    else {
      *param_5 = -1.0;
    }
    fVar13 = (float10)(**(code **)(param_1[0x17a8] + 0x14))();
    param_6 = (float *)(float)fVar13;
    if ((fVar13 < (float10)DAT_006e92e8 != (NAN(fVar13) || NAN((float10)DAT_006e92e8))) &&
       (param_6 = (float *)((float)param_1[0x248] * _DAT_006e99bc + (float)param_6),
       DAT_006e92e8 < (float)param_6)) {
      param_6 = (float *)0x3f800000;
      (**(code **)(param_1[0x17a8] + 0x10))(0x3f800000);
      return;
    }
  }
  (**(code **)(param_1[0x17a8] + 0x10))(param_6);
  return;
}

