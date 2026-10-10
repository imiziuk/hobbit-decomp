
void FUN_006a03c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  
  *(undefined4 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x3c) = param_3;
  piVar2 = (int *)FUN_006a04d0(param_1,param_2,param_3);
  piVar1 = *(int **)(param_1 + 0x24);
  if (piVar2 != piVar1) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x60))(piVar1);
    }
    *(int **)(param_1 + 0x24) = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x5c))(piVar2);
    }
  }
  return;
}

