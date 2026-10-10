
undefined4 __thiscall
FUN_006ab250(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_006ab920(param_2,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x4c) = 1;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x48) = param_4;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  return 1;
}

