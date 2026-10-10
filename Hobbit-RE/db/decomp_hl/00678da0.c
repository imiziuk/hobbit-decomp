
float10 FUN_00678da0(int param_1)

{
  float fVar1;
  
  FUN_00679ab0();
  if (param_1 != 0) {
    fVar1 = *(float *)(param_1 + 0x28);
    FUN_00679ac0();
    return (float10)fVar1;
  }
  FUN_00679ac0();
  return (float10)0.0;
}

