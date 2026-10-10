
void FUN_0064e040(float *param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float local_40 [5];
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
  
  iVar4 = 4;
  pfVar1 = (float *)(param_3 + 8);
  pfVar3 = local_40 + 1;
  do {
    pfVar2 = pfVar1 + 4;
    iVar4 = iVar4 + -1;
    pfVar3[-1] = pfVar1[1] * param_2[0xc] +
                 *param_2 * pfVar1[-2] + param_2[4] * pfVar1[-1] + *pfVar1 * param_2[8];
    *pfVar3 = param_2[5] * pfVar1[-1] +
              *pfVar1 * param_2[9] + param_2[0xd] * pfVar1[1] + param_2[1] * pfVar1[-2];
    *(float *)((int)local_40 + (-0x10 - param_3) + (int)pfVar2) =
         pfVar1[-2] * param_2[2] +
         param_2[6] * pfVar1[-1] + *pfVar1 * param_2[10] + param_2[0xe] * pfVar1[1];
    *(float *)(&stack0xffffffb4 + -param_3 + (int)pfVar2) =
         pfVar1[1] * param_2[0xf] +
         param_2[3] * pfVar1[-2] + *pfVar1 * param_2[0xb] + param_2[7] * pfVar1[-1];
    pfVar1 = pfVar2;
    pfVar3 = pfVar3 + 4;
  } while (iVar4 != 0);
  *param_1 = local_40[0];
  param_1[1] = local_40[1];
  param_1[2] = local_40[2];
  param_1[3] = local_40[3];
  param_1[4] = local_40[4];
  param_1[5] = local_2c;
  param_1[6] = local_28;
  param_1[7] = local_24;
  param_1[8] = local_20;
  param_1[9] = local_1c;
  param_1[10] = local_18;
  param_1[0xb] = local_14;
  param_1[0xc] = local_10;
  param_1[0xd] = local_c;
  param_1[0xe] = local_8;
  param_1[0xf] = local_4;
  return;
}

