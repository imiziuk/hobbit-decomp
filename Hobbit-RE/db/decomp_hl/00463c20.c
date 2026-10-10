
void __thiscall FUN_00463c20(float *param_1,undefined4 *param_2)

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
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xf] = 1.0;
  param_1[0xe] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xc] = 0.0;
  *param_1 = local_10 * local_14 + local_c * local_4 * (float)param_2;
  param_1[1] = local_c * local_8;
  param_1[2] = local_c * local_4 * local_14 - local_10 * (float)param_2;
  param_1[4] = (float)param_2 * local_10 * local_4 - local_c * local_14;
  param_1[5] = local_10 * local_8;
  param_1[6] = local_10 * local_4 * local_14 + local_c * (float)param_2;
  param_1[8] = (float)param_2 * local_8;
  param_1[9] = -local_4;
  param_1[10] = local_14 * local_8;
  return;
}

