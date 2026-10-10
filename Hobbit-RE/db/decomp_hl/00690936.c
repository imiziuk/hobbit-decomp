
void __fastcall FUN_00690936(float *param_1)

{
  float *in_EAX;
  
  *param_1 = in_EAX[2] * in_EAX[2] + in_EAX[1] * in_EAX[1] + *in_EAX * *in_EAX;
  param_1[1] = in_EAX[5] * in_EAX[2] + (in_EAX[4] + *in_EAX) * in_EAX[1];
  param_1[2] = in_EAX[5] * in_EAX[1] + (in_EAX[8] + *in_EAX) * in_EAX[2];
  param_1[4] = in_EAX[1] * in_EAX[1] + in_EAX[4] * in_EAX[4] + in_EAX[5] * in_EAX[5];
  param_1[5] = in_EAX[2] * in_EAX[1] + (in_EAX[8] + in_EAX[4]) * in_EAX[5];
  param_1[8] = in_EAX[2] * in_EAX[2] + in_EAX[5] * in_EAX[5] + in_EAX[8] * in_EAX[8];
  return;
}

