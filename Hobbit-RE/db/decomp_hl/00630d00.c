
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00630d00(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  
  piVar4 = (int *)FUN_005af120();
  uVar5 = (**(code **)(*piVar4 + 0x28))(0,0,0x3f800000);
  FUN_004357e0(uVar5);
  iVar6 = FUN_005b38a0();
  if (iVar6 == 0) {
    *param_2 = 0xd;
    return 1;
  }
  iVar6 = *(int *)(param_1 + 8);
  if (*(float *)(param_1 + 0x48) < *(float *)(param_1 + 0x4c)) {
    fVar1 = *(float *)(iVar6 + 0x194);
    fVar2 = SQRT(*(float *)(iVar6 + 400) * *(float *)(iVar6 + 400) +
                 *(float *)(iVar6 + 0x198) * *(float *)(iVar6 + 0x198));
    fVar3 = *(float *)(param_1 + 0x50) * _DAT_006e99b0;
    if (fVar3 < fVar2 != (NAN(fVar3) || NAN(fVar2))) goto LAB_00630dd2;
    if (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4))) {
      fVar1 = -fVar1;
    }
  }
  else {
    fVar1 = *(float *)(iVar6 + 0x194);
    fVar2 = SQRT(*(float *)(iVar6 + 400) * *(float *)(iVar6 + 400) +
                 *(float *)(iVar6 + 0x198) * *(float *)(iVar6 + 0x198));
    if ((*(float *)(param_1 + 0x54) * _DAT_006ec084 < fVar2) ||
       (fVar3 = *(float *)(param_1 + 0x54) * _DAT_006e95d8,
       fVar2 < fVar3 != (NAN(fVar2) || NAN(fVar3)))) goto LAB_00630dd2;
    if (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4))) {
      fVar1 = -fVar1;
    }
  }
  if (fVar1 <= _DAT_006f66f4) {
    return 0;
  }
LAB_00630dd2:
  *param_2 = 6;
  return 1;
}

