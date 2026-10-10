
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_004bf9f0(int param_1,float *param_2,float *param_3,float *param_4,int param_5)

{
  char cVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  float *pfVar7;
  int local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_c;
  
  if (*(int *)(param_1 + 0x250) != 0 || *(int *)(param_1 + 0x254) != 0) {
    FUN_0064e7d0();
    return 0;
  }
  local_44 = *param_3 + *param_4;
  fVar2 = param_3[1] + param_4[1];
  local_3c = param_3[2] + param_4[2];
  local_40 = fVar2 - _DAT_006e998c;
  local_38 = local_44;
  local_34 = fVar2;
  local_30 = local_3c;
  FUN_00579720();
  FUN_005798f0();
  iVar4 = FUN_00577e70();
  if (iVar4 != 0) {
    *param_2 = local_38;
    param_2[1] = local_34;
    param_2[2] = local_30;
    FUN_0064e7d0();
    return 0;
  }
  local_38 = local_44;
  local_34 = local_40;
  local_30 = local_3c;
  fVar3 = DAT_006e92e4;
  if (param_5 != 0) {
    fVar3 = _DAT_006e999c;
  }
  local_20 = fVar3 * *param_4;
  local_1c = fVar3 * param_4[1];
  local_44 = local_44 - local_20;
  local_40 = local_40 - local_1c;
  local_3c = local_3c - fVar3 * param_4[2];
  local_18 = local_3c;
  FUN_00579720();
  FUN_005798f0();
  local_24 = param_3[2];
  local_2c = *param_3;
  local_28 = param_3[1];
  iVar4 = FUN_00577e70();
  if (iVar4 == 0) {
    if (param_5 != 0) {
      FUN_0064e7d0();
      *param_2 = *param_3;
      param_2[1] = param_3[1];
      param_2[2] = param_3[2];
      return 0;
    }
  }
  else {
    local_c = DAT_007734fc;
    local_18 = *(float *)(param_1 + 0x264) + _DAT_006e958c;
    local_20 = local_18 * DAT_00773500;
    local_18 = DAT_00773508 * local_18;
    local_2c = DAT_007734f4 + local_20;
    local_24 = local_18 + DAT_007734fc;
    local_28 = fVar2;
  }
  local_40 = local_28 - _DAT_006e9590;
  local_44 = local_2c;
  local_3c = local_24;
  FUN_00579460(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),&local_2c,&local_44,
               *(float *)(param_1 + 0x264) - _DAT_006e958c,0x400001);
  FUN_005798f0();
  iVar4 = FUN_00577e70();
  if ((iVar4 != 0) && (local_48 = 0, 0 < DAT_00773970)) {
    pfVar7 = &DAT_007734f8;
    do {
      piVar5 = (int *)FUN_004021c0(pfVar7[10],pfVar7[0xb]);
      if (piVar5 != (int *)0x0) {
        cVar1 = (char)piVar5[0x1f];
        if (cVar1 == '%') {
          pfVar6 = (float *)(**(code **)(*piVar5 + 0x28))();
          local_20 = local_2c - *pfVar6;
          fVar2 = local_20 * local_20 + (local_24 - pfVar6[2]) * (local_24 - pfVar6[2]);
          fVar3 = (float)piVar5[0x99] * (float)piVar5[0x99];
          if (fVar3 < fVar2 != (NAN(fVar3) || NAN(fVar2))) {
            FUN_0064e7d0();
            return 0;
          }
          FUN_0064e7d0(s_Land_Point_____f____f____f__0072c74c,(double)DAT_007734f4,
                       (double)DAT_007734f8);
        }
        else if (((cVar1 == '\x06') || (cVar1 == '\x05')) &&
                (fVar2 = *(float *)(param_1 + 0x18) - _DAT_006e9988,
                fVar2 < *pfVar7 == (NAN(fVar2) || NAN(*pfVar7)))) {
          if ((float)(&DAT_00773504)[local_48 * 0x12] < _DAT_006e936c !=
              (NAN((float)(&DAT_00773504)[local_48 * 0x12]) || NAN(_DAT_006e936c))) {
            FUN_0064e7d0();
            return 0;
          }
          *param_2 = local_2c;
          param_2[1] = local_28;
          param_2[2] = local_24;
          FUN_0064e7d0();
          return 1;
        }
      }
      local_48 = local_48 + 1;
      pfVar7 = pfVar7 + 0x12;
    } while (local_48 < DAT_00773970);
  }
  FUN_0064e7d0();
  return 0;
}

