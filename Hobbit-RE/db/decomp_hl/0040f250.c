
void __thiscall FUN_0040f250(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  float local_18;
  float local_14;
  float local_10;
  float local_8;
  float local_4;
  
  *(int *)(param_1 + 0x80) = param_2;
  *(int *)(param_1 + 0x84) = param_3;
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  if (param_3 < 0) {
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  if (4 < *(int *)(param_1 + 0x80)) {
    *(undefined4 *)(param_1 + 0x80) = 4;
  }
  if (4 < *(int *)(param_1 + 0x84)) {
    *(undefined4 *)(param_1 + 0x84) = 4;
  }
  fVar1 = (float)*(int *)(param_1 + 0x80);
  fVar2 = (float)*(int *)(param_1 + 0x84);
  local_8 = fVar2 * *(float *)(param_1 + 0xa4);
  local_4 = fVar2 * *(float *)(param_1 + 0xa8);
  local_18 = fVar2 * *(float *)(param_1 + 0xa0) +
             fVar1 * *(float *)(param_1 + 0x94) + *(float *)(param_1 + 0x88);
  local_14 = *(float *)(param_1 + 0x8c) + fVar1 * *(float *)(param_1 + 0x98) + local_8;
  local_10 = *(float *)(param_1 + 0x90) + fVar1 * *(float *)(param_1 + 0x9c) + local_4;
  piVar3 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x14))(&local_18,0);
  }
  return;
}

