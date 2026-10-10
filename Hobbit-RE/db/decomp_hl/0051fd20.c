
void __fastcall FUN_0051fd20(int *param_1)

{
  if (param_1[2] != 0) {
    param_1[2] = 0;
    if (*param_1 != 0 || param_1[1] != 0) {
      FUN_004021c0(*param_1,param_1[1]);
      FUN_004dd1b0();
    }
    FUN_006a16c0(DAT_00813038,1);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

