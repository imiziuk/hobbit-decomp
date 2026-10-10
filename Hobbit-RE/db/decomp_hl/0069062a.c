
void FUN_0069062a(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
    (**(code **)(param_1 + 0x50))(param_1,param_2,param_3);
    return;
  }
  FUN_0068e2ef(param_1,"Call to NULL read function");
  return;
}

