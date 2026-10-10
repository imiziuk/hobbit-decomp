
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00621fe0(int param_1,undefined4 *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  if ((*(float *)(param_1 + 0x80) <= *(float *)(param_1 + 0x84)) &&
     (iVar1 = *(int *)(param_1 + 8),
     fVar2 = SQRT(*(float *)(iVar1 + 400) * *(float *)(iVar1 + 400) +
                  *(float *)(iVar1 + 0x194) * *(float *)(iVar1 + 0x194) +
                  *(float *)(iVar1 + 0x198) * *(float *)(iVar1 + 0x198)),
     fVar3 = *(float *)(param_1 + 0x7c) * _DAT_006ec084, fVar3 < fVar2 != (NAN(fVar3) || NAN(fVar2))
     )) {
    *param_2 = 8;
    return 1;
  }
  return 0;
}

