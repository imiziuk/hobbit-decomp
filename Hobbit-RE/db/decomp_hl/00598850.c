
undefined4 __thiscall FUN_00598850(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  float *pfVar8;
  float10 fVar9;
  
  *param_2 = 0;
  iVar6 = FUN_00592920();
  if ((*(byte *)(iVar6 + 0x268) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 3;
    if ((*(byte *)(param_1 + 0x4c) & 0x10) == 0) {
      return 1;
    }
    FUN_00595310();
  }
  iVar6 = FUN_00592190();
  if (((0 < *(int *)(iVar6 + 0xe0)) ||
      (fVar1 = (float)(*(int *)(iVar6 + 0xd8) + -2),
      fVar1 < *(float *)(iVar6 + 0xdc) != (fVar1 == *(float *)(iVar6 + 0xdc)))) &&
     (*(float *)(param_1 + 0x188) <= *(float *)(param_1 + 0x2a4))) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 3;
    if ((*(byte *)(param_1 + 0x4c) & 0x10) == 0) {
      return 1;
    }
    FUN_00595310();
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x158) + 4);
  if ((0 < *(int *)(param_1 + 0x19c)) && ((iVar6 == 0xd || (iVar6 == 0xe)))) {
    piVar7 = (int *)FUN_00592920();
    pfVar3 = *(float **)(param_1 + 0x1a0);
    pfVar8 = (float *)(**(code **)(*piVar7 + 0x28))();
    fVar4 = *pfVar3 - *pfVar8;
    fVar1 = pfVar3[1];
    fVar2 = pfVar8[1];
    fVar5 = pfVar3[2] - pfVar8[2];
    fVar9 = (float10)FUN_0064ca10(fVar4,fVar5);
    *(float *)(param_1 + 0x234) = (float)fVar9;
    fVar9 = (float10)FUN_0064ca10(fVar1 - fVar2,SQRT(fVar4 * fVar4 + fVar5 * fVar5));
    *(float *)(param_1 + 0x238) = (float)-fVar9;
  }
  return 0;
}

