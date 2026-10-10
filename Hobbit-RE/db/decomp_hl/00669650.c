
void FUN_00669650(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x3c);
  *(undefined4 *)((int)pvVar1 + 4) = param_1;
  *(undefined4 *)((int)pvVar1 + 0x38) = param_2;
  return;
}

