
void __fastcall FUN_00409250(int param_1)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iStack_a8;
  undefined1 local_88 [132];
  
  FUN_0053f530(0x4b000);
  FUN_00647d10(param_1 + 4,s_Overhill_0071dc1c);
  uVar4 = FUN_005496c0(s_SFX_Eels_audiopkg_0071ce14,s_Audio_0071ce88);
  FUN_00658080(uVar4);
  uVar4 = FUN_005496c0(s_SFX_Pony_audiopkg_0071d738,s_Audio_0071ce88);
  FUN_00658080(uVar4);
  uVar4 = FUN_005496c0(s_SFX_Wolves_audiopkg_0071d724,s_Audio_0071ce88);
  FUN_00658080(uVar4);
  uVar4 = FUN_005496c0(s_SFX_Dwarves_audiopkg_0071dc04,s_Audio_0071ce88);
  FUN_00658080(uVar4);
  uVar4 = FUN_005496c0(s_SFX_GUI_audiopkg_0071cde8,s_Audio_0071ce88);
  FUN_00658080(uVar4);
  uVar4 = FUN_005496c0(s_SFX_Player_audiopkg_0071cdd4,s_Audio_0071ce88);
  FUN_00658080(uVar4);
  uVar4 = FUN_005496c0(s_SFX_Weapons_audiopkg_0071cdbc,s_Audio_0071ce88);
  FUN_00658080(uVar4);
  uVar4 = FUN_005496c0(s_SFX_AMB_Weather_audiopkg_0071d578,s_Audio_0071ce88);
  FUN_00658080(uVar4);
  uVar4 = FUN_005496c0(s_SFX_Goblins_audiopkg_0071cdfc,s_Audio_0071ce88);
  FUN_00658080(uVar4);
  uVar4 = FUN_005496c0(s_SFX_BridgeTroll_audiopkg_0071dbe8,s_Audio_0071ce88);
  FUN_00658080(uVar4);
  uVar4 = FUN_005496c0(s_SFX_Leapers_audiopkg_0071d6ac,s_Audio_0071ce88);
  FUN_00658080(uVar4);
  uVar4 = FUN_005496c0(s_SFX_Chapter04_audiopkg_0071dbd0,s_Audio_0071ce88);
  FUN_00658080(uVar4);
  FUN_00419620(local_88,s_DX_CH04_PC_audiopkg_0071dbbc);
  FUN_00658080(local_88);
  FUN_0054e6d0(s_CH_04_Overhill_SubTitles_bin_0071db9c);
  FUN_004fb060(9);
  uVar4 = FUN_0054c5c0(0x35,s_C__projects_meridian_Support_Lev_0071db5c,0x56);
  sVar3 = FUN_0054c7c0();
  do {
    if (sVar3 < 0) {
      FUN_0054c880(uVar4);
      uVar4 = FUN_0054c5c0(0x2f,s_C__projects_meridian_Support_Lev_0071db5c,0x76);
      sVar3 = FUN_0054c7c0();
      while (-1 < sVar3) {
        if (sVar3 == -1) {
          piVar11 = (int *)0x0;
        }
        else {
          uVar2 = *(uint *)(DAT_0076f648 + sVar3 * 0x14);
          if (uVar2 == 0) {
            piVar11 = (int *)0x0;
          }
          else {
            piVar11 = (int *)(-(uint)((*(byte *)(uVar2 + 0x7f) & 0x10) != 0) & uVar2);
          }
        }
        uVar5 = (**(code **)(*piVar11 + 0x4c))(s_RockFall_Target_0071db1c,0xf);
        iVar6 = FUN_00647e80(uVar5);
        if (iVar6 == 0) {
          iVar1 = piVar11[2];
          iVar9 = piVar11[3];
          iVar6 = *(int *)(param_1 + 0x164);
          if (*(int *)(param_1 + 0x16c) < iVar6 + 1) {
            if (*(int *)(param_1 + 0x174) == 0) {
              iVar10 = *(int *)(param_1 + 0x16c) / 2;
              iVar7 = 1;
              if (0 < iVar10) {
                iVar7 = iVar10;
              }
              if (iVar7 + iVar6 < 1) {
                iVar6 = 1;
              }
              else {
                if (iVar10 < 1) {
                  iVar10 = 1;
                }
                iVar6 = iVar6 + iVar10;
              }
            }
            else {
              iVar6 = *(int *)(param_1 + 0x174) + iVar6;
            }
            pvVar8 = operator_new(iVar6 * 8);
            iVar7 = 0;
            if (0 < *(int *)(param_1 + 0x164)) {
              do {
                iVar10 = *(int *)(param_1 + 0x168);
                *(undefined4 *)((int)pvVar8 + iVar7 * 8) = *(undefined4 *)(iVar10 + iVar7 * 8);
                *(undefined4 *)((int)pvVar8 + iVar7 * 8 + 4) =
                     *(undefined4 *)(iVar10 + 4 + iVar7 * 8);
                iVar7 = iVar7 + 1;
              } while (iVar7 < *(int *)(param_1 + 0x164));
            }
            FUN_006bf840(*(undefined4 *)(param_1 + 0x168));
            *(void **)(param_1 + 0x168) = pvVar8;
            *(int *)(param_1 + 0x16c) = iVar6;
          }
          iVar6 = *(int *)(param_1 + 0x164);
          iVar7 = *(int *)(param_1 + 0x168);
          *(int *)(iVar7 + iVar6 * 8) = iVar1;
          *(int *)(iVar7 + 4 + iVar6 * 8) = iVar9;
          *(int *)(param_1 + 0x164) = *(int *)(param_1 + 0x164) + 1;
        }
        sVar3 = FUN_0054c7c0();
      }
      FUN_0054c880(uVar4);
      *(undefined4 *)(param_1 + 0x104) = 0;
      FUN_00551280(1,0x3dcccccd);
      FUN_00551310(1,0x3dcccccd);
      FUN_00548de0(s_TROLLLOCK_XSC_0071db0c);
      FUN_00548de0(s_TRIGGER_AREA07_TECHPUZZLE_002_XS_0071dae8);
      FUN_00548de0(s_INST_PUZZLE_BIND_RGEOM_0071dad0);
      FUN_00548de0(s_TRIGGER_AREA07_TECHPUZZLE_001_XS_0071daac);
      FUN_00548de0(s_TRIGGER_AREA06_TECHPUZZLE_003_XS_0071da88);
      FUN_00548de0(s__Ambient_WispOuter_xbmp_0071d5a7 + 1);
      FUN_00548de0(s_Props_antidote_potion_rgeom_0071cccc);
      FUN_00548de0(s_Props_boulder_01_rgeom_0071da70);
      return;
    }
    if (sVar3 == -1) {
      piVar11 = (int *)0x0;
    }
    else {
      uVar2 = *(uint *)(DAT_0076f648 + sVar3 * 0x14);
      if (uVar2 == 0) {
        piVar11 = (int *)0x0;
      }
      else {
        piVar11 = (int *)(-(uint)((*(byte *)(uVar2 + 0x7f) & 0x10) != 0) & uVar2);
      }
    }
    uVar5 = (**(code **)(*piVar11 + 0x4c))(s_RockFall_Stop_0071db4c,0xd);
    iVar6 = FUN_00647e80(uVar5);
    if (iVar6 == 0) {
      iVar6 = piVar11[2];
      iVar1 = piVar11[3];
      iStack_a8 = *(int *)(param_1 + 0x110);
      if (*(int *)(param_1 + 0x118) < iStack_a8 + 1) {
        if (*(int *)(param_1 + 0x120) == 0) {
          iVar7 = *(int *)(param_1 + 0x118) / 2;
          iVar9 = 1;
          if (0 < iVar7) {
            iVar9 = iVar7;
          }
          if (iVar9 + iStack_a8 < 1) {
            iStack_a8 = 1;
          }
          else {
            if (iVar7 < 1) {
              iVar7 = 1;
            }
            iStack_a8 = iStack_a8 + iVar7;
          }
        }
        else {
          iStack_a8 = *(int *)(param_1 + 0x120) + iStack_a8;
        }
        pvVar8 = operator_new(iStack_a8 * 8);
        iVar9 = 0;
        if (0 < *(int *)(param_1 + 0x110)) {
          do {
            iVar7 = *(int *)(param_1 + 0x114);
            *(undefined4 *)((int)pvVar8 + iVar9 * 8) = *(undefined4 *)(iVar7 + iVar9 * 8);
            *(undefined4 *)((int)pvVar8 + iVar9 * 8 + 4) = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
            iVar9 = iVar9 + 1;
          } while (iVar9 < *(int *)(param_1 + 0x110));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x114));
        *(void **)(param_1 + 0x114) = pvVar8;
        *(int *)(param_1 + 0x118) = iStack_a8;
      }
      iVar9 = *(int *)(param_1 + 0x110);
      iVar7 = *(int *)(param_1 + 0x114);
      *(int *)(iVar7 + iVar9 * 8) = iVar6;
      *(int *)(iVar7 + 4 + iVar9 * 8) = iVar1;
      *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
LAB_004097af:
      FUN_004e1a10(1);
      FUN_004de5f0(0x40);
    }
    else {
      uVar5 = (**(code **)(*piVar11 + 0x4c))(s_RockFall_Light_0071db3c,0xe);
      iVar6 = FUN_00647e80(uVar5);
      if (iVar6 == 0) {
        iVar6 = piVar11[3];
        iVar1 = piVar11[2];
        iStack_a8 = *(int *)(param_1 + 300);
        if (*(int *)(param_1 + 0x134) < iStack_a8 + 1) {
          if (*(int *)(param_1 + 0x13c) == 0) {
            iVar7 = *(int *)(param_1 + 0x134) / 2;
            iVar9 = 1;
            if (0 < iVar7) {
              iVar9 = iVar7;
            }
            if (iVar9 + iStack_a8 < 1) {
              iStack_a8 = 1;
            }
            else {
              if (iVar7 < 1) {
                iVar7 = 1;
              }
              iStack_a8 = iStack_a8 + iVar7;
            }
          }
          else {
            iStack_a8 = *(int *)(param_1 + 0x13c) + iStack_a8;
          }
          pvVar8 = operator_new(iStack_a8 * 8);
          iVar9 = 0;
          if (0 < *(int *)(param_1 + 300)) {
            do {
              iVar7 = *(int *)(param_1 + 0x130);
              *(undefined4 *)((int)pvVar8 + iVar9 * 8) = *(undefined4 *)(iVar7 + iVar9 * 8);
              *(undefined4 *)((int)pvVar8 + iVar9 * 8 + 4) = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
              iVar9 = iVar9 + 1;
            } while (iVar9 < *(int *)(param_1 + 300));
          }
          FUN_006bf840(*(undefined4 *)(param_1 + 0x130));
          *(void **)(param_1 + 0x130) = pvVar8;
          *(int *)(param_1 + 0x134) = iStack_a8;
        }
        iVar9 = *(int *)(param_1 + 300);
        iVar7 = *(int *)(param_1 + 0x130);
        *(int *)(iVar7 + iVar9 * 8) = iVar1;
        *(int *)(iVar7 + 4 + iVar9 * 8) = iVar6;
        *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
        goto LAB_004097af;
      }
      uVar5 = (**(code **)(*piVar11 + 0x4c))(s_RockFall_Medium_0071db2c,0xf);
      iVar6 = FUN_00647e80(uVar5);
      if (iVar6 == 0) {
        iVar6 = piVar11[3];
        iVar1 = piVar11[2];
        iStack_a8 = *(int *)(param_1 + 0x148);
        if (*(int *)(param_1 + 0x150) < iStack_a8 + 1) {
          if (*(int *)(param_1 + 0x158) == 0) {
            iVar7 = *(int *)(param_1 + 0x150) / 2;
            iVar9 = 1;
            if (0 < iVar7) {
              iVar9 = iVar7;
            }
            if (iVar9 + iStack_a8 < 1) {
              iStack_a8 = 1;
            }
            else {
              if (iVar7 < 1) {
                iVar7 = 1;
              }
              iStack_a8 = iStack_a8 + iVar7;
            }
          }
          else {
            iStack_a8 = *(int *)(param_1 + 0x158) + iStack_a8;
          }
          pvVar8 = operator_new(iStack_a8 * 8);
          iVar9 = 0;
          if (0 < *(int *)(param_1 + 0x148)) {
            do {
              iVar7 = *(int *)(param_1 + 0x14c);
              *(undefined4 *)((int)pvVar8 + iVar9 * 8) = *(undefined4 *)(iVar7 + iVar9 * 8);
              *(undefined4 *)((int)pvVar8 + iVar9 * 8 + 4) = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
              iVar9 = iVar9 + 1;
            } while (iVar9 < *(int *)(param_1 + 0x148));
          }
          FUN_006bf840(*(undefined4 *)(param_1 + 0x14c));
          *(void **)(param_1 + 0x14c) = pvVar8;
          *(int *)(param_1 + 0x150) = iStack_a8;
        }
        iVar9 = *(int *)(param_1 + 0x148);
        iVar7 = *(int *)(param_1 + 0x14c);
        *(int *)(iVar7 + iVar9 * 8) = iVar1;
        *(int *)(iVar7 + 4 + iVar9 * 8) = iVar6;
        *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
        goto LAB_004097af;
      }
    }
    sVar3 = FUN_0054c7c0();
  } while( true );
}

