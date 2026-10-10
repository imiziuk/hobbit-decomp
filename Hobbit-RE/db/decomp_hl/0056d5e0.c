
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0056d5e0(int param_1)

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
  int *piVar13;
  int *piVar14;
  undefined4 uVar15;
  float *pfVar16;
  undefined4 *puVar17;
  int iVar18;
  float10 fVar19;
  float fStack_5c;
  undefined4 uStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined1 auStack_c [12];
  
  piVar13 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x688),*(undefined4 *)(param_1 + 0x68c));
  piVar14 = (int *)FUN_0041bcc0();
  uVar15 = (**(code **)(*piVar14 + 0x154))();
  FUN_00549470(uVar15);
  FUN_00549580(uVar15);
  uVar15 = FUN_0053cb40(s_face_brow_left_mid_0073f938,0);
  piVar14 = (int *)FUN_0041bcc0();
  (**(code **)(*piVar14 + 0x154))();
  pfVar16 = (float *)FUN_0041bab0(uVar15);
  fVar3 = *pfVar16;
  fVar4 = pfVar16[1];
  fVar5 = pfVar16[2];
  puVar17 = (undefined4 *)(**(code **)(*piVar13 + 0x30))();
  uStack_30 = *puVar17;
  fStack_2c = (float)puVar17[1];
  fStack_28 = (float)puVar17[2];
  iVar18 = *(int *)(param_1 + 0x730);
  fVar6 = *(float *)(iVar18 + 0x94);
  fVar7 = *(float *)(iVar18 + 0x98);
  fVar8 = *(float *)(iVar18 + 0x9c);
  FUN_00428790(fStack_28);
  FUN_004286f0(uStack_30);
  FUN_00428740(fStack_2c);
  if ((*(byte *)(param_1 + 0x484) & 2) != 0) {
    *(undefined4 *)(param_1 + 0x67c) = 0;
    iVar18 = (**(code **)(*piVar13 + 0x30))();
    *(undefined4 *)(param_1 + 0x678) = *(undefined4 *)(iVar18 + 4);
  }
  iVar18 = *(int *)(param_1 + 0x730);
  if (*(float *)(iVar18 + 100) <= *(float *)(param_1 + 0x67c)) {
    fVar1 = *(float *)(iVar18 + 100);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x67c);
  }
  if (*(float *)(iVar18 + 0x60) <= fVar1) {
    if (*(float *)(iVar18 + 100) <= *(float *)(param_1 + 0x67c)) {
      uVar15 = *(undefined4 *)(iVar18 + 100);
    }
    else {
      uVar15 = *(undefined4 *)(param_1 + 0x67c);
    }
  }
  else {
    uVar15 = *(undefined4 *)(iVar18 + 0x60);
  }
  *(undefined4 *)(param_1 + 0x67c) = uVar15;
  FUN_00440b10(uVar15,fStack_2c);
  fVar2 = fStack_2c;
  fVar1 = *(float *)(*(int *)(param_1 + 0x730) + 8);
  fVar9 = fStack_24 * fVar1;
  fVar10 = fStack_20 * fVar1;
  fVar1 = fStack_1c * fVar1;
  if ((*(byte *)(param_1 + 0x484) & 8) == 0) {
    fVar19 = (float10)FUN_0056bb90();
    fVar19 = (float10)FUN_00445150((float)(((float10)fVar2 - fVar19) + (float10)_DAT_006e9368));
    fVar19 = fVar19 - (float10)_DAT_006e9368;
    if (fVar19 < (float10)DAT_006e92e4 != (NAN(fVar19) || NAN((float10)DAT_006e92e4))) {
      fVar19 = -fVar19;
    }
    fVar19 = fVar19 * (float10)_DAT_006f3e28;
    if ((fVar19 < (float10)DAT_006e92e8 == (NAN(fVar19) || NAN((float10)DAT_006e92e8))) ||
       ((float10)DAT_006e92e4 <= fVar19)) {
      if (fVar19 < (float10)DAT_006e92e8 == (NAN(fVar19) || NAN((float10)DAT_006e92e8))) {
        fStack_5c = 1.0;
      }
      else {
        fStack_5c = (float)fVar19;
      }
    }
    else {
      fStack_5c = 0.0;
    }
    fVar19 = (float10)FUN_0056bbb0();
    FUN_00440b10((float)(fVar19 * (float10)fStack_5c),*(undefined4 *)(param_1 + 0x678));
    fVar2 = *(float *)(*(int *)(param_1 + 0x730) + 8);
    fVar11 = DAT_006e92e8 - fStack_5c;
    fStack_2c = fVar7 * fVar11;
    fStack_28 = fVar8 * fVar11;
    fStack_18 = fVar6 * fVar11 + fVar3;
    fStack_14 = fStack_2c + fVar4;
    FUN_00401f00(fStack_18 - fStack_24 * fVar2 * fStack_5c,fStack_14 - fStack_20 * fVar2 * fStack_5c
                 ,(fStack_28 + fVar5) - fStack_1c * fVar2 * fStack_5c);
    FUN_004357e0(auStack_c);
    pfVar16 = (float *)FUN_0056bb40(&fStack_18);
    fVar2 = *pfVar16 - *(float *)(param_1 + 0x49c);
    fVar12 = pfVar16[1] - *(float *)(param_1 + 0x4a0);
    fVar11 = pfVar16[2] - *(float *)(param_1 + 0x4a4);
    fVar2 = SQRT(fVar2 * fVar2 + fVar12 * fVar12 + fVar11 * fVar11);
    fStack_5c = fVar2 / *(float *)(*(int *)(param_1 + 0x730) + 8);
    if ((fStack_5c < DAT_006e92e8 == (NAN(fStack_5c) || NAN(DAT_006e92e8))) ||
       (DAT_006e92e4 <= fStack_5c)) {
      if (fStack_5c < DAT_006e92e8 == (NAN(fStack_5c) || NAN(DAT_006e92e8))) {
        fStack_5c = 1.0;
      }
    }
    else {
      fStack_5c = 0.0;
    }
    FUN_00401f00(fVar9 + fVar6,fVar7 + fVar10,fVar8 + fVar1);
    fStack_5c = DAT_006e92e8 - fStack_5c;
    FUN_00401f00(fStack_18 * fStack_5c,fStack_14 * fStack_5c,fStack_10 * fStack_5c);
    FUN_00401f00(fStack_24 + fVar3,fStack_20 + fVar4,fStack_1c + fVar5);
    FUN_004357e0(&uStack_30);
    fVar3 = *(float *)(*(int *)(param_1 + 0x730) + 0xb4);
    if ((fVar2 < fVar3 != (NAN(fVar2) || NAN(fVar3))) ||
       (DAT_006e92e8 < *(float *)(param_1 + 0x488))) {
      *(uint *)(param_1 + 0x484) = *(uint *)(param_1 + 0x484) | 8;
    }
    return;
  }
  fStack_24 = fVar6 + fVar3;
  fStack_20 = fVar7 + fVar4;
  fStack_1c = fVar8 + fVar5;
  FUN_004357e0(&fStack_24);
  fStack_24 = fVar9 + *(float *)(param_1 + 0x49c);
  fStack_20 = fVar10 + *(float *)(param_1 + 0x4a0);
  fStack_1c = fVar1 + *(float *)(param_1 + 0x4a4);
  FUN_004357e0(&fStack_24);
  return;
}

