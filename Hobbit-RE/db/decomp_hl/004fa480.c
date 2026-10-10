
void __thiscall FUN_004fa480(int param_1,float param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x34) * param_2;
  *(float *)(param_1 + 0x44) = fVar1;
  *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x38) * param_2;
  *(float *)(param_1 + 0x3c) = fVar1;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x48);
  return;
}

