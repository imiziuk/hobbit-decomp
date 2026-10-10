
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0061bfd0(int param_1,undefined4 *param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  fVar2 = SQRT(*(float *)(iVar1 + 400) * *(float *)(iVar1 + 400) +
               *(float *)(iVar1 + 0x194) * *(float *)(iVar1 + 0x194) +
               *(float *)(iVar1 + 0x198) * *(float *)(iVar1 + 0x198));
  if (fVar2 < *(float *)(param_1 + 100) != (fVar2 == *(float *)(param_1 + 100))) {
    return 0;
  }
  if (SQRT(*(float *)(iVar1 + 400) * *(float *)(iVar1 + 400) +
           *(float *)(iVar1 + 0x194) * *(float *)(iVar1 + 0x194) +
           *(float *)(iVar1 + 0x198) * *(float *)(iVar1 + 0x198)) <=
      _DAT_006f5bd0 + *(float *)(param_1 + 100)) {
    *param_2 = 7;
    return 1;
  }
  *param_2 = 8;
  return 1;
}

