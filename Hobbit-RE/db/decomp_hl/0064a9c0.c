
bool FUN_0064a9c0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = param_1[9];
  if ((int)param_2[9] <= (int)param_1[9]) {
    iVar1 = param_2[9];
  }
  iVar1 = FUN_006486a0(*param_1,*param_2,iVar1);
  if (iVar1 == 0) {
    return (int)param_1[9] < (int)param_2[9];
  }
  return iVar1 < 0;
}

