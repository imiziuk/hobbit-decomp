
void __thiscall FUN_00434c40(int param_1,int param_2,float param_3)

{
  float fVar1;
  
  *(float *)(param_1 + 0x1cc + param_2 * 4) = param_3;
  fVar1 = *(float *)(param_1 + 0x4e4 + param_2 * 8);
  if (param_3 < fVar1 != (NAN(param_3) || NAN(fVar1))) {
    *(undefined4 *)(param_1 + 0x1cc + param_2 * 4) = *(undefined4 *)(param_1 + 0x4e4 + param_2 * 8);
  }
  if (*(float *)(param_1 + 0x4e8 + param_2 * 8) < *(float *)(param_1 + 0x1cc + param_2 * 4)) {
    *(undefined4 *)(param_1 + 0x1cc + param_2 * 4) = *(undefined4 *)(param_1 + 0x4e8 + param_2 * 8);
  }
  return;
}

