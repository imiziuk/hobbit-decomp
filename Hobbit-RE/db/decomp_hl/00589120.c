
void __thiscall FUN_00589120(int *param_1,int param_2)

{
  void *pvVar1;
  
  *param_1 = param_2;
  pvVar1 = operator_new(param_2 * 0x68);
  param_1[2] = (int)pvVar1;
  FUN_00589c50();
  return;
}

