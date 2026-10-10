
void __thiscall FUN_004c8770(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x144) == 0) {
    if (-1 < param_2) {
      *(undefined4 *)(param_1 + 0x148) = 0;
    }
  }
  else if (param_2 == -1) {
    *(undefined4 *)(param_1 + 0x148) = 0;
  }
  *(int *)(param_1 + 0x140) = param_2;
  *(uint *)(param_1 + 0x144) = (uint)(param_2 != -1);
  return;
}

