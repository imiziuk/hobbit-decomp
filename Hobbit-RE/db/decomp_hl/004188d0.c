
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004188d0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  float *pfVar8;
  int iVar9;
  
  piVar7 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x38 + param_2 * 8),
                               *(undefined4 *)(param_1 + 0x3c + param_2 * 8));
  fVar1 = *(float *)(param_1 + 0x128);
  fVar2 = *(float *)(param_1 + 0x130);
  fVar3 = *(float *)(param_1 + 0x134);
  fVar4 = *(float *)(param_1 + 0x13c);
  fVar5 = *(float *)(param_1 + 0x140);
  fVar6 = *(float *)(param_1 + 0x148);
  pfVar8 = (float *)(**(code **)(*piVar7 + 0x28))();
  fVar1 = ((float)(param_2 / 3) * fVar5 + (float)(param_2 % 3) * fVar3 + fVar1) - *pfVar8;
  if (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4))) {
    fVar1 = -fVar1;
  }
  if (fVar1 <= _DAT_006e9554) {
    iVar9 = (**(code **)(*piVar7 + 0x28))();
    fVar1 = ((float)(param_2 / 3) * fVar6 + (float)(param_2 % 3) * fVar4 + fVar2) -
            *(float *)(iVar9 + 8);
    if (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4))) {
      fVar1 = -fVar1;
    }
    if (fVar1 <= _DAT_006e9554) {
      return 1;
    }
  }
  return 0;
}

