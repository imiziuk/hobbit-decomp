
void __fastcall FUN_005ad7b0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int *piVar7;
  undefined4 unaff_EBX;
  undefined *puVar8;
  uint local_190;
  undefined4 local_18c;
  int local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined1 local_17c [64];
  undefined4 local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124 [6];
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006de529;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_005ad780();
  puVar1 = (undefined4 *)FUN_00649b80(&stack0x00000004);
  local_4._0_1_ = 1;
  FUN_00649920(&local_190,s__sStates_Info_00744ef8,*puVar1);
  local_4._0_1_ = 2;
  uVar2 = FUN_00649940();
  FUN_0064f190(local_10c,s_verify_failed_on_file___s_00742d30,uVar2);
  local_4._0_1_ = 1;
  FUN_00649950();
  local_4._0_1_ = 0;
  FUN_00649ba0();
  local_18c = 0x7fffffff;
  local_4._0_1_ = 3;
  puVar1 = (undefined4 *)FUN_00649b80(&stack0x00000004);
  local_4._0_1_ = 4;
  FUN_00649920(&local_190,s__sStates_Info_00744ef8,*puVar1);
  puVar8 = &DAT_0072adcc;
  local_4._0_1_ = 5;
  uVar2 = FUN_00649940(&DAT_0072adcc);
  uVar2 = FUN_005496c0(uVar2,puVar8);
  FUN_00549430(&local_18c,uVar2);
  local_4._0_1_ = 4;
  FUN_00649950();
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_00649ba0();
  iVar3 = FUN_00549470(&local_18c);
  FUN_0063e0f0();
  *(undefined4 *)(param_1 + 0xbc) = 0;
  iVar4 = FUN_0063e510();
  do {
    if (iVar4 != 1) {
      FUN_0063e0f0();
      FUN_00549580(&local_18c);
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0xa8)) {
        do {
          iVar4 = iVar3 * 4;
          iVar5 = FUN_005be200();
          if (iVar5 == 0) {
            puVar1 = *(undefined4 **)(iVar4 + *(int *)(param_1 + 0xac));
            if (puVar1 != (undefined4 *)0x0) {
              (**(code **)*puVar1)(1);
            }
            iVar5 = (*(int *)(param_1 + 0xa8) - iVar3) + -1;
            if (0 < iVar5) {
              do {
                *(undefined4 *)(iVar4 + *(int *)(param_1 + 0xac)) =
                     *(undefined4 *)(iVar4 + 4 + *(int *)(param_1 + 0xac));
                iVar4 = iVar4 + 4;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
            *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + -1;
            iVar3 = iVar3 + -1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_1 + 0xa8));
      }
      iVar3 = FUN_005af720(1);
      if (iVar3 == 0) {
        if (**(int **)(param_1 + 0xac) != 0) {
          *(uint *)(param_1 + 0xc0) = (uint)*(byte *)(**(int **)(param_1 + 0xac) + 0x44);
        }
      }
      else {
        *(undefined4 *)(param_1 + 0xc0) = 1;
      }
      local_4 = local_4 & 0xffffff00;
      FUN_00549580(&local_18c);
      FUN_00549350(&local_18c);
      local_18c = 0x7fffffff;
      local_4 = 0xffffffff;
      FUN_0064b190();
      ExceptionList = local_c;
      return;
    }
    iVar4 = FUN_00647ed0(iVar3,s_StateList_00744eec);
    if (iVar4 == 0) {
      iVar4 = 0;
      if (0 < *(int *)(iVar3 + 0x100)) {
        do {
          FUN_0063e6a0();
          FUN_0063ea10(iVar3,s_StateName_s_00744ee0,local_17c);
          iVar5 = FUN_00647e40(local_17c,&DAT_00744ed8);
          if (iVar5 == 0) {
            pvVar6 = operator_new(0x88);
            local_4 = CONCAT31(local_4._1_3_,6);
            if (pvVar6 == (void *)0x0) {
LAB_005ae54a:
              uVar2 = 0;
            }
            else {
              uVar2 = FUN_00639750(&DAT_00744ed8,param_1);
            }
LAB_005ae54c:
            local_4 = CONCAT31(local_4._1_3_,3);
            FUN_005ae8d0(uVar2);
          }
          else {
            iVar5 = FUN_00647e40(local_17c,s_Alert_00744ed0);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x60);
              local_4 = CONCAT31(local_4._1_3_,7);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_00638650(s_Alert_00744ed0,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_Attack_00744ec8);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x8c);
              local_4 = CONCAT31(local_4._1_3_,8);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_00636110(s_Attack_00744ec8,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_Retreat_00744ec0);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x50);
              local_4 = CONCAT31(local_4._1_3_,9);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_00635f10(s_Retreat_00744ec0,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,&DAT_00744eb8);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x50);
              local_4 = CONCAT31(local_4._1_3_,10);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_00635810(&DAT_00744eb8,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,&DAT_00744eb0);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x6c);
              local_4 = CONCAT31(local_4._1_3_,0xb);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_00634910(&DAT_00744eb0,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_TakeCover_00744ea4);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0xb8);
              local_4 = CONCAT31(local_4._1_3_,0xc);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_00633be0(s_TakeCover_00744ea4,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_RangedAttack_00744e94);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x80);
              local_4 = CONCAT31(local_4._1_3_,0xd);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_00632680(s_RangedAttack_00744e94,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_PatrolIdleState_00744e84);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x78);
              local_4 = CONCAT31(local_4._1_3_,0xe);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_00631b90(s_PatrolIdleState_00744e84,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_BatIdle_00744e7c);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x88);
              local_4 = CONCAT31(local_4._1_3_,0xf);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_00639750(s_BatIdle_00744e7c,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_BatAttack_00744e70);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x68);
              local_4 = CONCAT31(local_4._1_3_,0x10);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_006305d0(s_BatAttack_00744e70,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_WolfAlert_00744e64);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x60);
              local_4 = CONCAT31(local_4._1_3_,0x11);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_00630550(s_WolfAlert_00744e64,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_WolfAttack_00744e58);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x8c);
              local_4 = CONCAT31(local_4._1_3_,0x12);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_006304d0(s_WolfAttack_00744e58,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_SpiderAlert_00744e4c);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x6c);
              local_4 = CONCAT31(local_4._1_3_,0x13);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_0062fd40(s_SpiderAlert_00744e4c,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_SpiderAttack_00744e3c);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x8c);
              local_4 = CONCAT31(local_4._1_3_,0x14);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_0062f260(s_SpiderAttack_00744e3c,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_BossSpiderWrathAttack_00744e24);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0xa8);
              local_4 = CONCAT31(local_4._1_3_,0x15);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_0062d250(s_BossSpiderWrathAttack_00744e24,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_BossSpiderWildAttack_00744e0c);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0xac);
              local_4 = CONCAT31(local_4._1_3_,0x16);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_0062b2e0(s_BossSpiderWildAttack_00744e0c,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_BossSpiderWickedAttack_00744df4);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0xa8);
              local_4 = CONCAT31(local_4._1_3_,0x17);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_00629100(s_BossSpiderWickedAttack_00744df4,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_BossSpiderIdle_00744de4);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x88);
              local_4 = CONCAT31(local_4._1_3_,0x18);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_00627b00(s_BossSpiderIdle_00744de4,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_WaterLeaperAttack_00744dd0);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x80);
              local_4 = CONCAT31(local_4._1_3_,0x19);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_00626620(s_WaterLeaperAttack_00744dd0,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_RockBadgerAttack_00744dbc);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x7c);
              local_4 = CONCAT31(local_4._1_3_,0x1a);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_00624de0(s_RockBadgerAttack_00744dbc,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_CaveGuardianAttack_00744da8);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x6c);
              local_4 = CONCAT31(local_4._1_3_,0x1b);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_006237c0(s_CaveGuardianAttack_00744da8,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_CaveGuardianMinionAttack_00744d8c);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x8c);
              local_4 = CONCAT31(local_4._1_3_,0x1c);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_006216c0(s_CaveGuardianMinionAttack_00744d8c,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_CaveGuardianRangedAttack_00744d70);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x68);
              local_4 = CONCAT31(local_4._1_3_,0x1d);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_00620500(s_CaveGuardianRangedAttack_00744d70,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_ElfCommonAttackState_00744d58);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0xac);
              local_4 = CONCAT31(local_4._1_3_,0x1e);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_0061ffd0(s_ElfCommonAttack_00744d48,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_EelAttack_00744d3c);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x70);
              local_4 = CONCAT31(local_4._1_3_,0x1f);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_0061eb60(s_EelAttack_00744d3c,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_EelIdle_00744d34);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x68);
              local_4 = CONCAT31(local_4._1_3_,0x20);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_0061dd80(s_EelIdle_00744d34,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_SleepingChickenAlert_00744d1c);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x60);
              local_4 = CONCAT31(local_4._1_3_,0x21);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_0061dc50(s_SleepingChickenAlert_00744d1c,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_ChickenIdleState_00744d08);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x7c);
              local_4 = CONCAT31(local_4._1_3_,0x22);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_0061d3a0(s_ChickenIdle_00744cfc,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_BridgeTrollAttack_00744ce8);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0xd0);
              local_4 = CONCAT31(local_4._1_3_,0x23);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_0061ab90(s_BridgeTrollAttack_00744ce8,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_SmaugIdle_00744cdc);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x158);
              local_4 = CONCAT31(local_4._1_3_,0x24);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_005bb190(s_SmaugIdle_00744cdc,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_SmaugAlert_007264f4);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x120);
              local_4 = CONCAT31(local_4._1_3_,0x25);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_005b9370(s_SmaugAlert_007264f4,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_SmaugAttack_00744cd0);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x648);
              local_4 = CONCAT31(local_4._1_3_,0x26);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_006136b0(s_SmaugAttack_00744cd0,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_BolgAttack_00744cc4);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0xe0);
              local_4 = CONCAT31(local_4._1_3_,0x27);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_00611a70(s_BolgAttack_00744cc4,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_BolgShamanIdle_00744cb4);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x48);
              local_4 = CONCAT31(local_4._1_3_,0x28);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_006113b0(s_BolgShamanIdle_00744cb4,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_BeornAlert_00744ca8);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x1a0);
              local_4 = CONCAT31(local_4._1_3_,0x29);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_0060f1e0(s_BeornAlert_00744ca8,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_BeornAttack_00744c9c);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x8c);
              local_4 = CONCAT31(local_4._1_3_,0x2a);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_0060f050(s_BeornAttack_00744c9c,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_WispIdle_00744c90);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x60);
              local_4 = CONCAT31(local_4._1_3_,0x2b);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_0060e510(s_WispIdle_00744c90,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_WispFollow_00744c84);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x50);
              local_4 = CONCAT31(local_4._1_3_,0x2c);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_0060dac0(s_WispFollow_00744c84,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_ScarecrowIdle_00744c74);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x100);
              local_4 = CONCAT31(local_4._1_3_,0x2d);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_0060ce00(s_ScarecrowIdle_00744c74,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_CrowIdle_00744c68);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x50);
              local_4 = CONCAT31(local_4._1_3_,0x2e);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_0060c670(s_CrowIdle_00744c68,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_WarIdle_00744c60);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0x88);
              local_4 = CONCAT31(local_4._1_3_,0x2f);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_0060b670(s_WarIdle_00744c60,param_1);
              goto LAB_005ae54c;
            }
            iVar5 = FUN_00647e40(local_17c,s_WightBossAttack_00744c50);
            if (iVar5 == 0) {
              pvVar6 = operator_new(0xe4);
              local_4 = CONCAT31(local_4._1_3_,0x30);
              if (pvVar6 == (void *)0x0) goto LAB_005ae54a;
              uVar2 = FUN_00608e00(s_WightBossAttack_00744c50,param_1);
              goto LAB_005ae54c;
            }
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(iVar3 + 0x100));
      }
    }
    else {
      iVar4 = FUN_00647ed0(iVar3,s_Defaults_00744c44);
      if (iVar4 == 0) {
        local_138 = 0x7f7fffff;
        local_134 = 0x7f7fffff;
        local_130 = 0x7f7fffff;
        local_12c = -0x800001;
        local_128 = -0x800001;
        local_124[0] = -0x800001;
        local_184 = 0;
        local_13c = 1;
        local_180 = 0x40a00000;
        local_188 = 0;
        local_190 = 2;
        FUN_0063e6a0();
        FUN_0063ea10(iVar3,s_LocalBBox_ffffff_00744c30,&local_138,&local_134,&local_130,&local_12c,
                     &local_128,local_124);
        FUN_0063ea10(iVar3,s_DoesNotCollide_d_00744c1c,&local_184);
        FUN_0063ea10(iVar3,s_RunAI_d_00744c14,&local_13c);
        FUN_0063ea10(iVar3,s_MaxHitPoints_f_0072ad48,&local_180);
        FUN_0063ea10(iVar3,s_Invulnerable_d_00744c04,&local_188);
        FUN_0063ea10(iVar3,s_Team_d_00744bfc,&local_190);
        piVar7 = (int *)FUN_005af120();
        if (piVar7 != (int *)0x0) {
          piVar7[0xb] = local_138;
          piVar7[0xc] = local_134;
          piVar7[0xd] = local_130;
          piVar7[0xe] = local_12c;
          piVar7[0xf] = local_128;
          piVar7[0x10] = local_124[0];
          (**(code **)(*piVar7 + 0x8c))(local_184,0xffffffff);
          piVar7[0xa5] = local_188;
          piVar7[0x3a] = (local_190 ^ piVar7[0x3a]) & 1 ^ piVar7[0x3a];
          (**(code **)(*piVar7 + 0x13c))(unaff_EBX);
        }
      }
      else {
        FUN_0063f330();
      }
    }
    iVar4 = FUN_0063e510();
  } while( true );
}

