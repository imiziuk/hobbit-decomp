
float10 __thiscall FUN_004e7ba0(int param_1,float *param_2)

{
  if (((((*param_2 < *(float *)(param_1 + 0x50) != (*param_2 == *(float *)(param_1 + 0x50))) &&
        (param_2[1] < *(float *)(param_1 + 0x54) != (param_2[1] == *(float *)(param_1 + 0x54)))) &&
       (param_2[2] < *(float *)(param_1 + 0x58) != (param_2[2] == *(float *)(param_1 + 0x58)))) &&
      ((*(float *)(param_1 + 0x44) <= *param_2 && (*(float *)(param_1 + 0x48) <= param_2[1])))) &&
     (*(float *)(param_1 + 0x4c) <= param_2[2])) {
    if (((NAN(*(float *)(param_1 + 0x68)) || NAN(DAT_006e92e4)) !=
         (*(float *)(param_1 + 0x68) == DAT_006e92e4)) &&
       ((NAN(*(float *)(param_1 + 0x70)) || NAN(DAT_006e92e4)) !=
        (*(float *)(param_1 + 0x70) == DAT_006e92e4))) {
      return ((float10)*(float *)(param_1 + 0x1b8) + (float10)*(float *)(param_1 + 0x48)) -
             (float10)param_2[1];
    }
    return ((float10)*(float *)(param_1 + 0x1b8) - (float10)*(float *)(param_1 + 0xb0)) -
           ((float10)param_2[1] * (float10)*(float *)(param_1 + 0x240) +
            (float10)*param_2 * (float10)*(float *)(param_1 + 0x230) +
            (float10)param_2[2] * (float10)*(float *)(param_1 + 0x250) +
           (float10)*(float *)(param_1 + 0x260));
  }
  return (float10)DAT_006e92e4;
}

