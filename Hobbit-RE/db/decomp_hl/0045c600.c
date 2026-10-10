
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0045c600(int *param_1,float param_2)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  void *pvStack_14;
  float fStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  float local_4;
  
  local_4 = -NAN;
  puStack_8 = &LAB_006d05e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_camera__MoveTowardsDesired_00725c08);
  local_4 = 0.0;
  if ((float)param_1[0x31] < (float)param_1[0x3c] ==
      (NAN((float)param_1[0x31]) || NAN((float)param_1[0x3c]))) {
    if ((float)param_1[0x3c] < (float)param_1[0x31]) {
      fVar1 = (float)param_1[0x31] - param_2 * (float)param_1[0x43];
      if (fVar1 < (float)param_1[0x3c]) goto LAB_0045c696;
      goto LAB_0045c69e;
    }
  }
  else {
    fVar1 = param_2 * (float)param_1[0x43] + (float)param_1[0x31];
    if ((float)param_1[0x3c] < fVar1 != (NAN((float)param_1[0x3c]) || NAN(fVar1))) {
LAB_0045c696:
      fVar1 = (float)param_1[0x3c];
    }
LAB_0045c69e:
    param_1[0x31] = (int)fVar1;
  }
  if ((float)param_1[0x32] < (float)param_1[0x3e] ==
      (NAN((float)param_1[0x32]) || NAN((float)param_1[0x3e]))) {
    if ((float)param_1[0x3e] < (float)param_1[0x32]) {
      fVar1 = (float)param_1[0x32] - param_2 * (float)param_1[0x42];
      if (fVar1 < (float)param_1[0x3e]) goto LAB_0045c70a;
      goto LAB_0045c712;
    }
  }
  else {
    fVar1 = param_2 * (float)param_1[0x42] + (float)param_1[0x32];
    if ((float)param_1[0x3e] < fVar1 != (NAN((float)param_1[0x3e]) || NAN(fVar1))) {
LAB_0045c70a:
      fVar1 = (float)param_1[0x3e];
    }
LAB_0045c712:
    param_1[0x32] = (int)fVar1;
  }
  if ((float)param_1[0x33] < (float)param_1[0x3d] ==
      (NAN((float)param_1[0x33]) || NAN((float)param_1[0x3d]))) {
    if ((float)param_1[0x33] <= (float)param_1[0x3d]) goto LAB_0045c78c;
    fVar1 = (float)param_1[0x33] - param_2 * (float)param_1[0x42];
    if (fVar1 < (float)param_1[0x3d]) goto LAB_0045c77e;
  }
  else {
    fVar1 = param_2 * (float)param_1[0x42] + (float)param_1[0x33];
    if ((float)param_1[0x3d] < fVar1 != (NAN((float)param_1[0x3d]) || NAN(fVar1))) {
LAB_0045c77e:
      fVar1 = (float)param_1[0x3d];
    }
  }
  param_1[0x33] = (int)fVar1;
LAB_0045c78c:
  FUN_0045ca20(&local_18,param_2);
  pfVar2 = (float *)(**(code **)(*param_1 + 0x28))();
  fStack_24 = *pfVar2;
  fStack_20 = pfVar2[1];
  fStack_1c = pfVar2[2];
  fStack_28 = fStack_10 + fStack_1c;
  param_1[0x2b] = 0;
  fStack_2c = (float)pvStack_14 + fStack_20;
  param_1[0x2d] = 0;
  fStack_30 = local_18 + fStack_24;
  if ((DAT_0077285c & 0x10) == 0) {
    FUN_005798f0(1);
    FUN_005795c0(param_1[2],param_1[3],&fStack_24,&fStack_30,param_1[0x34],0x20049810);
    iVar3 = FUN_00577e70();
    if (iVar3 != 0) {
      pfVar2 = (float *)(param_1 + 0x38);
      param_1[0x2d] = 1;
      FUN_005795c0(param_1[2],param_1[3],pfVar2,&fStack_30,param_1[0x34],0x20049810);
      FUN_00577e70();
      if (0 < DAT_00773970) {
        fVar1 = DAT_007734f0 - _DAT_006ec98c;
        fStack_28 = ((fStack_10 + fStack_1c) - (float)param_1[0x3a]) * fVar1 + (float)param_1[0x3a];
        fStack_2c = (((float)pvStack_14 + fStack_20) - (float)param_1[0x39]) * fVar1 +
                    (float)param_1[0x39];
        fStack_30 = ((local_18 + fStack_24) - *pfVar2) * fVar1 + *pfVar2;
      }
    }
  }
  param_2 = DAT_006e92e8 / param_2;
  param_1[0x2e] = (int)(param_2 * local_18);
  param_1[0x2f] = (int)((float)pvStack_14 * param_2);
  param_1[0x30] = (int)(fStack_10 * param_2);
  fVar1 = (float)param_1[0x2e] * (float)param_1[0x2e] +
          (float)param_1[0x30] * (float)param_1[0x30] + (float)param_1[0x2f] * (float)param_1[0x2f];
  param_1[0x2b] =
       param_1[0x2b] & (uint)(fVar1 < _DAT_006e9360 != (NAN(fVar1) || NAN(_DAT_006e9360)));
  (**(code **)(*param_1 + 0x14))(&fStack_30,0);
  local_4 = (float)param_1[0x3a] - fStack_30;
  fVar1 = (float)param_1[0x38] - local_38;
  fVar4 = (float10)FUN_0064ca10((float)param_1[0x39] - fStack_34,
                                SQRT(local_4 * local_4 + fVar1 * fVar1));
  fVar5 = (float10)FUN_0064ca10(fVar1,local_4);
  param_1[0x1b] = (int)(float)fVar5;
  param_1[0x1a] = (int)(float)-fVar4;
  param_1[0x1c] = 0;
  pvStack_c = (void *)0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_14;
  return;
}

