
void __thiscall FUN_00412560(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x3c) = param_3;
  iVar1 = FUN_00406bf0(param_2,param_3);
  if (iVar1 != 0) {
    FUN_004d22c0(1);
  }
  return;
}

