
void FUN_0067b7b0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x84) == 0) {
    (**(code **)(*piVar1 + 0x30))(piVar1,0,0,0);
    *(undefined4 *)(param_1 + 0x7c) = 1;
    return;
  }
  (**(code **)(*piVar1 + 0x30))(piVar1,0,0,1);
  *(undefined4 *)(param_1 + 0x7c) = 1;
  return;
}

