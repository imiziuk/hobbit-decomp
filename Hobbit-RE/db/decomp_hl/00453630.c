
void __thiscall FUN_00453630(int param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  *(float *)(param_1 + 0x2f8) = param_4;
  if (param_4 < *(float *)(param_1 + 0x2f4) != (NAN(param_4) || NAN(*(float *)(param_1 + 0x2f4)))) {
    *(undefined4 *)(param_1 + 0x2fc) = 1;
    *(undefined4 *)(param_1 + 0x2f0) = param_3;
    *(undefined4 *)(param_1 + 0x278) = param_3;
    return;
  }
  *(undefined4 *)(param_1 + 0x2fc) = 2;
  *(undefined4 *)(param_1 + 0x2f0) = param_2;
  *(undefined4 *)(param_1 + 0x278) = param_2;
  return;
}

