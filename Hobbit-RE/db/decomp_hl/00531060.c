
undefined4 __thiscall FUN_00531060(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_005327d0(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x60));
  iVar2 = FUN_00647ed0(param_2,uVar1);
  if (iVar2 == 0) {
    return *(undefined4 *)(param_1 + 0x1dc);
  }
  return 0;
}

