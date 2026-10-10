
undefined4 FUN_00682481(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x8876086c;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x4c);
    (**(code **)(**(int **)(param_1 + 0x4c) + 4))(*(int **)(param_1 + 0x4c));
    uVar1 = 0;
  }
  return uVar1;
}

