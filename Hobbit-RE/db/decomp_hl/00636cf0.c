
undefined4 __thiscall FUN_00636cf0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (*(float *)(param_1 + 0x5c) <= *(float *)(param_1 + 0x58)) {
    iVar1 = FUN_005af120();
    if ((*(int *)(iVar1 + 0x1e4) != 0) ||
       (iVar1 = *(int *)(param_1 + 8),
       SQRT(*(float *)(iVar1 + 400) * *(float *)(iVar1 + 400) +
            *(float *)(iVar1 + 0x194) * *(float *)(iVar1 + 0x194) +
            *(float *)(iVar1 + 0x198) * *(float *)(iVar1 + 0x198)) <= *(float *)(param_1 + 100))) {
      *param_2 = 0xb;
      return 1;
    }
  }
  return 0;
}

