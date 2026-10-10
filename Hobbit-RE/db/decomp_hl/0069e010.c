
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0069e010(int param_1,int *param_2,float param_3,float param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  iVar1 = *param_2;
  if (*(int *)(param_1 + 0xe8) == 0) {
    *param_2 = 0;
  }
  else {
    param_3 = param_3 * (float)param_2[1];
    iVar6 = iVar1;
    if ((float)param_2[2] < param_3) {
      iVar6 = 1;
    }
    if (param_3 < (float)param_2[3] != (NAN(param_3) || NAN((float)param_2[3]))) {
      iVar6 = 0;
    }
    if (iVar1 == 0) {
      *param_2 = iVar6;
      if (iVar6 != 0) {
        param_2[7] = 1;
        param_2[6] = param_2[4];
        return;
      }
    }
    else {
      if ((iVar6 != 0) && (DAT_006e92e4 < (float)param_2[5])) {
        fVar4 = (float)param_2[6] -
                (((param_3 - (float)param_2[3]) / (DAT_006e92e8 - (float)param_2[3])) *
                 _DAT_006e958c + DAT_006e92e8) * param_4;
        bVar2 = NAN(DAT_006e92e4);
        bVar3 = fVar4 < DAT_006e92e4;
        param_2[6] = (int)fVar4;
        if (bVar3 != (NAN(fVar4) || bVar2)) {
          iVar5 = 0;
          do {
            iVar5 = iVar5 + 1;
            fVar4 = (float)param_2[5] + fVar4;
          } while (fVar4 < DAT_006e92e4 != (NAN(fVar4) || NAN(DAT_006e92e4)));
          param_2[8] = iVar5;
          param_2[6] = (int)fVar4;
        }
      }
      *param_2 = iVar6;
      if ((iVar1 != 0) && (iVar6 == 0)) {
        param_2[9] = 1;
        return;
      }
    }
  }
  return;
}

