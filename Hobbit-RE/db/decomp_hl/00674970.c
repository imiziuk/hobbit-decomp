
void FUN_00674970(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = DAT_007f1000;
  (&DAT_007f7250)[param_2] = param_1;
  (**(code **)(*piVar1 + 0xf4))(piVar1,param_2,(&DAT_007f2430)[param_1]);
  return;
}

