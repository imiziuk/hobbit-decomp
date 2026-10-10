
void __thiscall FUN_004ace30(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (param_3 != puVar1) {
    do {
      *param_2 = *param_3;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (param_3 != puVar1);
  }
  *(undefined4 **)(param_1 + 8) = param_2;
  return;
}

