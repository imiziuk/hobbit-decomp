
void __thiscall FUN_006721e0(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar1 = *(float *)(param_1 + 0x2c);
  fVar2 = *(float *)(param_1 + 0x34);
  fVar3 = (float10)FUN_0064ca10(*(undefined4 *)(param_1 + 0x30),SQRT(fVar1 * fVar1 + fVar2 * fVar2))
  ;
  *param_2 = (float)-fVar3;
  fVar3 = (float10)FUN_0064ca10(fVar1,fVar2);
  *param_3 = (float)fVar3;
  return;
}

