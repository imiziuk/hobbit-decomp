
void __thiscall FUN_0056bcf0(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  
  if (param_3 == 0) {
    param_2[1] = 0;
    *param_2 = 0;
    param_2[2] = 0;
    return;
  }
  fVar2 = *(float *)(param_3 + 0x54) - *(float *)(param_3 + 0x48);
  if (param_4 != 0) {
    fVar1 = *(float *)(*(int *)(param_1 + 0x730) + 0xbc);
    *param_2 = 0;
    param_2[2] = 0;
    param_2[1] = fVar2 * fVar1;
    return;
  }
  fVar1 = *(float *)(*(int *)(param_1 + 0x730) + 0xb8);
  *param_2 = 0;
  param_2[2] = 0;
  param_2[1] = fVar2 * fVar1;
  return;
}

