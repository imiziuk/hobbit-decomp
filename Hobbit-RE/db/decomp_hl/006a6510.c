
void __thiscall FUN_006a6510(int param_1,undefined4 param_2,int param_3,int param_4)

{
  if ((((*(int *)(param_1 + 0x44) <= param_3) && (param_3 <= *(int *)(param_1 + 0x4c))) &&
      (*(int *)(param_1 + 0x48) <= param_4)) && (param_4 <= *(int *)(param_1 + 0x50))) {
    *(undefined4 *)(param_1 + 0x160) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x160) = 0;
  return;
}

