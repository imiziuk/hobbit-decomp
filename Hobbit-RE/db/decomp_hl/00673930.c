
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00673930(float *param_1,float *param_2,float *param_3,float param_4,float param_5,int param_6)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  undefined1 local_c [12];
  
  if (param_1[0x1c] == 0.0) {
    if (((uint)param_1[0x22] & 0x800) != 0) {
      FUN_006746a0();
    }
    *param_2 = -(param_4 - (float)((int)param_1[0x15] + (int)param_1[0x13]) * _DAT_006e936c);
    param_2[1] = -(param_5 - (float)((int)param_1[0x16] + (int)param_1[0x14]) * _DAT_006e936c);
    param_2[2] = param_1[0x93];
    param_3[2] = 0.0;
    param_3[1] = 0.0;
    *param_3 = 0.0;
    if (param_6 == 0) {
      pfVar2 = (float *)FUN_006727a0(local_c,param_2);
      *param_2 = *pfVar2;
      param_2[1] = pfVar2[1];
      param_2[2] = pfVar2[2];
      *param_2 = *param_2 - *param_1;
      param_2[1] = param_2[1] - param_1[1];
      param_2[2] = param_2[2] - param_1[2];
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
    }
  }
  else {
    fVar1 = (float)(int)param_1[0x18] * _DAT_006e936c;
    *param_3 = -(((param_4 - _DAT_006e936c * (float)(int)param_1[0x17]) / (float)(int)param_1[0x17])
                * param_1[0x1d]);
    param_3[1] = -(((param_5 - fVar1) / (float)(int)param_1[0x18]) * param_1[0x1e]);
    param_3[2] = param_1[0x1a];
    *param_2 = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 1.0;
    if (param_6 == 0) {
      *param_2 = *param_3;
      param_2[1] = param_3[1];
      param_2[2] = param_3[2] + DAT_006e92e8;
      pfVar2 = (float *)FUN_006727a0(local_c,param_3);
      *param_3 = *pfVar2;
      param_3[1] = pfVar2[1];
      param_3[2] = pfVar2[2];
      pfVar2 = (float *)FUN_006727a0(local_c,param_2);
      *param_2 = *pfVar2;
      param_2[1] = pfVar2[1];
      param_2[2] = pfVar2[2];
      *param_2 = *param_2 - *param_3;
      param_2[1] = param_2[1] - param_3[1];
      param_2[2] = param_2[2] - param_3[2];
    }
  }
  fVar1 = DAT_006e92e8 /
          SQRT(*param_2 * *param_2 + param_2[1] * param_2[1] + param_2[2] * param_2[2]);
  iVar3 = FUN_0064cf30(fVar1);
  if (iVar3 != 0) {
    *param_2 = fVar1 * *param_2;
    param_2[1] = fVar1 * param_2[1];
    param_2[2] = fVar1 * param_2[2];
    return;
  }
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  return;
}

