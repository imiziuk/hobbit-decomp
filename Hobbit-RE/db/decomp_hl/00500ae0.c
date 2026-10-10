
void FUN_00500ae0(void)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_24 [4];
  undefined4 local_20;
  undefined1 auStack_1c [4];
  uint local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d6890;
  local_c = ExceptionList;
  if ((DAT_007600f0 == 0) || (DAT_007600e8 != 0)) {
    ExceptionList = &local_c;
    FUN_005009c0(s_Reload_Layers_00731a2c,&LAB_005021e0,0,0);
    FUN_005009c0(s___Exit_Level___00731a1c,&LAB_00501710,0,0);
    FUN_005009c0(s____EnableFlyMode____00731a04,&LAB_005019f0,0,1);
    FUN_005009c0(s_Save_To_Memcard_007319f4,&LAB_00501810,0,0);
    FUN_005009c0(s_Invulnerability_00731ad0,&LAB_00501840,0,1);
    FUN_005009c0(s_NukeNearbyEnemies_00731abc,FUN_00501730,0,1);
    FUN_005009c0(s_Show_Cinematic_Debug_Info_007319d8,&LAB_00500a50,0,1);
    FUN_005009c0(s_Toggle_Show_Text_007319c4,&LAB_00501820,0,1);
    FUN_005009c0(s_Toggle_Mem_UsageBar_007319b0,&LAB_00501b20,0,1);
    FUN_005009c0(s_Toggle_Display_FPS_00731aa8,&LAB_00501c10,0,1);
    FUN_005009c0(s_ShowVisibilityStats_0073199c,&LAB_00502260,0,1);
    FUN_005009c0(s_FreezeVisibleObjects_00731984,&LAB_00502240,0,1);
    FUN_005009c0(s_Toggle_RscMgr_Stats_00731970,&LAB_005018f0,0,1);
    FUN_005009c0(s_Toggle_Render_NPC_Collision_00731954,&LAB_005018b0,0,1);
    FUN_005009c0(s_Toggle_Render_PolyCache_0073193c,&LAB_005018d0,0,1);
    FUN_005009c0(s_Toggle_Logging_AllAudioEvents_0073191c,&LAB_00501950,0,1);
    FUN_005009c0(s_Toggle_Logging_BadAudioEvents_007318fc,&LAB_00501970,0,1);
    FUN_005009c0(s_Toggle_Mask_NPCAudioEvents_007318dc,&LAB_00501910,0,1);
    FUN_005009c0(s_Toggle_Mask_ContactAudioEvents_007318bc,&LAB_00501930,0,1);
    FUN_005009c0(s_Toggle_MusicLogic_Debug_Info_0073189c,&LAB_00501990,0,1);
    FUN_005009c0(s_Toggle_AmbientAudio_Debug_Info_0073187c,&LAB_005019c0,0,1);
    FUN_005009c0(s_Toggle_MusicMgr_Debug_Info_00731860,&LAB_00501a20,0,1);
    FUN_005009c0(s_Disable_XDebug_TTY_Output_00731844,&LAB_00501a50,0,1);
    FUN_005009c0(s_Toggle_Stream_Info_00731830,&LAB_00501b00,0,1);
    FUN_005009c0(s_Don_t_Use_Pedestals_0073181c,&LAB_00501c90,0,1);
    FUN_005009c0(s_CHEAT___All_Pickups_00731a94,&LAB_00501860,0,0);
    FUN_005009c0(s_Output_living_NPC_names_00731804,&LAB_005021f0,0,0);
    FUN_005009c0(s_Toggle_ObjMgr_Stats_007317f0,&LAB_00501890,0,1);
    FUN_005009c0(s_Toggle_RenderMgr_Stats_007317d8,&LAB_00501b40,0,1);
    FUN_005009c0(s_Toggle_MatMgr_Stats_007317c4,&LAB_00501a80,0,1);
    FUN_005009c0(s_Toggle_LightMgr_Stats_007317ac,&LAB_00501aa0,0,1);
    FUN_005009c0(s_Toggle_RigidMgr_Stats_00731794,&LAB_00501ac0,0,1);
    FUN_005009c0(s_Toggle_NPCMgr_Stats_00731780,&LAB_00501ae0,0,1);
    FUN_005009c0(s_Toggle_Max_Fifo_Display_00731768,&LAB_00501bf0,0,1);
    FUN_005009c0(s_Toggle_Bilbo_Position_Info_00731a78,&LAB_00501d10,0,1);
    FUN_005009c0(s_Toggle_Play_surfs_00731754,&LAB_00501c30,0,1);
    FUN_005009c0(s_Toggle_Rigid_instances_0073173c,&LAB_00501c50,0,1);
    FUN_005009c0(s_Toggle_visibility_calc_00731724,&LAB_00501c70,0,1);
    FUN_005009c0(s_Show_HUD_00731718,&LAB_00501b60,0,1);
    FUN_005009c0(s_HUD_Letterbox_mode_00731704,&LAB_00501b80,0,1);
    FUN_005009c0(s_Toggle_Render_Bilbo_007316f0,&LAB_00501bc0,0,1);
    FUN_005009c0(s_Show_TestUIFX_fxo_007316dc,&LAB_00501be0,0,1);
    FUN_005009c0(s_Show_Load_Triggers_007316c8,&LAB_00501cb0,0,1);
    FUN_005009c0(s_Show_Nav_Nodes_007316b8,&LAB_00501cd0,0,1);
    FUN_005009c0(s_Show_Trigger_Volumes_007316a0,&LAB_00501cf0,0,1);
    FUN_005009c0(s_Show_Loaded_Layers_0073168c,&LAB_00501d30,0,1);
    FUN_005009c0(s_Save_to_Disk_0073167c,&LAB_00501d90,0,0);
    FUN_005009c0(s_Restore_from_Disk_00731668,&LAB_00501d90,0,0);
    FUN_005009c0(s_Vram_viewer_0073165c,&LAB_00502280,0,0);
    FUN_005009c0(s_Increase_screenshot_size_00731640,&LAB_005021c0,0,0);
    FUN_005009c0(s_Decrease_screenshot_size_00731624,&LAB_005021a0,0,0);
    FUN_005009c0(s_SysMenu_DumpMemoryStats_0073160c,&LAB_00501da0,0,0);
    FUN_005009c0(s_SysMenu_DumpLevelStats_007315f4,&LAB_00501fc0,0,0);
    FUN_005009c0(s_SysMenu_DumpFullLevelStats_007315d8,&LAB_00501dd0,0,0);
    FUN_005009c0(s____CollisionScanWorld____007315bc,&LAB_00501dc0,0,0);
    FUN_005009c0(s_SPEED__Increase_007315ac,&LAB_00502290,0,0);
    FUN_005009c0(s_SPEED__Decrease_0073159c,&LAB_00502290,1,0);
    FUN_005009c0(s_Ch00_DreamWorld_Combat_00731584,&LAB_00502320,0,0);
    FUN_005009c0(s_Ch01_Hobbiton_Combat_0073156c,&LAB_00502460,0,0);
    FUN_005009c0(s_Ch02_RoastMutton_Combat_00731554,&LAB_00502460,0,0);
    FUN_005009c0(s_Ch2a_TrollHole_Combat_0073153c,&LAB_00502460,0,0);
    FUN_005009c0(s_Ch04_Overhill_Combat_00731524,&LAB_00502570,0,0);
    FUN_005009c0(s_Ch05_Swordlight_Combat_0073150c,&LAB_00502690,0,0);
    FUN_005009c0(s_Mirkwood_Combat_007314fc,&LAB_005027b0,0,0);
    FUN_005009c0(s_Ch07_BarrlesOutOfBond_Combat_007314dc,&LAB_005028d0,0,0);
    FUN_005009c0(s_Ch08_Laketown_Combat_007314c4,&LAB_00502a00,0,0);
    FUN_005009c0(s_Ch09_Smaug_Combat_007314b0,&LAB_00502b30,0,0);
    FUN_005009c0(s_Ch10_LonelyMountain_Combat_00731494,&LAB_00502320,0,0);
    FUN_005009c0(s_Ch11_CloudsBurst_Combat_0073147c,&LAB_00502320,0,0);
    local_20 = FUN_0054c5c0(0x34,s_C__projects_meridian_apps_meridi_00731a44,0x750);
    lVar9 = FUN_0054c790();
    do {
      if (lVar9 == 0) {
        FUN_0054c880(local_20);
        FUN_005009c0(s_Allow_HUD_in_Screenshots_00731460,&LAB_00502c60,0,1);
        FUN_005009c0(s_Rope_Debug_Render_0073144c,&LAB_00502c80,0,1);
        FUN_005009c0(s_Toggle_Render_Skybox_00731434,&LAB_00502ca0,0,1);
        FUN_005009c0(s_Toggle_Render_PSurfs_0073141c,&LAB_00502ca0,1,1);
        FUN_005009c0(s_Toggle_Render_RigidInst_00731404,&LAB_00502ca0,2,1);
        FUN_005009c0(s_Enable_Pause_>Exit_Level_007313e8,&LAB_005016a0,0,1);
        FUN_005009c0(s_Force_Monkey_To_Exit_Level_007313cc,&LAB_005016a0,1,1);
        FUN_005009c0(s_Force_Monkey_To_Transition_007313b0,&LAB_005016a0,2,1);
        FUN_005009c0(s_Do_Fast_Monkey_Exit_Transition_00731390,&LAB_005016a0,3,1);
        FUN_005009c0(s_Unleash_The_Monkey_0073137c,&LAB_00501680,0,1);
        ExceptionList = local_c;
        return;
      }
      uVar7 = (uint)((ulonglong)lVar9 >> 0x20);
      FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
      iVar2 = (int)*(short *)(&DAT_0076cd88 + (((uint)lVar9 ^ uVar7) * -0xfb & 0xfff) * 2);
      for (iVar3 = iVar2; iVar3 != -1; iVar3 = (int)*(short *)(DAT_0076f648 + iVar3 * 0x14 + 0xe)) {
      }
      while (iVar2 != -1) {
        piVar6 = (int *)(DAT_0076f648 + iVar2 * 0x14);
        iVar3 = *piVar6;
        if ((iVar3 != 0) && (lVar9 == *(longlong *)(iVar3 + 8))) {
          if (iVar2 != -1) {
            uVar8 = *(uint *)(DAT_0076f648 + iVar2 * 0x14);
            local_4 = 0xffffffff;
            piVar6 = (int *)(-(uint)((*(byte *)(uVar8 + 0x7f) & 0x10) != 0) & uVar8);
            FUN_00649720();
            iVar3 = DAT_007624a0;
            if ((piVar6 != (int *)0x0) && (piVar6[0x4e] != 0)) {
              uVar4 = (**(code **)(*piVar6 + 0x4c))();
              FUN_00649920(auStack_1c,&DAT_00731a3c,uVar4);
              local_4 = 3;
              uVar4 = FUN_00649940(&LAB_00501d50,iVar3,0);
              FUN_005009c0(uVar4);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (DAT_007624a8 < DAT_007624a0 + 1) {
                if (DAT_007624b0 == 0) {
                  iVar3 = DAT_007624a8 / 2;
                  iVar2 = 1;
                  if (0 < iVar3) {
                    iVar2 = iVar3;
                  }
                  if (iVar2 + DAT_007624a0 < 1) {
                    iVar3 = 1;
                  }
                  else {
                    if (iVar3 < 1) {
                      iVar3 = 1;
                    }
                    iVar3 = iVar3 + DAT_007624a0;
                  }
                }
                else {
                  iVar3 = DAT_007624a0 + DAT_007624b0;
                }
                pvVar5 = operator_new(iVar3 * 8);
                iVar2 = 0;
                if (0 < DAT_007624a0) {
                  do {
                    pvVar1 = DAT_007624a4;
                    *(undefined4 *)((int)pvVar5 + iVar2 * 8) =
                         *(undefined4 *)((int)DAT_007624a4 + iVar2 * 8);
                    *(undefined4 *)((int)pvVar5 + iVar2 * 8 + 4) =
                         *(undefined4 *)((int)pvVar1 + iVar2 * 8 + 4);
                    iVar2 = iVar2 + 1;
                  } while (iVar2 < DAT_007624a0);
                }
                FUN_006bf840(DAT_007624a4);
                DAT_007624a4 = pvVar5;
                DAT_007624a8 = iVar3;
              }
              *(uint *)((int)DAT_007624a4 + DAT_007624a0 * 8) = (uint)lVar9;
              *(uint *)((int)DAT_007624a4 + DAT_007624a0 * 8 + 4) = uVar7;
              DAT_007624a0 = DAT_007624a0 + 1;
            }
            goto LAB_0050157e;
          }
          break;
        }
        iVar2 = (int)*(short *)((int)piVar6 + 0xe);
      }
      local_4 = 0xffffffff;
      FUN_00649720();
LAB_0050157e:
      lVar9 = FUN_0054c790();
    } while( true );
  }
  ExceptionList = &local_c;
  FUN_005009c0(s_Exit_Level_00731af0,&LAB_00501710,0,0);
  FUN_005009c0(s_EnableFlyMode_00731ae0,&LAB_005019f0,0,1);
  FUN_005009c0(s_Invulnerability_00731ad0,&LAB_00501840,0,1);
  FUN_005009c0(s_NukeNearbyEnemies_00731abc,FUN_00501730,0,1);
  FUN_005009c0(s_Toggle_Display_FPS_00731aa8,&LAB_00501c10,0,1);
  FUN_005009c0(s_CHEAT___All_Pickups_00731a94,&LAB_00501860,0,0);
  FUN_005009c0(s_Toggle_Bilbo_Position_Info_00731a78,&LAB_00501d10,0,1);
  local_20 = FUN_0054c5c0(0x34,s_C__projects_meridian_apps_meridi_00731a44,0x6d4);
  lVar9 = FUN_0054c790();
  local_18 = (uint)((ulonglong)lVar9 >> 0x20);
  do {
    if (lVar9 == 0) {
      FUN_0054c880(local_20);
      ExceptionList = local_c;
      return;
    }
    uVar8 = (uint)((ulonglong)lVar9 >> 0x20);
    uVar7 = (uint)lVar9;
    local_18 = uVar8;
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    iVar2 = (int)*(short *)(&DAT_0076cd88 + ((uVar7 ^ uVar8) * -0xfb & 0xfff) * 2);
    for (iVar3 = iVar2; iVar3 != -1; iVar3 = (int)*(short *)(DAT_0076f648 + iVar3 * 0x14 + 0xe)) {
    }
    if (iVar2 == -1) {
LAB_00500c6a:
      local_4 = 0xffffffff;
      FUN_00649720();
    }
    else {
      do {
        piVar6 = (int *)(DAT_0076f648 + iVar2 * 0x14);
        iVar3 = *piVar6;
        if (((iVar3 != 0) && (*(uint *)(iVar3 + 8) == uVar7)) &&
           (*(uint *)(iVar3 + 0xc) == local_18)) {
          if (iVar2 == -1) goto LAB_00500c6a;
          uVar8 = *(uint *)(DAT_0076f648 + iVar2 * 0x14);
          local_4 = 0xffffffff;
          piVar6 = (int *)(-(uint)((*(byte *)(uVar8 + 0x7f) & 0x10) != 0) & uVar8);
          FUN_00649720();
          iVar3 = DAT_007624a0;
          if ((piVar6 != (int *)0x0) && (piVar6[0x4e] != 0)) {
            uVar4 = (**(code **)(*piVar6 + 0x4c))();
            FUN_00649920(auStack_24,&DAT_00731a3c,uVar4);
            local_4 = 1;
            uVar4 = FUN_00649940(&LAB_00501d50,iVar3,0);
            FUN_005009c0(uVar4);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (DAT_007624a8 < DAT_007624a0 + 1) {
              if (DAT_007624b0 == 0) {
                iVar3 = DAT_007624a8 / 2;
                iVar2 = 1;
                if (0 < iVar3) {
                  iVar2 = iVar3;
                }
                if (iVar2 + DAT_007624a0 < 1) {
                  iVar3 = 1;
                }
                else {
                  if (iVar3 < 1) {
                    iVar3 = 1;
                  }
                  iVar3 = iVar3 + DAT_007624a0;
                }
              }
              else {
                iVar3 = DAT_007624a0 + DAT_007624b0;
              }
              pvVar5 = operator_new(iVar3 * 8);
              iVar2 = 0;
              if (0 < DAT_007624a0) {
                do {
                  pvVar1 = DAT_007624a4;
                  *(undefined4 *)((int)pvVar5 + iVar2 * 8) =
                       *(undefined4 *)((int)DAT_007624a4 + iVar2 * 8);
                  *(undefined4 *)((int)pvVar5 + iVar2 * 8 + 4) =
                       *(undefined4 *)((int)pvVar1 + iVar2 * 8 + 4);
                  iVar2 = iVar2 + 1;
                } while (iVar2 < DAT_007624a0);
              }
              FUN_006bf840(DAT_007624a4);
              DAT_007624a4 = pvVar5;
              DAT_007624a8 = iVar3;
            }
            *(uint *)((int)DAT_007624a4 + DAT_007624a0 * 8) = uVar7;
            *(uint *)((int)DAT_007624a4 + DAT_007624a0 * 8 + 4) = local_18;
            DAT_007624a0 = DAT_007624a0 + 1;
          }
          goto LAB_00500dd2;
        }
        iVar2 = (int)*(short *)((int)piVar6 + 0xe);
      } while (iVar2 != -1);
      local_4 = 0xffffffff;
      FUN_00649720();
    }
LAB_00500dd2:
    lVar9 = FUN_0054c790();
    local_18 = (uint)((ulonglong)lVar9 >> 0x20);
  } while( true );
}

