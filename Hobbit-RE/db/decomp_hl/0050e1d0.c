
void __fastcall FUN_0050e1d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int local_ec;
  int local_e8;
  int local_e4;
  undefined4 local_e0;
  int local_dc;
  int local_d4;
  undefined4 local_d0;
  undefined1 local_a4 [152];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d6f2e;
  local_c = ExceptionList;
  local_ec = 0;
  local_d4 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(param_1 + 0x1f5c)) {
    local_e8 = 0x1a5;
    local_e4 = 0x86;
    ExceptionList = &local_c;
    do {
      if (*(int *)(param_1 + 0x1f60) <= local_ec) break;
      iVar3 = 0;
      local_dc = 0;
      do {
        if (*(int *)(param_1 + 0x1f60) <= local_ec) break;
        FUN_006499d0();
        local_4 = 0;
        FUN_0064afa0();
        iVar1 = *(int *)(param_1 + -0x14 + (local_e8 + iVar3) * 4);
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_0064a2e0(s_IDS_NULL_00731f24);
        uVar4 = 0x55;
        local_e0 = 1;
        if (iVar1 == 6) {
          FUN_0064a2e0(s_IDS_CONTROLS_JUMP_00732f5c);
          uVar4 = 0;
        }
        else if (iVar1 == 7) {
          FUN_0064a2e0(s_IDS_CONTROLS_ATTACK_00732f48);
          uVar4 = 3;
        }
        else if (iVar1 == 8) {
          FUN_0064a2e0(s_IDS_CONTROLS_USE_00732f34);
          uVar4 = 6;
        }
        else if (iVar1 == 9) {
          FUN_0064a2e0(s_IDS_CONTROLS_SNEAK_00732f20);
          uVar4 = 0xc;
        }
        else if (iVar1 == 10) {
          FUN_0064a2e0(s_IDS_CONTROLS_TARGET_00732f0c);
          uVar4 = 0xf;
        }
        else if (iVar1 == 0xd) {
          FUN_0064a2e0(s_IDS_CONTROLS_TOGGLE_RING_00732ef0);
          uVar4 = 0x12;
        }
        else if (iVar1 == 0xb) {
          FUN_0064a2e0(s_IDS_CONTROLS_TOGGLE_VIEW_00732ed4);
          uVar4 = 0x15;
        }
        else if (iVar1 == 0xe) {
          FUN_0064a2e0(s_IDS_CONTROLS_WEAPON_1_00732ebc);
          uVar4 = 0x1a;
        }
        else if (iVar1 == 0xf) {
          FUN_0064a2e0(s_IDS_CONTROLS_WEAPON_2_00732ea4);
          uVar4 = 0x1d;
        }
        else if (iVar1 == 0x10) {
          FUN_0064a2e0(s_IDS_CONTROLS_WEAPON_3_00732e8c);
          uVar4 = 0x20;
        }
        else {
          if (iVar1 == 0x19) {
            FUN_0064a2e0(s_IDS_CONTROLS_CAMERA_00732e78);
            uVar4 = 0x2a;
          }
          else {
            if (iVar1 != 0) goto LAB_0050e3de;
            FUN_0064a2e0(s_IDS_CONTROLS_MOVE_00732e64);
            uVar4 = 0x28;
          }
          local_e0 = 0;
        }
LAB_0050e3de:
        uVar2 = FUN_006ab1a0(&DAT_0071ceb4,local_d0);
        FUN_0064b7b0(uVar2);
        uVar2 = FUN_0042b100(uVar4);
        *(undefined4 *)(param_1 + (local_e4 + iVar3) * 0xc) = uVar2;
        uVar4 = FUN_0042b890(local_a4,uVar4);
        local_4._0_1_ = 2;
        FUN_0064b7f0(uVar4);
        local_4._0_1_ = 1;
        FUN_0064b190();
        *(undefined4 *)(param_1 + (local_e8 + iVar3) * 4) = local_e0;
        local_ec = local_ec + 1;
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_0064b190();
        local_4 = 0xffffffff;
        FUN_00649ba0();
        local_dc = local_dc + 0xe4;
        iVar3 = iVar3 + 1;
      } while (local_dc < 0x474);
      local_d4 = local_d4 + 1;
      local_e4 = local_e4 + 0x69;
      local_e8 = local_e8 + 0x13b;
    } while (local_d4 < *(int *)(param_1 + 0x1f5c));
  }
  FUN_00429100();
  ExceptionList = local_c;
  return;
}

