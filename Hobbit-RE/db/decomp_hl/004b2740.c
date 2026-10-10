
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b2740(float *param_1,float param_2,undefined4 param_3,float *param_4,float param_5,
                 undefined4 param_6,undefined4 param_7)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  float10 fVar13;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar9 = param_4;
  uVar12 = param_3;
  fVar6 = param_2;
  pfVar8 = param_1;
  if (param_5 <= _DAT_006e9364) {
    param_5 = 100.0;
  }
  local_24 = *param_1;
  bVar7 = true;
  pfVar1 = param_1 + 1;
  param_1 = (float *)0x0;
  local_20 = *pfVar1 + _DAT_006e999c;
  local_1c = pfVar8[2];
  iVar2 = (int)param_1;
  do {
    param_1 = (float *)iVar2;
    iVar2 = (int)param_1 + 1;
    fVar13 = (float10)FUN_00647b30(0x42c80000,param_5);
    pfVar9[2] = (float)fVar13;
    *pfVar9 = 0.0;
    pfVar9[1] = 0.0;
    fVar13 = (float10)FUN_00647b30(param_6,param_7);
    FUN_0064c8e0((float)fVar13,&param_2,&param_4);
    fVar3 = *pfVar9;
    fVar4 = fVar3 * (float)param_4 + param_2 * pfVar9[2] + local_24;
    *pfVar9 = fVar4;
    fVar5 = local_20 + pfVar9[1];
    pfVar9[1] = fVar5;
    fVar3 = (pfVar9[2] * (float)param_4 - fVar3 * param_2) + local_1c;
    pfVar9[2] = fVar3;
    FUN_00401f00(*pfVar8,pfVar8[1] + _DAT_006e9364,pfVar8[2]);
    FUN_00401f00(fVar4,fVar5 - _DAT_006e9554,fVar3);
    FUN_00579720(fVar6,uVar12,&local_c,&local_18,0x50);
    iVar10 = FUN_00577e70();
    if (iVar10 == 0) {
      FUN_00579720(fVar6,uVar12,&local_c,&local_18,0x101c00);
      iVar10 = FUN_00577e70();
      if (((iVar10 != 0) &&
          (DAT_007734f0 < DAT_006e92e8 != (NAN(DAT_007734f0) || NAN(DAT_006e92e8)))) &&
         (_DAT_006e95a8 < DAT_007734f0)) {
        local_1c = DAT_007734fc;
        local_24 = DAT_007734f4;
        local_20 = DAT_007734f8;
        FUN_00401f00(local_18 - local_c,local_14 - local_8,local_10 - local_4);
        param_5 = DAT_006e92e8 /
                  SQRT(local_30 * local_30 + local_2c * local_2c + local_28 * local_28);
        iVar10 = FUN_0064cf30(param_5);
        fVar6 = DAT_006e92e4;
        fVar3 = DAT_006e92e4;
        fVar4 = DAT_006e92e4;
        if (iVar10 != 0) {
          fVar6 = param_5 * local_30;
          fVar3 = local_2c * param_5;
          fVar4 = local_28 * param_5;
        }
        FUN_00401f00(fVar6 * _DAT_006ee2f4,fVar3 * _DAT_006ee2f4,fVar4 * _DAT_006ee2f4);
        local_24 = local_c + local_24;
        local_20 = local_20 + local_8;
        local_1c = local_1c + local_4;
        FUN_004357e0(&local_24);
        bVar7 = false;
        param_1 = (float *)iVar2;
        goto LAB_004b29a3;
      }
    }
    if (0xf < iVar2) {
      param_1 = (float *)((int)param_1 + 2);
LAB_004b29a3:
      if (0xf < (int)param_1) {
        if (bVar7) {
          piVar11 = (int *)FUN_0041bcc0();
          uVar12 = (**(code **)(*piVar11 + 0x28))();
          FUN_004357e0(uVar12);
          return;
        }
        FUN_004357e0(pfVar8);
      }
      return;
    }
  } while( true );
}

