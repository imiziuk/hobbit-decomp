
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0061f480(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (SQRT(*(float *)(iVar1 + 400) * *(float *)(iVar1 + 400) +
           *(float *)(iVar1 + 0x194) * *(float *)(iVar1 + 0x194) +
           *(float *)(iVar1 + 0x198) * *(float *)(iVar1 + 0x198)) <=
      *(float *)(param_1 + 0x48) * _DAT_006e99b4) {
    *param_2 = 8;
    return 1;
  }
  return 0;
}

