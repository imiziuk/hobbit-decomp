
void __thiscall FUN_004c89c0(int param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = DAT_006e92e8 / *(float *)(param_1 + 0xd0);
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  pfVar1 = (float *)(*(int *)(param_1 + 0x124) + 0x18 + param_3 * 0x2c);
  *pfVar1 = fVar4 * *param_2 + *pfVar1;
  pfVar1[1] = fVar4 * fVar2 + pfVar1[1];
  pfVar1[2] = fVar4 * fVar3 + pfVar1[2];
  FUN_004cafe0();
  return;
}

