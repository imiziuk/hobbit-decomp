
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00609940(int param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float *pfVar5;
  float *pfVar6;
  float10 fVar7;
  
  piVar4 = (int *)FUN_005af120();
  pfVar5 = (float *)(**(code **)(*piVar4 + 0x28))();
  pfVar6 = (float *)(**(code **)(*param_2 + 0x28))();
  fVar2 = SQRT((*pfVar6 - *pfVar5) * (*pfVar6 - *pfVar5) +
               (pfVar6[1] - pfVar5[1]) * (pfVar6[1] - pfVar5[1]) +
               (pfVar6[2] - pfVar5[2]) * (pfVar6[2] - pfVar5[2]));
  fVar3 = *(float *)(param_1 + 0xc4) + _DAT_006e9358;
  if (fVar3 < fVar2 != (NAN(fVar3) || NAN(fVar2))) {
    return 6;
  }
  uVar1 = *(uint *)(*(int *)(param_1 + 8) + 0x130);
  if ((uVar1 & 1) != 0) {
    if ((uVar1 & 4) == 0) {
      fVar7 = (float10)FUN_00647b30(0xbf000000,0x3f000000);
      *(float *)(param_1 + 0xb8) = (float)fVar7;
    }
    else if (*(float *)(param_1 + 0xbc) <= *(float *)(param_1 + 0xb8)) {
      return 0xc;
    }
    return 8;
  }
  return param_3;
}

