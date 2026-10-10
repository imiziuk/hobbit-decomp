
undefined4 __thiscall FUN_004901c0(int *param_1,int *param_2)

{
  if (DAT_0075cf7c == 0) {
    DAT_007297a8 = DAT_007297a8 + 1;
    DAT_0075cf7c = 1;
  }
  if (*param_2 == 0xe) {
    if (param_1[0x5d] != 0) {
      if (param_1[0x78] == 1) {
        FUN_00491450(2);
      }
      param_1[0x77] = DAT_007297a8;
      return 1;
    }
    (**(code **)(*param_1 + 0xa4))();
    return 1;
  }
  return 0;
}

