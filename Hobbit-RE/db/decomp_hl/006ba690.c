
void __thiscall FUN_006ba690(int param_1,undefined4 param_2)

{
  uint *puVar1;
  
  *(undefined4 *)(param_1 + 0x90) = 1;
  if (((*(int **)(param_1 + 0xa4))[0x25] & 0x40000000U) == 0) {
    (**(code **)(**(int **)(param_1 + 0xa4) + 0x18))(param_2);
    puVar1 = (uint *)(*(int *)(param_1 + 0xa4) + 0x94);
    *puVar1 = *puVar1 | 0x40000000;
  }
  return;
}

