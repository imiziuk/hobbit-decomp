
void FUN_0063d070(float *param_1)

{
  int iVar1;
  int local_4;
  
  iVar1 = FUN_0063d990();
  if (iVar1 == 0) {
    FUN_0063cfe0(param_1);
    return;
  }
  iVar1 = FUN_0063d990();
  if (iVar1 != 0) {
    *param_1 = 0.0;
    return;
  }
  FUN_0063ce50(&local_4);
  *param_1 = (float)local_4;
  return;
}

