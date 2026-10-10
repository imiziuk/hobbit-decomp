
void FUN_006701f0(float *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00670220(&stack0x00000008);
  if ((NAN(fVar1) || NAN((float10)*param_1)) == (fVar1 == (float10)*param_1)) {
    DAT_007f23a4 = 1;
  }
  *param_1 = (float)fVar1;
  return;
}

