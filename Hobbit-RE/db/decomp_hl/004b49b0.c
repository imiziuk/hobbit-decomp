
void __fastcall FUN_004b49b0(int *param_1)

{
  int iVar1;
  int *piVar2;
  float *pfVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = FUN_00549470(param_1 + 0x2f);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_005c1230(&local_18);
    param_1[0x11] = *piVar2;
    param_1[0x12] = piVar2[1];
    param_1[0x13] = piVar2[2];
    param_1[0x14] = piVar2[3];
    param_1[0x15] = piVar2[4];
    param_1[0x16] = piVar2[5];
    pfVar3 = (float *)FUN_005c0150();
    if (*pfVar3 < (float)param_1[0x11] != (NAN(*pfVar3) || NAN((float)param_1[0x11]))) {
      param_1[0x11] = (int)*pfVar3;
    }
    if (pfVar3[1] < (float)param_1[0x12] != (NAN(pfVar3[1]) || NAN((float)param_1[0x12]))) {
      param_1[0x12] = (int)pfVar3[1];
    }
    if (pfVar3[2] < (float)param_1[0x13] != (NAN(pfVar3[2]) || NAN((float)param_1[0x13]))) {
      param_1[0x13] = (int)pfVar3[2];
    }
    if ((float)param_1[0x14] < pfVar3[3]) {
      param_1[0x14] = (int)pfVar3[3];
    }
    if ((float)param_1[0x15] < pfVar3[4]) {
      param_1[0x15] = (int)pfVar3[4];
    }
    if ((float)param_1[0x16] < pfVar3[5]) {
      param_1[0x16] = (int)pfVar3[5];
    }
    param_1[0xb] = param_1[0x11];
    param_1[0xc] = param_1[0x12];
    param_1[0xd] = param_1[0x13];
    param_1[0xe] = param_1[0x14];
    param_1[0xf] = param_1[0x15];
    param_1[0x10] = param_1[0x16];
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    (**(code **)(*param_1 + 0x14))(&local_18,0);
    FUN_00549580(param_1 + 0x2f);
  }
  return;
}

