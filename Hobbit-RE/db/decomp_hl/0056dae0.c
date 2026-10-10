
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0056dae0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  undefined4 uVar14;
  int *piVar15;
  int *piVar16;
  float *pfVar17;
  float *pfVar18;
  float10 fVar19;
  float local_c;
  float fStack_8;
  float fStack_4;
  
  piVar15 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x688),*(undefined4 *)(param_1 + 0x68c));
  piVar16 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x690),*(undefined4 *)(param_1 + 0x694));
  iVar13 = *(int *)(param_1 + 0x730);
  if ((*(byte *)(param_1 + 0x484) & 2) == 0) {
    if (*(float *)(iVar13 + 0x48) <= *(float *)(param_1 + 0x67c)) {
      fVar1 = *(float *)(iVar13 + 0x48);
    }
    else {
      fVar1 = *(float *)(param_1 + 0x67c);
    }
    if (*(float *)(iVar13 + 0x40) <= fVar1) {
      if (*(float *)(iVar13 + 0x48) <= *(float *)(param_1 + 0x67c)) {
        uVar14 = *(undefined4 *)(iVar13 + 0x48);
      }
      else {
        uVar14 = *(undefined4 *)(param_1 + 0x67c);
      }
    }
    else {
      uVar14 = *(undefined4 *)(iVar13 + 0x40);
    }
    *(undefined4 *)(param_1 + 0x67c) = uVar14;
    fVar19 = (float10)FUN_00445150(*(float *)(param_1 + 0x678) + _DAT_006e9368);
    *(float *)(param_1 + 0x678) = (float)(fVar19 - (float10)_DAT_006e9368);
  }
  else {
    *(undefined4 *)(param_1 + 0x67c) = *(undefined4 *)(iVar13 + 0x44);
    *(undefined4 *)(param_1 + 0x678) = 0;
  }
  pfVar17 = (float *)FUN_0056bcf0(&local_c,piVar15,0);
  pfVar18 = (float *)(**(code **)(*piVar15 + 0x28))();
  fVar1 = *pfVar18;
  fVar2 = *pfVar17;
  fVar3 = pfVar18[1];
  fVar4 = pfVar17[1];
  fVar5 = pfVar18[2];
  fVar6 = pfVar17[2];
  pfVar17 = (float *)FUN_0056bcf0(&local_c,piVar16,0);
  pfVar18 = (float *)(**(code **)(*piVar16 + 0x28))();
  fVar7 = *pfVar18;
  fVar8 = *pfVar17;
  fVar9 = pfVar18[1];
  fVar10 = pfVar17[1];
  fVar11 = pfVar18[2];
  fVar12 = pfVar17[2];
  fVar1 = (fVar1 + fVar2) - (fVar7 + fVar8);
  fVar2 = (fVar3 + fVar4) - (fVar9 + fVar10);
  fVar3 = (fVar5 + fVar6) - (fVar11 + fVar12);
  fVar19 = (float10)FUN_0064ca10(fVar1,fVar3);
  iVar13 = *(int *)(param_1 + 0x730);
  fStack_4 = param_2 * *(float *)(iVar13 + 0xd4);
  if (DAT_006e92e8 < fStack_4 != (NAN(DAT_006e92e8) || NAN(fStack_4))) {
    fStack_4 = DAT_006e92e8;
  }
  fVar4 = param_2 * *(float *)(iVar13 + 0xd0);
  if (DAT_006e92e8 < fVar4 != (NAN(DAT_006e92e8) || NAN(fVar4))) {
    fVar4 = DAT_006e92e8;
  }
  param_2 = param_2 * *(float *)(iVar13 + 0xcc);
  if (DAT_006e92e8 < param_2 != (NAN(DAT_006e92e8) || NAN(param_2))) {
    param_2 = DAT_006e92e8;
  }
  local_c = param_2 * ((fVar1 * _DAT_006e9338 + fVar7 + fVar8) - *(float *)(param_1 + 0x4c4));
  uVar14 = *(undefined4 *)(param_1 + 0x67c);
  fStack_4 = fStack_4 * ((fVar3 * _DAT_006e9338 + fVar11 + fVar12) - *(float *)(param_1 + 0x4cc));
  fVar5 = local_c + *(float *)(param_1 + 0x4c4);
  fVar6 = fVar4 * ((fVar2 * _DAT_006e9338 + fVar9 + fVar10) - *(float *)(param_1 + 0x4c8)) +
          *(float *)(param_1 + 0x4c8);
  fVar4 = fStack_4 + *(float *)(param_1 + 0x4cc);
  fVar19 = (float10)FUN_00445150((float)((fVar19 - (float10)*(float *)(param_1 + 0x678)) +
                                        (float10)_DAT_006e9368));
  fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3) * _DAT_006e9338 +
          *(float *)(*(int *)(param_1 + 0x730) + 0x38);
  FUN_00440b10(uVar14,(float)(fVar19 - (float10)_DAT_006e9368));
  fStack_4 = fStack_4 * fVar1;
  *(float *)(param_1 + 0x4b0) = fVar4;
  *(float *)(param_1 + 0x4a8) = fVar5;
  *(float *)(param_1 + 0x4ac) = fVar6;
  FUN_00570010(fVar5 - local_c * fVar1,fVar6 - fStack_8 * fVar1,fVar4 - fStack_4);
  return;
}

