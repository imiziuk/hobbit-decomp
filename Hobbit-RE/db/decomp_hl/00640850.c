
undefined4 __thiscall FUN_00640850(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  FUN_00640710();
  if (param_2 != 0) {
    uVar1 = FUN_0064f210(param_2,&DAT_0074b38c);
    *(undefined4 *)(param_1 + 0x38) = uVar1;
  }
  if (param_3 != 0) {
    uVar1 = FUN_0064f210(param_3,&DAT_0074b390);
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
  }
  if (((param_2 == 0) || (*(int *)(param_1 + 0x38) != 0)) &&
     ((param_3 == 0 || (*(int *)(param_1 + 0x3c) != 0)))) {
    return 1;
  }
  FUN_0064f2b0(*(undefined4 *)(param_1 + 0x38));
  FUN_0064f2b0(*(undefined4 *)(param_1 + 0x3c));
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return 0;
}

