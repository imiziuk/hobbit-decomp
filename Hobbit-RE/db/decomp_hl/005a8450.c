
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005a8450(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  float *pfVar12;
  int iVar13;
  float fVar14;
  int iVar15;
  float fVar16;
  undefined2 *puVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  int *piVar23;
  int *local_274;
  float local_270;
  int *local_26c;
  float local_264;
  float local_260;
  float *local_258;
  int local_250;
  float local_24c;
  undefined1 local_248 [4];
  float local_244;
  float local_240;
  float *local_23c;
  float local_238;
  int local_234;
  undefined1 local_228 [12];
  undefined1 local_21c [12];
  undefined1 local_210 [12];
  float local_204;
  float local_200;
  float local_1fc [5];
  float local_1e8 [35];
  float local_15c [42];
  float local_b4 [42];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dde4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_occluder_mgr__SetView_0074480c);
  local_4 = 0;
  *(undefined4 *)(param_1 + 0x89e4) = 0;
  *(undefined4 *)(param_1 + 0x89e0) = 0;
  *(undefined4 *)(param_1 + 0x89e8) = 0;
  FUN_0064cc30();
  if (*(int *)(param_1 + 0x8844) != 0) {
    puVar9 = (undefined4 *)FUN_00672260(local_248);
    *(undefined4 *)(param_1 + 0x8848) = *puVar9;
    *(undefined4 *)(param_1 + 0x884c) = puVar9[1];
    *(undefined4 *)(param_1 + 0x8850) = puVar9[2];
    puVar9 = (undefined4 *)FUN_00672330(local_248);
    *(undefined4 *)(param_1 + 0x8854) = *puVar9;
    *(undefined4 *)(param_1 + 0x8858) = puVar9[1];
    *(undefined4 *)(param_1 + 0x885c) = puVar9[2];
    *(float *)(param_1 + 0x8860) =
         -(*(float *)(param_1 + 0x8848) * *(float *)(param_1 + 0x8854) +
          *(float *)(param_1 + 0x884c) * *(float *)(param_1 + 0x8858) +
          *(float *)(param_1 + 0x8850) * *(float *)(param_1 + 0x885c));
    puVar9 = (undefined4 *)FUN_006722f0(local_248);
    *(undefined4 *)(param_1 + 0x8864) = *puVar9;
    *(undefined4 *)(param_1 + 0x8868) = puVar9[1];
    *(undefined4 *)(param_1 + 0x886c) = puVar9[2];
    puVar9 = (undefined4 *)FUN_00672310(local_248);
    *(undefined4 *)(param_1 + 0x8870) = *puVar9;
    *(undefined4 *)(param_1 + 0x8874) = puVar9[1];
    *(undefined4 *)(param_1 + 0x8878) = puVar9[2];
    puVar9 = (undefined4 *)FUN_00672330(local_248);
    *(undefined4 *)(param_1 + 0x887c) = *puVar9;
    *(undefined4 *)(param_1 + 0x8880) = puVar9[1];
    *(undefined4 *)(param_1 + 0x8884) = puVar9[2];
    if (*(float *)(param_1 + 0x8854) < DAT_006e92e4) {
      *(undefined4 *)(param_1 + 0x89d0) = 3;
    }
    else {
      *(undefined4 *)(param_1 + 0x89d0) = 0;
    }
    if (*(float *)(param_1 + 0x8858) < DAT_006e92e4) {
      *(undefined4 *)(param_1 + 0x89d4) = 4;
    }
    else {
      *(undefined4 *)(param_1 + 0x89d4) = 1;
    }
    if (*(float *)(param_1 + 0x885c) < DAT_006e92e4) {
      *(undefined4 *)(param_1 + 0x89d8) = 5;
    }
    else {
      *(undefined4 *)(param_1 + 0x89d8) = 2;
    }
    *(undefined4 *)(param_1 + 0x8888) = 0;
    local_250 = 0;
    if (0 < *(int *)(param_1 + 0x8840)) {
      pfVar20 = (float *)(param_1 + 0x180);
      do {
        if (pfVar20[0xb] != 0.0) {
          *pfVar20 = 0.0;
          pfVar20[10] = 0.0;
          iVar10 = FUN_00673620(pfVar20 + 1,0);
          if (iVar10 != 0) {
            local_24c = pfVar20[-0x5c];
            local_258 = local_15c;
            pfVar19 = pfVar20 + -0x5b;
            if (iVar10 == 2) {
              iVar10 = FUN_00672830(0);
              pfVar18 = (float *)(iVar10 + 4);
              local_270 = 8.40779e-45;
              local_264 = local_24c;
              do {
                local_24c = local_264;
                if (local_264 != 0.0) {
                  iVar10 = (int)local_264 * 3;
                  local_24c = 0.0;
                  if (0 < (int)local_264) {
                    local_274 = (int *)0x0;
                    pfVar12 = local_258;
                    pfVar22 = pfVar19;
                    local_26c = (int *)(pfVar19[iVar10 + -3] * pfVar18[-1] +
                                        pfVar19[iVar10 + -1] * pfVar18[1] +
                                        pfVar19[iVar10 + -2] * *pfVar18 + pfVar18[2]);
                    local_234 = (iVar10 + -3) * 4;
                    do {
                      iVar10 = local_234;
                      local_234 = (int)local_274;
                      fVar14 = *pfVar22 * pfVar18[-1] +
                               *pfVar18 * pfVar22[1] + pfVar22[2] * pfVar18[1] + pfVar18[2];
                      if ((float)local_26c < DAT_006e92e4) {
LAB_005a8768:
                        if (((float)local_26c < DAT_006e92e4 !=
                             (NAN((float)local_26c) || NAN(DAT_006e92e4))) &&
                           (pfVar21 = pfVar12, DAT_006e92e4 <= fVar14)) goto LAB_005a8792;
                      }
                      else {
                        local_24c = (float)((int)local_24c + 1);
                        pfVar12 = pfVar12 + 3;
                        FUN_004357e0(iVar10 + (int)pfVar19);
                        pfVar21 = pfVar12;
                        if (fVar14 < DAT_006e92e4 == (NAN(fVar14) || NAN(DAT_006e92e4)))
                        goto LAB_005a8768;
LAB_005a8792:
                        local_238 = fVar14 - (float)local_26c;
                        fVar16 = local_238;
                        if (local_238 < DAT_006e92e4 != (NAN(local_238) || NAN(DAT_006e92e4))) {
                          fVar16 = -local_238;
                        }
                        if (fVar16 < _DAT_006ec0e0 != (NAN(fVar16) || NAN(_DAT_006ec0e0))) {
                          local_238 = _DAT_006ec0e0;
                        }
                        local_24c = (float)((int)local_24c + 1);
                        local_238 = -(float)local_26c / local_238;
                        iVar10 = iVar10 + (int)pfVar19;
                        pfVar12 = pfVar21 + 3;
                        local_23c = pfVar21;
                        uVar11 = FUN_00405080(local_248,pfVar22,iVar10);
                        uVar11 = FUN_0042eea0(local_210,local_238,uVar11);
                        uVar11 = FUN_00402130(local_228,iVar10,uVar11);
                        FUN_004357e0(uVar11);
                      }
                      local_274 = (int *)((int)local_274 + 0xc);
                      pfVar22 = pfVar22 + 3;
                      local_264 = (float)((int)local_264 + -1);
                      local_26c = (int *)fVar14;
                    } while (local_264 != 0.0);
                  }
                  pfVar19 = local_258;
                  if (local_258 == local_15c) {
                    local_258 = local_b4;
                  }
                  else {
                    local_258 = local_15c;
                  }
                }
                pfVar18 = pfVar18 + 4;
                local_270 = (float)((int)local_270 + -1);
                local_264 = local_24c;
              } while (local_270 != 0.0);
              if (local_24c == 0.0) goto LAB_005a89eb;
            }
            if (0 < (int)local_24c) {
              pfVar18 = local_1fc;
              local_270 = local_24c;
              do {
                pfVar12 = (float *)FUN_00673820(local_21c,
                                                (int)pfVar18 + ((int)pfVar19 - (int)local_1fc),0);
                fVar14 = *pfVar12;
                fVar16 = pfVar12[1];
                *pfVar18 = pfVar12[2];
                pfVar18[-2] = fVar14;
                pfVar18[-1] = fVar16;
                *pfVar18 = 0.0;
                pfVar18 = pfVar18 + 3;
                local_270 = (float)((int)local_270 + -1);
              } while (local_270 != 0.0);
            }
            fVar14 = DAT_006e92e4;
            fVar16 = DAT_006e92e4;
            fVar4 = DAT_006e92e4;
            if (1 < (int)local_24c + -1) {
              iVar10 = (int)local_24c + -2;
              pfVar19 = local_1e8;
              do {
                iVar10 = iVar10 + -1;
                local_238 = (pfVar19[-4] - local_204) * (*pfVar19 - local_200) -
                            (pfVar19[-3] - local_200) * (pfVar19[-1] - local_204);
                local_23c = (float *)((pfVar19[-2] - local_1fc[0]) * (pfVar19[-1] - local_204) -
                                     (pfVar19[-4] - local_204) * (pfVar19[1] - local_1fc[0]));
                fVar16 = ((pfVar19[-3] - local_200) * (pfVar19[1] - local_1fc[0]) -
                         (pfVar19[-2] - local_1fc[0]) * (*pfVar19 - local_200)) + fVar16;
                fVar4 = fVar4 + (float)local_23c;
                fVar14 = fVar14 + local_238;
                pfVar19 = pfVar19 + 3;
              } while (iVar10 != 0);
            }
            *pfVar20 = SQRT(fVar16 * fVar16 + fVar14 * fVar14 + fVar4 * fVar4) * _DAT_006e936c;
            *(int *)(param_1 + 0x888c + *(int *)(param_1 + 0x8888) * 4) = local_250;
            *(int *)(param_1 + 0x8888) = *(int *)(param_1 + 0x8888) + 1;
          }
        }
LAB_005a89eb:
        local_250 = local_250 + 1;
        pfVar20 = pfVar20 + 0x6d;
      } while (local_250 < *(int *)(param_1 + 0x8840));
    }
    iVar10 = *(int *)(param_1 + 0x8888);
    if (0 < iVar10) {
      piVar23 = (int *)(param_1 + 0x888c);
      pfVar20 = (float *)0x0;
      do {
        local_23c = (float *)((int)pfVar20 + 1);
        fVar14 = *(float *)(*piVar23 * 0x1b4 + 0x180 + param_1);
        local_274 = piVar23;
        for (pfVar19 = local_23c; (int)pfVar19 < iVar10; pfVar19 = (float *)((int)pfVar19 + 1)) {
          local_274 = local_274 + 1;
          fVar16 = *(float *)(*local_274 * 0x1b4 + 0x180 + param_1);
          if (fVar14 < fVar16 != (NAN(fVar14) || NAN(fVar16))) {
            fVar14 = *(float *)(*local_274 * 0x1b4 + 0x180 + param_1);
            pfVar20 = pfVar19;
          }
        }
        iVar10 = *piVar23;
        *piVar23 = *(int *)(param_1 + 0x888c + (int)pfVar20 * 4);
        *(int *)(param_1 + 0x888c + (int)pfVar20 * 4) = iVar10;
        iVar10 = *(int *)(param_1 + 0x8888);
        piVar23 = piVar23 + 1;
        pfVar20 = local_23c;
      } while ((int)local_23c < iVar10);
    }
    iVar10 = *(int *)(param_1 + 0x8888);
    if (0x10 < iVar10) {
      iVar10 = 0x10;
    }
    *(int *)(param_1 + 0x8888) = iVar10;
    if (0 < iVar10) {
      piVar23 = (int *)(param_1 + 0x888c);
      iVar13 = 0;
      do {
        local_270 = *(float *)(*piVar23 * 0x1b4 + 0x1a4 + param_1);
        iVar1 = iVar13 + 1;
        local_274 = piVar23;
        for (iVar15 = iVar1; iVar15 < iVar10; iVar15 = iVar15 + 1) {
          local_274 = local_274 + 1;
          iVar2 = *(int *)(param_1 + 0x1a4 + *local_274 * 0x1b4);
          if ((int)local_270 < iVar2) {
            iVar13 = iVar15;
            local_270 = (float)iVar2;
          }
        }
        iVar10 = *piVar23;
        *piVar23 = *(int *)(param_1 + 0x888c + iVar13 * 4);
        *(int *)(param_1 + 0x888c + iVar13 * 4) = iVar10;
        iVar10 = *(int *)(param_1 + 0x8888);
        piVar23 = piVar23 + 1;
        iVar13 = iVar1;
      } while (iVar1 < iVar10);
    }
    local_250 = 0;
    if (0 < *(int *)(param_1 + 0x8888)) {
      local_26c = (int *)(param_1 + 0x888c);
      do {
        iVar10 = *local_26c * 0x1b4;
        fVar14 = *(float *)(iVar10 + param_1);
        pfVar19 = (float *)(iVar10 + param_1);
        pfVar20 = pfVar19 + *(int *)(iVar10 + 0x10 + param_1) * 4 + 0x1d;
        pfVar19[0x6a] = 1.4013e-45;
        *pfVar20 = fVar14;
        pfVar20[1] = pfVar19[1];
        pfVar20[2] = pfVar19[2];
        pfVar20[3] = pfVar19[3];
        fVar14 = pfVar19[4];
        if (0 < (int)fVar14) {
          local_260 = 1.4013e-45;
          pfVar20 = pfVar19 + 6;
          pfVar18 = pfVar19 + 0x1e;
          do {
            fVar16 = local_260;
            if (local_260 == fVar14) {
              fVar16 = 0.0;
            }
            fVar14 = pfVar19[(int)fVar16 * 3 + 7] - *(float *)(param_1 + 0x8850);
            fVar6 = (pfVar19 + (int)fVar16 * 3 + 5)[1] - *(float *)(param_1 + 0x884c);
            fVar4 = pfVar19[(int)fVar16 * 3 + 5] - *(float *)(param_1 + 0x8848);
            fVar7 = pfVar20[1] - *(float *)(param_1 + 0x8850);
            fVar8 = *pfVar20 - *(float *)(param_1 + 0x884c);
            fVar5 = pfVar20[-1] - *(float *)(param_1 + 0x8848);
            fVar16 = fVar5 * fVar6 - fVar8 * fVar4;
            fVar4 = fVar7 * fVar4 - fVar5 * fVar14;
            fVar14 = fVar8 * fVar14 - fVar7 * fVar6;
            fVar5 = DAT_006e92e8 / SQRT(fVar16 * fVar16 + fVar4 * fVar4 + fVar14 * fVar14);
            iVar10 = FUN_0064cf30(fVar5);
            if (iVar10 == 0) {
              local_244 = 0.0;
              local_240 = 0.0;
              fVar14 = DAT_006e92e4;
            }
            else {
              local_244 = fVar4 * fVar5;
              local_240 = fVar16 * fVar5;
              fVar14 = fVar14 * fVar5;
            }
            pfVar18[-1] = fVar14;
            pfVar18[1] = local_240;
            *pfVar18 = local_244;
            fVar16 = fVar14 * fVar14 + local_244 * local_244 + local_240 * local_240;
            if ((_DAT_006e92f0 < fVar16 == (_DAT_006e92f0 == fVar16)) ||
               (fVar16 < _DAT_006e92ec == (fVar16 == _DAT_006e92ec))) {
              fVar16 = DAT_006e92e8 / SQRT(fVar16);
              pfVar18[-1] = fVar16 * fVar14;
              *pfVar18 = local_244 * fVar16;
              pfVar18[1] = local_240 * fVar16;
            }
            pfVar20 = pfVar20 + 3;
            pfVar18[2] = -(*(float *)(param_1 + 0x8848) * pfVar18[-1] +
                          *(float *)(param_1 + 0x884c) * *pfVar18 +
                          *(float *)(param_1 + 0x8850) * pfVar18[1]);
            fVar14 = pfVar19[4];
            bVar3 = (int)local_260 < (int)fVar14;
            pfVar18 = pfVar18 + 4;
            local_260 = (float)((int)local_260 + 1);
          } while (bVar3);
        }
        if ((DAT_006e92e4 <
             *pfVar19 * *(float *)(param_1 + 0x8848) +
             *(float *)(param_1 + 0x8850) * pfVar19[2] + *(float *)(param_1 + 0x884c) * pfVar19[1] +
             pfVar19[3]) && (iVar10 = 0, -1 < (int)pfVar19[4])) {
          pfVar20 = pfVar19 + 0x1f;
          do {
            iVar10 = iVar10 + 1;
            pfVar20[-2] = -pfVar20[-2];
            pfVar20[-1] = -pfVar20[-1];
            *pfVar20 = -*pfVar20;
            pfVar20[1] = -pfVar20[1];
            pfVar20 = pfVar20 + 4;
          } while (iVar10 <= (int)pfVar19[4]);
        }
        iVar10 = 0;
        pfVar20 = pfVar19 + 0x41;
        puVar17 = (undefined2 *)((int)pfVar19 + 0x13a);
        if (-1 < (int)pfVar19[4]) {
          pfVar18 = pfVar19 + 0x1e;
          do {
            if (pfVar18[-1] < DAT_006e92e4) {
              *(undefined2 *)pfVar20 = 3;
            }
            else {
              *(undefined2 *)pfVar20 = 0;
            }
            if (*pfVar18 < DAT_006e92e4) {
              *(undefined2 *)((int)pfVar20 + 2) = 4;
            }
            else {
              *(undefined2 *)((int)pfVar20 + 2) = 1;
            }
            if (pfVar18[1] < DAT_006e92e4) {
              *(undefined2 *)(pfVar20 + 1) = 5;
            }
            else {
              *(undefined2 *)(pfVar20 + 1) = 2;
            }
            pfVar20 = (float *)((int)pfVar20 + 6);
            if (pfVar18[-1] < DAT_006e92e4) {
              *puVar17 = 0;
            }
            else {
              *puVar17 = 3;
            }
            if (*pfVar18 < DAT_006e92e4) {
              puVar17[1] = 1;
            }
            else {
              puVar17[1] = 4;
            }
            if (pfVar18[1] < DAT_006e92e4) {
              puVar17[2] = 2;
            }
            else {
              puVar17[2] = 5;
            }
            puVar17 = puVar17 + 3;
            iVar10 = iVar10 + 1;
            pfVar18 = pfVar18 + 4;
          } while (iVar10 <= (int)pfVar19[4]);
        }
        local_250 = local_250 + 1;
        local_26c = local_26c + 1;
      } while (local_250 < *(int *)(param_1 + 0x8888));
    }
    iVar10 = 0;
    if (0 < *(int *)(param_1 + 0x8840)) {
      puVar9 = (undefined4 *)(param_1 + 0x1a4);
      do {
        *puVar9 = 0;
        iVar10 = iVar10 + 1;
        puVar9 = puVar9 + 0x6d;
      } while (iVar10 < *(int *)(param_1 + 0x8840));
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

