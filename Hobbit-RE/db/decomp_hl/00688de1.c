
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00688de1(int param_1,int param_2,int param_3,float *param_4)

{
  char *pcVar1;
  float fVar2;
  char *pcVar3;
  
  fVar2 = _DAT_006ef704;
  pcVar3 = (char *)(*(int *)(param_1 + 0x1048) * param_2 + *(int *)(param_1 + 0x104c) * param_3 +
                   *(int *)(param_1 + 0x18));
  pcVar1 = pcVar3 + *(int *)(param_1 + 0x1050) * 4;
  for (; pcVar3 < pcVar1; pcVar3 = pcVar3 + 4) {
    *param_4 = (float)(int)*pcVar3 * fVar2;
    param_4[1] = (float)(int)pcVar3[1] * fVar2;
    param_4[2] = 0.0;
    param_4[3] = (float)(byte)pcVar3[2] * _DAT_006ed3a4;
    param_4 = param_4 + 4;
  }
  return;
}

