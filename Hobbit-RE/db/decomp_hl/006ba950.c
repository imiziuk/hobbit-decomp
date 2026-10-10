
void __thiscall FUN_006ba950(int *param_1,int param_2)

{
  if ((param_1[0x2b] == 0) && (param_2 != 0)) {
    param_1[0x2b] = 1;
  }
  if ((param_1[0x2b] != 0) && (param_2 == 0)) {
    if (param_1[0x2a] != 0) {
      (**(code **)(*param_1 + 0x10))();
      return;
    }
    param_1[0x2b] = 0;
  }
  return;
}

