
int FUN_00647e80(char *param_1,char *param_2,int param_3)

{
  if (param_1 == (char *)0x0) {
    param_1 = &DAT_0074c278;
  }
  if (param_2 == (char *)0x0) {
    param_2 = &DAT_0074c278;
  }
  if (param_3 != 0) {
    param_3 = param_3 + -1;
    for (; ((param_3 != 0 && (*param_1 != '\0')) && (*param_1 == *param_2)); param_1 = param_1 + 1)
    {
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    }
    return (int)*param_1 - (int)*param_2;
  }
  return 0;
}

