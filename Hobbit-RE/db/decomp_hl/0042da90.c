
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0042da90(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  float10 fVar8;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar6 = param_2;
  iVar7 = FUN_0042d800(param_2);
  if (iVar7 == 0) {
    return;
  }
  local_c = *param_3;
  local_8 = param_3[1];
  local_4 = param_3[2];
  iVar7 = *(int *)(param_1 + 0x450);
  fVar2 = *(float *)(iVar7 + 0x10c);
  fVar3 = *(float *)(iVar7 + 0x110);
  fVar4 = *(float *)(iVar7 + 0x114);
  fVar8 = (float10)FUN_0064ca10(*(undefined4 *)(param_1 + 0x840),*(undefined4 *)(param_1 + 0x848));
  param_2 = (float *)(float)(fVar8 + (float10)_DAT_006e9368);
  FUN_0064c8e0(param_2,&param_3,&param_2);
  fVar5 = (float)param_2 * -fVar2 + -fVar4 * (float)param_3;
  fVar2 = -fVar4 * (float)param_2 - -fVar2 * (float)param_3;
  local_18 = fVar5 + *pfVar6;
  local_14 = -fVar3 + pfVar6[1];
  local_10 = fVar2 + pfVar6[2];
  FUN_0042f170(&local_18,&local_c,0,0xbf800000,0,1);
  *pfVar6 = local_18 - fVar5;
  pfVar6[2] = local_10 - fVar2;
  pfVar6[1] = local_14 - -fVar3;
  iVar7 = *(int *)(param_1 + 0x850);
  param_2 = (float *)(local_c * *(float *)(param_1 + 0x820) +
                     local_8 * *(float *)(param_1 + 0x824) + local_4 * *(float *)(param_1 + 0x828));
  fVar2 = *(float *)(param_1 + 0x83c) * *(float *)(param_1 + 0x82c);
  while( true ) {
    fVar3 = (float)param_2;
    if ((float)param_2 < DAT_006e92e4 != (NAN((float)param_2) || NAN(DAT_006e92e4))) {
      fVar3 = -(float)param_2;
    }
    if ((fVar3 <= _DAT_006e9360) || (iVar7 == -1)) break;
    fVar2 = fVar2 + (float)param_2;
    iVar1 = iVar7 * 0x60 + 0x1608 + param_1;
    if (fVar2 < DAT_006e92e4 == (NAN(fVar2) || NAN(DAT_006e92e4))) {
      if (fVar2 <= *(float *)(iVar1 + 0x34)) {
        param_2 = (float *)0x0;
      }
      else if (*(short *)(iVar1 + 0xc) == -1) {
        param_2 = (float *)0x0;
        fVar2 = *(float *)(iVar1 + 0x34);
      }
      else {
        param_2 = (float *)(fVar2 - *(float *)(iVar1 + 0x34));
        iVar7 = (int)*(short *)(iVar1 + 0xc);
        fVar2 = DAT_006e92e4;
      }
    }
    else if (*(short *)(iVar1 + 10) == -1) {
      param_2 = (float *)0x0;
      fVar2 = DAT_006e92e4;
    }
    else {
      iVar7 = (int)*(short *)(iVar1 + 10);
      param_2 = (float *)fVar2;
      fVar2 = *(float *)(iVar7 * 0x60 + 0x163c + param_1);
    }
  }
  local_18 = fVar2 * *(float *)(iVar7 * 0x60 + 0x1630 + param_1);
  param_1 = iVar7 * 0x60 + param_1;
  local_14 = fVar2 * *(float *)(param_1 + 0x1634);
  fVar3 = *(float *)(param_1 + 0x161c);
  local_10 = fVar2 * *(float *)(param_1 + 0x1638) + *(float *)(param_1 + 0x1620);
  *pfVar6 = local_18 + *(float *)(param_1 + 0x1618);
  pfVar6[2] = local_10;
  pfVar6[1] = local_14 + fVar3;
  FUN_0042d800(pfVar6);
  return;
}

