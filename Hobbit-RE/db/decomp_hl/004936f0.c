
void __thiscall FUN_004936f0(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float local_18 [6];
  
  local_18[0] = *param_1;
  local_18[2] = param_1[2];
  local_18[1] = param_1[1];
  local_18[4] = param_1[4];
  fVar1 = *(float *)(param_2 + 0x30);
  local_18[3] = param_1[3];
  local_18[5] = param_1[5];
  param_1[3] = fVar1;
  *param_1 = fVar1;
  fVar1 = *(float *)(param_2 + 0x34);
  param_1[4] = fVar1;
  param_1[1] = fVar1;
  fVar1 = *(float *)(param_2 + 0x38);
  param_1[5] = fVar1;
  param_1[2] = fVar1;
  param_2 = param_2 - (int)param_1;
  iVar5 = 3;
  do {
    pfVar4 = (float *)(param_2 + (int)param_1);
    iVar3 = 0;
    do {
      fVar1 = *pfVar4 * *(float *)((int)local_18 + iVar3);
      fVar2 = *pfVar4 * *(float *)((int)local_18 + iVar3 + 0xc);
      if (fVar1 < fVar2 == (NAN(fVar1) || NAN(fVar2))) {
        *param_1 = fVar2 + *param_1;
      }
      else {
        *param_1 = fVar1 + *param_1;
        fVar1 = fVar2;
      }
      iVar3 = iVar3 + 4;
      pfVar4 = pfVar4 + 4;
      param_1[3] = fVar1 + param_1[3];
    } while (iVar3 < 0xc);
    param_1 = param_1 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}

