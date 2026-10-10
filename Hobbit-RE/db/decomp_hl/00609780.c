
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00609780(int param_1,int param_2,float param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  
  if (param_2 != 0) {
    iVar4 = *(int *)(param_1 + 8);
    fVar1 = *(float *)(iVar4 + 400);
    fVar2 = *(float *)(iVar4 + 0x194);
    fVar3 = *(float *)(iVar4 + 0x198);
    *(float *)(param_1 + 0xdc) = *(float *)(param_1 + 0xdc) - param_3;
    iVar4 = FUN_0060a080();
    if ((iVar4 != 0) && (0 < *(int *)(param_1 + 0x94))) {
      return 10;
    }
    if (*(float *)(param_1 + 0xbc) <= *(float *)(param_1 + 0xb8)) {
      iVar4 = *(int *)(param_1 + 8);
      fVar1 = SQRT(*(float *)(iVar4 + 400) * *(float *)(iVar4 + 400) +
                   *(float *)(iVar4 + 0x194) * *(float *)(iVar4 + 0x194) +
                   *(float *)(iVar4 + 0x198) * *(float *)(iVar4 + 0x198));
      if (fVar1 < *(float *)(param_1 + 0x68) == (NAN(fVar1) || NAN(*(float *)(param_1 + 0x68)))) {
        return 9;
      }
      return 0xb;
    }
    fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
    if (*(float *)(param_1 + 0xc4) + _DAT_006e9358 < fVar1) {
      return 6;
    }
    if (((fVar1 < *(float *)(param_1 + 0xc4) != (NAN(fVar1) || NAN(*(float *)(param_1 + 0xc4)))) &&
        ((*(uint *)(*(int *)(param_1 + 8) + 0x130) & 0x400) == 0)) &&
       (iVar4 = FUN_005befc0(1), iVar4 != 0)) {
      return 0x11;
    }
    if (((*(float *)(param_1 + 0xdc) < DAT_006e92e4 != (*(float *)(param_1 + 0xdc) == DAT_006e92e4))
        && (iVar4 = FUN_005befc0(4), iVar4 != 0)) &&
       (iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x214), fVar5 = (float10)FUN_00647b30(0,0x42c80000)
       , fVar5 <= (float10)*(int *)(iVar4 + 0xc) * (float10)param_3)) {
      *(undefined4 *)(param_1 + 0xdc) = 0;
      return 7;
    }
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      return 8;
    }
  }
  return param_4;
}

