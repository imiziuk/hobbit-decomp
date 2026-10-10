
void __thiscall FUN_004b4270(int *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  FUN_004d1cb0();
  FUN_004d1f60(param_2);
  if (((char)param_1[0x1f] != '\x05') && ((char)param_1[0x1f] != '\x06')) {
    *(undefined2 *)(param_1 + 0x49) = 0;
    FUN_004d1e90();
    return;
  }
  uVar1 = (**(code **)(*param_1 + 0x104))();
  *(undefined2 *)(param_1 + 0x49) = uVar1;
  FUN_004d1e90();
  return;
}

