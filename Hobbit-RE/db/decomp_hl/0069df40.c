
void __thiscall FUN_0069df40(int param_1,int *param_2,int param_3,float param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  if (*(int *)(param_1 + 0xe8) == 0) {
    *param_2 = 0;
  }
  else {
    iVar1 = *param_2;
    if (iVar1 == 0) {
      *param_2 = param_3;
      if (param_3 != 0) {
        param_2[7] = 1;
        param_2[6] = param_2[4];
        return;
      }
    }
    else {
      if ((param_3 != 0) && (DAT_006e92e4 < (float)param_2[5])) {
        param_4 = (float)param_2[6] - param_4;
        bVar2 = NAN(DAT_006e92e4);
        bVar3 = param_4 < DAT_006e92e4;
        param_2[6] = (int)param_4;
        if (bVar3 != (NAN(param_4) || bVar2)) {
          iVar4 = 0;
          do {
            iVar4 = iVar4 + 1;
            param_4 = param_4 + (float)param_2[5];
          } while (param_4 < DAT_006e92e4 != (NAN(param_4) || NAN(DAT_006e92e4)));
          param_2[8] = iVar4;
          param_2[6] = (int)param_4;
        }
      }
      *param_2 = param_3;
      if ((iVar1 != 0) && (param_3 == 0)) {
        param_2[9] = 1;
        return;
      }
    }
  }
  return;
}

