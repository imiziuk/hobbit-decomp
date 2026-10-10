
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005c33e0(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  int *piVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  undefined4 *puVar15;
  int *piVar16;
  uint uVar17;
  undefined4 *puVar18;
  int iVar19;
  float10 fVar20;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  float local_54;
  int local_50;
  undefined4 local_4c;
  int iStack_44;
  int local_40;
  int local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28 [4];
  float fStack_18;
  float fStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df570;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_render_task_mgr__Sort_00745f7c);
  local_4 = 0;
  if (param_1[0x12] != 0) {
    piVar10 = &local_40;
    FUN_0065fce0(0,piVar10);
    puVar8 = (undefined4 *)FUN_00672260(piVar10);
    *param_1 = *puVar8;
    param_1[1] = puVar8[1];
    param_1[2] = puVar8[2];
    iVar19 = DAT_007f23d8 + (param_1[0x12] * 4 + 0xfU & 0xfffffff0);
    param_1[0x11] = DAT_007f23d8;
    DAT_007f23d8 = iVar19;
    *(int **)(&DAT_007f23e0 + DAT_007f23d4 * 4) = DAT_007f23cc;
    DAT_007f23d4 = DAT_007f23d4 + 1;
    piVar9 = (int *)((int)DAT_007f23cc - (param_1[0x12] * 0xc + 0xfU & 0xfffffff0));
    piVar10 = (int *)((int)piVar9 - (param_1[0x12] * 0x1c + 0xfU & 0xfffffff0));
    iVar19 = 0;
    DAT_007f23cc = piVar10;
    if (0 < (int)param_1[0x12]) {
      piVar16 = piVar9 + 2;
      piVar11 = piVar10 + 3;
      do {
        piVar16[-2] = 0;
        piVar16[-1] = -1;
        *piVar16 = 0;
        *(short *)piVar11 = (short)iVar19;
        piVar11[-3] = 0;
        piVar11[-2] = 0;
        piVar11[-1] = 0;
        *(undefined2 *)((int)piVar11 + 2) = 0;
        *(undefined1 *)(piVar11 + 3) = 0x80;
        iVar19 = iVar19 + 1;
        piVar16 = piVar16 + 3;
        piVar11 = piVar11 + 7;
      } while (iVar19 < (int)param_1[0x12]);
    }
    FUN_0065fce0(0);
    pfVar12 = (float *)FUN_00672330(&local_40);
    pfVar13 = (float *)FUN_00672260(&local_54);
    local_34 = *pfVar12;
    local_30 = pfVar12[1];
    local_2c = pfVar12[2];
    fVar1 = local_34 * local_34 + local_30 * local_30 + local_2c * local_2c;
    if ((_DAT_006e92f0 < fVar1 == (_DAT_006e92f0 == fVar1)) ||
       (fVar1 < _DAT_006e92ec == (fVar1 == _DAT_006e92ec))) {
      fVar1 = DAT_006e92e8 / SQRT(fVar1);
      local_34 = fVar1 * local_34;
      local_30 = fVar1 * local_30;
      local_2c = fVar1 * local_2c;
    }
    local_54 = 0.0;
    local_28[0] = -(local_34 * *pfVar13 + local_30 * pfVar13[1] + local_2c * pfVar13[2]);
    if (local_34 < DAT_006e92e4) {
      local_54 = 4.2039e-45;
    }
    local_50 = 1;
    if (local_30 < DAT_006e92e4) {
      local_50 = 4;
    }
    local_4c = 2;
    if (local_2c < DAT_006e92e4) {
      local_4c = 5;
    }
    local_40 = 3;
    if (local_34 < DAT_006e92e4) {
      local_40 = 0;
    }
    local_3c = 4;
    if (local_30 < DAT_006e92e4) {
      local_3c = 1;
    }
    local_38 = 7.00649e-45;
    if (local_2c < DAT_006e92e4) {
      local_38 = 2.8026e-45;
    }
    iVar19 = param_1[0x10];
    local_6c = 0;
    local_5c = 0;
    piVar16 = piVar9;
    if (0 < (int)param_1[0x12]) {
      do {
        *(int *)(param_1[0x11] + local_5c * 4) = iVar19;
        iVar14 = 0;
        *piVar16 = iVar19;
        local_64 = 0;
        if (0 < local_6c) {
          piVar11 = piVar10;
          do {
            local_64 = iVar14;
            if (*piVar11 == *(int *)(iVar19 + 4)) break;
            iVar14 = iVar14 + 1;
            piVar11 = piVar11 + 7;
            local_64 = iVar14;
          } while (iVar14 < local_6c);
        }
        if (local_64 == local_6c) {
          piVar5 = *(int **)(iVar19 + 4);
          piVar11 = piVar10 + local_64 * 7;
          piVar11[1] = (int)piVar16;
          *piVar11 = (int)piVar5;
          piVar16[2] = 0;
          pfVar12 = (float *)(**(code **)(*piVar5 + 0x18))(*(undefined4 *)piVar11[1]);
          local_28[0] = *pfVar12;
          local_28[1] = pfVar12[1];
          local_28[2] = pfVar12[2];
          local_28[3] = pfVar12[3];
          fStack_18 = pfVar12[4];
          fStack_14 = pfVar12[5];
          fVar1 = local_28[local_3c];
          fVar2 = local_28[local_40];
          fVar3 = local_28[iStack_44];
          piVar11[4] = (int)(local_38 * local_28[(int)piVar9] +
                             local_34 * local_28[(int)local_54] + local_30 * local_28[local_50] +
                            local_2c);
          piVar11[5] = (int)(local_38 * fVar3 + local_34 * fVar2 + local_30 * fVar1 + local_2c);
          uVar7 = (**(code **)(*piVar5 + 0x1c))(*(undefined4 *)piVar11[1]);
          *(undefined1 *)(piVar11 + 6) = uVar7;
          local_6c = local_6c + 1;
        }
        else {
          piVar11 = piVar10 + local_64 * 7;
          piVar16[2] = piVar11[1];
          piVar11[1] = (int)piVar16;
        }
        *(short *)((int)piVar11 + 0xe) = *(short *)((int)piVar11 + 0xe) + 1;
        piVar16[1] = local_64;
        iVar19 = *(int *)(iVar19 + 0xc);
        local_5c = local_5c + 1;
        piVar16 = piVar16 + 3;
      } while (local_5c < (int)param_1[0x12]);
    }
    param_1[5] = param_1[5] + local_6c;
    if (0 < local_6c) {
      local_60 = 1;
      pfVar12 = (float *)(piVar10 + 4);
      do {
        fVar1 = *pfVar12;
        local_54 = pfVar12[1];
        bVar4 = *(byte *)(pfVar12 + 2);
        if (local_60 < local_6c) {
          local_5c = local_6c - local_60;
          pfVar13 = pfVar12 + 5;
          do {
            iVar19 = (uint)bVar4 - (uint)*(byte *)(pfVar13 + 4);
            if (iVar19 == 0) {
              if (pfVar13[3] < fVar1) {
LAB_005c3847:
                pfVar12[-2] = (float)((int)pfVar12[-2] + -1);
                *pfVar13 = (float)((int)*pfVar13 + 1);
              }
              else {
                if (local_54 < pfVar13[2] == (NAN(local_54) || NAN(pfVar13[2]))) {
                  fVar20 = (float10)FUN_005c3320(pfVar12 + -4,pfVar13 + -2);
                  if ((float10)DAT_006e92e4 < fVar20) goto LAB_005c3847;
                  if (fVar20 < (float10)DAT_006e92e4 == (NAN(fVar20) || NAN((float10)DAT_006e92e4)))
                  goto LAB_005c3867;
                }
                pfVar12[-2] = (float)((int)pfVar12[-2] + 1);
                *pfVar13 = (float)((int)*pfVar13 + -1);
              }
            }
            else {
              pfVar12[-2] = (float)((int)pfVar12[-2] + iVar19);
              *pfVar13 = (float)((int)*pfVar13 - iVar19);
            }
LAB_005c3867:
            pfVar13 = pfVar13 + 7;
            local_5c = local_5c + -1;
          } while (local_5c != 0);
        }
        pfVar12 = pfVar12 + 7;
        bVar6 = local_60 < local_6c;
        local_60 = local_60 + 1;
      } while (bVar6);
    }
    FUN_00649600(s_render_task_mgr__Sort___quicksor_00745f54);
    local_4._0_1_ = 1;
    FUN_00647700(piVar10,local_6c,0x1c,&LAB_005c3a80);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
    local_68 = 0;
    if (0 < local_6c) {
      piVar10 = piVar10 + 1;
      local_58 = local_6c;
      do {
        if (*(short *)((int)piVar10 + 10) < 2) {
          *(undefined4 *)(param_1[0x11] + local_68 * 4) = *(undefined4 *)*piVar10;
          local_68 = local_68 + 1;
        }
        else {
          *(int **)(&DAT_007f23e0 + DAT_007f23d4 * 4) = DAT_007f23cc;
          DAT_007f23d4 = DAT_007f23d4 + 1;
          iVar14 = (int)*(short *)((int)piVar10 + 10);
          uVar17 = iVar14 * 4 + 0xfU & 0xfffffff0;
          puVar8 = (undefined4 *)((int)DAT_007f23cc - uVar17);
          iVar19 = (int)puVar8 - uVar17;
          piVar9 = (int *)(iVar19 - uVar17);
          DAT_007f23cc = piVar9;
          if (((puVar8 != (undefined4 *)0x0) && (iVar19 != 0)) && (piVar9 != (int *)0x0)) {
            puVar15 = (undefined4 *)*piVar10;
            local_60 = 0;
            if (puVar15 != (undefined4 *)0x0) {
              puVar18 = puVar8;
              do {
                if (iVar14 <= local_60) break;
                *(undefined4 *)((iVar19 - (int)puVar8) + (int)puVar18) = *(undefined4 *)*puVar15;
                *puVar18 = *puVar15;
                puVar15 = (undefined4 *)puVar15[2];
                local_60 = local_60 + 1;
                puVar18 = puVar18 + 1;
              } while (puVar15 != (undefined4 *)0x0);
            }
            FUN_00553af0(iVar14,iVar19,piVar9);
            iVar19 = 0;
            if (0 < iVar14) {
              do {
                local_68 = local_68 + 1;
                *(undefined4 *)(param_1[0x11] + -4 + local_68 * 4) = puVar8[piVar9[iVar19]];
                iVar19 = iVar19 + 1;
              } while (iVar19 < iVar14);
            }
            DAT_007f23d4 = DAT_007f23d4 + -1;
            DAT_007f23cc = *(int **)(&DAT_007f23e0 + DAT_007f23d4 * 4);
          }
        }
        piVar10 = piVar10 + 7;
        local_58 = local_58 + -1;
      } while (local_58 != 0);
    }
    DAT_007f23d4 = DAT_007f23d4 + -1;
    DAT_007f23cc = *(int **)(&DAT_007f23e0 + DAT_007f23d4 * 4);
    iVar19 = 0;
    if (param_1[0x12] != 1 && -1 < param_1[0x12] + -1) {
      do {
        *(undefined4 *)(*(int *)(param_1[0x11] + iVar19 * 4) + 0xc) =
             *(undefined4 *)(param_1[0x11] + 4 + iVar19 * 4);
        iVar19 = iVar19 + 1;
      } while (iVar19 < param_1[0x12] + -1);
    }
    *(undefined4 *)(*(int *)(param_1[0x11] + -4 + param_1[0x12] * 4) + 0xc) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

