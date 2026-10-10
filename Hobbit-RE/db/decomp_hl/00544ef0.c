
void FUN_00544ef0(undefined4 param_1,float *param_2,int param_3,int param_4,float param_5)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  int local_c;
  undefined4 local_8;
  int local_4;
  
  param_5 = DAT_006e92e8 / param_5;
  FUN_0063ce50(&local_c);
  FUN_0063ce50(&local_4);
  FUN_0063cd60(&local_8,5);
  iVar2 = param_3;
  *param_2 = (float)local_c * param_5;
  if (1 < param_4) {
    iVar4 = param_4 + -1;
    pfVar5 = param_2;
    pfVar3 = param_2;
    do {
      pfVar3 = pfVar3 + iVar2;
      FUN_0063cd60(&param_2,local_8);
      param_4 = (int)param_2 + local_4;
      fVar1 = *pfVar5;
      pfVar5 = pfVar5 + iVar2;
      *pfVar3 = (float)param_4 * param_5 + fVar1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

