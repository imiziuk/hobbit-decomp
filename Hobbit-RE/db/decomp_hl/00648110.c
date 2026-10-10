
void FUN_00648110(short *param_1,short *param_2)

{
  short sVar1;
  
  if (param_2 == (short *)0x0) {
    param_2 = &DAT_0074c280;
  }
  do {
    sVar1 = *param_2;
    *param_1 = sVar1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (sVar1 != 0);
  return;
}

