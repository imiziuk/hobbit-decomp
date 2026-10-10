
void __thiscall FUN_00434f50(int param_1,int param_2,float param_3,float param_4)

{
  float fVar1;
  int extraout_ECX;
  
  *(float *)(param_1 + 0x4e8 + param_2 * 8) = param_4;
  *(float *)(param_1 + 0x4e4 + param_2 * 8) = param_3;
  fVar1 = *(float *)(param_1 + 0x1cc + param_2 * 4);
  if (fVar1 < param_3 != (NAN(fVar1) || NAN(param_3))) {
    FUN_00434c40(param_2,param_3);
    param_1 = extraout_ECX;
  }
  if (param_4 < *(float *)(param_1 + 0x1cc + param_2 * 4)) {
    FUN_00434c40(param_2,param_4);
  }
  return;
}

