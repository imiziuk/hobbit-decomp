
/* WARNING: Removing unreachable block (ram,0x0058f3a6) */
/* WARNING: Removing unreachable block (ram,0x0058f3a8) */
/* WARNING: Removing unreachable block (ram,0x0058f761) */
/* WARNING: Removing unreachable block (ram,0x0058f770) */
/* WARNING: Removing unreachable block (ram,0x0058f77e) */
/* WARNING: Removing unreachable block (ram,0x0058f79c) */
/* WARNING: Removing unreachable block (ram,0x0058f7d2) */
/* WARNING: Removing unreachable block (ram,0x0058f7a4) */
/* WARNING: Removing unreachable block (ram,0x0058f7b3) */
/* WARNING: Removing unreachable block (ram,0x0058f7b5) */
/* WARNING: Removing unreachable block (ram,0x0058f7c3) */
/* WARNING: Removing unreachable block (ram,0x0058f7c8) */
/* WARNING: Removing unreachable block (ram,0x0058f7cd) */
/* WARNING: Removing unreachable block (ram,0x0058f7bc) */
/* WARNING: Removing unreachable block (ram,0x0058f7d5) */
/* WARNING: Removing unreachable block (ram,0x0058f7ea) */
/* WARNING: Removing unreachable block (ram,0x0058f7f0) */
/* WARNING: Removing unreachable block (ram,0x0058f803) */
/* WARNING: Removing unreachable block (ram,0x0058f820) */
/* WARNING: Removing unreachable block (ram,0x0058f84c) */
/* WARNING: Removing unreachable block (ram,0x0058f867) */
/* WARNING: Removing unreachable block (ram,0x0058f87a) */
/* WARNING: Removing unreachable block (ram,0x0058f8b2) */
/* WARNING: Removing unreachable block (ram,0x0058f882) */
/* WARNING: Removing unreachable block (ram,0x0058f893) */
/* WARNING: Removing unreachable block (ram,0x0058f895) */
/* WARNING: Removing unreachable block (ram,0x0058f8a3) */
/* WARNING: Removing unreachable block (ram,0x0058f8a8) */
/* WARNING: Removing unreachable block (ram,0x0058f8ad) */
/* WARNING: Removing unreachable block (ram,0x0058f89c) */
/* WARNING: Removing unreachable block (ram,0x0058f8b5) */
/* WARNING: Removing unreachable block (ram,0x0058f8cd) */
/* WARNING: Removing unreachable block (ram,0x0058f8d0) */
/* WARNING: Removing unreachable block (ram,0x0058f8e5) */
/* WARNING: Removing unreachable block (ram,0x0058f909) */
/* WARNING: Removing unreachable block (ram,0x0058f920) */
/* WARNING: Removing unreachable block (ram,0x0058f93f) */
/* WARNING: Removing unreachable block (ram,0x0058fd09) */
/* WARNING: Removing unreachable block (ram,0x0058f9c8) */
/* WARNING: Removing unreachable block (ram,0x0058fa0d) */
/* WARNING: Removing unreachable block (ram,0x0058fad4) */
/* WARNING: Removing unreachable block (ram,0x0058fab8) */
/* WARNING: Removing unreachable block (ram,0x0058faa6) */
/* WARNING: Removing unreachable block (ram,0x0058fa84) */
/* WARNING: Removing unreachable block (ram,0x0058fa6f) */
/* WARNING: Removing unreachable block (ram,0x0058fa5a) */
/* WARNING: Removing unreachable block (ram,0x0058fa45) */
/* WARNING: Removing unreachable block (ram,0x0058fa30) */
/* WARNING: Removing unreachable block (ram,0x0058fa1b) */
/* WARNING: Removing unreachable block (ram,0x0058fb0a) */
/* WARNING: Recovered jumptable eliminated as dead code */

void __fastcall FUN_0058f280(int param_1)

{
  byte bVar1;
  ushort uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  ushort *puVar12;
  float10 fVar13;
  int local_40c;
  int iStack_3ac;
  int iStack_3a4;
  int aiStack_374 [32];
  undefined4 auStack_2f4 [183];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006dcdda;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_006501d0();
  local_c = 0;
  DAT_0075d338 = 1;
  FUN_00650210();
  FUN_00650010();
  FUN_0064cbe0();
  FUN_0064cc00();
  FUN_005c6fd0();
  FUN_005c5ec0();
  local_c._0_1_ = 1;
  pvVar3 = operator_new(0x10800);
  local_c._0_1_ = 2;
  if (pvVar3 != (void *)0x0) {
    local_40c = 0x100;
    do {
      FUN_00437830();
      local_40c = local_40c + -1;
    } while (local_40c != 0);
  }
  local_c = CONCAT31(local_c._1_3_,1);
  FUN_006bf840();
  *(undefined4 *)(param_1 + 0xb8) = 1;
  if (*(int *)(param_1 + 0x94) == 0) {
    FUN_006bf840();
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0xb0) == 0) {
    FUN_006bf840();
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  *(undefined4 *)(param_1 + 0xa4) = 0;
  FUN_0063c930();
  FUN_0063c970();
  FUN_0058eef0();
  FUN_0058f220();
  FUN_005c7850();
  FUN_0055bb80();
  aiStack_374[1] = 0;
  piVar10 = aiStack_374 + 2;
  for (iVar8 = 0x1f; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar10 = 0;
    piVar10 = piVar10 + 1;
  }
  auStack_2f4[1] = 0;
  puVar11 = auStack_2f4 + 2;
  for (iVar8 = 0x1f; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  local_40c = 0;
  if (0 < DAT_0076f660) {
    do {
      piVar10 = *(int **)(DAT_0076f648 + local_40c * 0x14);
      if (((piVar10 != (int *)0x0) && ((*(byte *)((int)piVar10 + 0x7f) & 1) != 0)) &&
         (-1 < piVar10[4])) {
        if ((*(byte *)((int)piVar10 + 0x7f) & 0x20) == 0) {
          iVar8 = piVar10[3];
          iVar6 = piVar10[2];
          iVar4 = FUN_0041bcc0();
          if ((iVar6 != *(int *)(iVar4 + 8)) || (iVar8 != *(int *)(iVar4 + 0xc))) {
            iVar8 = piVar10[3];
            iVar6 = piVar10[2];
            iVar4 = *(int *)(param_1 + 0x88);
            if (*(int *)(param_1 + 0x90) < iVar4 + 1) {
              if (*(int *)(param_1 + 0x98) == 0) {
                iVar5 = *(int *)(param_1 + 0x90) / 2;
                iVar9 = 1;
                if (0 < iVar5) {
                  iVar9 = iVar5;
                }
                if (iVar9 + iVar4 < 1) {
                  iVar5 = 1;
                }
                else {
                  if (iVar5 < 1) {
                    iVar5 = 1;
                  }
                  iVar5 = iVar5 + iVar4;
                }
              }
              else {
                iVar5 = *(int *)(param_1 + 0x98) + iVar4;
              }
              pvVar3 = operator_new(iVar5 * 8);
              iVar4 = 0;
              if (0 < *(int *)(param_1 + 0x88)) {
                do {
                  iVar9 = *(int *)(param_1 + 0x8c);
                  *(undefined4 *)((int)pvVar3 + iVar4 * 8) = *(undefined4 *)(iVar9 + iVar4 * 8);
                  *(undefined4 *)((int)pvVar3 + iVar4 * 8 + 4) =
                       *(undefined4 *)(iVar9 + 4 + iVar4 * 8);
                  iVar4 = iVar4 + 1;
                } while (iVar4 < *(int *)(param_1 + 0x88));
              }
              FUN_006bf840();
              *(void **)(param_1 + 0x8c) = pvVar3;
              *(int *)(param_1 + 0x90) = iVar5;
            }
            iVar4 = *(int *)(param_1 + 0x88);
            iVar5 = *(int *)(param_1 + 0x8c);
            *(int *)(iVar5 + iVar4 * 8) = iVar6;
            *(int *)(iVar5 + 4 + iVar4 * 8) = iVar8;
            *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
            bVar1 = *(byte *)(piVar10 + 0x1f);
            iVar8 = *(int *)(param_1 + 0xa4);
            if (*(int *)(param_1 + 0xac) < iVar8 + 1) {
              if (*(int *)(param_1 + 0xb4) == 0) {
                iVar6 = *(int *)(param_1 + 0xac) / 2;
                iVar4 = 1;
                if (0 < iVar6) {
                  iVar4 = iVar6;
                }
                if (iVar4 + iVar8 < 1) {
                  iVar6 = 1;
                }
                else {
                  if (iVar6 < 1) {
                    iVar6 = 1;
                  }
                  iVar6 = iVar6 + iVar8;
                }
              }
              else {
                iVar6 = *(int *)(param_1 + 0xb4) + iVar8;
              }
              pvVar3 = operator_new(iVar6 * 4);
              iVar8 = 0;
              if (0 < *(int *)(param_1 + 0xa4)) {
                do {
                  *(undefined4 *)((int)pvVar3 + iVar8 * 4) =
                       *(undefined4 *)(*(int *)(param_1 + 0xa8) + iVar8 * 4);
                  iVar8 = iVar8 + 1;
                } while (iVar8 < *(int *)(param_1 + 0xa4));
              }
              FUN_006bf840();
              *(void **)(param_1 + 0xa8) = pvVar3;
              *(int *)(param_1 + 0xac) = iVar6;
            }
            *(uint *)(*(int *)(param_1 + 0xa8) + *(int *)(param_1 + 0xa4) * 4) = (uint)bVar1;
            *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
          }
        }
        FUN_00590c80();
        (**(code **)(*piVar10 + 0xb0))();
        local_c._0_1_ = 3;
        FUN_006a1cb0();
        local_c = CONCAT31(local_c._1_3_,4);
        iVar8 = FUN_0058ef40();
        if (iVar8 == -1) {
          FUN_006501d0();
          FUN_006501e0();
          FUN_0058eff0();
        }
        FUN_0063cb20(piVar10[2],piVar10[3]);
        FUN_0063cc80();
        FUN_0063cc80();
        local_c = CONCAT31(local_c._1_3_,1);
        if (iStack_3ac != 2) {
          FUN_006bf840();
        }
        FUN_006bf840();
      }
      local_40c = local_40c + 1;
    } while (local_40c < DAT_0076f660);
  }
  FUN_0063cb20(0,0);
  FUN_00552e30();
  (**(code **)(*DAT_0075fc00 + 0x1c))();
  FUN_0064cc50();
  FUN_0064e870(7,s__________________________________0071ec68);
  iVar8 = FUN_00650210();
  FUN_0064e870(7,s_____MEMMGR_USAGE____d_bytes_007423d0,iStack_3a4 - iVar8);
  FUN_0064e870(7,s_____nObjectsSaved____d_007423b8,0x20);
  uVar7 = FUN_0063ca80();
  FUN_0064e870(7,s_____SAVE_GAME_USES___d_bytes_00742398,uVar7);
  fVar13 = (float10)FUN_0064cd30();
  FUN_0064e870(7,s_____SAVE_GAME_TOOK___1_3fms_00742378,(double)fVar13);
  FUN_0064e870(7,s_____SAVED_GUID_BYTES___d__d_00742358,*(int *)(param_1 + 0x88),
               *(int *)(param_1 + 0x88) * 8);
  FUN_0064e870(7,s_____SAVED_TYPE_BYTES___d__d_00742338,*(int *)(param_1 + 0xa4),
               *(int *)(param_1 + 0xa4) * 4);
  FUN_0064e870(7,s_____PROPNAMES_BYTES___d__d_00742318,*(undefined4 *)(param_1 + 0xc),
               *(undefined4 *)(param_1 + 4));
  iVar6 = *(int *)(param_1 + 0x50);
  iVar8 = 0;
  iVar4 = 0;
  if (0 < iVar6) {
    puVar12 = (ushort *)(*(int *)(param_1 + 0x54) + 2);
    do {
      uVar2 = *puVar12;
      iVar4 = iVar4 + 1;
      puVar12 = puVar12 + 2;
      iVar8 = iVar8 + 4 + (uint)uVar2 * 4;
    } while (iVar4 < iVar6);
  }
  FUN_0064e870(7,s_____TEMPLATES_BYTES___d__d_007422f8,iVar6,iVar8);
  iVar8 = 0;
  do {
    iVar6 = aiStack_374[iVar8];
    if (0 < iVar6) {
      FUN_0064e7d0(s__2d___d__d_007422ec,iVar8,(int)(iVar6 + (iVar6 >> 0x1f & 7U)) >> 3,
                   auStack_2f4[iVar8]);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x20);
  FUN_0064e870(7,s__________________________________0071ec68);
  FUN_00650010(s______SAVESTATE___END______007422d0);
  FUN_005c5ed0();
  *(undefined4 *)(param_1 + 0xb8) = 0;
  DAT_0075d338 = 0;
  FUN_006bf840();
  puStack_10 = (undefined1 *)0xffffffff;
  FUN_006501e0();
  ExceptionList = pvStack_18;
  return;
}

