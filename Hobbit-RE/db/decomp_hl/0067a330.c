
float10 FUN_0067a330(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)*(float *)(*(int *)(param_1 + 8) + 0x8c) * (float10)*(float *)(param_1 + 0x74) *
          (float10)*(float *)(param_1 + 0x6c) * (float10)*(float *)(param_1 + 0x24);
  if (0 < DAT_007eda44) {
    fVar1 = fVar1 * (float10)*(float *)(param_1 + 0x34);
  }
  return fVar1;
}

