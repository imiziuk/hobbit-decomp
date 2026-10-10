
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004f0080(int *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float fStack_4c;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined1 auStack_c [12];
  
  FUN_004ee6e0();
  FUN_00428790(param_1[0x1c]);
  FUN_004286f0(param_1[0x1a]);
  FUN_00428740(param_1[0x1b]);
  pfVar5 = (float *)(**(code **)(*param_1 + 0x28))();
  fStack_4c = -1.0;
  if (DAT_006e92e4 <=
      (*param_2 - *pfVar5) * 0.0 + (param_2[1] - pfVar5[1]) * 0.0 + (param_2[2] - pfVar5[2]) * -1.0)
  {
    fStack_4c = 1.0;
  }
  FUN_00428790(param_1[0x1c]);
  FUN_004286f0(param_1[0x1a]);
  FUN_00428740(param_1[0x1b]);
  fVar10 = (float10)FUN_00557bc0();
  fVar1 = (float)fVar10;
  if (0 < param_1[0x59] * param_1[0x5a]) {
    iVar9 = 0;
    iVar8 = 0;
    do {
      puVar6 = (undefined4 *)FUN_005a3020(auStack_c,iVar8);
      iVar7 = param_1[0x71];
      *(undefined4 *)(iVar7 + iVar9) = *puVar6;
      iVar7 = iVar7 + iVar9;
      *(undefined4 *)(iVar7 + 4) = puVar6[1];
      *(undefined4 *)(iVar7 + 8) = puVar6[2];
      fVar2 = *param_2 - *(float *)(param_1[0x71] + iVar9);
      iVar7 = param_1[0x71] + iVar9;
      fVar4 = param_2[1] - *(float *)(iVar7 + 4);
      fVar3 = param_2[2] - *(float *)(iVar7 + 8);
      fVar2 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3);
      if (fVar2 < _DAT_006e9364 != (NAN(fVar2) || NAN(_DAT_006e9364))) {
        fVar2 = fVar2 * _DAT_006e9360;
        fStack_2c = fVar2 * 0.0;
        fStack_28 = fVar2 * fStack_4c;
        FUN_00401f00(fVar2 * 0.0 * _DAT_006e9988 * fVar1,fStack_2c * _DAT_006e9988 * fVar1,
                     fStack_28 * _DAT_006e9988 * fVar1);
        fVar2 = (float)param_1[0x5f];
        FUN_00401f00(fStack_24 * fVar2,fStack_20 * fVar2,fStack_1c * fVar2);
        FUN_005a3020(&fStack_3c,iVar8);
        fStack_3c = fStack_18 + fStack_3c;
        fStack_38 = fStack_38 + fStack_14;
        fStack_34 = fStack_34 + fStack_10;
        FUN_005a31a0(iVar8,&fStack_3c,0);
      }
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + 0xc;
    } while (iVar8 < param_1[0x59] * param_1[0x5a]);
  }
  return;
}

