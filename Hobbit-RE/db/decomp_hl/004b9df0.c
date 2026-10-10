
void __thiscall FUN_004b9df0(int param_1,float *param_2,int param_3,float param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float local_34;
  float local_30;
  int local_2c;
  float local_28 [9];
  
  local_28[0] = param_4 - *(float *)(param_1 + 0x264);
  iVar4 = 0;
  local_28[2] = *(float *)(param_1 + 0x264) - param_4;
  iVar3 = -param_3;
  pfVar5 = (float *)(param_3 + 4);
  local_2c = param_1;
  local_28[1] = local_28[0];
  local_28[3] = local_28[0];
  local_28[4] = local_28[2];
  local_28[5] = local_28[2];
  local_28[6] = local_28[0];
  local_28[7] = local_28[2];
  do {
    FUN_0064c8e0(-*(float *)(local_2c + 0x6c),&local_34,&local_30);
    fVar1 = local_28[iVar4 * 2];
    fVar2 = *(float *)((int)local_28 + iVar3 + (int)pfVar5);
    iVar4 = iVar4 + 1;
    pfVar6 = pfVar5 + 2;
    (&local_30)[iVar4 * 2] = fVar1 * local_30 - fVar2 * local_34;
    *(float *)((int)&local_30 + iVar3 + (int)pfVar6) = fVar2 * local_30 + fVar1 * local_34;
    fVar1 = param_2[2];
    pfVar5[-1] = *param_2;
    *pfVar5 = fVar1;
    pfVar5[-1] = pfVar5[-1] + (&local_30)[iVar4 * 2];
    *pfVar5 = *(float *)((int)&local_30 + iVar3 + (int)pfVar6) + *pfVar5;
    pfVar5 = pfVar6;
  } while (iVar4 < 4);
  return;
}

