
void __thiscall FUN_006a5e20(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  *(int *)(param_1 + 0x10c) = param_2;
  *(int *)(param_1 + 0x110) = param_3;
  if (*(int *)(param_1 + 0x124) != 0) {
    iVar1 = __ftol();
    *(int *)(param_1 + 0x120) = iVar1 + param_2;
    return;
  }
  if (*(int *)(param_1 + 0x120) < param_2) {
    *(int *)(param_1 + 0x120) = param_2;
  }
  if (param_3 <= *(int *)(param_1 + 0x120)) {
    *(int *)(param_1 + 0x120) = param_3;
  }
  return;
}

