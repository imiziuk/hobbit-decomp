
void __thiscall FUN_005a2b00(int param_1,int param_2,int param_3)

{
  void *pvVar1;
  
  FUN_006bf840(*(undefined4 *)(param_1 + 0x14));
  FUN_006bf840(*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  pvVar1 = operator_new(param_2 * 0x34);
  *(void **)(param_1 + 0x14) = pvVar1;
  pvVar1 = operator_new(param_3 * 0x14);
  *(void **)(param_1 + 0x1c) = pvVar1;
  FUN_00648600(*(undefined4 *)(param_1 + 0x14),0,param_2 * 0x34);
  FUN_00648600(*(undefined4 *)(param_1 + 0x1c),0,param_3 * 0x14);
  *(int *)(param_1 + 0x18) = param_3;
  *(int *)(param_1 + 0x10) = param_2;
  return;
}

