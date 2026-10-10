
void __thiscall FUN_00406bd0(uint *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = *param_1 | 0x80000000;
    return;
  }
  *param_1 = *param_1 & 0x7fffffff;
  return;
}

