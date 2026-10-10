
float10 FUN_0067a300(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)*(float *)(*(int *)(param_1 + 8) + 0x148) * (float10)*(float *)(param_1 + 0x88) *
          (float10)*(float *)(param_1 + 0x30);
  if (0 < DAT_007eda44) {
    fVar1 = fVar1 * (float10)*(float *)(param_1 + 0x40);
  }
  return fVar1;
}

