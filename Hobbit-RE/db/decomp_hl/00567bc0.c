
undefined4 __thiscall FUN_00567bc0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x28))();
    *param_2 = *puVar2;
    param_2[1] = puVar2[1];
    param_2[2] = puVar2[2];
    return 1;
  }
  return 0;
}

