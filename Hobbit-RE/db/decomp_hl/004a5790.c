
void __thiscall FUN_004a5790(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  
  param_1[0x9a] = (param_2 << 7 ^ param_1[0x9a]) & 0x80U ^ param_1[0x9a];
  if ((param_2 == 1) && (param_3 == 1)) {
    piVar1 = (int *)(**(code **)(*param_1 + 0x28))();
    param_1[8] = *piVar1;
    param_1[9] = piVar1[1];
    param_1[10] = piVar1[2];
  }
  return;
}

