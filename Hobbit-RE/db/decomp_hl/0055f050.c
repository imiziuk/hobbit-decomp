
void FUN_0055f050(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *local_70;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006daa61;
  local_c = ExceptionList;
  piVar4 = (int *)0x0;
  ExceptionList = &local_c;
  if (DAT_007721f8 == 0) {
    ExceptionList = &local_c;
    if (DAT_007721f0 != (int *)0x0) {
      ExceptionList = &local_c;
      FUN_00407f70(3);
    }
    DAT_007721f0 = (int *)0x0;
    DAT_007721f4 = 0;
  }
  DAT_007721ec = 0;
  uVar1 = FUN_00649b20(&DAT_00720670);
  local_4 = 0;
  piVar3 = DAT_007721f0;
  iVar2 = DAT_007721f4;
  if (DAT_007721f4 < DAT_007721ec + 1) {
    if (DAT_007721fc == 0) {
      iVar2 = DAT_007721f4 / 2;
      iVar6 = 1;
      if (0 < iVar2) {
        iVar6 = iVar2;
      }
      if (iVar6 + DAT_007721ec < 1) {
        iVar2 = 1;
      }
      else {
        if (iVar2 < 1) {
          iVar2 = 1;
        }
        iVar2 = iVar2 + DAT_007721ec;
      }
    }
    else {
      iVar2 = DAT_007721ec + DAT_007721fc;
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
    if (0 < DAT_007721ec) {
      iVar5 = 0;
      do {
        FUN_0064a320(iVar5 + (int)DAT_007721f0);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < DAT_007721ec);
    }
    piVar3 = piVar4;
    if (DAT_007721f0 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_007721f4 = iVar2;
  DAT_007721f0 = piVar3;
  FUN_0064a320(uVar1);
  DAT_007721ec = DAT_007721ec + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Trigger_Switch_0073ed44);
  local_4 = 2;
  piVar4 = DAT_007721f0;
  iVar2 = DAT_007721f4;
  if (DAT_007721f4 < DAT_007721ec + 1) {
    if (DAT_007721fc == 0) {
      iVar2 = DAT_007721f4 / 2;
      iVar6 = 1;
      if (0 < iVar2) {
        iVar6 = iVar2;
      }
      if (iVar6 + DAT_007721ec < 1) {
        iVar2 = 1;
      }
      else {
        if (iVar2 < 1) {
          iVar2 = 1;
        }
        iVar2 = DAT_007721ec + iVar2;
      }
    }
    else {
      iVar2 = DAT_007721ec + DAT_007721fc;
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
    if (0 < DAT_007721ec) {
      iVar5 = 0;
      do {
        FUN_0064a320(iVar5 + (int)DAT_007721f0);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < DAT_007721ec);
    }
    if (DAT_007721f0 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_007721f4 = iVar2;
  DAT_007721f0 = piVar4;
  FUN_0064a320(uVar1);
  DAT_007721ec = DAT_007721ec + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Set_Team_0073ed38);
  local_4 = 4;
  piVar4 = DAT_007721f0;
  iVar2 = DAT_007721f4;
  if (DAT_007721f4 < DAT_007721ec + 1) {
    if (DAT_007721fc == 0) {
      iVar2 = DAT_007721f4 / 2;
      iVar6 = 1;
      if (0 < iVar2) {
        iVar6 = iVar2;
      }
      if (iVar6 + DAT_007721ec < 1) {
        iVar2 = 1;
      }
      else {
        if (iVar2 < 1) {
          iVar2 = 1;
        }
        iVar2 = DAT_007721ec + iVar2;
      }
    }
    else {
      iVar2 = DAT_007721ec + DAT_007721fc;
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
    if (0 < DAT_007721ec) {
      iVar5 = 0;
      do {
        FUN_0064a320(iVar5 + (int)DAT_007721f0);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < DAT_007721ec);
    }
    if (DAT_007721f0 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_007721f4 = iVar2;
  DAT_007721f0 = piVar4;
  FUN_0064a320(uVar1);
  DAT_007721ec = DAT_007721ec + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Set_Next_Conversation_0073ed20);
  local_4 = 6;
  piVar4 = DAT_007721f0;
  iVar2 = DAT_007721f4;
  if (DAT_007721f4 < DAT_007721ec + 1) {
    if (DAT_007721fc == 0) {
      iVar2 = DAT_007721f4 / 2;
      iVar6 = 1;
      if (0 < iVar2) {
        iVar6 = iVar2;
      }
      if (iVar6 + DAT_007721ec < 1) {
        iVar2 = 1;
      }
      else {
        if (iVar2 < 1) {
          iVar2 = 1;
        }
        iVar2 = DAT_007721ec + iVar2;
      }
    }
    else {
      iVar2 = DAT_007721ec + DAT_007721fc;
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
    if (0 < DAT_007721ec) {
      iVar5 = 0;
      do {
        FUN_0064a320(iVar5 + (int)DAT_007721f0);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < DAT_007721ec);
    }
    if (DAT_007721f0 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_007721f4 = iVar2;
  DAT_007721f0 = piVar4;
  FUN_0064a320(uVar1);
  DAT_007721ec = DAT_007721ec + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Set_Goal_List_0073ed10);
  local_4 = 8;
  piVar4 = DAT_007721f0;
  iVar2 = DAT_007721f4;
  if (DAT_007721f4 < DAT_007721ec + 1) {
    if (DAT_007721fc == 0) {
      iVar2 = DAT_007721f4 / 2;
      iVar6 = 1;
      if (0 < iVar2) {
        iVar6 = iVar2;
      }
      if (iVar6 + DAT_007721ec < 1) {
        iVar2 = 1;
      }
      else {
        if (iVar2 < 1) {
          iVar2 = 1;
        }
        iVar2 = DAT_007721ec + iVar2;
      }
    }
    else {
      iVar2 = DAT_007721ec + DAT_007721fc;
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
    if (0 < DAT_007721ec) {
      iVar5 = 0;
      do {
        FUN_0064a320(iVar5 + (int)DAT_007721f0);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < DAT_007721ec);
    }
    if (DAT_007721f0 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_007721f4 = iVar2;
  DAT_007721f0 = piVar4;
  FUN_0064a320(uVar1);
  DAT_007721ec = DAT_007721ec + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_NONE___this_type_Removed_0073ecf4);
  local_4 = 10;
  piVar4 = DAT_007721f0;
  iVar2 = DAT_007721f4;
  if (DAT_007721f4 < DAT_007721ec + 1) {
    if (DAT_007721fc == 0) {
      iVar2 = DAT_007721f4 / 2;
      iVar6 = 1;
      if (0 < iVar2) {
        iVar6 = iVar2;
      }
      if (iVar6 + DAT_007721ec < 1) {
        iVar2 = 1;
      }
      else {
        if (iVar2 < 1) {
          iVar2 = 1;
        }
        iVar2 = DAT_007721ec + iVar2;
      }
    }
    else {
      iVar2 = DAT_007721ec + DAT_007721fc;
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
    if (0 < DAT_007721ec) {
      iVar5 = 0;
      do {
        FUN_0064a320(iVar5 + (int)DAT_007721f0);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < DAT_007721ec);
    }
    if (DAT_007721f0 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_007721f4 = iVar2;
  DAT_007721f0 = piVar4;
  FUN_0064a320(uVar1);
  DAT_007721ec = DAT_007721ec + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_NONE___this_type_Removed_0073ecf4);
  local_4 = 0xc;
  piVar4 = DAT_007721f0;
  iVar2 = DAT_007721f4;
  if (DAT_007721f4 < DAT_007721ec + 1) {
    if (DAT_007721fc == 0) {
      iVar2 = DAT_007721f4 / 2;
      iVar6 = 1;
      if (0 < iVar2) {
        iVar6 = iVar2;
      }
      if (iVar6 + DAT_007721ec < 1) {
        iVar2 = 1;
      }
      else {
        if (iVar2 < 1) {
          iVar2 = 1;
        }
        iVar2 = DAT_007721ec + iVar2;
      }
    }
    else {
      iVar2 = DAT_007721ec + DAT_007721fc;
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
    if (0 < DAT_007721ec) {
      iVar5 = 0;
      do {
        FUN_0064a320(iVar5 + (int)DAT_007721f0);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < DAT_007721ec);
    }
    if (DAT_007721f0 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_007721f4 = iVar2;
  DAT_007721f0 = piVar4;
  FUN_0064a320(uVar1);
  DAT_007721ec = DAT_007721ec + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Play_Dialog_0073ece8);
  local_4 = 0xe;
  piVar4 = DAT_007721f0;
  iVar2 = DAT_007721f4;
  if (DAT_007721f4 < DAT_007721ec + 1) {
    if (DAT_007721fc == 0) {
      iVar2 = DAT_007721f4 / 2;
      iVar6 = 1;
      if (0 < iVar2) {
        iVar6 = iVar2;
      }
      if (iVar6 + DAT_007721ec < 1) {
        iVar2 = 1;
      }
      else {
        if (iVar2 < 1) {
          iVar2 = 1;
        }
        iVar2 = DAT_007721ec + iVar2;
      }
    }
    else {
      iVar2 = DAT_007721ec + DAT_007721fc;
    }
    piVar3 = (int *)operator_new(iVar2 * 0x2c + 4);
    local_4._0_1_ = 0xf;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar2;
      FUN_006c043b(piVar4,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
    }
    iVar6 = 0;
    local_4 = CONCAT31(local_4._1_3_,0xe);
    if (0 < DAT_007721ec) {
      iVar5 = 0;
      do {
        FUN_0064a320(iVar5 + (int)DAT_007721f0);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < DAT_007721ec);
    }
    if (DAT_007721f0 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_007721f4 = iVar2;
  DAT_007721f0 = piVar4;
  FUN_0064a320(uVar1);
  DAT_007721ec = DAT_007721ec + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Play_Dialog_From_List_0073ecd0);
  local_4 = 0x10;
  piVar4 = DAT_007721f0;
  iVar2 = DAT_007721f4;
  if (DAT_007721f4 < DAT_007721ec + 1) {
    if (DAT_007721fc == 0) {
      iVar2 = DAT_007721f4 / 2;
      iVar6 = 1;
      if (0 < iVar2) {
        iVar6 = iVar2;
      }
      if (iVar6 + DAT_007721ec < 1) {
        iVar2 = 1;
      }
      else {
        if (iVar2 < 1) {
          iVar2 = 1;
        }
        iVar2 = DAT_007721ec + iVar2;
      }
    }
    else {
      iVar2 = DAT_007721ec + DAT_007721fc;
    }
    piVar3 = (int *)operator_new(iVar2 * 0x2c + 4);
    local_4._0_1_ = 0x11;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar2;
      FUN_006c043b(piVar4,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
    }
    iVar6 = 0;
    local_4 = CONCAT31(local_4._1_3_,0x10);
    if (0 < DAT_007721ec) {
      iVar5 = 0;
      do {
        FUN_0064a320(iVar5 + (int)DAT_007721f0);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < DAT_007721ec);
    }
    if (DAT_007721f0 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_007721f4 = iVar2;
  DAT_007721f0 = piVar4;
  FUN_0064a320(uVar1);
  DAT_007721ec = DAT_007721ec + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Set_Inventory_0073ecc0);
  local_4 = 0x12;
  piVar4 = DAT_007721f0;
  iVar2 = DAT_007721f4;
  if (DAT_007721f4 < DAT_007721ec + 1) {
    if (DAT_007721fc == 0) {
      iVar2 = DAT_007721f4 / 2;
      iVar6 = 1;
      if (0 < iVar2) {
        iVar6 = iVar2;
      }
      if (iVar6 + DAT_007721ec < 1) {
        iVar2 = 1;
      }
      else {
        if (iVar2 < 1) {
          iVar2 = 1;
        }
        iVar2 = DAT_007721ec + iVar2;
      }
    }
    else {
      iVar2 = DAT_007721ec + DAT_007721fc;
    }
    piVar3 = (int *)operator_new(iVar2 * 0x2c + 4);
    local_4._0_1_ = 0x13;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar2;
      FUN_006c043b(piVar4,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
    }
    iVar6 = 0;
    local_4 = CONCAT31(local_4._1_3_,0x12);
    if (0 < DAT_007721ec) {
      iVar5 = 0;
      do {
        FUN_0064a320(iVar5 + (int)DAT_007721f0);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < DAT_007721ec);
    }
    if (DAT_007721f0 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_007721f4 = iVar2;
  DAT_007721f0 = piVar4;
  FUN_0064a320(uVar1);
  DAT_007721ec = DAT_007721ec + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Trigger_Load_Layer_0073ecac);
  local_4 = 0x14;
  if (DAT_007721f4 < DAT_007721ec + 1) {
    if (DAT_007721fc == 0) {
      iVar2 = DAT_007721f4 / 2;
      iVar6 = 1;
      if (0 < iVar2) {
        iVar6 = iVar2;
      }
      if (iVar6 + DAT_007721ec < 1) {
        iVar2 = 1;
      }
      else {
        if (iVar2 < 1) {
          iVar2 = 1;
        }
        iVar2 = iVar2 + DAT_007721ec;
      }
    }
    else {
      iVar2 = DAT_007721ec + DAT_007721fc;
    }
    piVar4 = (int *)operator_new(iVar2 * 0x2c + 4);
    local_4._0_1_ = 0x15;
    if (piVar4 == (int *)0x0) {
      local_70 = (int *)0x0;
    }
    else {
      local_70 = piVar4 + 1;
      *piVar4 = iVar2;
      FUN_006c043b(local_70,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
    }
    iVar6 = 0;
    local_4 = CONCAT31(local_4._1_3_,0x14);
    if (0 < DAT_007721ec) {
      iVar5 = 0;
      do {
        FUN_0064a320(iVar5 + (int)DAT_007721f0);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < DAT_007721ec);
    }
    if (DAT_007721f0 != (int *)0x0) {
      FUN_00407f70(3);
    }
    DAT_007721f0 = local_70;
    DAT_007721f4 = iVar2;
  }
  FUN_0064a320(uVar1);
  DAT_007721ec = DAT_007721ec + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Spawn_NPC_0073eca0);
  local_4 = 0x16;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Toggle_Link_0073ec94);
  local_4 = 0x17;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Set_State_0073ec88);
  local_4 = 0x18;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Activate_Trigger_0073ec74);
  local_4 = 0x19;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Move_Object_0073ec68);
  local_4 = 0x1a;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Modify_Health_0073ec58);
  local_4 = 0x1b;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Spawn_Courage_Points_0073ec40);
  local_4 = 0x1c;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Trigger_Info_Overlay_0073ec28);
  local_4 = 0x1d;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_End_Level_0073ec1c);
  local_4 = 0x1e;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Start_Cinema_0073ec0c);
  local_4 = 0x1f;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Set_Triggered_Cinema_0073ebf4);
  local_4 = 0x20;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Give_Bilbo_Quest_0073ebe0);
  local_4 = 0x21;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Set_NPCs_Idle_Anim_0073ebcc);
  local_4 = 0x22;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Set_NPC_Senses_0073ebbc);
  local_4 = 0x23;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Set_NPC_State_Control_0073eba4);
  local_4 = 0x24;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Set_NPC_Phys_Control_0073eb8c);
  local_4 = 0x25;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Set_NPC_Collision_0073eb78);
  local_4 = 0x26;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Set_NPC_Render_0073eb68);
  local_4 = 0x27;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Finish_Sub_Quest_0073eb54);
  local_4 = 0x28;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Camera_Fade_0073eb48);
  local_4 = 0x29;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Start_FXObject_0073eb38);
  local_4 = 0x2a;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Stop_FXObject_0073eb28);
  local_4 = 0x2b;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Start_Rigid_Instance_Anim_0073eb0c);
  local_4 = 0x2c;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Finish_Main_Quest_0073eaf8);
  local_4 = 0x2d;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Set_Rope_Length_0073eae8);
  local_4 = 0x2e;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Set_Object_Collsion_Flags_0073eacc);
  local_4 = 0x2f;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Set_Invulnerable_0073eab8);
  local_4 = 0x30;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Make_Beorn_Cross_Bridge_0073eaa0);
  local_4 = 0x31;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Toggle_NPC_Draw_Health_Meter_0073ea80);
  local_4 = 0x32;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Activate_Music_Trigger_0073ea68);
  local_4 = 0x33;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Set_NPC_RootToPosition_0073ea50);
  local_4 = 0x34;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Swap_Characters_0073ea40);
  local_4 = 0x35;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Toggle_Material_Animation_0073ea24);
  local_4 = 0x36;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Kill_Bilbo_Silently_0073ea10);
  local_4 = 0x37;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Activate_Ambient_Audio_Trigger_0073e9f0);
  local_4 = 0x38;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Enable_Audio_Emitter_0073e9d8);
  local_4 = 0x39;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Disable_Audio_Emitter_0073e9c0);
  local_4 = 0x3a;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Set_Screen_Distort_Amplitude_0073e9a0);
  local_4 = 0x3b;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Hide_Unhide_Rigid_Instance_0073e984);
  local_4 = 0x3c;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Set_Run_AI_0073e978);
  local_4 = 0x3d;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Set_Render_Props_0073e964);
  local_4 = 0x3e;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Set_Rigid_Instance_Hoistable_0073e944);
  local_4 = 0x3f;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

