
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0062d7d0(int param_1,int param_2,float param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  float10 fVar6;
  
  if (param_2 != 0) {
    iVar5 = *(int *)(param_1 + 8);
    fVar1 = *(float *)(iVar5 + 400);
    fVar2 = *(float *)(iVar5 + 0x194);
    fVar3 = *(float *)(iVar5 + 0x198);
    *(float *)(param_1 + 0x94) = *(float *)(param_1 + 0x94) - param_3;
    iVar5 = FUN_005befc0(10);
    bVar4 = *(float *)(param_1 + 0x70) <= *(float *)(param_1 + 0x6c);
    if (iVar5 == 0) {
      if ((bVar4) &&
         (iVar5 = *(int *)(param_1 + 8),
         fVar1 = SQRT(*(float *)(iVar5 + 400) * *(float *)(iVar5 + 400) +
                      *(float *)(iVar5 + 0x194) * *(float *)(iVar5 + 0x194) +
                      *(float *)(iVar5 + 0x198) * *(float *)(iVar5 + 0x198)),
         fVar1 < *(float *)(param_1 + 0x74) != (fVar1 == *(float *)(param_1 + 0x74)))) {
        if (*(int *)(param_1 + 0x48) == 0) {
          *(undefined4 *)(param_1 + 0x8c) = 0x1a;
          return 10;
        }
        *(undefined4 *)(param_1 + 0x8c) = 0x1b;
        return 10;
      }
      if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
        return 8;
      }
    }
    else {
      if (bVar4) {
        return 9;
      }
      fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
      fVar2 = *(float *)(param_1 + 0x78) + _DAT_006e9358;
      if (fVar2 < fVar1 != (NAN(fVar2) || NAN(fVar1))) {
        return 6;
      }
      if (((*(float *)(param_1 + 0x94) < DAT_006e92e4 !=
            (*(float *)(param_1 + 0x94) == DAT_006e92e4)) && (iVar5 = FUN_005befc0(4), iVar5 != 0))
         && (iVar5 = *(int *)(*(int *)(param_1 + 8) + 0x214),
            fVar6 = (float10)FUN_00647b30(0,0x42c80000),
            fVar6 <= (float10)*(int *)(iVar5 + 0xc) * (float10)param_3)) {
        *(undefined4 *)(param_1 + 0x94) = 0;
        return 7;
      }
      if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
        return 8;
      }
    }
  }
  return param_4;
}

