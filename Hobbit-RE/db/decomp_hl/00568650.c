
undefined4 __fastcall FUN_00568650(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) == 0 && *(int *)(param_1 + 0x14) == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x2c) == 0) &&
     (iVar1 = FUN_00594390(*(undefined4 *)(param_1 + 0x30)), iVar1 == 0)) {
    return 0;
  }
  return 1;
}

