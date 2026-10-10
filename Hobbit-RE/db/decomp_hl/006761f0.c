
void __thiscall FUN_006761f0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  FUN_00655890(1);
  if (((undefined4 *)(param_1 + 0x174U) <= param_2) &&
     (puVar1 = (undefined4 *)(param_1 + 0x13f4), param_2 < puVar1)) {
    FUN_00648600(param_2,0,0x128);
    param_2[9] = *puVar1;
    *puVar1 = param_2;
  }
  FUN_006558d0(1);
  return;
}

