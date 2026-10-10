
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005aae10(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  float *pfVar9;
  float *pfVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int iVar13;
  float10 fVar14;
  longlong lVar15;
  float local_38;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006ddf90;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_SenseController__UpdateBestGuess_00744988);
  local_4 = 0;
  FUN_005aa750();
  iVar6 = FUN_004a1060();
  if ((iVar6 != 0) &&
     ((DAT_006e92e4 < *(float *)(param_1 + 0x24) || (DAT_006e92e4 < *(float *)(param_1 + 0x28))))) {
    local_38 = 1e+06;
    bVar5 = false;
    FUN_00649600(s_SenseController__UpdateBestGuess_0074495c);
    local_4 = CONCAT31(local_4._1_3_,1);
    piVar7 = (int *)FUN_0041bcc0();
    piVar8 = (int *)FUN_005aa750();
    pfVar9 = (float *)(**(code **)(*piVar8 + 0x28))();
    pfVar10 = (float *)(**(code **)(*piVar7 + 0x28))();
    fVar3 = (pfVar10[2] - pfVar9[2]) * (pfVar10[2] - pfVar9[2]) +
            (pfVar10[1] - pfVar9[1]) * (pfVar10[1] - pfVar9[1]) +
            (*pfVar10 - *pfVar9) * (*pfVar10 - *pfVar9);
    uVar11 = FUN_005aa750();
    iVar6 = FUN_004683d0(uVar11);
    if ((((iVar6 != 0) &&
         ((fVar4 = *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24),
          fVar3 < fVar4 != (NAN(fVar3) || NAN(fVar4)) &&
          (fVar14 = (float10)(**(code **)(*piVar7 + 0x110))(), (float10)_DAT_006e936c <= fVar14))))
        || ((fVar4 = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28),
            fVar3 < fVar4 != (NAN(fVar3) || NAN(fVar4)) && (iVar6 = FUN_00420fe0(), iVar6 != 0))))
       && (fVar3 < _DAT_006e99d0 != (NAN(fVar3) || NAN(_DAT_006e99d0)))) {
      puVar12 = (undefined4 *)(**(code **)(*piVar7 + 0x28))();
      uStack_18 = *puVar12;
      uStack_14 = puVar12[1];
      uStack_10 = puVar12[2];
      bVar5 = true;
      local_38 = fVar3;
    }
    local_4 = local_4 & 0xffffff00;
    FUN_00649720();
    if (param_3 != 0) {
      if (*(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24) < fVar3) {
        FUN_00649600(s_SenseController__UpdateBestGuess_00744934);
        local_4 = CONCAT31(local_4._1_3_,2);
        uVar11 = FUN_0054c5c0(0x1c,s_C__projects_meridian_Support_AI__007448b0,0x17b);
        piVar7 = (int *)FUN_005aa750();
        while (iVar6 = *(int *)(&DAT_0076f664 + DAT_0076f864 * 4), iVar6 != -1) {
          piVar8 = *(int **)(DAT_0076f648 + iVar6 * 0x14);
          *(int *)(&DAT_0076f664 + DAT_0076f864 * 4) =
               (int)*(short *)(DAT_0076f648 + iVar6 * 0x14 + 4);
          if (piVar8 == (int *)0x0) break;
          if ((((piVar8 != piVar7) && (iVar6 = (**(code **)(*piVar8 + 0x108))(0), iVar6 != 0)) &&
              (iVar6 = FUN_004a1090(), iVar6 != 0)) &&
             ((fVar14 = (float10)(**(code **)(*piVar8 + 0x110))(),
              fVar14 < (float10)_DAT_006e936c == (NAN(fVar14) || NAN((float10)_DAT_006e936c)) &&
              (iVar6 = FUN_004683d0(piVar8), iVar6 != 0)))) {
            pfVar9 = (float *)(**(code **)(*piVar7 + 0x28))();
            pfVar10 = (float *)(**(code **)(*piVar8 + 0x28))();
            fVar3 = (*pfVar10 - *pfVar9) * (*pfVar10 - *pfVar9) +
                    (pfVar10[1] - pfVar9[1]) * (pfVar10[1] - pfVar9[1]) +
                    (pfVar10[2] - pfVar9[2]) * (pfVar10[2] - pfVar9[2]);
            fVar4 = *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24);
            if ((fVar3 < fVar4 != (NAN(fVar3) || NAN(fVar4))) &&
               (fVar3 < local_38 != (NAN(fVar3) || NAN(local_38)))) {
              puVar12 = (undefined4 *)(**(code **)(*piVar8 + 0x28))();
              uStack_18 = *puVar12;
              uStack_14 = puVar12[1];
              uStack_10 = puVar12[2];
              bVar5 = true;
              local_38 = fVar3;
            }
          }
        }
        FUN_0054c880(uVar11);
        local_4 = local_4 & 0xffffff00;
        FUN_00649720();
      }
      if (bVar5) {
        FUN_00649600(s_SenseController__UpdateBestGuess_00744908);
        uVar1 = *(uint *)(param_1 + 8);
        uVar2 = *(uint *)(param_1 + 0xc);
        local_4._0_1_ = 3;
        FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
        iVar13 = (int)*(short *)(&DAT_0076cd88 + ((uVar1 ^ uVar2) * -0xfb & 0xfff) * 2);
        for (iVar6 = iVar13; iVar6 != -1; iVar6 = (int)*(short *)(DAT_0076f648 + iVar6 * 0x14 + 0xe)
            ) {
        }
        if (iVar13 == -1) {
LAB_005ab1ca:
          local_4 = CONCAT31(local_4._1_3_,3);
          FUN_00649720();
        }
        else {
          do {
            piVar7 = (int *)(DAT_0076f648 + iVar13 * 0x14);
            iVar6 = *piVar7;
            if (((iVar6 != 0) && (*(uint *)(iVar6 + 8) == uVar1)) &&
               (*(uint *)(iVar6 + 0xc) == uVar2)) {
              if (iVar13 == -1) goto LAB_005ab1ca;
              uVar1 = *(uint *)(DAT_0076f648 + iVar13 * 0x14);
              local_4 = CONCAT31(local_4._1_3_,3);
              piVar7 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
              FUN_00649720();
              if (piVar7 != (int *)0x0) goto LAB_005ab2e5;
              goto LAB_005ab206;
            }
            iVar13 = (int)*(short *)((int)piVar7 + 0xe);
          } while (iVar13 != -1);
          local_4 = CONCAT31(local_4._1_3_,3);
          FUN_00649720();
        }
LAB_005ab206:
        lVar15 = FUN_0054bad0(0x2f,0,0);
        *(longlong *)(param_1 + 8) = lVar15;
        FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
        iVar13 = (int)*(short *)(&DAT_0076cd88 +
                                (((uint)lVar15 ^ (uint)((ulonglong)lVar15 >> 0x20)) * -0xfb & 0xfff)
                                * 2);
        for (iVar6 = iVar13; iVar6 != -1; iVar6 = (int)*(short *)(DAT_0076f648 + iVar6 * 0x14 + 0xe)
            ) {
        }
        if (iVar13 == -1) {
LAB_005ab2ad:
          local_4 = CONCAT31(local_4._1_3_,3);
          FUN_00649720();
        }
        else {
          do {
            piVar7 = (int *)(DAT_0076f648 + iVar13 * 0x14);
            iVar6 = *piVar7;
            if ((iVar6 != 0) && (lVar15 == *(longlong *)(iVar6 + 8))) {
              if (iVar13 == -1) goto LAB_005ab2ad;
              uVar1 = *(uint *)(DAT_0076f648 + iVar13 * 0x14);
              local_4 = CONCAT31(local_4._1_3_,3);
              piVar7 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
              FUN_00649720();
              if (piVar7 != (int *)0x0) {
LAB_005ab2e5:
                (**(code **)(*piVar7 + 0x14))(&uStack_18,0);
                *(undefined4 *)(param_1 + 0x10) = 0;
              }
              goto LAB_005ab2f8;
            }
            iVar13 = (int)*(short *)((int)piVar7 + 0xe);
          } while (iVar13 != -1);
          local_4 = CONCAT31(local_4._1_3_,3);
          FUN_00649720();
        }
LAB_005ab2f8:
        local_4 = local_4 & 0xffffff00;
        FUN_00649720();
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

