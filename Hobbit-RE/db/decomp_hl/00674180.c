
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00674180(float *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  undefined1 local_c [12];
  
  if (((uint)param_1[0x22] & 0x100) != 0) {
    param_1[0x22] = (float)((uint)param_1[0x22] & 0xfffffeff);
    fVar2 = (float)(((int)param_1[0x15] - (int)param_1[0x13]) + 1) * _DAT_006e936c;
    fVar3 = (float)(((int)param_1[0x16] - (int)param_1[0x14]) + 1) * _DAT_006e936c;
    FUN_00672ac0(-fVar2,-fVar3,fVar2,fVar3,param_1 + 0xa1,param_1 + 0x9d,param_1 + 0x95,
                 param_1 + 0x99,param_1 + 0xa5,param_1 + 0xa9,0);
    FUN_00672ac0(-fVar2,-fVar3,fVar2,fVar3,param_1 + 0xb9,param_1 + 0xb5,param_1 + 0xad,
                 param_1 + 0xb1,param_1 + 0xbd,param_1 + 0xc1,1);
    pfVar4 = param_1 + 0x97;
    pfVar5 = param_1 + 199;
    iVar6 = 6;
    do {
      if (pfVar5 != (float *)0x8) {
        if (pfVar4[-2] < DAT_006e92e4) {
          pfVar5[-2] = 4.2039e-45;
        }
        else {
          pfVar5[-2] = 0.0;
        }
        if (pfVar4[-1] < DAT_006e92e4) {
          pfVar5[-1] = 5.60519e-45;
        }
        else {
          pfVar5[-1] = 1.4013e-45;
        }
        if (*pfVar4 < DAT_006e92e4) {
          *pfVar5 = 7.00649e-45;
        }
        else {
          *pfVar5 = 2.8026e-45;
        }
      }
      pfVar1 = pfVar5 + 0x10;
      if (pfVar1 != (float *)0x0) {
        if (pfVar4[-2] < DAT_006e92e4) {
          *pfVar1 = 0.0;
        }
        else {
          *pfVar1 = 4.2039e-45;
        }
        if (pfVar4[-1] < DAT_006e92e4) {
          pfVar5[0x11] = 1.4013e-45;
        }
        else {
          pfVar5[0x11] = 5.60519e-45;
        }
        if (*pfVar4 < DAT_006e92e4) {
          pfVar5[0x12] = 2.8026e-45;
        }
        else {
          pfVar5[0x12] = 7.00649e-45;
        }
      }
      pfVar1 = pfVar5 + 0x22;
      if (pfVar1 != (float *)0x0) {
        if (pfVar4[0x16] < DAT_006e92e4) {
          *pfVar1 = 4.2039e-45;
        }
        else {
          *pfVar1 = 0.0;
        }
        if (pfVar4[0x17] < DAT_006e92e4) {
          pfVar5[0x23] = 5.60519e-45;
        }
        else {
          pfVar5[0x23] = 1.4013e-45;
        }
        if (pfVar4[0x18] < DAT_006e92e4) {
          pfVar5[0x24] = 7.00649e-45;
        }
        else {
          pfVar5[0x24] = 2.8026e-45;
        }
      }
      pfVar1 = pfVar5 + 0x34;
      if (pfVar1 != (float *)0x0) {
        if (pfVar4[0x16] < DAT_006e92e4) {
          *pfVar1 = 0.0;
        }
        else {
          *pfVar1 = 4.2039e-45;
        }
        if (pfVar4[0x17] < DAT_006e92e4) {
          pfVar5[0x35] = 1.4013e-45;
        }
        else {
          pfVar5[0x35] = 5.60519e-45;
        }
        if (pfVar4[0x18] < DAT_006e92e4) {
          pfVar5[0x36] = 2.8026e-45;
        }
        else {
          pfVar5[0x36] = 7.00649e-45;
        }
      }
      pfVar5 = pfVar5 + 3;
      pfVar4 = pfVar4 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    param_1[0x10d] = param_1[0xa5];
    param_1[0x10e] = param_1[0xa6];
    param_1[0x10f] = param_1[0xa7];
    param_1[0x110] = param_1[0xa8];
    pfVar4 = param_1 + 0x111;
    pfVar5 = param_1 + 0x114;
    param_1[0x110] =
         -(param_1[0x10d] * *param_1 + param_1[0x10e] * param_1[1] + param_1[0x10f] * param_1[2]);
    if (pfVar4 != (float *)0x0) {
      if (param_1[0x10d] < DAT_006e92e4) {
        *pfVar4 = 4.2039e-45;
      }
      else {
        *pfVar4 = 0.0;
      }
      if (param_1[0x10e] < DAT_006e92e4) {
        param_1[0x112] = 5.60519e-45;
      }
      else {
        param_1[0x112] = 1.4013e-45;
      }
      if (param_1[0x10f] < DAT_006e92e4) {
        param_1[0x113] = 7.00649e-45;
      }
      else {
        param_1[0x113] = 2.8026e-45;
      }
    }
    if (pfVar5 != (float *)0x0) {
      if (param_1[0x10d] < DAT_006e92e4) {
        *pfVar5 = 0.0;
      }
      else {
        *pfVar5 = 4.2039e-45;
      }
      if (param_1[0x10e] < DAT_006e92e4) {
        param_1[0x115] = 1.4013e-45;
      }
      else {
        param_1[0x115] = 5.60519e-45;
      }
      if (param_1[0x10f] < DAT_006e92e4) {
        param_1[0x116] = 2.8026e-45;
      }
      else {
        param_1[0x116] = 7.00649e-45;
      }
    }
    pfVar4 = (float *)FUN_00672330(local_c);
    param_1[0x117] = *pfVar4;
    param_1[0x118] = pfVar4[1];
    param_1[0x119] = pfVar4[2];
    fVar2 = (param_1[0x1b] / param_1[0x93]) *
            -((float)(int)param_1[0x13] -
             (float)((int)param_1[0x15] + (int)param_1[0x13]) * _DAT_006e936c);
    fVar3 = (param_1[0x1b] / param_1[0x93]) *
            -((float)(int)param_1[0x14] -
             (float)((int)param_1[0x16] + (int)param_1[0x14]) * _DAT_006e936c);
    fVar2 = SQRT(fVar2 * fVar2 + fVar3 * fVar3) / param_1[0x1b];
    param_1[0x11a] = fVar2;
    if (param_1[0x1c] != 0.0) {
      param_1[0x11b] =
           SQRT(param_1[0x1e] * param_1[0x1e] * _DAT_006e9550 +
                param_1[0x1d] * param_1[0x1d] * _DAT_006e9550);
      return;
    }
    param_1[0x11b] = fVar2 * param_1[0x1b];
  }
  return;
}

