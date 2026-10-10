
void FUN_00674db0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (param_1 == (&DAT_007f7250)[iVar1]) {
      (&DAT_007f7250)[iVar1] = 0;
    }
    (**(code **)(*DAT_007f1000 + 0xf4))(DAT_007f1000,iVar1,0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  (**(code **)(*(int *)(&DAT_007f2430)[param_1] + 8))((int *)(&DAT_007f2430)[param_1]);
  (&DAT_007f2430)[param_1] = DAT_007f242c;
  DAT_007f242c = param_1;
  DAT_007f2428 = DAT_007f2428 + -1;
  return;
}

