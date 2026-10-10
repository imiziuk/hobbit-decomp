
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f03e0(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
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
  float fVar13;
  float fVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  void *pvVar26;
  int iVar27;
  float *pfVar28;
  undefined4 uVar29;
  int iVar30;
  float10 fVar31;
  int local_c4;
  int local_c0;
  int local_a8;
  int local_a4;
  undefined1 local_3c [8];
  float local_34;
  float local_2c;
  float local_28;
  undefined1 local_24 [8];
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_8;
  float local_4;
  
  FUN_004f0380();
  FUN_004ee6e0();
  *(undefined1 *)(param_1 + 0x1d8) = 0xff;
  fVar3 = *(float *)(param_1 + 0xf8);
  fVar4 = *(float *)(param_1 + 0xfc);
  fVar5 = *(float *)(param_1 + 0x100);
  fVar6 = *(float *)(param_1 + 0x128);
  fVar7 = *(float *)(param_1 + 0xe0);
  fVar8 = *(float *)(param_1 + 0x110);
  iVar25 = (*(int *)(param_1 + 0x164) + 1) * *(int *)(param_1 + 0x168);
  fVar9 = *(float *)(param_1 + 300);
  fVar10 = *(float *)(param_1 + 0x130);
  fVar11 = *(float *)(param_1 + 0xe4);
  fVar12 = *(float *)(param_1 + 0xe8);
  fVar13 = *(float *)(param_1 + 0x114);
  fVar14 = *(float *)(param_1 + 0x118);
  *(int *)(param_1 + 0x1ec) = iVar25;
  pvVar26 = operator_new(iVar25 * 0xc);
  *(void **)(param_1 + 0x1c4) = pvVar26;
  FUN_00648600(pvVar26,0,*(int *)(param_1 + 0x1ec) * 0xc);
  pvVar26 = operator_new(*(int *)(param_1 + 0x164) * 4 + 4);
  *(void **)(param_1 + 0x1d0) = pvVar26;
  FUN_00648600(pvVar26,0,*(int *)(param_1 + 0x164) * 4 + 4);
  pvVar26 = operator_new(*(int *)(param_1 + 0x168) << 2);
  *(void **)(param_1 + 0x1d4) = pvVar26;
  FUN_00648600(pvVar26,0,*(int *)(param_1 + 0x168) << 2);
  pvVar26 = operator_new(*(int *)(param_1 + 0x1ec) * 4);
  *(void **)(param_1 + 0x1e8) = pvVar26;
  FUN_00648600(pvVar26,0,*(int *)(param_1 + 0x1ec) << 2);
  iVar25 = 0;
  if (0 < *(int *)(param_1 + 0x1ec)) {
    do {
      puVar2 = (undefined1 *)(*(int *)(param_1 + 0x1e8) + iVar25 * 4);
      puVar2[3] = 0xff;
      puVar2[2] = 0x80;
      puVar2[1] = 0x80;
      *puVar2 = 0x80;
      iVar25 = iVar25 + 1;
    } while (iVar25 < *(int *)(param_1 + 0x1ec));
  }
  iVar30 = *(int *)(param_1 + 0x168);
  iVar15 = *(int *)(param_1 + 0x164);
  iVar25 = iVar30 + -1;
  iVar27 = (iVar15 + 1) * iVar30;
  FUN_005a2b00(iVar27,iVar25 * iVar15 + -1 + iVar27);
  local_a4 = 0;
  fVar23 = DAT_006e92e8 / (float)iVar25;
  if (0 < iVar30) {
    local_c4 = 0;
    fVar24 = DAT_006e92e8 / (float)(iVar15 + -1);
    do {
      fVar17 = (float)local_a4;
      uVar29 = 0;
      local_2c = (fVar11 - fVar4) * fVar23 * fVar17;
      local_28 = (fVar12 - fVar5) * fVar23 * fVar17;
      fVar16 = fVar23 * (fVar7 - fVar3) * fVar17 + fVar3;
      fVar18 = local_2c + fVar4;
      fVar19 = local_28 + fVar5;
      local_8 = (fVar13 - fVar9) * fVar23 * fVar17;
      local_4 = (fVar14 - fVar10) * fVar23 * fVar17;
      fVar20 = fVar9 + local_8;
      local_34 = fVar10 + local_4;
      fVar21 = local_34 - fVar19;
      if ((local_a4 == 0) || (local_a4 == iVar25)) {
        uVar29 = 2;
      }
      local_c0 = 0;
      if (0 < iVar15) {
        do {
          fVar31 = (float10)FUN_00647b30(0xc0a00000,0x40a00000);
          fVar22 = (float)local_c0;
          local_18 = ((fVar23 * (fVar8 - fVar6) * fVar17 + fVar6) - fVar16) * fVar24 * fVar22 +
                     fVar16;
          local_14 = (fVar20 - fVar18) * fVar24 * fVar22 + fVar18;
          local_1c = fVar21 * fVar24 * fVar22 + fVar19;
          local_10 = (float)((float10)local_1c + fVar31);
          FUN_005a2f50(local_c4 + local_c0,&local_18,uVar29);
          local_c0 = local_c0 + 1;
        } while (local_c0 < iVar15);
      }
      local_a4 = local_a4 + 1;
      local_c4 = local_c4 + iVar15;
    } while (local_a4 < iVar30);
  }
  iVar27 = 0;
  if (0 < iVar30) {
    local_c4 = 0;
    local_a4 = iVar30;
    do {
      local_c0 = iVar15 + -1;
      iVar30 = local_c4;
      if (0 < local_c0) {
        do {
          pfVar28 = (float *)FUN_005a3020(local_24,iVar30);
          fVar3 = *pfVar28;
          fVar4 = pfVar28[1];
          fVar5 = pfVar28[2];
          iVar1 = iVar30 + 1;
          pfVar28 = (float *)FUN_005a3020(local_3c,iVar1);
          fVar3 = SQRT((pfVar28[2] - fVar5) * (pfVar28[2] - fVar5) +
                       (pfVar28[1] - fVar4) * (pfVar28[1] - fVar4) +
                       (*pfVar28 - fVar3) * (*pfVar28 - fVar3));
          FUN_005a2fb0(iVar27,iVar30,iVar1,fVar3,fVar3 + _DAT_006e9554,1);
          iVar27 = iVar27 + 1;
          local_c0 = local_c0 + -1;
          iVar30 = iVar1;
        } while (local_c0 != 0);
      }
      local_c4 = local_c4 + iVar15;
      local_a4 = local_a4 + -1;
    } while (local_a4 != 0);
  }
  if (0 < iVar25) {
    local_a8 = 0;
    local_c4 = iVar25;
    do {
      iVar25 = local_a8;
      local_c0 = iVar15;
      if (0 < iVar15) {
        do {
          pfVar28 = (float *)FUN_005a3020(local_24,iVar25);
          fVar3 = *pfVar28;
          fVar4 = pfVar28[1];
          fVar5 = pfVar28[2];
          pfVar28 = (float *)FUN_005a3020(local_3c,iVar25 + iVar15);
          fVar3 = SQRT((pfVar28[2] - fVar5) * (pfVar28[2] - fVar5) +
                       (pfVar28[1] - fVar4) * (pfVar28[1] - fVar4) +
                       (*pfVar28 - fVar3) * (*pfVar28 - fVar3));
          FUN_005a2fb0(iVar27,iVar25,iVar25 + iVar15,fVar3,fVar3 + _DAT_006e9554,1);
          iVar27 = iVar27 + 1;
          local_c0 = local_c0 + -1;
          iVar25 = iVar25 + 1;
        } while (local_c0 != 0);
      }
      local_a8 = local_a8 + iVar15;
      local_c4 = local_c4 + -1;
    } while (local_c4 != 0);
  }
  return;
}

