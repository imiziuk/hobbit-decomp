
void __thiscall FUN_004865a0(int param_1,undefined4 *param_2)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_2[1];
  uStack_c = *param_2;
  uStack_4 = param_2[2];
  FUN_004e30c0(&uStack_c);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}

