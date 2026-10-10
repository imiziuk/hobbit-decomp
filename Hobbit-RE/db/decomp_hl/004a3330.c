
void __thiscall FUN_004a3330(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x30))();
  uStack_c = *puVar1;
  uStack_4 = puVar1[2];
  uStack_8 = param_2;
  (**(code **)(*param_1 + 0x1c))(&uStack_c);
  return;
}

