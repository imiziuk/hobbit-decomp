
void FUN_005605e0(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dabd5;
  local_c = ExceptionList;
  piVar4 = (int *)0x0;
  ExceptionList = &local_c;
  if (DAT_00771fb8 == 0) {
    ExceptionList = &local_c;
    if (DAT_00771fb0 != (int *)0x0) {
      ExceptionList = &local_c;
      FUN_00407f70(3);
    }
    DAT_00771fb0 = (int *)0x0;
    DAT_00771fb4 = 0;
  }
  DAT_00771fac = 0;
  uVar1 = FUN_00649b20(&DAT_00720670);
  local_4 = 0;
  piVar3 = DAT_00771fb0;
  iVar2 = DAT_00771fb4;
  if (DAT_00771fb4 < DAT_00771fac + 1) {
    if (DAT_00771fbc == 0) {
      iVar2 = DAT_00771fb4 / 2;
      iVar6 = 1;
      if (0 < iVar2) {
        iVar6 = iVar2;
      }
      if (iVar6 + DAT_00771fac < 1) {
        iVar2 = 1;
      }
      else {
        if (iVar2 < 1) {
          iVar2 = 1;
        }
        iVar2 = iVar2 + DAT_00771fac;
      }
    }
    else {
      iVar2 = DAT_00771fac + DAT_00771fbc;
    }
    piVar3 = (int *)operator_new(iVar2 * 0x2c + 4);
    local_4._0_1_ = 1;
    if (piVar3 != (int *)0x0) {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar2;
      FUN_006c043b(piVar4,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
    }
    iVar6 = 0;
    local_4 = (uint)local_4._1_3_ << 8;
    if (0 < DAT_00771fac) {
      iVar5 = 0;
      do {
        FUN_0064a320(iVar5 + (int)DAT_00771fb0);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < DAT_00771fac);
    }
    piVar3 = piVar4;
    if (DAT_00771fb0 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_00771fb4 = iVar2;
  DAT_00771fb0 = piVar3;
  FUN_0064a320(uVar1);
  DAT_00771fac = DAT_00771fac + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Gold_Amount_0073efa8);
  local_4 = 2;
  piVar4 = DAT_00771fb0;
  iVar2 = DAT_00771fb4;
  if (DAT_00771fb4 < DAT_00771fac + 1) {
    if (DAT_00771fbc == 0) {
      iVar2 = DAT_00771fb4 / 2;
      iVar6 = 1;
      if (0 < iVar2) {
        iVar6 = iVar2;
      }
      if (iVar6 + DAT_00771fac < 1) {
        iVar2 = 1;
      }
      else {
        if (iVar2 < 1) {
          iVar2 = 1;
        }
        iVar2 = DAT_00771fac + iVar2;
      }
    }
    else {
      iVar2 = DAT_00771fac + DAT_00771fbc;
    }
    piVar3 = (int *)operator_new(iVar2 * 0x2c + 4);
    local_4._0_1_ = 3;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar2;
      FUN_006c043b(piVar4,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
    }
    iVar6 = 0;
    local_4 = CONCAT31(local_4._1_3_,2);
    if (0 < DAT_00771fac) {
      iVar5 = 0;
      do {
        FUN_0064a320(iVar5 + (int)DAT_00771fb0);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < DAT_00771fac);
    }
    if (DAT_00771fb0 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_00771fb4 = iVar2;
  DAT_00771fb0 = piVar4;
  FUN_0064a320(uVar1);
  DAT_00771fac = DAT_00771fac + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Conversation_Completed_0073ef90);
  local_4 = 4;
  piVar4 = DAT_00771fb0;
  iVar2 = DAT_00771fb4;
  if (DAT_00771fb4 < DAT_00771fac + 1) {
    if (DAT_00771fbc == 0) {
      iVar2 = DAT_00771fb4 / 2;
      iVar6 = 1;
      if (0 < iVar2) {
        iVar6 = iVar2;
      }
      if (iVar6 + DAT_00771fac < 1) {
        iVar2 = 1;
      }
      else {
        if (iVar2 < 1) {
          iVar2 = 1;
        }
        iVar2 = DAT_00771fac + iVar2;
      }
    }
    else {
      iVar2 = DAT_00771fac + DAT_00771fbc;
    }
    piVar3 = (int *)operator_new(iVar2 * 0x2c + 4);
    local_4._0_1_ = 5;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar2;
      FUN_006c043b(piVar4,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
    }
    iVar6 = 0;
    local_4 = CONCAT31(local_4._1_3_,4);
    if (0 < DAT_00771fac) {
      iVar5 = 0;
      do {
        FUN_0064a320(iVar5 + (int)DAT_00771fb0);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < DAT_00771fac);
    }
    if (DAT_00771fb0 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_00771fb4 = iVar2;
  DAT_00771fb0 = piVar4;
  FUN_0064a320(uVar1);
  DAT_00771fac = DAT_00771fac + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Character_Enters_Volume_0073ef78);
  local_4 = 6;
  piVar4 = DAT_00771fb0;
  iVar2 = DAT_00771fb4;
  if (DAT_00771fb4 < DAT_00771fac + 1) {
    if (DAT_00771fbc == 0) {
      iVar2 = DAT_00771fb4 / 2;
      iVar6 = 1;
      if (0 < iVar2) {
        iVar6 = iVar2;
      }
      if (iVar6 + DAT_00771fac < 1) {
        iVar2 = 1;
      }
      else {
        if (iVar2 < 1) {
          iVar2 = 1;
        }
        iVar2 = DAT_00771fac + iVar2;
      }
    }
    else {
      iVar2 = DAT_00771fac + DAT_00771fbc;
    }
    piVar3 = (int *)operator_new(iVar2 * 0x2c + 4);
    local_4._0_1_ = 7;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar2;
      FUN_006c043b(piVar4,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
    }
    iVar6 = 0;
    local_4 = CONCAT31(local_4._1_3_,6);
    if (0 < DAT_00771fac) {
      iVar5 = 0;
      do {
        FUN_0064a320(iVar5 + (int)DAT_00771fb0);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < DAT_00771fac);
    }
    if (DAT_00771fb0 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_00771fb4 = iVar2;
  DAT_00771fb0 = piVar4;
  FUN_0064a320(uVar1);
  DAT_00771fac = DAT_00771fac + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Chest_Opened_0073ef68);
  local_4 = 8;
  piVar4 = DAT_00771fb0;
  iVar2 = DAT_00771fb4;
  if (DAT_00771fb4 < DAT_00771fac + 1) {
    if (DAT_00771fbc == 0) {
      iVar2 = DAT_00771fb4 / 2;
      iVar6 = 1;
      if (0 < iVar2) {
        iVar6 = iVar2;
      }
      if (iVar6 + DAT_00771fac < 1) {
        iVar2 = 1;
      }
      else {
        if (iVar2 < 1) {
          iVar2 = 1;
        }
        iVar2 = DAT_00771fac + iVar2;
      }
    }
    else {
      iVar2 = DAT_00771fac + DAT_00771fbc;
    }
    piVar3 = (int *)operator_new(iVar2 * 0x2c + 4);
    local_4._0_1_ = 9;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar2;
      FUN_006c043b(piVar4,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
    }
    iVar6 = 0;
    local_4 = CONCAT31(local_4._1_3_,8);
    if (0 < DAT_00771fac) {
      iVar5 = 0;
      do {
        FUN_0064a320(iVar5 + (int)DAT_00771fb0);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < DAT_00771fac);
    }
    if (DAT_00771fb0 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_00771fb4 = iVar2;
  DAT_00771fb0 = piVar4;
  FUN_0064a320(uVar1);
  DAT_00771fac = DAT_00771fac + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Timed_Random_0073ef58);
  local_4 = 10;
  piVar4 = DAT_00771fb0;
  iVar2 = DAT_00771fb4;
  if (DAT_00771fb4 < DAT_00771fac + 1) {
    if (DAT_00771fbc == 0) {
      iVar2 = DAT_00771fb4 / 2;
      iVar6 = 1;
      if (0 < iVar2) {
        iVar6 = iVar2;
      }
      if (iVar6 + DAT_00771fac < 1) {
        iVar2 = 1;
      }
      else {
        if (iVar2 < 1) {
          iVar2 = 1;
        }
        iVar2 = DAT_00771fac + iVar2;
      }
    }
    else {
      iVar2 = DAT_00771fac + DAT_00771fbc;
    }
    piVar3 = (int *)operator_new(iVar2 * 0x2c + 4);
    local_4._0_1_ = 0xb;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar2;
      FUN_006c043b(piVar4,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
    }
    iVar6 = 0;
    local_4 = CONCAT31(local_4._1_3_,10);
    if (0 < DAT_00771fac) {
      iVar5 = 0;
      do {
        FUN_0064a320(iVar5 + (int)DAT_00771fb0);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < DAT_00771fac);
    }
    if (DAT_00771fb0 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_00771fb4 = iVar2;
  DAT_00771fb0 = piVar4;
  FUN_0064a320(uVar1);
  DAT_00771fac = DAT_00771fac + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_NPC_Hit_0073ef50);
  local_4 = 0xc;
  piVar4 = DAT_00771fb0;
  iVar2 = DAT_00771fb4;
  if (DAT_00771fb4 < DAT_00771fac + 1) {
    if (DAT_00771fbc == 0) {
      iVar2 = DAT_00771fb4 / 2;
      iVar6 = 1;
      if (0 < iVar2) {
        iVar6 = iVar2;
      }
      if (iVar6 + DAT_00771fac < 1) {
        iVar2 = 1;
      }
      else {
        if (iVar2 < 1) {
          iVar2 = 1;
        }
        iVar2 = DAT_00771fac + iVar2;
      }
    }
    else {
      iVar2 = DAT_00771fac + DAT_00771fbc;
    }
    piVar3 = (int *)operator_new(iVar2 * 0x2c + 4);
    local_4._0_1_ = 0xd;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar2;
      FUN_006c043b(piVar4,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
    }
    iVar6 = 0;
    local_4 = CONCAT31(local_4._1_3_,0xc);
    if (0 < DAT_00771fac) {
      iVar5 = 0;
      do {
        FUN_0064a320(iVar5 + (int)DAT_00771fb0);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < DAT_00771fac);
    }
    if (DAT_00771fb0 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_00771fb4 = iVar2;
  DAT_00771fb0 = piVar4;
  FUN_0064a320(uVar1);
  DAT_00771fac = DAT_00771fac + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_NPC_Changes_State_0073ef3c);
  local_4 = 0xe;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_NPC_Begins_Action_0073ef28);
  local_4 = 0xf;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Bilbo_Has_Item_0073ef18);
  local_4 = 0x10;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Conversation_Begins_0073ef04);
  local_4 = 0x11;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_NPC_Dies_0073eef8);
  local_4 = 0x12;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Web_Breaks_0073eeec);
  local_4 = 0x13;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_NPC_Finishes_GoalList_0073eed4);
  local_4 = 0x14;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Switch_Is_On_0073eec4);
  local_4 = 0x15;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Character_Playing_Animation_0073eea8);
  local_4 = 0x16;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_NPCInState_0073ee9c);
  local_4 = 0x17;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_NPC_Begins_Goallist_0073ee88);
  local_4 = 0x18;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_World_Trigger_Toggled_0073ee70);
  local_4 = 0x19;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Cinema_Finished_0073ee60);
  local_4 = 0x1a;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Character_Damages_Character_0073ee44);
  local_4 = 0x1b;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Cinema_Begins_0073ee34);
  local_4 = 0x1c;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Cinema_Action_0073ee24);
  local_4 = 0x1d;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Switch_Hit_0073ee18);
  local_4 = 0x1e;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Quest_Completed_0073ee08);
  local_4 = 0x1f;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Object_In_Volume_0073edf4);
  local_4 = 0x20;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_NPC_Can_Sense_Character_0073eddc);
  local_4 = 0x21;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_FXObject_Starts_0073edcc);
  local_4 = 0x22;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_FXObject_Finishes_0073edb8);
  local_4 = 0x23;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Rigid_Anim_Starts_0073eda4);
  local_4 = 0x24;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Rigid_Anim_Finishes_0073ed90);
  local_4 = 0x25;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Bilbo_Picks_Up_Item_0073ed7c);
  local_4 = 0x26;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Bilbo_Jumps_On_Vine_0073ed68);
  local_4 = 0x27;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Bilbo_Invisible_007273bc);
  local_4 = 0x28;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Rigid_Anim_Playing_0073ed54);
  local_4 = 0x29;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

