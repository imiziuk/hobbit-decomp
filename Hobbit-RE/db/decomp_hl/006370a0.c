
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006370a0(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  float10 fVar6;
  
  iVar3 = FUN_005af120();
  if (*(int *)(iVar3 + 0x1e4) != 0) {
    piVar4 = (int *)FUN_005af120();
    uVar5 = (**(code **)(*piVar4 + 0x28))(0,0,0x3f800000);
    FUN_004357e0(uVar5);
    iVar3 = FUN_005b38a0();
    if (iVar3 == 0) {
      *param_2 = 0xe;
      return 1;
    }
    iVar3 = *(int *)(param_1 + 8);
    fVar1 = SQRT(*(float *)(iVar3 + 400) * *(float *)(iVar3 + 400) +
                 *(float *)(iVar3 + 0x194) * *(float *)(iVar3 + 0x194) +
                 *(float *)(iVar3 + 0x198) * *(float *)(iVar3 + 0x198));
    fVar2 = *(float *)(param_1 + 0x68) * _DAT_006ec084;
    if (fVar2 < fVar1 != (NAN(fVar2) || NAN(fVar1))) {
      *param_2 = 7;
      return 1;
    }
    if ((SQRT(*(float *)(iVar3 + 400) * *(float *)(iVar3 + 400) +
              *(float *)(iVar3 + 0x194) * *(float *)(iVar3 + 0x194) +
              *(float *)(iVar3 + 0x198) * *(float *)(iVar3 + 0x198)) <
         *(float *)(param_1 + 0x68) * _DAT_006e95d8) &&
       (*(float *)(param_1 + 0x58) < *(float *)(param_1 + 0x5c) !=
        (NAN(*(float *)(param_1 + 0x58)) || NAN(*(float *)(param_1 + 0x5c))))) {
      iVar3 = FUN_005af120();
      if (*(int *)(iVar3 + 0x1c0) != 0) {
        *param_2 = 0x11;
        return 1;
      }
    }
    if (*(float *)(param_1 + 0x84) < DAT_006e92e4 != (*(float *)(param_1 + 0x84) == DAT_006e92e4)) {
      iVar3 = FUN_005befc0(4);
      if (iVar3 != 0) {
        fVar1 = *(float *)(*(int *)(param_1 + 8) + 0x19c);
        iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x214);
        fVar6 = (float10)FUN_00647b30(0,0x42c80000);
        if (fVar6 <= (float10)*(int *)(iVar3 + 0xc) * (float10)fVar1) {
          *param_2 = 8;
          return 1;
        }
      }
    }
  }
  return 0;
}

