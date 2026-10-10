
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0063b7d0(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *extraout_ECX;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  float *pfVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  int iStack00000008;
  int local_54;
  int local_50;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  local_50 = *(int *)(param_1 + 0xc) + -1;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar12 = 1;
    pfVar13 = (float *)&DAT_007cc7f8;
    do {
      uVar8 = iVar12 - 2U & ((int)(iVar12 - 2U) < 1) - 1;
      iVar10 = iVar12;
      if (local_50 <= iVar12) {
        iVar10 = local_50;
      }
      iVar1 = param_2 + iVar10 * 0xc;
      fVar4 = *(float *)(param_2 + iVar10 * 0xc) - *(float *)(param_2 + uVar8 * 0xc);
      iVar10 = param_2 + uVar8 * 0xc;
      fVar3 = *(float *)(iVar1 + 4) - *(float *)(iVar10 + 4);
      fVar6 = *(float *)(iVar1 + 8) - *(float *)(iVar10 + 8);
      fVar7 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar6 * fVar6);
      fVar5 = fVar7;
      if ((NAN(fVar7) || NAN(DAT_006e92e4)) != (fVar7 == DAT_006e92e4)) {
        fVar5 = DAT_006e92e8;
      }
      fVar5 = DAT_006e92e8 / fVar5;
      fVar7 = _DAT_006f6bd4 * fVar7;
      *pfVar13 = fVar6 * fVar5 * fVar7;
      pfVar13[-2] = fVar5 * fVar4 * fVar7;
      pfVar13[-1] = fVar3 * fVar5 * fVar7;
      bVar2 = iVar12 < *(int *)(param_1 + 0xc);
      iVar12 = iVar12 + 1;
      pfVar13 = pfVar13 + 3;
    } while (bVar2);
  }
  local_54 = (int)(0x40 / (ulonglong)(*(int *)(param_1 + 8) - 1));
  if (local_54 == 0) {
    local_54 = 1;
  }
  if (0 < local_50) {
    puVar11 = (undefined4 *)(param_2 + 0x14);
    puVar14 = &DAT_007cc7f8;
    do {
      local_18 = puVar11[-5];
      local_34 = *(undefined4 *)(((int)&DAT_007cc7f0 - param_2) + (int)puVar11);
      local_14 = puVar11[-4];
      local_10 = puVar11[-3];
      local_30 = puVar11[-2];
      local_2c = puVar11[-1];
      local_28 = *puVar11;
      local_24 = puVar14[-2];
      local_20 = puVar14[-1];
      local_1c = *puVar14;
      local_3c = puVar14[1];
      local_38 = puVar14[2];
      iStack00000008 = 0;
      if (local_54 != 0) {
        do {
          uVar15 = FUN_0063adb0(local_c,&local_18,&local_24,&local_30,&local_3c,
                                (float)iStack00000008 / (float)local_54);
          puVar11 = (undefined4 *)((ulonglong)uVar15 >> 0x20);
          puVar9 = (undefined4 *)uVar15;
          extraout_ECX[-2] = *puVar9;
          extraout_ECX[-1] = puVar9[1];
          *extraout_ECX = puVar9[2];
          iStack00000008 = iStack00000008 + 1;
        } while (iStack00000008 < local_54);
      }
      puVar11 = puVar11 + 3;
      puVar14 = puVar14 + 3;
      local_50 = local_50 + -1;
    } while (local_50 != 0);
  }
  return;
}

