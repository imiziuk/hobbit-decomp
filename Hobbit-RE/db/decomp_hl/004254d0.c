
void __thiscall FUN_004254d0(int *param_1,float *param_2)

{
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  fStack_c = (float)param_1[5] + *param_2;
  fStack_8 = (float)param_1[6] + param_2[1];
  fStack_4 = (float)param_1[7] + param_2[2];
  (**(code **)(*param_1 + 0x14))(&fStack_c,0);
  return;
}

