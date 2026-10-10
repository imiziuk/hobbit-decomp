
undefined4 __thiscall FUN_005c6fa0(int param_1,undefined2 param_2)

{
  int iVar1;
  
  iVar1 = FUN_005c6ef0();
  if (-1 < iVar1) {
    *(undefined2 *)(*(int *)(param_1 + 0x84) + iVar1 * 2) = param_2;
    return 1;
  }
  return 0;
}

