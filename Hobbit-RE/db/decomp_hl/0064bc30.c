
int * __thiscall FUN_0064bc30(int *param_1,undefined2 param_2)

{
  FUN_0064af30(param_1[0x11] + 1);
  *(undefined2 *)(*param_1 + param_1[0x11] * 2) = param_2;
  *(undefined2 *)(*param_1 + 2 + param_1[0x11] * 2) = 0;
  param_1[0x11] = param_1[0x11] + 1;
  return param_1;
}

