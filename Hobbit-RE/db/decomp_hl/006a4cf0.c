
void __thiscall FUN_006a4cf0(int param_1,int param_2)

{
  if (param_2 != -1) {
    if (param_2 < *(int *)(param_1 + 0x17c)) {
      *(int *)(param_1 + 0x17c) = param_2;
    }
    if (*(int *)(param_1 + 0x17c) + *(int *)(param_1 + 0x180) <= param_2) {
      *(int *)(param_1 + 0x17c) = (param_2 - *(int *)(param_1 + 0x180)) + 1;
    }
  }
  return;
}

