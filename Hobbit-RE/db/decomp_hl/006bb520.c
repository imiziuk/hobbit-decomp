
void FUN_006bb520(int param_1,int *param_2,int *param_3)

{
  if (*(int *)(param_1 + 0xa8) != 0) {
    *param_2 = *(int *)(param_1 + 0x9c) * 2 + 2;
    *param_3 = *(int *)(param_1 + 0x9c) * 2 + 2;
    return;
  }
  *param_2 = *(int *)(param_1 + 0x9c) * 4 + 4;
  *param_3 = *(int *)(param_1 + 0x9c) * 8 + 0xc;
  return;
}

