
undefined4 FUN_0054e4d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_004021c0(param_1,param_2);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0xa8))(param_3);
    return uVar2;
  }
  return 0;
}

