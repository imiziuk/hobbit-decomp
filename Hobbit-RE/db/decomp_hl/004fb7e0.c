
void FUN_004fb7e0(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_938;
  undefined4 local_920 [11];
  undefined1 local_8f4 [44];
  undefined1 local_8c8 [256];
  undefined1 local_7c8 [256];
  undefined1 local_6c8 [256];
  int local_5c8;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d63b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_LevelLoader_LoadManualResources_00730714);
  local_4 = 0;
  FUN_0063ddb0();
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar2 = FUN_005496c0(s_exportres_txt_00730704,0);
  iVar3 = FUN_0063df60(uVar2);
  if (iVar3 != 0) {
    iVar3 = FUN_0063e510();
    while (iVar3 != 0) {
      iVar3 = FUN_00647ed0(local_6c8,s_Resources_007306f8);
      if ((iVar3 == 0) && (0 < local_5c8)) {
        local_938 = local_5c8;
        do {
          FUN_0063e6a0();
          FUN_0063ea10(local_6c8,s_Name_s_007306f0,local_7c8);
          FUN_00648a60(local_7c8,0,0,0,local_8c8);
          iVar3 = FUN_00647ed0(local_8c8,s__xbmp_007306e8);
          if (iVar3 == 0) {
            FUN_006499d0();
            local_4._0_1_ = 2;
            FUN_0064a750(local_7c8);
            iVar3 = FUN_00548de0(local_920[0]);
            if (iVar3 == 0) {
              FUN_0064e7d0(s_Failed_to_load_resource___s_007306a0,local_920[0]);
              local_4 = CONCAT31(local_4._1_3_,1);
              FUN_00649ba0();
            }
            else {
              FUN_00649600(s_g_ManualLevelResources_Append_te_007306c0);
              local_4._0_1_ = 3;
              uVar1 = (undefined1)local_4;
              local_4._0_1_ = 3;
              piVar5 = DAT_0075f920;
              iVar3 = DAT_0075f924;
              if (DAT_0075f924 < DAT_0075f91c + 1) {
                if (DAT_0075f92c == 0) {
                  iVar3 = DAT_0075f924 / 2;
                  iVar7 = 1;
                  if (0 < iVar3) {
                    iVar7 = iVar3;
                  }
                  if (iVar7 + DAT_0075f91c < 1) {
                    iVar3 = 1;
                  }
                  else {
                    if (iVar3 < 1) {
                      iVar3 = 1;
                    }
                    iVar3 = iVar3 + DAT_0075f91c;
                  }
                }
                else {
                  iVar3 = DAT_0075f91c + DAT_0075f92c;
                }
                piVar4 = (int *)operator_new(iVar3 * 0x2c + 4);
                local_4._0_1_ = 4;
                if (piVar4 == (int *)0x0) {
                  piVar5 = (int *)0x0;
                }
                else {
                  piVar5 = piVar4 + 1;
                  *piVar4 = iVar3;
                  FUN_006c043b(piVar5,0x2c,iVar3,FUN_006499d0,FUN_00649ba0);
                }
                iVar7 = 0;
                local_4._0_1_ = 3;
                if (0 < DAT_0075f91c) {
                  iVar6 = 0;
                  do {
                    FUN_0064a320(iVar6 + (int)DAT_0075f920);
                    iVar7 = iVar7 + 1;
                    iVar6 = iVar6 + 0x2c;
                  } while (iVar7 < DAT_0075f91c);
                }
                uVar1 = (undefined1)local_4;
                if (DAT_0075f920 != (int *)0x0) {
                  piVar4 = DAT_0075f920 + -1;
                  FUN_006c026a(DAT_0075f920,0x2c,DAT_0075f920[-1],FUN_00649ba0);
                  FUN_006bf840(piVar4);
                  uVar1 = (undefined1)local_4;
                }
              }
              local_4._0_1_ = uVar1;
              DAT_0075f924 = iVar3;
              DAT_0075f920 = piVar5;
              FUN_0064a320(local_920);
              DAT_0075f91c = DAT_0075f91c + 1;
              local_4._0_1_ = 2;
              FUN_00649720();
              local_4 = CONCAT31(local_4._1_3_,1);
              FUN_00649ba0();
            }
          }
          else {
            iVar3 = FUN_00647ed0(local_8c8,s__rgeom_00730698);
            if ((((iVar3 == 0) || (iVar3 = FUN_00647ed0(local_8c8,s__anim_00730690), iVar3 == 0)) ||
                (iVar3 = FUN_00647ed0(local_8c8,s__npcgeom_00730684), iVar3 == 0)) ||
               (iVar3 = FUN_00647ed0(local_8c8,s__charanim_00730678), iVar3 == 0)) {
              iVar3 = FUN_00548de0(local_7c8);
              if (iVar3 == 0) {
                FUN_0064e7d0(s_Failed_to_load_resource___s_007306a0,local_7c8);
              }
              else {
                FUN_00649b20(local_7c8);
                local_4._0_1_ = 5;
                piVar5 = DAT_0075f920;
                iVar3 = DAT_0075f924;
                if (DAT_0075f924 < DAT_0075f91c + 1) {
                  if (DAT_0075f92c == 0) {
                    iVar3 = DAT_0075f924 / 2;
                    iVar7 = 1;
                    if (0 < iVar3) {
                      iVar7 = iVar3;
                    }
                    if (iVar7 + DAT_0075f91c < 1) {
                      iVar3 = 1;
                    }
                    else {
                      if (iVar3 < 1) {
                        iVar3 = 1;
                      }
                      iVar3 = iVar3 + DAT_0075f91c;
                    }
                  }
                  else {
                    iVar3 = DAT_0075f91c + DAT_0075f92c;
                  }
                  piVar4 = (int *)operator_new(iVar3 * 0x2c + 4);
                  local_4._0_1_ = 6;
                  if (piVar4 == (int *)0x0) {
                    piVar5 = (int *)0x0;
                  }
                  else {
                    piVar5 = piVar4 + 1;
                    *piVar4 = iVar3;
                    FUN_006c043b(piVar5,0x2c,iVar3,FUN_006499d0,FUN_00649ba0);
                  }
                  iVar7 = 0;
                  local_4._0_1_ = 5;
                  if (0 < DAT_0075f91c) {
                    iVar6 = 0;
                    do {
                      FUN_0064a320(iVar6 + (int)DAT_0075f920);
                      iVar7 = iVar7 + 1;
                      iVar6 = iVar6 + 0x2c;
                    } while (iVar7 < DAT_0075f91c);
                  }
                  if (DAT_0075f920 != (int *)0x0) {
                    piVar4 = DAT_0075f920 + -1;
                    FUN_006c026a(DAT_0075f920,0x2c,DAT_0075f920[-1],FUN_00649ba0);
                    FUN_006bf840(piVar4);
                  }
                }
                DAT_0075f924 = iVar3;
                DAT_0075f920 = piVar5;
                FUN_0064a320(local_8f4);
                DAT_0075f91c = DAT_0075f91c + 1;
                local_4 = CONCAT31(local_4._1_3_,1);
                FUN_00649ba0();
              }
            }
          }
          local_938 = local_938 + -1;
        } while (local_938 != 0);
      }
      iVar3 = FUN_0063e510();
    }
    FUN_0063df00();
  }
  local_4 = local_4 & 0xffffff00;
  FUN_0063de30();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

