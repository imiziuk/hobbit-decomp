
void __thiscall FUN_00494520(int param_1,undefined4 *param_2)

{
  float fVar1;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(char *)(param_1 + 0x111) != '\0') {
    FUN_00582b40(*(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xe4),&local_4,&local_8,
                 &local_c);
    *(float *)(param_1 + 0xb4) = local_4;
    *(float *)(param_1 + 0xb8) = local_8;
    *(float *)(param_1 + 0xbc) = local_c;
    fVar1 = DAT_006e92e8 /
            ((local_c * *(float *)(param_1 + 0xe4) + local_8) * *(float *)(param_1 + 0xe4) + local_4
            );
    *(float *)(param_1 + 0xf4) = fVar1;
    *(float *)(param_1 + 0xf8) = DAT_006e92e8 / (DAT_006e92e8 - fVar1);
  }
  *param_2 = *(undefined4 *)(param_1 + 0xb4);
  param_2[1] = *(undefined4 *)(param_1 + 0xb8);
  param_2[2] = *(undefined4 *)(param_1 + 0xbc);
  return;
}

