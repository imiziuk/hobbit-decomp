
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00458510(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  param_2 = param_2 / *(float *)(param_1 + 0xac);
  if (*(int *)(param_1 + 200) != 1) {
    *(float *)(param_1 + 0xb8) = param_2 * *(float *)(param_1 + 0xb8);
  }
  fVar2 = param_2 * *(float *)(param_1 + 0xb0);
  *(float *)(param_1 + 0xb0) = fVar2;
  fVar1 = param_2 * *(float *)(param_1 + 0xb4);
  *(float *)(param_1 + 0xb4) = fVar1;
  fVar2 = fVar2 + _DAT_006ec634;
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  *(float *)(param_1 + 0xb4) = fVar2;
  *(float *)(param_1 + 0xac) = param_2 * *(float *)(param_1 + 0xac);
  if (*(int *)(param_1 + 200) == 1) {
    *(float *)(param_1 + 0xac) = fVar2;
    FUN_00458600();
    return;
  }
  FUN_00458600();
  return;
}

