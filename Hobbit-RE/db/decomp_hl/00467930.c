
undefined4 __thiscall FUN_00467930(int param_1,int param_2)

{
  if ((((param_2 != 0x10) && (param_2 != 0x34)) && (param_2 != 0x5c)) &&
     ((param_2 != 0x4f && (param_2 != 0x42)))) {
    *(int *)(param_1 + 0x1b0) = param_2;
    FUN_00467970();
    return 1;
  }
  return 0;
}

