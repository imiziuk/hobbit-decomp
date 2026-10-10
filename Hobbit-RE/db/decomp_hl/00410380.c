
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00410380(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  if ((NAN(*(float *)(param_1 + 0x100)) || NAN(DAT_0071e940)) !=
      (*(float *)(param_1 + 0x100) == DAT_0071e940)) {
    return 1;
  }
  param_2 = param_2 + *(float *)(param_1 + 0x100);
  *(float *)(param_1 + 0x100) = param_2;
  if (DAT_0071e940 < param_2 != (NAN(DAT_0071e940) || NAN(param_2))) {
    param_2 = DAT_0071e940;
  }
  *(float *)(param_1 + 0x100) = param_2;
  fVar1 = (float)*(int *)(param_1 + 0x104) * _DAT_006e9578;
  fVar2 = (float)*(int *)(param_1 + 0x108) * _DAT_006e9578 - fVar1;
  fVar3 = _DAT_006e9570;
  if ((fVar2 <= _DAT_006e9574) &&
     (fVar3 = fVar2, fVar2 < _DAT_006e956c != (NAN(fVar2) || NAN(_DAT_006e956c)))) {
    fVar3 = _DAT_006e9578;
  }
  param_2 = param_2 / DAT_0071e940;
  iVar4 = *(int *)(param_1 + 0x84) * 5 + *(int *)(param_1 + 0x80);
  piVar5 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x110 + iVar4 * 0x28),
                               *(undefined4 *)(param_1 + 0x114 + iVar4 * 0x28));
  puVar6 = (undefined4 *)(**(code **)(*piVar5 + 0x30))();
  uStack_c = *puVar6;
  uStack_4 = puVar6[2];
  fStack_8 = param_2 * fVar3 + fVar1;
  (**(code **)(*piVar5 + 0xf0))(&uStack_c);
  if ((NAN(*(float *)(param_1 + 0x100)) || NAN(DAT_0071e940)) ==
      (*(float *)(param_1 + 0x100) == DAT_0071e940)) {
    return 0;
  }
  return 1;
}

