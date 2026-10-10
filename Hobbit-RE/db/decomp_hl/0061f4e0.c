
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0061f4e0(int param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  FUN_005af120();
  fVar3 = (float10)FUN_005aaac0();
  fVar3 = fVar3 * (float10)_DAT_006e9340 + (float10)*(float *)(param_1 + 0x50);
  if ((fVar3 < (float10)*(float *)(param_1 + 0x4c) != (fVar3 == (float10)*(float *)(param_1 + 0x4c))
      ) && (iVar2 = *(int *)(param_1 + 8),
           fVar1 = SQRT(*(float *)(iVar2 + 400) * *(float *)(iVar2 + 400) +
                        *(float *)(iVar2 + 0x194) * *(float *)(iVar2 + 0x194) +
                        *(float *)(iVar2 + 0x198) * *(float *)(iVar2 + 0x198)),
           fVar1 < *(float *)(param_1 + 0x48) != (fVar1 == *(float *)(param_1 + 0x48)))) {
    iVar2 = FUN_00647b10(0,1);
    *param_2 = 10 - (uint)(iVar2 != 0);
    return 1;
  }
  return 0;
}

