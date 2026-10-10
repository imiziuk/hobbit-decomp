
void __thiscall FUN_0053cd20(int param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  short sVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float *pfVar16;
  undefined4 *puVar17;
  float *pfVar18;
  undefined4 *puVar19;
  int iVar20;
  int iVar21;
  float *pfVar22;
  float *pfVar23;
  int local_78;
  int local_70;
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9135;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_anim_group__ComputeBonesL2W_00737870);
  local_4 = 0;
  local_78 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    local_70 = 0;
    pfVar23 = (float *)(param_4 + 4);
    pfVar22 = (float *)(param_3 + 0x10);
    do {
      pfVar1 = pfVar23 + -4;
      fVar12 = pfVar22[-1] + pfVar22[-1];
      pfVar18 = pfVar23 + -2;
      fVar15 = *pfVar22 + *pfVar22;
      fVar14 = pfVar22[1] + pfVar22[1];
      fVar13 = fVar12 * pfVar22[2];
      fVar4 = pfVar22[2];
      fVar5 = pfVar22[2];
      fVar12 = fVar12 * pfVar22[-1];
      fVar6 = pfVar22[-1];
      fVar7 = pfVar22[-1];
      fVar8 = *pfVar22;
      fVar9 = *pfVar22;
      fVar10 = pfVar22[1];
      *pfVar1 = (DAT_006e92e8 - (fVar14 * fVar10 + fVar15 * fVar8)) * pfVar22[-4];
      pfVar23[-3] = (fVar15 * fVar6 + fVar14 * fVar5) * pfVar22[-4];
      *pfVar18 = (fVar14 * fVar7 - fVar15 * fVar4) * pfVar22[-4];
      *pfVar23 = (fVar15 * fVar6 - fVar14 * fVar5) * pfVar22[-3];
      pfVar23[1] = (DAT_006e92e8 - (fVar14 * fVar10 + fVar12)) * pfVar22[-3];
      pfVar23[2] = (fVar13 + fVar14 * fVar9) * pfVar22[-3];
      pfVar23[4] = (fVar14 * fVar7 + fVar15 * fVar4) * pfVar22[-2];
      pfVar23[5] = (fVar14 * fVar9 - fVar13) * pfVar22[-2];
      pfVar23[6] = (DAT_006e92e8 - (fVar15 * fVar8 + fVar12)) * pfVar22[-2];
      pfVar23[8] = pfVar22[3];
      pfVar23[9] = pfVar22[4];
      pfVar23[10] = pfVar22[5];
      pfVar23[-1] = 0.0;
      pfVar23[3] = 0.0;
      pfVar23[7] = 0.0;
      pfVar23[0xb] = 1.0;
      sVar11 = *(short *)(local_70 + 2 + *(int *)(param_1 + 0x50));
      puVar17 = param_2;
      if (sVar11 != -1) {
        puVar17 = param_4 + sVar11 * 0x10;
      }
      pfVar16 = (float *)FUN_0064e040(local_4c,puVar17,pfVar1);
      if ((pfVar23 + -4 != pfVar16) && (pfVar2 = pfVar16 + 0x10, pfVar16 != pfVar2)) {
        iVar20 = (int)pfVar16 - (int)pfVar1;
        do {
          pfVar18[-2] = *pfVar16;
          pfVar18[-1] = pfVar16[1];
          *pfVar18 = *(float *)(iVar20 + (int)pfVar18);
          pfVar18[1] = pfVar16[3];
          pfVar16 = pfVar16 + 4;
          pfVar18 = pfVar18 + 4;
        } while (pfVar16 != pfVar2);
      }
      local_78 = local_78 + 1;
      local_70 = local_70 + 0x80;
      pfVar22 = pfVar22 + 10;
      pfVar23 = pfVar23 + 0x10;
    } while (local_78 < *(int *)(param_1 + 0x4c));
  }
  local_78 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    iVar20 = 0;
    do {
      puVar17 = (undefined4 *)
                FUN_0064e040(local_4c,param_4,iVar20 + 0x40 + *(int *)(param_1 + 0x50));
      if ((param_4 != puVar17) && (puVar3 = puVar17 + 0x10, puVar17 != puVar3)) {
        puVar19 = param_4 + 2;
        iVar21 = (int)puVar17 - (int)param_4;
        do {
          puVar19[-2] = *puVar17;
          puVar19[-1] = puVar17[1];
          *puVar19 = *(undefined4 *)(iVar21 + (int)puVar19);
          puVar19[1] = puVar17[3];
          puVar17 = puVar17 + 4;
          puVar19 = puVar19 + 4;
        } while (puVar17 != puVar3);
      }
      local_78 = local_78 + 1;
      iVar20 = iVar20 + 0x80;
      param_4 = param_4 + 0x10;
    } while (local_78 < *(int *)(param_1 + 0x4c));
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

