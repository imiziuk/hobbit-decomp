
void __thiscall FUN_0056de40(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int *piVar11;
  undefined4 *puVar12;
  int *piVar13;
  float *pfVar14;
  float *pfVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  undefined4 *puVar19;
  float fStack_60;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined1 auStack_c [8];
  float fStack_4;
  
  piVar11 = (int *)FUN_00571230();
  if ((*(byte *)(param_1 + 0x484) & 2) != 0) {
    puVar19 = (undefined4 *)(param_1 + 0x510);
    iVar17 = 0x1e;
    do {
      puVar12 = (undefined4 *)(**(code **)(*piVar11 + 0x28))();
      puVar19[-2] = *puVar12;
      puVar19[-1] = puVar12[1];
      *puVar19 = puVar12[2];
      puVar19 = puVar19 + 3;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
    *(undefined4 *)(param_1 + 0x670) = 0;
  }
  piVar13 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x688),*(undefined4 *)(param_1 + 0x68c));
  pfVar14 = (float *)FUN_0056bcf0(auStack_c,piVar13,0);
  pfVar15 = (float *)(**(code **)(*piVar13 + 0x28))();
  fVar4 = *pfVar15 + *pfVar14;
  fVar5 = pfVar15[1] + pfVar14[1];
  fVar6 = pfVar15[2] + pfVar14[2];
  pfVar14 = (float *)(param_1 + 0x508 + *(int *)(param_1 + 0x670) * 0xc);
  *pfVar14 = fVar4;
  pfVar14[1] = fVar5;
  pfVar14[2] = fVar6;
  iVar17 = *(int *)(param_1 + 0x670) + 1;
  *(int *)(param_1 + 0x670) = iVar17;
  if (0x1d < iVar17) {
    do {
      iVar17 = iVar17 + -0x1e;
    } while (0x1d < iVar17);
    *(int *)(param_1 + 0x670) = iVar17;
  }
  iVar17 = *(int *)(param_1 + 0x670);
  iVar18 = iVar17 + -2;
  fStack_60 = 0.0;
  if (iVar18 < 0) {
    iVar18 = iVar17 + 0x1c;
  }
  pfVar15 = (float *)(**(code **)(*piVar11 + 0x28))();
  pfVar14 = (float *)(param_1 + 0x49c);
  *pfVar14 = *pfVar15;
  *(float *)(param_1 + 0x4a0) = pfVar15[1];
  *(float *)(param_1 + 0x4a4) = pfVar15[2];
  fStack_54 = fVar4;
  fStack_50 = fVar5;
  fStack_4c = fVar6;
  if (iVar18 != iVar17) {
    iVar3 = *(int *)(param_1 + 0x730);
    do {
      fVar2 = *(float *)(param_1 + 0x508 + iVar18 * 0xc);
      iVar1 = param_1 + 0x508 + iVar18 * 0xc;
      fStack_44 = *(float *)(iVar1 + 4);
      fStack_40 = *(float *)(iVar1 + 8);
      fVar7 = SQRT((fVar2 - fStack_54) * (fVar2 - fStack_54) +
                   (fStack_44 - fStack_50) * (fStack_44 - fStack_50) +
                   (fStack_40 - fStack_4c) * (fStack_40 - fStack_4c));
      fVar8 = fVar7 + fStack_60;
      if (*(float *)(iVar3 + 0x6c) < fVar8) {
        fVar7 = (*(float *)(iVar3 + 0x6c) - fStack_60) / fVar7;
        fVar8 = fStack_44 * fVar7;
        fVar9 = fStack_40 * fVar7;
        fVar10 = DAT_006e92e8 - fVar7;
        fStack_44 = fStack_50 * fVar10;
        fStack_40 = fStack_4c * fVar10;
        fStack_54 = fStack_54 * fVar10 + fVar2 * fVar7;
        fStack_50 = fStack_44 + fVar8;
        fVar2 = *(float *)(iVar3 + 0x7c);
        fStack_4 = fStack_40 + fVar9 + *(float *)(iVar3 + 0x80);
        *pfVar14 = fStack_54 + *(float *)(iVar3 + 0x78);
        *(float *)(param_1 + 0x4a4) = fStack_4;
        *(float *)(param_1 + 0x4a0) = fStack_50 + fVar2;
        break;
      }
      iVar18 = iVar18 + -1;
      if (iVar18 < 0) {
        iVar18 = 0x1d;
      }
      fStack_60 = fVar8;
      fStack_54 = fVar2;
      fStack_50 = fStack_44;
      fStack_4c = fStack_40;
    } while (iVar18 != iVar17);
  }
  fVar2 = *(float *)(*(int *)(param_1 + 0x730) + 0x70);
  if (*(float *)(param_1 + 0x488) < fVar2 != (NAN(*(float *)(param_1 + 0x488)) || NAN(fVar2))) {
    fVar2 = *(float *)(param_1 + 0x488) / *(float *)(*(int *)(param_1 + 0x730) + 0x70);
    FUN_00401f00(fVar2 * *pfVar14,fVar2 * *(float *)(param_1 + 0x4a0),
                 fVar2 * *(float *)(param_1 + 0x4a4));
    pfVar15 = (float *)(**(code **)(*piVar11 + 0x28))();
    fVar2 = DAT_006e92e8 - fVar2;
    FUN_00401f00(fVar2 * *pfVar15,fVar2 * pfVar15[1],fVar2 * pfVar15[2]);
    FUN_00401f00(fStack_48 + fStack_54,fStack_44 + fStack_50,fStack_40 + fStack_4c);
    FUN_004357e0(auStack_c);
  }
  FUN_00401f00(*pfVar14 - *(float *)(param_1 + 0x4b8),
               *(float *)(param_1 + 0x4a0) - *(float *)(param_1 + 0x4bc),
               *(float *)(param_1 + 0x4a4) - *(float *)(param_1 + 0x4c0));
  FUN_00401f00(fStack_48 + *(float *)(param_1 + 0x4c4),fStack_44 + *(float *)(param_1 + 0x4c8),
               fStack_40 + *(float *)(param_1 + 0x4cc));
  FUN_00401f00(fVar4 - fStack_30,fVar5 - fStack_2c,fVar6 - fStack_28);
  iVar17 = *(int *)(param_1 + 0x730);
  fStack_10 = param_2 * *(float *)(iVar17 + 0xd4);
  if (DAT_006e92e8 < fStack_10 != (NAN(DAT_006e92e8) || NAN(fStack_10))) {
    fStack_10 = DAT_006e92e8;
  }
  fStack_14 = param_2 * *(float *)(iVar17 + 0xd0);
  if (DAT_006e92e8 < fStack_14 != (NAN(DAT_006e92e8) || NAN(fStack_14))) {
    fStack_14 = DAT_006e92e8;
  }
  param_2 = param_2 * *(float *)(iVar17 + 0xcc);
  if (DAT_006e92e8 < param_2 != (NAN(DAT_006e92e8) || NAN(param_2))) {
    param_2 = DAT_006e92e8;
  }
  fStack_18 = param_2 * fStack_24;
  fStack_14 = fStack_14 * fStack_20;
  fStack_10 = fStack_10 * fStack_1c;
  uVar16 = FUN_00402130(auStack_c,&fStack_30,&fStack_18);
  FUN_004357e0(uVar16);
  FUN_00429100();
  return;
}

