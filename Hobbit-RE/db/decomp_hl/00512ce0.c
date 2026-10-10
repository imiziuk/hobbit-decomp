
void __fastcall FUN_00512ce0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_184;
  undefined4 local_180;
  int local_178;
  int local_174;
  int local_170;
  undefined4 local_168;
  undefined1 local_13c [152];
  undefined1 local_a4 [152];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d70c4;
  local_c = ExceptionList;
  local_178 = 0;
  local_174 = 0;
  local_184 = 0x1a5;
  ExceptionList = &local_c;
  do {
    if (*(int *)(param_1 + 0x1f60) <= local_178) break;
    iVar3 = 0;
    local_170 = 0;
    do {
      if (*(int *)(param_1 + 0x1f60) <= local_178) break;
      FUN_006499d0();
      local_4 = 0;
      FUN_0064afa0();
      local_4._0_1_ = 1;
      FUN_0064afa0();
      iVar1 = *(int *)(param_1 + -0x14 + (local_184 + iVar3) * 4);
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_0064a2e0(s_IDS_NULL_00731f24);
      uVar4 = 0x55;
      uVar5 = 0x55;
      local_180 = 1;
      if (iVar1 == 6) {
        FUN_0064a2e0(s_IDS_CONTROLS_JUMP_00732f5c);
        uVar4 = 1;
        uVar5 = 2;
      }
      else if (iVar1 == 7) {
        FUN_0064a2e0(s_IDS_CONTROLS_ATTACK_00732f48);
        uVar4 = 4;
        uVar5 = 5;
      }
      else if (iVar1 == 8) {
        FUN_0064a2e0(s_IDS_CONTROLS_USE_00732f34);
        uVar4 = 7;
        uVar5 = 8;
      }
      else if (iVar1 == 9) {
        FUN_0064a2e0(s_IDS_CONTROLS_SNEAK_00732f20);
        uVar4 = 0xd;
        uVar5 = 0xe;
      }
      else if (iVar1 == 10) {
        FUN_0064a2e0(s_IDS_CONTROLS_TARGET_00732f0c);
        uVar4 = 0x10;
        uVar5 = 0x11;
      }
      else if (iVar1 == 0xd) {
        FUN_0064a2e0(s_IDS_CONTROLS_TOGGLE_RING_00732ef0);
        uVar4 = 0x13;
        uVar5 = 0x14;
      }
      else if (iVar1 == 0xb) {
        FUN_0064a2e0(s_IDS_CONTROLS_TOGGLE_VIEW_00732ed4);
        uVar4 = 0x16;
        uVar5 = 0x17;
      }
      else if (iVar1 == 0xc) {
        FUN_0064a2e0(s_IDS_CONTROLS_MOUSE_LOOK_00733534);
        uVar4 = 0x18;
        uVar5 = 0x19;
      }
      else if (iVar1 == 0xe) {
        FUN_0064a2e0(s_IDS_CONTROLS_WEAPON_1_00732ebc);
        uVar4 = 0x1b;
        uVar5 = 0x1c;
      }
      else if (iVar1 == 0xf) {
        FUN_0064a2e0(s_IDS_CONTROLS_WEAPON_2_00732ea4);
        uVar4 = 0x1e;
        uVar5 = 0x1f;
      }
      else if (iVar1 == 0x10) {
        FUN_0064a2e0(s_IDS_CONTROLS_WEAPON_3_00732e8c);
        uVar4 = 0x21;
        uVar5 = 0x22;
      }
      else if (iVar1 == 2) {
        FUN_0064a2e0(s_IDS_CONTROLS_STRAFE_L_0073351c);
        uVar4 = 0x34;
        uVar5 = 0x3a;
      }
      else if (iVar1 == 3) {
        FUN_0064a2e0(s_IDS_CONTROLS_STRAFE_R_00733504);
        uVar4 = 0x35;
        uVar5 = 0x3b;
      }
      else if (iVar1 == 0x19) {
        FUN_0064a2e0(s_IDS_CONTROLS_CAMERA_UP_007334ec);
        uVar4 = 0x2c;
        uVar5 = 0x2e;
      }
      else if (iVar1 == 0x1a) {
        FUN_0064a2e0(s_IDS_CONTROLS_CAMERA_DOWN_007334d0);
        uVar4 = 0x2d;
        uVar5 = 0x2f;
      }
      else if (iVar1 == 4) {
        FUN_0064a2e0(s_IDS_CONTROLS_TURN_L_007334bc);
        uVar4 = 0x30;
        uVar5 = 0x36;
        local_180 = 0;
      }
      else if (iVar1 == 5) {
        FUN_0064a2e0(s_IDS_CONTROLS_TURN_R_007334a8);
        uVar4 = 0x31;
        uVar5 = 0x37;
        local_180 = 0;
      }
      else if (iVar1 == 0) {
        FUN_0064a2e0(s_IDS_CONTROLS_MOVE_FWD_00733490);
        uVar4 = 0x32;
        uVar5 = 0x38;
      }
      else if (iVar1 == 1) {
        FUN_0064a2e0(s_IDS_CONTROLS_MOVE_BACKWD_00733474);
        uVar4 = 0x33;
        uVar5 = 0x39;
      }
      else if (iVar1 == 0x11) {
        FUN_0064a2e0(s_IDS_CONTROLS_NEXT_WEAPON_00733458);
        uVar4 = 0x3e;
        uVar5 = 0x3f;
        local_180 = 0;
      }
      else if (iVar1 == 0x12) {
        FUN_0064a2e0(s_IDS_CONTROLS_PREV_WEAPON_0073343c);
        uVar4 = 0x40;
        uVar5 = 0x41;
        local_180 = 0;
      }
      else if (iVar1 == 0x18) {
        FUN_0064a2e0(s_IDS_CONTROLS_PAUSE_GAME_00733424);
        uVar4 = 0x42;
        uVar5 = 0x43;
      }
      else if (iVar1 == 0x15) {
        FUN_0064a2e0(s_IDS_CONTROLS_INVENTORY_0073340c);
        uVar4 = 0x44;
        uVar5 = 0x45;
      }
      else if (iVar1 == 0x16) {
        FUN_0064a2e0(s_IDS_CONTROLS_PAUSE_SUMMARY_007333f0);
        uVar4 = 0x48;
        uVar5 = 0x49;
      }
      else if (iVar1 == 0x17) {
        FUN_0064a2e0(s_IDS_CONTROLS_QUEST_LOG_007333d8);
        uVar4 = 0x46;
        uVar5 = 0x47;
      }
      else if (iVar1 == 0x14) {
        FUN_0064a2e0(s_IDS_CONTROLS_SKELETON_KEY_007333bc);
        uVar4 = 0x4c;
        uVar5 = 0x4d;
      }
      else if (iVar1 == 0x13) {
        FUN_0064a2e0(s_IDS_CONTROLS_HEALTH_POTION_007333a0);
        uVar4 = 0x26;
        uVar5 = 0x27;
      }
      uVar2 = FUN_006ab1a0(&DAT_0071ceb4,local_168);
      FUN_0064b7b0(uVar2);
      uVar2 = FUN_0042b100(uVar4);
      *(undefined4 *)(param_1 + (local_174 + 0x86 + iVar3) * 0xc) = uVar2;
      uVar4 = FUN_0042b890(local_13c,uVar4);
      local_4._0_1_ = 3;
      FUN_0064b7f0(uVar4);
      local_4._0_1_ = 2;
      FUN_0064b190();
      *(undefined4 *)(param_1 + (local_184 + iVar3) * 4) = 1;
      uVar4 = FUN_0042b100(uVar5);
      *(undefined4 *)(param_1 + 0x64c + (local_174 + iVar3) * 0xc) = uVar4;
      uVar5 = FUN_0042b890(local_a4,uVar5);
      local_4._0_1_ = 4;
      FUN_0064b7f0(uVar5);
      local_4._0_1_ = 2;
      FUN_0064b190();
      *(undefined4 *)(param_1 + 0x14 + (local_184 + iVar3) * 4) = local_180;
      local_178 = local_178 + 1;
      local_4._0_1_ = 1;
      FUN_0064b190();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0064b190();
      local_4 = 0xffffffff;
      FUN_00649ba0();
      local_170 = local_170 + 0xe4;
      iVar3 = iVar3 + 1;
    } while (local_170 < 0x474);
    local_184 = local_184 + 0x13b;
    local_174 = local_174 + 0x69;
  } while (local_184 < 0x907);
  FUN_00429100();
  ExceptionList = local_c;
  return;
}

