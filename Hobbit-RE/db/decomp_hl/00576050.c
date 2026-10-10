
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00576050(int *param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined4 *puVar18;
  int iVar19;
  int iVar20;
  undefined4 *puVar21;
  float *pfVar22;
  uint uVar23;
  undefined4 uVar24;
  float fVar25;
  int local_2bc;
  int local_2b4;
  uint local_2b0;
  float local_294;
  undefined4 *local_290;
  float local_28c;
  int local_288;
  float local_284;
  int local_280;
  float local_27c [3];
  int local_270;
  undefined4 *local_26c;
  int local_268;
  undefined4 local_264;
  undefined4 local_260;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  undefined1 local_21c [12];
  undefined1 local_210 [12];
  undefined1 local_204 [12];
  undefined1 local_1f8 [12];
  undefined1 local_1ec [12];
  undefined1 local_1e0 [12];
  undefined1 local_1d4 [12];
  undefined1 local_1c8 [12];
  undefined1 local_1bc [12];
  undefined1 local_1b0 [12];
  undefined1 local_1a4 [12];
  undefined1 local_198 [12];
  undefined1 local_18c [12];
  undefined1 local_180 [12];
  undefined1 local_174 [12];
  undefined1 local_168 [348];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbb32;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_event_mgr__HandleAllEvents_0074013c);
  iVar15 = param_1[5];
  iVar4 = param_1[6];
  fVar5 = (float)param_1[4];
  iVar7 = param_1[3];
  iVar8 = param_1[7];
  uVar17 = param_1[1];
  uVar23 = uVar17 * 2;
  local_4 = 0;
  if (((uVar23 ^ uVar17) & 0x7fffffff ^ uVar23) == 0xffffffff) {
    iVar16 = *param_1;
  }
  else {
    iVar16 = FUN_00549470(param_1 + 1);
  }
  iVar20 = (int)*(short *)(param_1[2] * 0x50 + 0x26 + *(int *)(iVar16 + 0x58));
  iVar16 = param_1[2] * 0x50 + *(int *)(iVar16 + 0x58);
  FUN_00571af0(iVar4,fVar5,iVar8,iVar15,iVar7,local_27c,&local_28c,&local_294,&local_284);
  local_2bc = 0;
  if (0 < iVar20) {
    do {
      iVar15 = *(int *)(*(int *)(iVar16 + 0x20) + 0x68) +
               (*(short *)(iVar16 + 0x28) + local_2bc) * 0x18;
      local_280 = iVar15;
      iVar7 = FUN_0053f210(0);
      iVar8 = FUN_0053f210(1);
      fVar6 = (float)iVar7;
      local_2b0 = 0;
      if ((fVar6 <= fVar5) && (fVar5 <= (float)iVar8)) {
        pcVar9 = (char *)FUN_0053f1a0();
        local_2b0 = 0x1505;
        cVar3 = *pcVar9;
        while (uVar17 = (uint)cVar3, uVar17 != 0) {
          pcVar9 = pcVar9 + 1;
          if ((0x60 < (int)uVar17) && ((int)uVar17 < 0x7b)) {
            uVar17 = uVar17 - 0x20;
          }
          local_2b0 = local_2b0 * 0x21 ^ uVar17;
          cVar3 = *pcVar9;
        }
        if (local_2b0 == DAT_00772c00) {
          uVar17 = param_2;
          uVar23 = param_3;
          uVar10 = FUN_0053c3a0(local_180,local_2bc);
          FUN_00574c00(iVar15,uVar10,uVar17,uVar23);
        }
        else if (local_2b0 == DAT_00772c04) {
          uVar24 = 1;
          uVar10 = FUN_0053c520(local_1e0,local_2bc);
          uVar11 = FUN_0053c3a0(local_1ec,local_2bc);
          FUN_00573020(iVar15,param_2,param_3,uVar11,uVar10,uVar24);
        }
        else if (local_2b0 == DAT_00772c08) {
          uVar24 = 0;
          uVar10 = FUN_0053c520(local_1d4,local_2bc);
          uVar11 = FUN_0053c3a0(local_174,local_2bc);
          FUN_00573020(iVar15,param_2,param_3,uVar11,uVar10,uVar24);
        }
        else if (local_2b0 == DAT_00772c0c) {
          FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
          local_4._0_1_ = 1;
          iVar7 = FUN_00406ce0(param_2,param_3);
          local_4 = (uint)local_4._1_3_ << 8;
          if (iVar7 == -1) {
            FUN_00649720();
          }
          else {
            uVar17 = *(uint *)(DAT_0076f648 + iVar7 * 0x14);
            uVar17 = -(uint)((*(byte *)(uVar17 + 0x7f) & 0x10) != 0) & uVar17;
            FUN_00649720();
            if (uVar17 != 0) {
              FUN_00401f00(*(float *)(uVar17 + 0x44) + *(float *)(uVar17 + 0x50),
                           *(float *)(uVar17 + 0x54) + *(float *)(uVar17 + 0x48),
                           *(float *)(uVar17 + 0x58) + *(float *)(uVar17 + 0x4c));
              FUN_00401f00(local_230 * _DAT_006e936c,local_22c * _DAT_006e936c,
                           local_228 * _DAT_006e936c);
              FUN_00573a80(iVar15,local_210,param_2,param_3);
              goto LAB_005763bc;
            }
          }
          uVar17 = param_2;
          uVar23 = param_3;
          uVar10 = FUN_0053c3a0(local_1bc,local_2bc);
          FUN_00573a80(iVar15,uVar10,uVar17,uVar23);
        }
      }
LAB_005763bc:
      if (((local_27c[0] < fVar6 != (local_27c[0] == fVar6)) &&
          (fVar6 < local_28c != (NAN(fVar6) || NAN(local_28c)))) ||
         ((local_294 < fVar6 != (local_294 == fVar6) &&
          (fVar6 < local_284 != (NAN(fVar6) || NAN(local_284)))))) {
        if (local_2b0 == 0) {
          pcVar9 = (char *)FUN_0053f1a0();
          local_2b0 = 0x1505;
          cVar3 = *pcVar9;
          while (uVar17 = (uint)cVar3, uVar17 != 0) {
            pcVar9 = pcVar9 + 1;
            if ((0x60 < (int)uVar17) && ((int)uVar17 < 0x7b)) {
              uVar17 = uVar17 - 0x20;
            }
            local_2b0 = local_2b0 * 0x21 ^ uVar17;
            cVar3 = *pcVar9;
          }
        }
        if (local_2b0 == DAT_00772c10) {
          FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
          local_4._0_1_ = 2;
          iVar7 = FUN_00406ce0(param_2,param_3);
          local_4 = (uint)local_4._1_3_ << 8;
          if (iVar7 == -1) {
            FUN_00649720();
          }
          else {
            uVar17 = *(uint *)(DAT_0076f648 + iVar7 * 0x14);
            uVar17 = -(uint)((*(byte *)(uVar17 + 0x7f) & 0x10) != 0) & uVar17;
            FUN_00649720();
            if (uVar17 != 0) {
              local_234 = *(float *)(uVar17 + 0x58) + *(float *)(uVar17 + 0x4c);
              local_238 = *(float *)(uVar17 + 0x54) + *(float *)(uVar17 + 0x48);
              local_23c = *(float *)(uVar17 + 0x44) + *(float *)(uVar17 + 0x50);
              FUN_00402160(local_21c,&local_23c,0x3f000000);
              FUN_00573ed0(iVar15,local_21c,param_2,param_3);
              goto LAB_0057698e;
            }
          }
          uVar17 = param_2;
          uVar23 = param_3;
          uVar10 = FUN_0053c3a0(local_18c,local_2bc);
          FUN_00573ed0(iVar15,uVar10,uVar17,uVar23);
        }
        else if (local_2b0 == DAT_00772c14) {
          FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
          local_4._0_1_ = 3;
          iVar7 = FUN_00406ce0(param_2,param_3);
          local_4 = (uint)local_4._1_3_ << 8;
          if (iVar7 == -1) {
            FUN_00649720();
          }
          else {
            uVar17 = *(uint *)(DAT_0076f648 + iVar7 * 0x14);
            uVar17 = -(uint)((*(byte *)(uVar17 + 0x7f) & 0x10) != 0) & uVar17;
            FUN_00649720();
            if (uVar17 != 0) {
              FUN_00401f00((*(float *)(uVar17 + 0x50) + *(float *)(uVar17 + 0x44)) * _DAT_006e936c,
                           (*(float *)(uVar17 + 0x54) + *(float *)(uVar17 + 0x48)) * _DAT_006e936c,
                           (*(float *)(uVar17 + 0x58) + *(float *)(uVar17 + 0x4c)) * _DAT_006e936c);
              FUN_00573790(iVar15,local_204,param_2,param_3);
              goto LAB_0057698e;
            }
          }
          uVar17 = param_2;
          uVar23 = param_3;
          uVar10 = FUN_0053c3a0(local_1a4,local_2bc);
          FUN_00573790(iVar15,uVar10,uVar17,uVar23);
        }
        else if (local_2b0 == DAT_00772c18) {
          uVar10 = param_5;
          uVar17 = param_2;
          uVar23 = param_3;
          uVar11 = FUN_0053c3a0(local_1f8,local_2bc);
          FUN_005735a0(iVar15,uVar11,uVar10,uVar17,uVar23);
        }
        else if (local_2b0 == DAT_00772c1c) {
          if (param_1[5] == 0) {
            FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
            iVar12 = (int)*(short *)(&DAT_0076cd88 + ((param_2 ^ param_3) * -0xfb & 0xfff) * 2);
            for (iVar7 = iVar12; iVar7 != -1;
                iVar7 = (int)*(short *)(DAT_0076f648 + iVar7 * 0x14 + 0xe)) {
            }
            if (iVar12 == -1) {
LAB_0057673f:
              local_4 = (uint)local_4._1_3_ << 8;
              FUN_00649720();
            }
            else {
              do {
                piVar1 = (int *)(DAT_0076f648 + iVar12 * 0x14);
                iVar7 = *piVar1;
                if (((iVar7 != 0) && (*(uint *)(iVar7 + 8) == param_2)) &&
                   (*(uint *)(iVar7 + 0xc) == param_3)) {
                  if (iVar12 == -1) goto LAB_0057673f;
                  uVar17 = *(uint *)(DAT_0076f648 + iVar12 * 0x14);
                  bVar2 = *(byte *)(uVar17 + 0x7f);
                  local_4 = (uint)local_4._1_3_ << 8;
                  FUN_00649720();
                  if ((-(uint)((bVar2 & 0x10) != 0) & uVar17) == 0) goto LAB_005767a6;
                  FUN_00574980(iVar15,local_1f8,param_2,param_3,iVar16);
                  goto LAB_0057698e;
                }
                iVar12 = (int)*(short *)((int)piVar1 + 0xe);
              } while (iVar12 != -1);
              local_4 = (uint)local_4._1_3_ << 8;
              FUN_00649720();
            }
LAB_005767a6:
            uVar17 = param_2;
            uVar23 = param_3;
            iVar7 = iVar16;
            uVar10 = FUN_0053c3a0(local_1c8,local_2bc);
            FUN_00574980(iVar15,uVar10,uVar17,uVar23,iVar7);
          }
        }
        else if (local_2b0 == DAT_00772c20) {
          uVar10 = FUN_0053f1b0(s_LIGHTENING_START_0073fd68);
          iVar15 = FUN_00647ed0(uVar10);
          if (iVar15 != 0) {
            uVar10 = FUN_0053f1b0(s_LIGHTNING_START_0073fd58);
            iVar15 = FUN_00647ed0(uVar10);
            if (iVar15 != 0) goto LAB_0057698e;
          }
          iVar15 = 0;
          local_26c = (undefined4 *)0x0;
          local_270 = 0;
          local_268 = 0;
          local_260 = 0;
          local_264 = 0;
          local_27c[1] = 0.0;
          local_27c[2] = 0.0;
          local_4 = CONCAT31(local_4._1_3_,5);
          local_2b4 = 0;
          puVar18 = (undefined4 *)0x0;
          do {
            iVar7 = local_270;
            local_290 = (undefined4 *)FUN_0053c3a0(local_1b0,local_2b4);
            local_288 = iVar7 + 1;
            puVar13 = puVar18;
            if (iVar15 < local_288) {
              iVar15 = iVar15 / 2;
              iVar12 = 1;
              if (0 < iVar15) {
                iVar12 = iVar15;
              }
              if (iVar12 + iVar7 < 1) {
                iVar15 = 1;
              }
              else {
                if (iVar15 < 1) {
                  iVar15 = 1;
                }
                iVar15 = iVar7 + iVar15;
              }
              puVar13 = (undefined4 *)operator_new(iVar15 * 0xc);
              puVar21 = puVar18;
              if (0 < iVar7) {
                puVar14 = puVar13 + 1;
                iVar19 = (int)puVar18 - (int)puVar13;
                iVar12 = iVar7;
                do {
                  puVar14[-1] = *puVar18;
                  *puVar14 = *(undefined4 *)(iVar19 + (int)puVar14);
                  puVar14[1] = puVar18[2];
                  puVar18 = puVar18 + 3;
                  puVar14 = puVar14 + 3;
                  iVar12 = iVar12 + -1;
                  puVar21 = local_26c;
                } while (iVar12 != 0);
              }
              FUN_006bf840(puVar21);
              local_26c = puVar13;
              local_268 = iVar15;
            }
            puVar18 = puVar13 + iVar7 * 3;
            *puVar18 = *local_290;
            puVar18[1] = local_290[1];
            puVar18[2] = local_290[2];
            local_2b4 = local_2b4 + 1;
            puVar18 = puVar13;
            local_270 = local_288;
          } while (local_2b4 < iVar20);
          pfVar22 = local_27c + 1;
          iVar15 = iVar16;
          iVar7 = iVar4;
          fVar25 = fVar5;
          uVar10 = FUN_0053c3a0(local_198,local_2bc);
          FUN_005734c0(uVar10,pfVar22,iVar15,iVar7,fVar25);
          local_4 = local_4 & 0xffffff00;
          FUN_006bf840(puVar13);
        }
      }
LAB_0057698e:
      if ((fVar5 <= fVar6) || ((float)iVar8 < fVar5 != ((float)iVar8 == fVar5))) {
        uVar10 = FUN_0053f1a0(s_Effect_00740134);
        iVar15 = FUN_00647f90(uVar10);
        if ((iVar15 != 0) && (iVar15 = FUN_0053f210(3), -1 < iVar15)) {
          FUN_0053efd0(local_168);
          FUN_0053ebf0(3,0xffffffff);
          FUN_0053ee10(local_168);
        }
      }
      local_2bc = local_2bc + 1;
    } while (local_2bc < iVar20);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

