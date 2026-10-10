
float10 __thiscall FUN_00416dc0(int param_1,int param_2)

{
  float10 fVar1;
  
  fVar1 = ((float10)*(float *)(param_1 + 0x50) + (float10)DAT_006e92e8) -
          (float10)*(float *)(param_1 + 0x2c);
  if ((float10)DAT_006e92e8 < fVar1) {
    return (float10)DAT_006e92e8 * (float10)*(float *)(&DAT_0071f4b8 + param_2 * 4);
  }
  return fVar1 * (float10)*(float *)(&DAT_0071f4b8 + param_2 * 4);
}

