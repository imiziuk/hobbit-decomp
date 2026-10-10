
undefined4 FUN_006828a2(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0xdc))
              (*(int **)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    (**(code **)(**(int **)(param_1 + 8) + 0xd8))
              (*(int **)(param_1 + 8),*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0xc) = 1;
    uVar1 = 0;
  }
  else {
    uVar1 = 0x80004005;
  }
  return uVar1;
}

