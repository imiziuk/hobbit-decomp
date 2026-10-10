
void __thiscall FUN_00563550(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  int *local_3c;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006daf4f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00561400();
  iVar7 = 0;
  if (DAT_00798540 != 0) {
    if (0 < *(int *)(param_1 + 0x48)) {
      do {
        FUN_00649920(&local_50,s_AIManager_Links_Link__d_ActiveSt_0073f45c,iVar7);
        local_4 = 0;
        uVar1 = FUN_00649940();
        iVar2 = FUN_00425010();
        *(undefined4 *)(iVar2 + 0x80) = 0xc;
        FUN_00647d10(iVar2,uVar1);
        *(undefined4 *)(iVar2 + 0x84) = 0x20;
        *(undefined4 *)(iVar2 + 0xf0) = 0;
        *(undefined4 *)(iVar2 + 0xf4) = DAT_00771f90;
        *(undefined **)(iVar2 + 0x100) = &DAT_00771f88;
        local_4 = 0xffffffff;
        FUN_00649950();
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 0x48));
    }
    uVar1 = param_2;
    iVar7 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        if (*(int *)(*(int *)(*(int *)(param_1 + 0x14) + iVar7 * 4) + 0x5c) != 0) {
          FUN_005f1210(uVar1);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 0x10));
    }
    iVar7 = 0;
    if (*(int *)(param_1 + 0x2c) < 1) {
      ExceptionList = local_c;
      return;
    }
    do {
      if (*(int *)(*(int *)(*(int *)(param_1 + 0x30) + iVar7 * 4) + 0x5c) != 0) {
        FUN_005cc4b0(uVar1);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x2c));
    ExceptionList = local_c;
    return;
  }
  FUN_005605e0();
  FUN_0055f050();
  FUN_00561a70();
  FUN_00561da0();
  FUN_0055ed70();
  FUN_005620d0();
  if (DAT_0073e828 != 0) {
    DAT_0073e828 = 0;
    FUN_0054d950(&DAT_00771fc0,&DAT_00772030);
    *(undefined4 *)(param_1 + 0xb0) = 0x12;
    local_50 = 0;
    if (0 < DAT_00771fc8) {
      local_54 = 0;
      do {
        FUN_00649b80(DAT_00771fcc + local_54);
        local_4 = 1;
        if (DAT_00772248 < DAT_00772240 + 1) {
          if (DAT_00772250 == 0) {
            local_58 = DAT_00772248 / 2;
            iVar7 = 1;
            if (0 < local_58) {
              iVar7 = local_58;
            }
            if (iVar7 + DAT_00772240 < 1) {
              local_58 = 1;
            }
            else {
              if (local_58 < 1) {
                local_58 = 1;
              }
              local_58 = DAT_00772240 + local_58;
            }
          }
          else {
            local_58 = DAT_00772240 + DAT_00772250;
          }
          local_3c = (int *)operator_new(local_58 * 0x2c + 4);
          local_4._0_1_ = 2;
          if (local_3c == (int *)0x0) {
            piVar6 = (int *)0x0;
          }
          else {
            piVar6 = local_3c + 1;
            *local_3c = local_58;
            FUN_006c043b(piVar6,0x2c,local_58,FUN_006499d0,FUN_00649ba0);
          }
          iVar7 = 0;
          local_4 = CONCAT31(local_4._1_3_,1);
          if (0 < DAT_00772240) {
            iVar2 = 0;
            do {
              FUN_0064a320((int)DAT_00772244 + iVar2);
              iVar7 = iVar7 + 1;
              iVar2 = iVar2 + 0x2c;
            } while (iVar7 < DAT_00772240);
          }
          if (DAT_00772244 != (int *)0x0) {
            FUN_00407f70(3);
          }
          DAT_00772248 = local_58;
          DAT_00772244 = piVar6;
        }
        FUN_0064a320(local_38);
        DAT_00772240 = DAT_00772240 + 1;
        local_4 = 0xffffffff;
        FUN_00649ba0();
        local_50 = local_50 + 1;
        local_54 = local_54 + 0x4c;
      } while (local_50 < DAT_00771fc8);
    }
    FUN_00649b20(s_AITrigger_0073f450);
    local_4 = 3;
    if (DAT_00772248 < DAT_00772240 + 1) {
      local_58 = DAT_00772250;
      if (DAT_00772250 == 0) {
        local_58 = DAT_00772248 / 2;
        iVar7 = 1;
        if (0 < local_58) {
          iVar7 = local_58;
        }
        if (0 < iVar7 + DAT_00772240) {
          if (local_58 < 1) {
            local_58 = 1;
          }
          goto LAB_005638ad;
        }
        local_58 = 1;
      }
      else {
LAB_005638ad:
        local_58 = local_58 + DAT_00772240;
      }
      iVar7 = local_58;
      local_3c = (int *)operator_new(local_58 * 0x2c + 4);
      local_4._0_1_ = 4;
      if (local_3c == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = local_3c + 1;
        *local_3c = iVar7;
        FUN_006c043b(piVar6,0x2c,iVar7,FUN_006499d0,FUN_00649ba0);
      }
      local_4 = CONCAT31(local_4._1_3_,3);
      if (0 < DAT_00772240) {
        iVar7 = 0;
        iVar2 = 0;
        do {
          FUN_0064a320((int)DAT_00772244 + iVar7);
          iVar2 = iVar2 + 1;
          iVar7 = iVar7 + 0x2c;
        } while (iVar2 < DAT_00772240);
      }
      if (DAT_00772244 != (int *)0x0) {
        FUN_00407f70(3);
      }
      DAT_00772248 = local_58;
      DAT_00772244 = piVar6;
    }
    iVar7 = 0;
    FUN_0064a320(local_38);
    DAT_00772240 = DAT_00772240 + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(s_AIAction_0073f444);
    local_4 = 5;
    if (DAT_00772248 < DAT_00772240 + 1) {
      local_58 = DAT_00772250;
      if (DAT_00772250 == 0) {
        local_58 = DAT_00772248 / 2;
        iVar2 = 1;
        if (0 < local_58) {
          iVar2 = local_58;
        }
        if (0 < iVar2 + DAT_00772240) {
          if (local_58 < 1) {
            local_58 = 1;
          }
          goto LAB_005639eb;
        }
        local_58 = 1;
      }
      else {
LAB_005639eb:
        local_58 = local_58 + DAT_00772240;
      }
      iVar2 = local_58;
      local_3c = (int *)operator_new(local_58 * 0x2c + 4);
      local_4._0_1_ = 6;
      if (local_3c == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = local_3c + 1;
        *local_3c = iVar2;
        FUN_006c043b(piVar6,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
      }
      local_4 = CONCAT31(local_4._1_3_,5);
      if (0 < DAT_00772240) {
        iVar2 = 0;
        do {
          FUN_0064a320((int)DAT_00772244 + iVar2);
          iVar7 = iVar7 + 1;
          iVar2 = iVar2 + 0x2c;
        } while (iVar7 < DAT_00772240);
      }
      if (DAT_00772244 != (int *)0x0) {
        FUN_00407f70(3);
      }
      DAT_00772248 = local_58;
      DAT_00772244 = piVar6;
    }
    iVar7 = 0;
    FUN_0064a320(local_38);
    DAT_00772240 = DAT_00772240 + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(s_AIQuestLog_0073f438);
    local_4 = 7;
    if (DAT_00772248 < DAT_00772240 + 1) {
      if (DAT_00772250 == 0) {
        iVar2 = DAT_00772248 / 2;
        iVar3 = 1;
        if (0 < iVar2) {
          iVar3 = iVar2;
        }
        if (iVar3 + DAT_00772240 < 1) {
          iVar2 = 1;
        }
        else {
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          iVar2 = iVar2 + DAT_00772240;
        }
      }
      else {
        iVar2 = DAT_00772250 + DAT_00772240;
      }
      local_54 = iVar2;
      local_3c = (int *)operator_new(iVar2 * 0x2c + 4);
      local_4._0_1_ = 8;
      if (local_3c == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = local_3c + 1;
        *local_3c = iVar2;
        FUN_006c043b(piVar6,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
      }
      local_4 = CONCAT31(local_4._1_3_,7);
      if (0 < DAT_00772240) {
        iVar2 = 0;
        do {
          FUN_0064a320((int)DAT_00772244 + iVar2);
          iVar7 = iVar7 + 1;
          iVar2 = iVar2 + 0x2c;
        } while (iVar7 < DAT_00772240);
      }
      if (DAT_00772244 != (int *)0x0) {
        FUN_00407f70(3);
      }
      DAT_00772248 = local_54;
      DAT_00772244 = piVar6;
    }
    iVar7 = 0;
    FUN_0064a320(local_38);
    DAT_00772240 = DAT_00772240 + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(s_AIInfoOverlay_0073f428);
    local_4 = 9;
    if (DAT_00772248 < DAT_00772240 + 1) {
      if (DAT_00772250 == 0) {
        iVar2 = DAT_00772248 / 2;
        iVar3 = 1;
        if (0 < iVar2) {
          iVar3 = iVar2;
        }
        if (iVar3 + DAT_00772240 < 1) {
          iVar2 = 1;
        }
        else {
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          iVar2 = DAT_00772240 + iVar2;
        }
      }
      else {
        iVar2 = DAT_00772250 + DAT_00772240;
      }
      local_54 = iVar2;
      local_3c = (int *)operator_new(iVar2 * 0x2c + 4);
      local_4._0_1_ = 10;
      if (local_3c == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = local_3c + 1;
        *local_3c = iVar2;
        FUN_006c043b(piVar6,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
      }
      local_4 = CONCAT31(local_4._1_3_,9);
      if (0 < DAT_00772240) {
        iVar2 = 0;
        do {
          FUN_0064a320((int)DAT_00772244 + iVar2);
          iVar7 = iVar7 + 1;
          iVar2 = iVar2 + 0x2c;
        } while (iVar7 < DAT_00772240);
      }
      if (DAT_00772244 != (int *)0x0) {
        FUN_00407f70(3);
      }
      DAT_00772248 = local_54;
      DAT_00772244 = piVar6;
    }
    FUN_0064a320(local_38);
    DAT_00772240 = DAT_00772240 + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
  }
  if (((*(int *)(param_1 + 0xb8) == 0 && *(int *)(param_1 + 0xbc) == 0) &&
      (*(uint *)(param_1 + 0xb0) < 0x46)) || (uVar1 = 1, DAT_0075d33c != 1)) {
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x170) = uVar1;
  if (*(int *)(param_1 + 0x70) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x68));
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  *(undefined4 *)(param_1 + 100) = 0;
  if (*(int *)(param_1 + 0x8c) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x84));
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0xa8) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0xa0));
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  uVar1 = param_2;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  if (DAT_0075d338 == 0) {
    iVar7 = FUN_00425010();
    *(undefined4 *)(iVar7 + 0x80) = 5;
    FUN_00647d10(iVar7,s_AIManager_0073f41c);
    *(undefined4 *)(iVar7 + 0x84) = 0x17;
    *(undefined4 *)(iVar7 + 0x100) = 0;
    if (DAT_0075d338 == 0) {
      iVar7 = FUN_00425010();
      *(undefined4 *)(iVar7 + 0x80) = 3;
      FUN_00647d10(iVar7,s_AIManager_Sort_All_0073f408);
      *(undefined4 *)(iVar7 + 0x84) = 0x10;
      if (DAT_0075d338 == 0) {
        iVar7 = FUN_00425010();
        *(undefined4 *)(iVar7 + 0x80) = 0xc;
        FUN_00647d10(iVar7,s_AIManager_Filter_Type_0073f3f0);
        *(undefined4 *)(iVar7 + 0x84) = 0x10;
        *(undefined4 *)(iVar7 + 0xf0) = 0;
        *(int *)(iVar7 + 0xf4) = DAT_00772240;
        *(undefined **)(iVar7 + 0x100) = &DAT_00772238;
      }
    }
  }
  switch(*(int *)(param_1 + 0xb0)) {
  case 0x46:
    if (DAT_0075d338 != 0) goto LAB_0056409d;
    iVar7 = FUN_00425010();
    *(undefined4 *)(iVar7 + 0x80) = 0xd;
    FUN_00647d10(iVar7,s_AIManager_Filter_Trigger_0073f3d4);
    *(undefined4 *)(iVar7 + 0x84) = 0x10;
    *(undefined4 *)(iVar7 + 0xf0) = 0;
    *(undefined4 *)(iVar7 + 0xf4) = DAT_00771fe4;
    *(undefined **)(iVar7 + 0x100) = &DAT_00771fdc;
    break;
  case 0x47:
    if (DAT_0075d338 != 0) goto LAB_0056409d;
    iVar7 = FUN_00425010();
    *(undefined4 *)(iVar7 + 0x80) = 0xd;
    FUN_00647d10(iVar7,s_AIManager_Filter_Action_0073f3bc);
    *(undefined4 *)(iVar7 + 0x84) = 0x10;
    *(undefined4 *)(iVar7 + 0xf0) = 0;
    *(undefined4 *)(iVar7 + 0xf4) = DAT_0077201c;
    *(undefined **)(iVar7 + 0x100) = &DAT_00772014;
    break;
  case 0x48:
    iVar7 = FUN_00435990();
    if (DAT_0075d338 != 0) goto LAB_0056409d;
    iVar2 = FUN_00425010();
    pcVar8 = s_AIManager_Filter_QuestLog_0073f3a0;
    goto LAB_00563f94;
  case 0x49:
    iVar7 = FUN_005265f0();
    if (DAT_0075d338 != 0) goto LAB_0056409d;
    iVar2 = FUN_00425010();
    pcVar8 = s_AIManager_Filter_InfoOverlay_0073f380;
LAB_00563f94:
    *(undefined4 *)(iVar2 + 0x80) = 0xd;
    FUN_00647d10(iVar2,pcVar8);
    *(undefined4 *)(iVar2 + 0x84) = 0x10;
    *(undefined4 *)(iVar2 + 0xf0) = 0;
    *(undefined4 *)(iVar2 + 0xf4) = *(undefined4 *)(iVar7 + 8);
LAB_0056400d:
    *(int *)(iVar2 + 0x100) = iVar7;
    break;
  default:
    iVar7 = *(int *)(DAT_0077203c + *(int *)(param_1 + 0xb0) * 4);
    if (DAT_0075d338 != 0) goto LAB_0056409d;
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 0xf;
    FUN_00647d10(iVar2,s_AIManager_Filter_Object_0073f368);
    *(undefined4 *)(iVar2 + 0x84) = 0x10;
    *(undefined4 *)(iVar2 + 0x104) = 1;
    goto LAB_0056400d;
  }
  if (DAT_0075d338 == 0) {
    iVar7 = FUN_00425010();
    *(undefined4 *)(iVar7 + 0x80) = 5;
    FUN_00647d10(iVar7,s_AIManager_Triggers_0073f354);
    *(undefined4 *)(iVar7 + 0x84) = 0x17;
    *(undefined4 *)(iVar7 + 0x100) = 0;
    if (DAT_0075d338 == 0) {
      iVar7 = FUN_00425010();
      *(undefined4 *)(iVar7 + 0x80) = 1;
      FUN_00647d10(iVar7,s_AIManager_Triggers_TriggerCount_0073f334);
      *(undefined4 *)(iVar7 + 0x84) = 2;
      *(undefined4 *)(iVar7 + 0xf0) = 0;
      *(undefined4 *)(iVar7 + 0xf4) = 0xffffffff;
    }
  }
LAB_0056409d:
  local_5c = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      if ((*(int *)(param_1 + 0x170) == 0) ||
         (iVar7 = FUN_0055d000(*(undefined4 *)(*(int *)(param_1 + 0x14) + local_5c * 4)), iVar7 == 0
         )) {
        local_50 = FUN_0055c470();
        FUN_00649920(&local_54,s_AIManager_Triggers_Trigger__d_0073f314,local_5c);
        local_4 = 0xb;
        param_2 = FUN_00649940();
        if (DAT_0075d338 == 0) {
          iVar7 = FUN_00425010();
          *(undefined4 *)(iVar7 + 0x80) = 5;
          FUN_00647d10(iVar7,param_2);
          *(undefined4 *)(iVar7 + 0x84) = 0x15;
          *(int *)(iVar7 + 0x100) = local_50;
        }
        local_4 = 0xffffffff;
        FUN_00649950();
        FUN_00649920(&local_58,s_AIManager_Triggers_Trigger__d_Na_0073f2f0,local_5c);
        local_4 = 0xc;
        param_2 = FUN_00649940();
        if (DAT_0075d338 == 0) {
          iVar7 = FUN_00425010();
          *(undefined4 *)(iVar7 + 0x80) = 4;
          FUN_00647d10(iVar7,param_2);
          *(undefined4 *)(iVar7 + 0x84) = 0;
        }
        local_4 = 0xffffffff;
        FUN_00649950();
        FUN_00649920(&local_4c,s_AIManager_Triggers_Trigger__d_Ty_0073f2cc,local_5c);
        local_4 = 0xd;
        param_2 = FUN_00649940();
        if (DAT_0075d338 == 0) {
          iVar7 = FUN_00425010();
          *(undefined4 *)(iVar7 + 0x80) = 0xc;
          FUN_00647d10(iVar7,param_2);
          *(undefined4 *)(iVar7 + 0x84) = 0;
          *(undefined4 *)(iVar7 + 0xf0) = 0;
          *(undefined4 *)(iVar7 + 0xf4) = DAT_00771fac;
          *(undefined **)(iVar7 + 0x100) = &DAT_00771fa4;
        }
        local_4 = 0xffffffff;
        FUN_00649950();
        piVar6 = *(int **)(*(int *)(*(int *)(param_1 + 0x14) + local_5c * 4) + 0x5c);
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 0xc))(uVar1);
        }
        iVar7 = *(int *)(param_1 + 100);
        if (*(int *)(param_1 + 0x6c) < iVar7 + 1) {
          if (*(int *)(param_1 + 0x74) == 0) {
            iVar3 = *(int *)(param_1 + 0x6c) / 2;
            iVar2 = 1;
            if (0 < iVar3) {
              iVar2 = iVar3;
            }
            if (iVar7 + iVar2 < 1) {
              iVar7 = 1;
            }
            else {
              if (iVar3 < 1) {
                iVar3 = 1;
              }
              iVar7 = iVar7 + iVar3;
            }
          }
          else {
            iVar7 = *(int *)(param_1 + 0x74) + iVar7;
          }
          pvVar4 = operator_new(iVar7 * 4);
          iVar2 = 0;
          if (0 < *(int *)(param_1 + 100)) {
            do {
              *(undefined4 *)((int)pvVar4 + iVar2 * 4) =
                   *(undefined4 *)(*(int *)(param_1 + 0x68) + iVar2 * 4);
              iVar2 = iVar2 + 1;
            } while (iVar2 < *(int *)(param_1 + 100));
          }
          FUN_006bf840(*(undefined4 *)(param_1 + 0x68));
          *(int *)(param_1 + 0x6c) = iVar7;
          *(void **)(param_1 + 0x68) = pvVar4;
        }
        *(int *)(*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100) * 4) = local_5c;
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
      }
      local_5c = local_5c + 1;
    } while (local_5c < *(int *)(param_1 + 0x10));
  }
  if (DAT_0075d338 == 0) {
    iVar7 = FUN_00425010();
    *(undefined4 *)(iVar7 + 0x80) = 5;
    FUN_00647d10(iVar7,s_AIManager_Actions_0073f2b8);
    *(undefined4 *)(iVar7 + 0x84) = 0x17;
    *(undefined4 *)(iVar7 + 0x100) = 0;
    if (DAT_0075d338 == 0) {
      iVar7 = FUN_00425010();
      *(undefined4 *)(iVar7 + 0x80) = 1;
      FUN_00647d10(iVar7,s_AIManager_Actions_ActionCount_0073f298);
      *(undefined4 *)(iVar7 + 0x84) = 2;
      *(undefined4 *)(iVar7 + 0xf0) = 0;
      *(undefined4 *)(iVar7 + 0xf4) = 0xffffffff;
    }
  }
  local_5c = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    do {
      if ((*(int *)(param_1 + 0x170) == 0) ||
         (iVar7 = FUN_0055d0f0(*(undefined4 *)(*(int *)(param_1 + 0x30) + local_5c * 4)), iVar7 == 0
         )) {
        local_4c = FUN_0055c4b0();
        FUN_00649920(&local_50,s_AIManager_Actions_Action__d_0073f27c,local_5c);
        local_4 = 0xe;
        param_2 = FUN_00649940();
        if (DAT_0075d338 == 0) {
          iVar7 = FUN_00425010();
          *(undefined4 *)(iVar7 + 0x80) = 5;
          FUN_00647d10(iVar7,param_2);
          *(undefined4 *)(iVar7 + 0x84) = 0x15;
          *(undefined4 *)(iVar7 + 0x100) = local_4c;
        }
        local_4 = 0xffffffff;
        FUN_00649950();
        FUN_00649920(&local_54,s_AIManager_Actions_Action__d_Name_0073f258,local_5c);
        local_4 = 0xf;
        param_2 = FUN_00649940();
        if (DAT_0075d338 == 0) {
          iVar7 = FUN_00425010();
          *(undefined4 *)(iVar7 + 0x80) = 4;
          FUN_00647d10(iVar7,param_2);
          *(undefined4 *)(iVar7 + 0x84) = 0;
        }
        local_4 = 0xffffffff;
        FUN_00649950();
        FUN_00649920(&local_58,s_AIManager_Actions_Action__d_Type_0073f234,local_5c);
        local_4 = 0x10;
        param_2 = FUN_00649940();
        if (DAT_0075d338 == 0) {
          iVar7 = FUN_00425010();
          *(undefined4 *)(iVar7 + 0x80) = 0xc;
          FUN_00647d10(iVar7,param_2);
          *(undefined4 *)(iVar7 + 0x84) = 0;
          *(undefined4 *)(iVar7 + 0xf0) = 0;
          *(undefined4 *)(iVar7 + 0xf4) = DAT_007721ec;
          *(undefined **)(iVar7 + 0x100) = &DAT_007721e4;
        }
        local_4 = 0xffffffff;
        FUN_00649950();
        piVar6 = *(int **)(*(int *)(*(int *)(param_1 + 0x30) + local_5c * 4) + 0x5c);
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 8))(uVar1);
        }
        FUN_00417a80(&local_5c);
      }
      local_5c = local_5c + 1;
    } while (local_5c < *(int *)(param_1 + 0x2c));
  }
  if (DAT_0075d338 == 0) {
    iVar7 = FUN_00425010();
    *(undefined4 *)(iVar7 + 0x80) = 5;
    FUN_00647d10(iVar7,s_AIManager_Links_0073f224);
    *(undefined4 *)(iVar7 + 0x84) = 0x17;
    *(undefined4 *)(iVar7 + 0x100) = 0;
  }
  FUN_00499e60(uVar1,s_AIManager_Links_LinkCount_0073f208,2,0,0xffffffff);
  local_5c = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    do {
      iVar7 = local_5c;
      if ((*(int *)(param_1 + 0x170) == 0) ||
         (iVar2 = FUN_0055d1e0(*(undefined4 *)(*(int *)(param_1 + 0x4c) + local_5c * 4)), iVar2 == 0
         )) {
        FUN_00649920(&param_2,s_AIManager_Links_Link__d_0073f1f0,iVar7);
        local_4 = 0x11;
        uVar5 = FUN_00649940(0,local_5c * 0x2c + DAT_007721d4);
        FUN_00474220(uVar1,uVar5);
        local_4 = 0xffffffff;
        FUN_00649950();
        FUN_00649920(&local_4c,s_AIManager_Links_Link__d_Test_thi_0073f1c8,local_5c);
        local_4 = 0x12;
        uVar5 = FUN_00649940(0x10);
        FUN_005669e0(uVar1,uVar5);
        local_4 = 0xffffffff;
        FUN_00649950();
        FUN_00649920(&local_50,s_AIManager_Links_Link__d_Repeats_0073f1a8,local_5c);
        local_4 = 0x13;
        uVar5 = FUN_00649940(0);
        FUN_005669e0(uVar1,uVar5);
        local_4 = 0xffffffff;
        FUN_00649950();
        FUN_00649920(&local_54,s_AIManager_Links_Link__d_ActiveSt_0073f45c,local_5c);
        local_4 = 0x14;
        uVar5 = FUN_00649940(&DAT_00771f88,0x20);
        FUN_00496020(uVar1,uVar5);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (1 < *(int *)(*(int *)(*(int *)(param_1 + 0x4c) + local_5c * 4) + 0x70)) {
          FUN_00649920(&local_58,s_AIManager_Links_Link__d_Triggers_0073f17c,local_5c);
          local_4 = 0x15;
          uVar5 = FUN_00649940(&DAT_00771ff8,0);
          FUN_00496020(uVar1,uVar5);
          local_4 = 0xffffffff;
          FUN_00649950();
        }
        FUN_00649920(local_48,s_AIManager_Links_Link__d_TriggerC_0073f154,local_5c);
        local_4 = 0x16;
        uVar5 = FUN_00649940(0,0,0xffffffff);
        FUN_00499e60(uVar1,uVar5);
        local_4 = 0xffffffff;
        FUN_00649950();
        FUN_00649920(local_44,s_AIManager_Links_Link__d_ActionCo_0073f130,local_5c);
        local_4 = 0x17;
        uVar5 = FUN_00649940(0,0,0xffffffff);
        FUN_00499e60(uVar1,uVar5);
        local_4 = 0xffffffff;
        FUN_00649950();
        iVar7 = 0;
        if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0x4c) + local_5c * 4) + 0x70)) {
          do {
            FUN_00649920(local_40,s_AIManager_Links_Link__d_Trigger_I_0073f108,local_5c,iVar7);
            local_4 = 0x18;
            uVar5 = FUN_00649940(&DAT_00771fdc,0);
            FUN_00496020(uVar1,uVar5);
            local_4 = 0xffffffff;
            FUN_00649950();
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(*(int *)(*(int *)(param_1 + 0x4c) + local_5c * 4) + 0x70));
        }
        iVar7 = 0;
        if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0x4c) + local_5c * 4) + 0x8c)) {
          do {
            FUN_00649920(&local_3c,s_AIManager_Links_Link__d_Action_I_0073f0e0,local_5c,iVar7);
            local_4 = 0x19;
            uVar5 = FUN_00649940(&DAT_00772014,0);
            FUN_00496020(uVar1,uVar5);
            local_4 = 0xffffffff;
            FUN_00649950();
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(*(int *)(*(int *)(param_1 + 0x4c) + local_5c * 4) + 0x8c));
        }
        FUN_00417a80(&local_5c);
        iVar7 = local_5c;
      }
      local_5c = iVar7 + 1;
    } while (local_5c < *(int *)(param_1 + 0x48));
  }
  ExceptionList = local_c;
  return;
}

