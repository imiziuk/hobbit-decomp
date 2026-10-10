
void FUN_006a0430(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_006a2160();
  *piVar1 = *param_2;
  piVar1[1] = param_2[1];
  piVar1[2] = param_2[2];
  piVar1[3] = param_2[3];
  *piVar1 = *piVar1 + -10;
  piVar1[1] = piVar1[1] + -0xb;
  piVar1[2] = piVar1[2] + 10;
  piVar1[3] = piVar1[3] + 0xb;
  piVar1[4] = *(int *)(param_1 + 0x2c);
  piVar1[5] = param_3;
  return;
}

