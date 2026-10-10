
void __thiscall FUN_006ae220(int *param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
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
  bool bVar14;
  undefined4 *puVar15;
  void *pvVar16;
  undefined4 *puVar17;
  int iVar18;
  undefined4 *puVar19;
  float *pfVar20;
  undefined4 *puVar21;
  undefined4 uVar22;
  void *pvVar23;
  int *piVar24;
  int iVar25;
  float *pfVar26;
  undefined4 *puVar27;
  int iVar28;
  int iVar29;
  undefined4 *puVar30;
  float *pfVar31;
  int iVar32;
  int *local_238;
  int local_234;
  int local_230;
  int local_228;
  int local_224;
  int local_21c;
  undefined4 *local_214;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined1 auStack_1b4 [12];
  undefined1 local_1a8 [12];
  undefined1 local_19c [16];
  undefined1 local_18c [128];
  undefined1 local_10c [64];
  undefined1 local_cc [64];
  undefined1 local_8c [64];
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e81c3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00647d10(local_18c,param_2 * 0x1c4 + 0xc + *param_1);
  iVar29 = param_1[1];
  iVar32 = iVar29 + -1;
  puVar15 = (undefined4 *)operator_new(iVar32 * 0x1c4);
  pvVar16 = operator_new(param_1[3] * iVar32 * 0x28);
  iVar25 = param_1[1];
  bVar14 = false;
  if (0 < iVar25) {
    piVar24 = (int *)(*param_1 + 4);
    iVar28 = iVar25;
    do {
      if (*piVar24 == param_2) {
        bVar14 = true;
      }
      piVar24 = piVar24 + 0x71;
      iVar28 = iVar28 + -1;
    } while (iVar28 != 0);
  }
  local_228 = 0;
  if (0 < iVar25) {
    local_234 = 0;
    puVar19 = puVar15;
    do {
      if (local_228 != param_2) {
        puVar30 = (undefined4 *)(*param_1 + local_234);
        *puVar19 = *puVar30;
        puVar19[1] = puVar30[1];
        puVar19[2] = puVar30[2];
        puVar17 = puVar19 + 3;
        do {
          *(undefined1 *)puVar17 = *(undefined1 *)((int)puVar17 + ((int)puVar30 - (int)puVar19));
          puVar17 = (undefined4 *)((int)puVar17 + 1);
        } while ((undefined1 *)((-0xc - (int)puVar19) + (int)puVar17) < (undefined1 *)0x100);
        puVar19[0x43] = puVar30[0x43];
        puVar19[0x44] = puVar30[0x44];
        puVar19[0x45] = puVar30[0x45];
        puVar19[0x46] = puVar30[0x46];
        puVar19[0x47] = puVar30[0x47];
        puVar19[0x48] = puVar30[0x48];
        puVar19[0x49] = puVar30[0x49];
        puVar19[0x4a] = puVar30[0x4a];
        puVar19[0x4b] = puVar30[0x4b];
        puVar19[0x4c] = puVar30[0x4c];
        FUN_00406570(puVar30 + 0x4d);
        FUN_00406570(puVar30 + 0x5d);
        puVar19[0x6d] = puVar30[0x6d];
        puVar19[0x6e] = puVar30[0x6e];
        puVar19[0x6f] = puVar30[0x6f];
        puVar19[0x70] = puVar30[0x70];
        puVar19 = puVar19 + 0x71;
      }
      local_228 = local_228 + 1;
      local_234 = local_234 + 0x1c4;
    } while (local_228 < param_1[1]);
  }
  if (0 < iVar32) {
    piVar24 = puVar15 + 1;
    iVar25 = iVar32;
    do {
      if (*piVar24 == param_2) {
        *piVar24 = *(int *)(param_2 * 0x1c4 + 4 + *param_1);
      }
      piVar24 = piVar24 + 0x71;
      iVar25 = iVar25 + -1;
    } while (iVar25 != 0);
    if (0 < iVar32) {
      piVar24 = puVar15 + 1;
      iVar25 = iVar32;
      do {
        if (param_2 < *piVar24) {
          *piVar24 = *piVar24 + -1;
        }
        piVar24 = piVar24 + 0x71;
        iVar25 = iVar25 + -1;
      } while (iVar25 != 0);
    }
  }
  iVar25 = 0;
  if (bVar14) {
    puVar19 = (undefined4 *)
              thunk_FUN_0064ff70(param_1[1] << 6,s_C__projects_meridian_xCore_Auxil_00756614,0x316);
    local_228 = 0;
    if (0 < param_1[3]) {
      param_2 = param_2 + 1;
      local_214 = (undefined4 *)((int)pvVar16 + 0x14);
      do {
        iVar25 = param_1[1];
        local_224 = 0;
        if (0 < iVar25) {
          local_238 = (int *)0x0;
          pfVar31 = (float *)(puVar19 + 4);
          do {
            pfVar20 = (float *)(param_1[2] + (iVar25 * local_228 + local_224) * 0x28);
            pfVar1 = pfVar31 + -4;
            pfVar26 = pfVar31 + -2;
            fVar10 = pfVar20[3] + pfVar20[3];
            fVar13 = pfVar20[4] + pfVar20[4];
            fVar12 = pfVar20[5] + pfVar20[5];
            fVar11 = fVar10 * pfVar20[6];
            fVar3 = pfVar20[6];
            fVar4 = pfVar20[6];
            fVar10 = fVar10 * pfVar20[3];
            fVar5 = pfVar20[3];
            fVar6 = pfVar20[3];
            fVar7 = pfVar20[4];
            fVar8 = pfVar20[4];
            fVar9 = pfVar20[5];
            *pfVar1 = (DAT_006e92e8 - (fVar12 * fVar9 + fVar13 * fVar7)) * *pfVar20;
            pfVar31[-3] = (fVar13 * fVar5 + fVar12 * fVar4) * *pfVar20;
            *pfVar26 = (fVar12 * fVar6 - fVar13 * fVar3) * *pfVar20;
            *pfVar31 = (fVar13 * fVar5 - fVar12 * fVar4) * pfVar20[1];
            pfVar31[1] = (DAT_006e92e8 - (fVar12 * fVar9 + fVar10)) * pfVar20[1];
            pfVar31[2] = (fVar11 + fVar12 * fVar8) * pfVar20[1];
            pfVar31[4] = (fVar12 * fVar6 + fVar13 * fVar3) * pfVar20[2];
            pfVar31[5] = (fVar12 * fVar8 - fVar11) * pfVar20[2];
            pfVar31[6] = (DAT_006e92e8 - (fVar13 * fVar7 + fVar10)) * pfVar20[2];
            pfVar31[8] = pfVar20[7];
            pfVar31[9] = pfVar20[8];
            pfVar31[10] = pfVar20[9];
            pfVar31[-1] = 0.0;
            pfVar31[3] = 0.0;
            pfVar31[7] = 0.0;
            pfVar31[0xb] = 1.0;
            iVar25 = *(int *)((int)local_238 + 4 + *param_1);
            if (((iVar25 != -1) &&
                (pfVar20 = (float *)FUN_0064e040(local_4c,puVar19 + iVar25 * 0x10,pfVar1),
                pfVar31 + -4 != pfVar20)) && (pfVar2 = pfVar20 + 0x10, pfVar20 != pfVar2)) {
              iVar25 = (int)pfVar20 - (int)pfVar1;
              do {
                pfVar26[-2] = *pfVar20;
                pfVar26[-1] = pfVar20[1];
                *pfVar26 = *(float *)((int)pfVar26 + iVar25);
                pfVar26[1] = pfVar20[3];
                pfVar20 = pfVar20 + 4;
                pfVar26 = pfVar26 + 4;
              } while (pfVar20 != pfVar2);
            }
            iVar25 = param_1[1];
            local_224 = local_224 + 1;
            local_238 = (int *)((int)local_238 + 0x1c4);
            pfVar31 = pfVar31 + 0x10;
          } while (local_224 < iVar25);
        }
        local_224 = 0;
        if (0 < param_1[1]) {
          local_238 = (int *)0x0;
          puVar17 = puVar19;
          do {
            puVar30 = (undefined4 *)
                      FUN_0064e040(local_10c,puVar17,(int)local_238 + 0x174 + *param_1);
            if ((puVar17 != puVar30) && (puVar21 = puVar30 + 0x10, puVar30 != puVar21)) {
              puVar27 = puVar17 + 2;
              iVar25 = (int)puVar30 - (int)puVar17;
              do {
                puVar27[-2] = *puVar30;
                puVar27[-1] = puVar30[1];
                *puVar27 = *(undefined4 *)(iVar25 + (int)puVar27);
                puVar27[1] = puVar30[3];
                puVar30 = puVar30 + 4;
                puVar27 = puVar27 + 4;
              } while (puVar30 != puVar21);
            }
            local_224 = local_224 + 1;
            local_238 = (int *)((int)local_238 + 0x1c4);
            puVar17 = puVar17 + 0x10;
          } while (local_224 < param_1[1]);
        }
        if (param_2 < param_1[1]) {
          puVar17 = puVar19 + param_2 * 0x10 + -0x10;
          iVar25 = param_2;
          do {
            puVar30 = puVar17 + 0x10;
            if ((puVar17 != puVar30) && (puVar30 != puVar17 + 0x20)) {
              puVar21 = puVar17 + 2;
              iVar28 = (int)puVar30 - (int)puVar17;
              do {
                puVar21[-2] = *puVar30;
                puVar21[-1] = puVar30[1];
                *puVar21 = *(undefined4 *)((int)puVar21 + iVar28);
                puVar21[1] = puVar30[3];
                puVar30 = puVar30 + 4;
                puVar21 = puVar21 + 4;
              } while (puVar30 != puVar17 + 0x20);
            }
            iVar25 = iVar25 + 1;
            puVar17 = puVar17 + 0x10;
          } while (iVar25 < param_1[1]);
        }
        if (0 < iVar32) {
          local_238 = puVar15 + 0x4d;
          puVar17 = puVar19;
          local_230 = iVar32;
          do {
            puVar30 = (undefined4 *)FUN_0064e040(local_8c,puVar17,local_238);
            if ((puVar17 != puVar30) && (puVar21 = puVar30 + 0x10, puVar30 != puVar21)) {
              puVar27 = puVar17 + 2;
              iVar25 = (int)puVar30 - (int)puVar17;
              do {
                puVar27[-2] = *puVar30;
                puVar27[-1] = puVar30[1];
                *puVar27 = *(undefined4 *)(iVar25 + (int)puVar27);
                puVar27[1] = puVar30[3];
                puVar30 = puVar30 + 4;
                puVar27 = puVar27 + 4;
              } while (puVar30 != puVar21);
            }
            local_238 = local_238 + 0x71;
            puVar17 = puVar17 + 0x10;
            local_230 = local_230 + -1;
          } while (local_230 != 0);
        }
        local_230 = iVar29 + -2;
        if (0 < local_230) {
          puVar17 = puVar19 + local_230 * 0x10;
          local_238 = puVar15 + local_230 * 0x71 + 1;
          do {
            if (*local_238 != -1) {
              puVar30 = puVar19 + *local_238 * 0x10;
              local_1f4 = *puVar30;
              local_1f0 = puVar30[1];
              local_1ec = puVar30[2];
              local_1e8 = puVar30[3];
              local_1e4 = puVar30[4];
              local_1e0 = puVar30[5];
              local_1dc = puVar30[6];
              local_1d8 = puVar30[7];
              local_1d4 = puVar30[8];
              local_1d0 = puVar30[9];
              local_1cc = puVar30[10];
              local_1c8 = puVar30[0xb];
              local_1c4 = puVar30[0xc];
              local_1c0 = puVar30[0xd];
              local_1bc = puVar30[0xe];
              local_1b8 = puVar30[0xf];
              FUN_0064d6d0();
              puVar30 = (undefined4 *)FUN_0064e040(local_cc,&local_1f4,puVar17);
              if ((puVar17 != puVar30) && (puVar21 = puVar30 + 0x10, puVar30 != puVar21)) {
                puVar27 = puVar17 + 2;
                iVar25 = (int)puVar30 - (int)puVar17;
                do {
                  puVar27[-2] = *puVar30;
                  puVar27[-1] = puVar30[1];
                  *puVar27 = *(undefined4 *)(iVar25 + (int)puVar27);
                  puVar27[1] = puVar30[3];
                  puVar30 = puVar30 + 4;
                  puVar27 = puVar27 + 4;
                } while (puVar30 != puVar21);
              }
            }
            local_238 = local_238 + -0x71;
            puVar17 = puVar17 + -0x10;
            local_230 = local_230 + -1;
          } while (local_230 != 0);
        }
        iVar25 = iVar32;
        puVar17 = local_214;
        if (0 < iVar32) {
          do {
            puVar30 = (undefined4 *)FUN_004068c0(local_1a8);
            puVar17[-5] = *puVar30;
            puVar17[-4] = puVar30[1];
            puVar17[-3] = puVar30[2];
            puVar30 = (undefined4 *)FUN_0064d8e0(local_19c);
            puVar17[-2] = *puVar30;
            puVar17[-1] = puVar30[1];
            *puVar17 = puVar30[2];
            puVar17[1] = puVar30[3];
            uVar22 = FUN_004b9680(auStack_1b4);
            FUN_004357e0(uVar22);
            iVar25 = iVar25 + -1;
            puVar17 = puVar17 + 10;
          } while (iVar25 != 0);
        }
        local_228 = local_228 + 1;
        local_214 = local_214 + iVar32 * 10;
      } while (local_228 < param_1[3]);
    }
    FUN_0064ff40(puVar19,s_C__projects_meridian_xCore_Auxil_00756650,0x348);
  }
  else {
    local_228 = 0;
    if (0 < param_1[3]) {
      do {
        iVar29 = param_1[1];
        iVar28 = 0;
        if (0 < iVar29) {
          puVar19 = (undefined4 *)((int)pvVar16 + iVar25 * 0x28);
          do {
            if (iVar28 != param_2) {
              iVar18 = iVar29 * local_228 + iVar28;
              iVar29 = param_1[2] + iVar18 * 0x28;
              *puVar19 = *(undefined4 *)(param_1[2] + iVar18 * 0x28);
              puVar19[1] = *(undefined4 *)(iVar29 + 4);
              puVar19[2] = *(undefined4 *)(iVar29 + 8);
              puVar19[3] = *(undefined4 *)(iVar29 + 0xc);
              puVar19[4] = *(undefined4 *)(iVar29 + 0x10);
              puVar19[5] = *(undefined4 *)(iVar29 + 0x14);
              puVar19[6] = *(undefined4 *)(iVar29 + 0x18);
              puVar19[7] = *(undefined4 *)(iVar29 + 0x1c);
              puVar19[8] = *(undefined4 *)(iVar29 + 0x20);
              iVar25 = iVar25 + 1;
              puVar19[9] = *(undefined4 *)(iVar29 + 0x24);
              puVar19 = puVar19 + 10;
            }
            iVar29 = param_1[1];
            iVar28 = iVar28 + 1;
          } while (iVar28 < iVar29);
        }
        local_228 = local_228 + 1;
      } while (local_228 < param_1[3]);
    }
  }
  FUN_006bf840(*param_1);
  FUN_0064ff40(param_1[2],s_C__projects_meridian_xCore_Auxil_0075668c,0x34d);
  *param_1 = (int)puVar15;
  iVar29 = 0;
  iVar25 = 0;
  param_1[1] = iVar32;
  param_1[2] = (int)pvVar16;
  local_21c = 0;
  if (0 < param_1[7]) {
    iVar32 = 0;
    do {
      iVar28 = FUN_00647ed0(iVar32 + 0x21 + param_1[6],local_18c);
      if (iVar28 != 0) {
        iVar29 = iVar29 + 1;
      }
      iVar25 = iVar25 + 1;
      iVar32 = iVar32 + 0x198;
      local_21c = iVar29;
    } while (iVar25 < param_1[7]);
  }
  pvVar23 = operator_new(local_21c * 0x198);
  local_4 = 0;
  pvVar16 = (void *)0x0;
  if ((pvVar23 != (void *)0x0) && (pvVar16 = pvVar23, -1 < local_21c + -1)) {
    iVar29 = (int)pvVar23 + 0x188;
    iVar25 = local_21c;
    do {
      FUN_00401080(iVar29,4,4,FUN_0041def0);
      iVar29 = iVar29 + 0x198;
      iVar25 = iVar25 + -1;
    } while (iVar25 != 0);
  }
  iVar29 = 0;
  local_4 = 0xffffffff;
  if (0 < param_1[7]) {
    iVar25 = 0;
    do {
      iVar32 = FUN_00647ed0(iVar25 + 0x21 + param_1[6],local_18c);
      if (iVar32 != 0) {
        FUN_006af250(param_1[6] + iVar25);
      }
      iVar29 = iVar29 + 1;
      iVar25 = iVar25 + 0x198;
    } while (iVar29 < param_1[7]);
  }
  if (param_1[6] == 0) {
    param_1[6] = (int)pvVar16;
    param_1[7] = local_21c;
  }
  else {
    FUN_006bf840(param_1[6]);
    param_1[6] = (int)pvVar16;
    param_1[7] = local_21c;
  }
  ExceptionList = local_c;
  return;
}

