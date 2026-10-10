
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00621f40(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  
  piVar3 = (int *)FUN_005af120();
  uVar4 = (**(code **)(*piVar3 + 0x28))(0,0,0x3f800000);
  FUN_004357e0(uVar4);
  iVar5 = FUN_005b38a0();
  if (iVar5 == 0) {
    *param_2 = 0xc;
    return 1;
  }
  iVar5 = *(int *)(param_1 + 8);
  fVar1 = SQRT(*(float *)(iVar5 + 400) * *(float *)(iVar5 + 400) +
               *(float *)(iVar5 + 0x194) * *(float *)(iVar5 + 0x194) +
               *(float *)(iVar5 + 0x198) * *(float *)(iVar5 + 0x198));
  fVar2 = *(float *)(param_1 + 0x78) * _DAT_006ec084;
  if (fVar2 < fVar1 != (NAN(fVar2) || NAN(fVar1))) {
    *param_2 = 7;
    return 1;
  }
  return 0;
}

