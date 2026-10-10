
undefined8 __thiscall FUN_005aef40(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    return *(undefined8 *)(param_1 + 0x168);
  }
  FUN_005af120();
  iVar1 = FUN_004a1090();
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x168) != 0 || *(int *)(param_1 + 0x16c) != 0)) {
    iVar1 = FUN_00473d60((undefined8 *)(param_1 + 0x168));
    if (iVar1 != 0) {
      return *(undefined8 *)(param_1 + 0x168);
    }
  }
  return 0;
}

