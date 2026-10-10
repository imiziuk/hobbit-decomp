
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006ab6c0(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int local_8;
  int local_4;
  
  pfVar6 = param_2;
  FUN_0065f8a0(&local_8,&local_4);
  *param_2 = (float)**(int **)(param_1 + 0x1c);
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
  param_2[1] = (float)iVar1;
  fVar3 = (float)local_8;
  fVar4 = (float)local_4;
  fVar5 = DAT_006e92e8 / (float)iVar1;
  fVar2 = fVar5 * *param_2;
  if (fVar2 < fVar3 / fVar4 == (NAN(fVar2) || NAN(fVar3 / fVar4))) {
    fVar5 = fVar3 / *param_2;
  }
  else {
    fVar5 = fVar5 * fVar4;
  }
  param_2 = (float *)0x1;
  do {
    fVar2 = (float)(int)param_2 * (float)_DAT_006fd330;
    if ((fVar2 < fVar5 != (NAN(fVar2) || NAN(fVar5))) &&
       (fVar5 < (float)(int)param_2 * (float)_DAT_006fd328)) {
      fVar5 = (float)(int)param_2;
    }
    param_2 = (float *)((int)param_2 + 1);
  } while ((int)param_2 < 8);
  fVar2 = *pfVar6;
  *pfVar6 = fVar5 * fVar2;
  pfVar6[1] = fVar5 * pfVar6[1];
  *param_3 = (fVar3 - fVar5 * fVar2) * _DAT_006e936c;
  fVar3 = pfVar6[1];
  param_3[2] = 0.0;
  param_3[1] = (fVar4 - fVar3) * _DAT_006e936c;
  return;
}

