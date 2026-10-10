
void __thiscall FUN_00440b10(float *param_1,float param_2,undefined4 param_3)

{
  float local_c;
  float local_8;
  float local_4;
  
  FUN_0064c8e0(param_2,&local_8,&param_2);
  FUN_0064c8e0(param_3,&local_c,&local_4);
  *param_1 = local_c * param_2;
  param_1[1] = -local_8;
  param_1[2] = local_4 * param_2;
  return;
}

