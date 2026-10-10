
void __thiscall FUN_006728c0(int param_1,int param_2,float *param_3,float *param_4)

{
  if ((*(uint *)(param_1 + 0x88) & 0x100) != 0) {
    FUN_00674180();
  }
  *param_3 = *(float *)(param_2 + *(int *)(param_1 + 0x44c) * 4) * *(float *)(param_1 + 0x43c) +
             *(float *)(param_2 + *(int *)(param_1 + 0x444) * 4) * *(float *)(param_1 + 0x434) +
             *(float *)(param_2 + *(int *)(param_1 + 0x448) * 4) * *(float *)(param_1 + 0x438) +
             *(float *)(param_1 + 0x440);
  *param_4 = *(float *)(param_2 + *(int *)(param_1 + 0x458) * 4) * *(float *)(param_1 + 0x43c) +
             *(float *)(param_2 + *(int *)(param_1 + 0x450) * 4) * *(float *)(param_1 + 0x434) +
             *(float *)(param_2 + *(int *)(param_1 + 0x454) * 4) * *(float *)(param_1 + 0x438) +
             *(float *)(param_1 + 0x440);
  return;
}

