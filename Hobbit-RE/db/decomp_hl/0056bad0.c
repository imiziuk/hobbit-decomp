
void FUN_0056bad0(float *param_1)

{
  float local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_0056bbd0(&local_c);
  local_1c = local_8;
  FUN_0064c8e0(local_c,&local_14,&local_20);
  FUN_0064c8e0(local_1c,&local_18,&local_10);
  *param_1 = local_18 * local_20;
  param_1[1] = -local_14;
  param_1[2] = local_10 * local_20;
  return;
}

