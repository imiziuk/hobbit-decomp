
void __thiscall FUN_0044f650(int param_1,int param_2)

{
  void *pvVar1;
  
  FUN_0044f5d0();
  pvVar1 = operator_new(param_2 * 8);
  *(int *)(param_1 + 0xc4) = param_2;
  *(void **)(param_1 + 0xc0) = pvVar1;
  return;
}

