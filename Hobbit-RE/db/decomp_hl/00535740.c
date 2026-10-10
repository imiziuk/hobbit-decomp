
undefined4 __thiscall
FUN_00535740(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  if (param_3 != 0) {
    FUN_0064a320(param_2);
    if (*(int *)(param_1 + 0x24c) == 1) {
      FUN_0064a320(param_2);
    }
  }
  *(int *)(param_1 + 0x240) = param_3;
  if (param_3 == 0) {
    FUN_0064a320(param_2);
    uVar1 = FUN_005323f0(param_2,param_4,param_5);
    FUN_00534f30(10);
    *(undefined4 *)(param_1 + 0x240) = 1;
    if (*(int *)(param_1 + 0x294) == 0) {
      *(undefined4 *)(param_1 + 0x294) = 1;
    }
  }
  else {
    uVar1 = FUN_005323f0(param_2,param_4,param_5);
  }
  FUN_0064a320(param_2);
  *(undefined4 *)(param_1 + 0x15c) = 1;
  *(undefined4 *)(param_1 + 0x160) = 0;
  return uVar1;
}

