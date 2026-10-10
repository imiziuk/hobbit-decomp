
void __thiscall FUN_006716a0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  puVar1 = param_2;
  FUN_0064c8e0(*param_2,&local_4,&local_8);
  FUN_0064c8e0(puVar1[1],&param_2,&local_14);
  FUN_0064c8e0(puVar1[2],&local_c,&local_10);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(float *)(param_1 + 0xc) = local_10 * local_14 + local_c * local_4 * (float)param_2;
  *(float *)(param_1 + 0x10) = local_c * local_8;
  *(float *)(param_1 + 0x14) = local_c * local_4 * local_14 - local_10 * (float)param_2;
  *(float *)(param_1 + 0x1c) = (float)param_2 * local_10 * local_4 - local_c * local_14;
  *(float *)(param_1 + 0x20) = local_10 * local_8;
  *(float *)(param_1 + 0x24) = local_10 * local_4 * local_14 + local_c * (float)param_2;
  *(float *)(param_1 + 0x2c) = (float)param_2 * local_8;
  *(float *)(param_1 + 0x30) = -local_4;
  *(float *)(param_1 + 0x34) = local_14 * local_8;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  return;
}

