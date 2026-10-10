
void FUN_00415550(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00406bf0(*param_1,param_1[1]);
  if (piVar1 != (int *)0x0) {
    if (param_2 != 0) {
      (**(code **)(*piVar1 + 0x110))();
      return;
    }
    FUN_00489010();
  }
  return;
}

