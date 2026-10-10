
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004c8aa0(int *param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pfVar1 = (float *)(param_1 + 0xb);
  *pfVar1 = 3.4028235e+38;
  param_1[0xc] = 0x7f7fffff;
  param_1[0xd] = 0x7f7fffff;
  param_1[0xe] = -0x800001;
  param_1[0xf] = -0x800001;
  param_1[0x10] = -0x800001;
  iVar7 = 0;
  if (0 < param_1[0x48]) {
    iVar6 = 0;
    do {
      iVar2 = iVar6 + 0xc + param_1[0x49];
      fVar3 = *(float *)(iVar6 + 0xc + param_1[0x49]) - (float)param_1[5];
      fVar4 = *(float *)(iVar2 + 4) - (float)param_1[6];
      fVar5 = *(float *)(iVar2 + 8) - (float)param_1[7];
      if (fVar3 < *pfVar1 != (NAN(fVar3) || NAN(*pfVar1))) {
        *pfVar1 = fVar3;
      }
      if (fVar4 < (float)param_1[0xc] != (NAN(fVar4) || NAN((float)param_1[0xc]))) {
        param_1[0xc] = (int)fVar4;
      }
      if (fVar5 < (float)param_1[0xd] != (NAN(fVar5) || NAN((float)param_1[0xd]))) {
        param_1[0xd] = (int)fVar5;
      }
      if ((float)param_1[0xe] < fVar3) {
        param_1[0xe] = (int)fVar3;
      }
      if ((float)param_1[0xf] < fVar4) {
        param_1[0xf] = (int)fVar4;
      }
      if ((float)param_1[0x10] < fVar5) {
        param_1[0x10] = (int)fVar5;
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x2c;
    } while (iVar7 < param_1[0x48]);
  }
  fVar3 = (float)param_1[0x3a];
  if (DAT_006e92e4 < *pfVar1 != (NAN(DAT_006e92e4) || NAN(*pfVar1))) {
    *pfVar1 = 0.0;
  }
  if (fVar3 < (float)param_1[0xc] != (NAN(fVar3) || NAN((float)param_1[0xc]))) {
    param_1[0xc] = (int)fVar3;
  }
  if (DAT_006e92e4 < (float)param_1[0xd] != (NAN(DAT_006e92e4) || NAN((float)param_1[0xd]))) {
    param_1[0xd] = 0;
  }
  if ((float)param_1[0xe] < DAT_006e92e4) {
    param_1[0xe] = 0;
  }
  if ((float)param_1[0xf] < fVar3) {
    param_1[0xf] = (int)fVar3;
  }
  if ((float)param_1[0x10] < DAT_006e92e4) {
    param_1[0x10] = 0;
  }
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  FUN_00406af0(&local_c);
  *pfVar1 = *pfVar1 - _DAT_006e9988;
  param_1[0xc] = (int)((float)param_1[0xc] - _DAT_006e9988);
  param_1[0xd] = (int)((float)param_1[0xd] - _DAT_006e9988);
  param_1[0xe] = (int)((float)param_1[0xe] + _DAT_006e9988);
  param_1[0xf] = (int)((float)param_1[0xf] + _DAT_006e9988);
  param_1[0x10] = (int)((float)param_1[0x10] + _DAT_006e9988);
  (**(code **)(*param_1 + 0x14))(param_1 + 5,0);
  return;
}

