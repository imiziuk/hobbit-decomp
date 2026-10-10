
int __fastcall FUN_006ba140(int param_1)

{
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_0064c8e0(*(undefined4 *)(param_1 + 0x10),&local_4,&local_8);
    FUN_0064c8e0(*(undefined4 *)(param_1 + 0x14),&local_18,&local_14);
    FUN_0064c8e0(*(undefined4 *)(param_1 + 0x18),&local_c,&local_10);
    *(float *)(param_1 + 0x30) =
         (local_10 * local_14 + local_c * local_4 * local_18) * *(float *)(param_1 + 4);
    *(float *)(param_1 + 0x34) = local_c * local_8 * *(float *)(param_1 + 4);
    *(float *)(param_1 + 0x38) =
         (local_c * local_4 * local_14 - local_10 * local_18) * *(float *)(param_1 + 4);
    *(float *)(param_1 + 0x40) =
         (local_18 * local_10 * local_4 - local_c * local_14) * *(float *)(param_1 + 8);
    *(float *)(param_1 + 0x44) = local_10 * local_8 * *(float *)(param_1 + 8);
    *(float *)(param_1 + 0x48) =
         (local_10 * local_4 * local_14 + local_c * local_18) * *(float *)(param_1 + 8);
    *(float *)(param_1 + 0x50) = local_18 * local_8 * *(float *)(param_1 + 0xc);
    *(float *)(param_1 + 0x54) = -local_4 * *(float *)(param_1 + 0xc);
    *(float *)(param_1 + 0x58) = local_14 * local_8 * *(float *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  return param_1 + 0x30;
}

