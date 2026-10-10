
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00636d70(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = FUN_005af120();
  if (((*(int *)(iVar3 + 0x1e4) != 0) && (*(float *)(param_1 + 0x5c) <= *(float *)(param_1 + 0x58)))
     && (iVar3 = *(int *)(param_1 + 8),
        fVar1 = SQRT(*(float *)(iVar3 + 400) * *(float *)(iVar3 + 400) +
                     *(float *)(iVar3 + 0x194) * *(float *)(iVar3 + 0x194) +
                     *(float *)(iVar3 + 0x198) * *(float *)(iVar3 + 0x198)),
        fVar2 = *(float *)(param_1 + 100) * _DAT_006ec084,
        fVar2 < fVar1 != (NAN(fVar2) || NAN(fVar1)))) {
    *param_2 = 10;
    return 1;
  }
  return 0;
}

