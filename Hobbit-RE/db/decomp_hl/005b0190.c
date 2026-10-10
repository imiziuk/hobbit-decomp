
void __thiscall FUN_005b0190(int param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  uint *puVar13;
  int **ppiVar14;
  int iStack_114;
  int *piStack_110;
  int *piStack_10c;
  int *piStack_108;
  int *piStack_104;
  uint uStack_100;
  int iStack_fc;
  int *piStack_f8;
  int iStack_f4;
  int local_f0;
  void *pvStack_ec;
  undefined1 auStack_e8 [4];
  undefined1 auStack_e4 [4];
  undefined1 auStack_e0 [4];
  undefined1 auStack_dc [4];
  undefined1 auStack_d8 [4];
  undefined1 auStack_d4 [4];
  undefined1 auStack_d0 [4];
  undefined1 uStack_cc;
  undefined4 uStack_cb;
  undefined1 local_8c [64];
  undefined1 auStack_4c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006de722;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00640480(s_TriggeredConversationName_00745180,local_8c);
  FUN_0064a2e0(local_8c);
  FUN_006405e0(s_TriggeredCinema_00745170,param_1 + 0x168);
  FUN_006405e0(s_AEelColony_00724b67 + 1,param_1 + 0x98);
  FUN_00640450(s_BlockPercent_00745160,*(undefined4 *)(param_1 + 0x214));
  FUN_00640450(s_EvadePercent_00745150,*(int *)(param_1 + 0x214) + 4);
  FUN_00640450(s_ShovePercent_00745140,*(int *)(param_1 + 0x214) + 8);
  FUN_00640450(s_StrafePercent_00745130,*(int *)(param_1 + 0x214) + 0xc);
  FUN_006405b0(s_bCanBlockStones_00745120,*(int *)(param_1 + 0x214) + 0x18);
  FUN_00640420(s_BlockDamageModifier_0074510c,*(int *)(param_1 + 0x214) + 0x1c);
  FUN_00640420(s_ShieldBlockDamageModifier_007450f0,*(int *)(param_1 + 0x214) + 0x20);
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 0xa8)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0xac) + iVar11 * 4) + 0x78))(param_2);
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(param_1 + 0xa8));
  }
  local_f0 = 0;
  FUN_00640450(s_GoalListCount_007450e0,&local_f0);
  iVar11 = local_f0;
  if (local_f0 != *(int *)(param_1 + 0xe8)) {
    pvVar2 = operator_new(local_f0 * 4);
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0xe0)) {
      do {
        *(undefined4 *)((int)pvVar2 + iVar3 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0xe4) + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0xe0));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0xe4));
    *(void **)(param_1 + 0xe4) = pvVar2;
    *(int *)(param_1 + 0xe8) = iVar11;
  }
  iVar11 = 0;
  uStack_100 = 0;
  if (0 < local_f0) {
    do {
      piStack_10c = (int *)0x0;
      FUN_0063ff20();
      FUN_0063ffc0();
      puVar4 = (undefined4 *)operator_new(0x68);
      piStack_108 = puVar4;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4[3] = 0;
        puVar4[2] = 0;
        puVar4[4] = 0;
        puVar4[6] = 0;
        puVar4[5] = 0;
        *puVar4 = 0;
        puVar4[1] = 0;
        uStack_4 = 1;
        FUN_00647d10(puVar4 + 7,s_Enter_List_Name_007450d0);
        puVar4[0x18] = 0;
        puVar4[0x19] = 0;
        puVar4[0x17] = puVar4[0x17] & 0xfffffffa | 10;
      }
      uStack_4 = 0xffffffff;
      if (*(int *)(param_1 + 0xe8) < *(int *)(param_1 + 0xe0) + 1) {
        if (*(int *)(param_1 + 0xf0) == 0) {
          iStack_114 = *(int *)(param_1 + 0xe8) / 2;
          iVar3 = 1;
          if (0 < iStack_114) {
            iVar3 = iStack_114;
          }
          if (iVar3 + *(int *)(param_1 + 0xe0) < 1) {
            iStack_114 = 1;
          }
          else {
            if (iStack_114 < 1) {
              iStack_114 = 1;
            }
            iStack_114 = iStack_114 + *(int *)(param_1 + 0xe0);
          }
        }
        else {
          iStack_114 = *(int *)(param_1 + 0xf0) + *(int *)(param_1 + 0xe0);
        }
        piStack_108 = (int *)operator_new(iStack_114 * 4);
        iVar3 = 0;
        if (0 < *(int *)(param_1 + 0xe0)) {
          do {
            piStack_108[iVar3] = *(undefined4 *)(*(int *)(param_1 + 0xe4) + iVar3 * 4);
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(param_1 + 0xe0));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0xe4));
        *(int **)(param_1 + 0xe4) = piStack_108;
        *(int *)(param_1 + 0xe8) = iStack_114;
      }
      *(undefined4 **)(*(int *)(param_1 + 0xe4) + *(int *)(param_1 + 0xe0) * 4) = puVar4;
      *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
      FUN_00649920(auStack_dc,s_GoalListName_d_007450c0,iVar11);
      puVar12 = auStack_4c;
      uStack_4 = 2;
      uVar5 = FUN_00649940(puVar12);
      FUN_00640480(uVar5,puVar12);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      iVar3 = iVar11 * 4;
      FUN_00647d10(*(int *)(iVar3 + *(int *)(param_1 + 0xe4)) + 0x1c,auStack_4c);
      FUN_00649920(auStack_d8,s_GoalListLooping_d_007450ac,iVar11);
      puVar13 = &uStack_100;
      uStack_4 = 3;
      uVar5 = FUN_00649940(puVar13);
      FUN_006405b0(uVar5,puVar13);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      iVar10 = *(int *)(iVar3 + *(int *)(param_1 + 0xe4));
      uVar1 = *(uint *)(iVar10 + 0x5c);
      *(uint *)(iVar10 + 0x5c) = (uVar1 ^ uStack_100) & 1 ^ uVar1;
      FUN_00649920(auStack_d0,s_GoalListLoopStart_d_00745098,iVar11);
      iVar10 = *(int *)(iVar3 + *(int *)(param_1 + 0xe4)) + 0x60;
      uStack_4 = 4;
      uVar5 = FUN_00649940(iVar10);
      FUN_00640450(uVar5,iVar10);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(auStack_d4,s_GoalListCollision_d_00745084,iVar11);
      puVar13 = &uStack_100;
      uStack_4 = 5;
      uVar5 = FUN_00649940(puVar13);
      FUN_006405b0(uVar5,puVar13);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      iVar10 = *(int *)(iVar3 + *(int *)(param_1 + 0xe4));
      uVar1 = *(uint *)(iVar10 + 0x5c);
      *(uint *)(iVar10 + 0x5c) = (uStack_100 * 2 ^ uVar1) & 2 ^ uVar1;
      FUN_00649920(auStack_e8,s_GoalListMustComplete_d_0074506c,iVar11);
      puVar13 = &uStack_100;
      uStack_4 = 6;
      uVar5 = FUN_00649940(puVar13);
      FUN_006405b0(uVar5,puVar13);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      iVar10 = *(int *)(iVar3 + *(int *)(param_1 + 0xe4));
      uVar1 = *(uint *)(iVar10 + 0x5c);
      *(uint *)(iVar10 + 0x5c) = (uStack_100 << 2 ^ uVar1) & 4 ^ uVar1;
      FUN_00649920(&piStack_f8,s_GoalListRestartFromBeginning_d_0074504c,iVar11);
      puVar13 = &uStack_100;
      uStack_4 = 7;
      uVar5 = FUN_00649940(puVar13);
      FUN_006405b0(uVar5,puVar13);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      iVar10 = *(int *)(iVar3 + *(int *)(param_1 + 0xe4));
      uVar1 = *(uint *)(iVar10 + 0x5c);
      *(uint *)(iVar10 + 0x5c) = (uStack_100 << 3 ^ uVar1) & 8 ^ uVar1;
      FUN_00649920(auStack_e0,s_GoalListGoalCount_d_00745038,iVar11);
      ppiVar14 = &piStack_10c;
      uStack_4 = 8;
      uVar5 = FUN_00649940(ppiVar14);
      FUN_00640450(uVar5,ppiVar14);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      iVar10 = *(int *)(iVar3 + *(int *)(param_1 + 0xe4));
      piStack_108 = piStack_10c;
      if (piStack_10c != *(int **)(iVar10 + 0x10)) {
        piStack_110 = (int *)operator_new((int)piStack_10c << 2);
        iVar6 = 0;
        if (0 < *(int *)(iVar10 + 8)) {
          do {
            piStack_110[iVar6] = *(int *)(*(int *)(iVar10 + 0xc) + iVar6 * 4);
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(iVar10 + 8));
        }
        FUN_006bf840(*(undefined4 *)(iVar10 + 0xc));
        *(int **)(iVar10 + 0xc) = piStack_110;
        *(int **)(iVar10 + 0x10) = piStack_108;
      }
      iStack_114 = 0;
      if (0 < (int)piStack_10c) {
        do {
          FUN_0063ff20();
          FUN_0063ffc0();
          piStack_108 = (int *)operator_new(8);
          if (piStack_108 == (undefined4 *)0x0) {
            piStack_108 = (undefined4 *)0x0;
          }
          else {
            piStack_108[1] = 0;
            *piStack_108 = 4;
          }
          iStack_fc = *(int *)(iVar3 + *(int *)(param_1 + 0xe4));
          piStack_110 = *(int **)(iStack_fc + 8);
          if (*(int *)(iStack_fc + 0x10) < (int)piStack_110 + 1) {
            if (*(int *)(iStack_fc + 0x18) == 0) {
              iVar6 = *(int *)(iStack_fc + 0x10) / 2;
              iVar10 = 1;
              if (0 < iVar6) {
                iVar10 = iVar6;
              }
              if (iVar10 + (int)piStack_110 < 1) {
                piStack_110 = (int *)0x1;
              }
              else {
                if (iVar6 < 1) {
                  iVar6 = 1;
                }
                piStack_110 = (int *)(iVar6 + (int)piStack_110);
              }
            }
            else {
              piStack_110 = (int *)(*(int *)(iStack_fc + 0x18) + (int)piStack_110);
            }
            pvStack_ec = operator_new((int)piStack_110 * 4);
            iVar10 = 0;
            if (0 < *(int *)(iStack_fc + 8)) {
              do {
                *(undefined4 *)((int)pvStack_ec + iVar10 * 4) =
                     *(undefined4 *)(*(int *)(iStack_fc + 0xc) + iVar10 * 4);
                iVar10 = iVar10 + 1;
              } while (iVar10 < *(int *)(iStack_fc + 8));
            }
            FUN_006bf840(*(undefined4 *)(iStack_fc + 0xc));
            *(void **)(iStack_fc + 0xc) = pvStack_ec;
            *(int **)(iStack_fc + 0x10) = piStack_110;
          }
          *(int **)(*(int *)(iStack_fc + 0xc) + *(int *)(iStack_fc + 8) * 4) = piStack_108;
          *(int *)(iStack_fc + 8) = *(int *)(iStack_fc + 8) + 1;
          FUN_00649920(auStack_e4,s_GoalList_dGoal_d_00745024,iVar11,iStack_114);
          ppiVar14 = &piStack_104;
          uStack_4 = 9;
          uVar5 = FUN_00649940(ppiVar14);
          FUN_00640450(uVar5,ppiVar14);
          uStack_4 = 0xffffffff;
          FUN_00649950();
          piStack_108 = (int *)(*(int *)(*(int *)(*(int *)(param_1 + 0xe4) + iVar3) + 0xc) +
                               iStack_114 * 4);
          uVar5 = FUN_005afb00(piStack_104);
          *(undefined4 *)(*piStack_108 + 4) = uVar5;
          **(undefined4 **)
            (iStack_114 * 4 + *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0xe4)) + 0xc)) =
               piStack_104;
          iVar10 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0xe4) + iVar3) + 0xc) +
                                    iStack_114 * 4) + 4);
          if (iVar10 != 0) {
            *(uint *)(iVar10 + 4) =
                 ((*(int *)(*(int *)(*(int *)(param_1 + 0xe4) + iVar3) + 0x5c) << 0x1e) >> 0x1f ^
                 *(uint *)(iVar10 + 4)) & 1 ^ *(uint *)(iVar10 + 4);
          }
          piVar7 = *(int **)(*(int *)(*(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0xe4)) + 0xc) +
                                     iStack_114 * 4) + 4);
          if (piVar7 != (int *)0x0) {
            (**(code **)(*piVar7 + 0x14))(param_2,iVar11,iStack_114);
          }
          iStack_114 = iStack_114 + 1;
        } while (iStack_114 < (int)piStack_10c);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < local_f0);
  }
  iStack_f4 = 0;
  FUN_00640450(s_GoalListSetCount_00745010,&iStack_f4);
  iVar11 = iStack_f4;
  if (iStack_f4 != *(int *)(param_1 + 0x104)) {
    pvVar2 = operator_new(iStack_f4 * 4);
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0xfc)) {
      do {
        *(undefined4 *)((int)pvVar2 + iVar3 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x100) + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0xfc));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0x100));
    *(void **)(param_1 + 0x100) = pvVar2;
    *(int *)(param_1 + 0x104) = iVar11;
  }
  iStack_114 = 0;
  if (0 < iStack_f4) {
    do {
      uStack_cc = DAT_0075b6e0;
      puVar4 = &uStack_cb;
      for (iVar11 = 0xf; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      *(undefined2 *)puVar4 = 0;
      piStack_110 = (int *)0x0;
      *(undefined1 *)((int)puVar4 + 2) = 0;
      FUN_0063ff20();
      FUN_0063ffc0();
      piVar7 = (int *)operator_new(0x5c);
      piStack_f8 = piVar7;
      if (piVar7 == (int *)0x0) {
        piStack_104 = (int *)0x0;
      }
      else {
        piVar7[3] = 0;
        piVar7[2] = 0;
        piVar7[4] = 0;
        piVar7[6] = 0;
        piVar7[5] = 0;
        *piVar7 = 0;
        piVar7[1] = 0;
        uStack_4 = 0xb;
        FUN_00647d10(piVar7 + 7,s_Enter_List_Name_007450d0);
        piStack_104 = piVar7;
      }
      iVar11 = *(int *)(param_1 + 0xfc);
      uStack_4 = 0xffffffff;
      if (*(int *)(param_1 + 0x104) < iVar11 + 1) {
        if (*(int *)(param_1 + 0x10c) == 0) {
          iVar10 = *(int *)(param_1 + 0x104) / 2;
          iVar3 = 1;
          if (0 < iVar10) {
            iVar3 = iVar10;
          }
          if (iVar3 + iVar11 < 1) {
            piStack_10c = (int *)0x1;
          }
          else {
            if (iVar10 < 1) {
              iVar10 = 1;
            }
            piStack_10c = (int *)(iVar10 + iVar11);
          }
        }
        else {
          piStack_10c = (int *)(*(int *)(param_1 + 0x10c) + iVar11);
        }
        pvVar2 = operator_new((int)piStack_10c * 4);
        iVar11 = 0;
        if (0 < *(int *)(param_1 + 0xfc)) {
          do {
            *(undefined4 *)((int)pvVar2 + iVar11 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x100) + iVar11 * 4);
            iVar11 = iVar11 + 1;
          } while (iVar11 < *(int *)(param_1 + 0xfc));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x100));
        *(void **)(param_1 + 0x100) = pvVar2;
        *(int **)(param_1 + 0x104) = piStack_10c;
      }
      *(int **)(*(int *)(param_1 + 0x100) + *(int *)(param_1 + 0xfc) * 4) = piStack_104;
      *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
      FUN_00649920(auStack_e4,s_GoalListSetName_d_00744ffc,iStack_114);
      puVar12 = &uStack_cc;
      uStack_4 = 0xc;
      uVar5 = FUN_00649940(puVar12);
      FUN_00640480(uVar5,puVar12);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      FUN_00647d10(*(int *)(*(int *)(param_1 + 0x100) + iStack_114 * 4) + 0x1c,&uStack_cc);
      FUN_00649920(auStack_e0,s_GoalListGoalCount_d_00745038,iStack_114);
      ppiVar14 = &piStack_110;
      uStack_4 = 0xd;
      uVar5 = FUN_00649940(ppiVar14);
      FUN_00640450(uVar5,ppiVar14);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      iVar11 = *(int *)(*(int *)(param_1 + 0x100) + iStack_114 * 4);
      piStack_f8 = piStack_110;
      if (piStack_110 != *(int **)(iVar11 + 0x10)) {
        pvVar2 = operator_new((int)piStack_110 << 2);
        iVar3 = 0;
        if (0 < *(int *)(iVar11 + 8)) {
          do {
            *(undefined4 *)((int)pvVar2 + iVar3 * 4) =
                 *(undefined4 *)(*(int *)(iVar11 + 0xc) + iVar3 * 4);
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(iVar11 + 8));
        }
        FUN_006bf840(*(undefined4 *)(iVar11 + 0xc));
        *(void **)(iVar11 + 0xc) = pvVar2;
        *(int **)(iVar11 + 0x10) = piStack_f8;
      }
      iVar11 = 0;
      if (0 < (int)piStack_110) {
        do {
          piVar7 = (int *)operator_new(0x30);
          uStack_4 = 0xe;
          piStack_f8 = piVar7;
          if (piVar7 == (int *)0x0) {
            piStack_108 = (int *)0x0;
          }
          else {
            FUN_006499d0();
            uStack_4 = CONCAT31(uStack_4._1_3_,0xf);
            *piVar7 = 100;
            FUN_0064a2e0(&DAT_00720670);
            piStack_108 = piVar7;
          }
          iVar3 = *(int *)(*(int *)(param_1 + 0x100) + iStack_114 * 4);
          iVar10 = *(int *)(iVar3 + 8);
          uStack_4 = 0xffffffff;
          if (*(int *)(iVar3 + 0x10) < iVar10 + 1) {
            if (*(int *)(iVar3 + 0x18) == 0) {
              iVar8 = *(int *)(iVar3 + 0x10) / 2;
              iVar6 = 1;
              if (0 < iVar8) {
                iVar6 = iVar8;
              }
              if (iVar6 + iVar10 < 1) {
                piStack_10c = (int *)0x1;
              }
              else {
                if (iVar8 < 1) {
                  iVar8 = 1;
                }
                piStack_10c = (int *)(iVar8 + iVar10);
              }
            }
            else {
              piStack_10c = (int *)(*(int *)(iVar3 + 0x18) + iVar10);
            }
            piStack_104 = (int *)operator_new((int)piStack_10c * 4);
            iVar10 = 0;
            if (0 < *(int *)(iVar3 + 8)) {
              do {
                piStack_104[iVar10] = *(int *)(*(int *)(iVar3 + 0xc) + iVar10 * 4);
                iVar10 = iVar10 + 1;
              } while (iVar10 < *(int *)(iVar3 + 8));
            }
            FUN_006bf840(*(undefined4 *)(iVar3 + 0xc));
            *(int **)(iVar3 + 0xc) = piStack_104;
            *(int **)(iVar3 + 0x10) = piStack_10c;
          }
          *(int **)(*(int *)(iVar3 + 0xc) + *(int *)(iVar3 + 8) * 4) = piStack_108;
          *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
          FUN_00649920(auStack_e8,s_GoalListSet_dGoalListName_d_00744fe0,iStack_114,iVar11);
          puVar12 = &uStack_cc;
          uStack_4 = 0x10;
          uVar5 = FUN_00649940(puVar12);
          FUN_00640480(uVar5,puVar12);
          uStack_4 = 0xffffffff;
          FUN_00649950();
          FUN_0064a2e0(&uStack_cc);
          FUN_00649920(&pvStack_ec,s_GoalListSet_dGoalListWeight_d_00744fc0,iStack_114,iVar11);
          uVar5 = *(undefined4 *)
                   (*(int *)(*(int *)(*(int *)(param_1 + 0x100) + iStack_114 * 4) + 0xc) +
                   iVar11 * 4);
          uStack_4 = 0x11;
          uVar9 = FUN_00649940(uVar5);
          FUN_00640450(uVar9,uVar5);
          uStack_4 = 0xffffffff;
          FUN_00649950();
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)piStack_110);
      }
      iStack_114 = iStack_114 + 1;
    } while (iStack_114 < iStack_f4);
  }
  piVar7 = (int *)FUN_005af120();
  (**(code **)(*piVar7 + 0x11c))();
  ExceptionList = pvStack_c;
  return;
}

