
undefined4 * __thiscall FUN_005a0fa0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_518;
  int local_514;
  undefined1 local_510 [4];
  undefined1 local_50c [4];
  undefined1 local_508 [4];
  undefined1 local_504 [4];
  undefined1 local_500 [4];
  undefined1 local_4fc [4];
  undefined1 local_4f8 [4];
  undefined1 local_4f4 [4];
  undefined1 local_4f0 [4];
  undefined1 local_4ec [4];
  undefined1 local_4e8 [4];
  undefined1 local_4e4 [4];
  undefined1 local_4e0 [4];
  undefined1 local_4dc [4];
  undefined1 local_4d8 [4];
  undefined1 local_4d4 [4];
  undefined1 local_4d0 [4];
  undefined1 local_4cc [4];
  undefined1 local_4c8 [4];
  undefined1 local_4c4 [4];
  undefined1 local_4c0 [4];
  undefined4 local_4bc;
  undefined4 local_4b4 [127];
  undefined1 local_2b5;
  undefined1 local_2b4 [12];
  undefined1 local_2a8 [12];
  undefined1 local_29c;
  undefined1 local_29b;
  undefined1 local_29a;
  undefined1 local_299;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_25c [127];
  undefined1 local_5d;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dddc4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00647e40(param_3,s_ConversationMgr_Conversations_Co_007441a0);
  if (iVar1 == 0) {
    FUN_00425440();
    local_270 = *(undefined4 *)(param_1 + 0x4c);
LAB_005a0ff2:
    local_4bc = 1;
    *param_2 = 1;
    FUN_00424770(local_4b4);
  }
  else {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x4c)) {
      local_514 = 0;
      do {
        FUN_00649920(local_4c4,s_ConversationMgr_Conversations_Co_0074416c,iVar1);
        local_4 = 0;
        uVar2 = FUN_00649940();
        iVar3 = FUN_00647e40(param_3,uVar2);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar3 == 0) {
          FUN_00425440();
          local_4bc = 4;
          FUN_00647d70(local_4b4,
                       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x50) + iVar1 * 4) + 0x70),0x200)
          ;
          local_2b5 = 0;
          *param_2 = local_4bc;
          FUN_00424770(local_4b4);
          ExceptionList = local_c;
          return param_2;
        }
        FUN_00649920(local_4e0,s_ConversationMgr_Conversations_Co_00744138,iVar1);
        local_4 = 1;
        uVar2 = FUN_00649940();
        iVar3 = FUN_00647e40(param_3,uVar2);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar3 == 0) {
          FUN_00425440();
          local_4bc = 0xc;
          local_270 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x50) + iVar1 * 4) + 0x9c);
          *param_2 = 0xc;
          FUN_00424770(local_4b4);
          ExceptionList = local_c;
          return param_2;
        }
        FUN_00649920(local_4d8,s_ConversationMgr_Conversations_Co_007440fc,iVar1);
        local_4 = 2;
        uVar2 = FUN_00649940();
        iVar3 = FUN_00647e40(param_3,uVar2);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar3 == 0) {
          FUN_00425440();
          local_270 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x50) + iVar1 * 4) + 8);
LAB_005a1986:
          local_4bc = 1;
          *param_2 = 1;
          FUN_00424770(local_4b4);
          ExceptionList = local_c;
          return param_2;
        }
        local_518 = 0;
        if (0 < *(int *)(*(int *)(local_514 + *(int *)(param_1 + 0x50)) + 8)) {
          do {
            FUN_00649920(local_4d0,s_ConversationMgr_Conversations_Co_00744078,iVar1,local_518);
            local_4 = 3;
            uVar2 = FUN_00649940();
            iVar3 = FUN_00647e40(param_3,uVar2);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar3 == 0) {
              FUN_00406a80();
              local_4bc = 0xd;
              uVar2 = **(undefined4 **)
                        (*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar1 * 4) + 0xc) +
                        local_518 * 4);
              goto LAB_005a215b;
            }
            FUN_00649920(local_4c8,s_ConversationMgr_Conversations_Co_00744038,iVar1,local_518);
            local_4 = 4;
            uVar2 = FUN_00649940();
            iVar3 = FUN_00647e40(param_3,uVar2);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar3 == 0) {
              FUN_00406a80();
              iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar1 * 4) + 0xc) +
                              local_518 * 4);
              local_27c = *(undefined4 *)(iVar1 + 0x30);
              local_278 = *(undefined4 *)(iVar1 + 0x34);
              goto LAB_005a1a12;
            }
            FUN_00649920(local_4c0,s_ConversationMgr_Conversations_Co_00743ff8,iVar1,local_518);
            local_4 = 5;
            uVar2 = FUN_00649940();
            iVar3 = FUN_00647e40(param_3,uVar2);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar3 == 0) {
              FUN_00406a80();
              local_4bc = 2;
              local_26c = *(undefined4 *)
                           (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar1 * 4) + 0xc)
                                    + local_518 * 4) + 0x38);
              *param_2 = 2;
              FUN_00424770(local_4b4);
              ExceptionList = local_c;
              return param_2;
            }
            local_518 = local_518 + 1;
          } while (local_518 < *(int *)(*(int *)(local_514 + *(int *)(param_1 + 0x50)) + 8));
        }
        if (*(int *)(*(int *)(local_514 + *(int *)(param_1 + 0x50)) + 0x9c) == 1) {
          FUN_00649920(local_4f4,s_ConversationMgr_Conversations_Co_00743fbc,iVar1);
          local_4 = 6;
          uVar2 = FUN_00649940();
          iVar3 = FUN_00647e40(param_3,uVar2);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar3 == 0) {
            FUN_00406a80();
            local_270 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x50) + iVar1 * 4) + 0x24);
            goto LAB_005a0ff2;
          }
          local_518 = 0;
          if (0 < *(int *)(*(int *)(local_514 + *(int *)(param_1 + 0x50)) + 0x24)) {
            do {
              FUN_00649920(local_4d4,s_ConversationMgr_Conversations_Co_00743f78,iVar1,local_518);
              local_4 = 7;
              uVar2 = FUN_00649940();
              iVar3 = FUN_00647e40(param_3,uVar2);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar3 == 0) {
                FUN_00406a80();
                local_4bc = 0xf;
                puVar4 = *(undefined4 **)
                          (*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar1 * 4) + 0x28) +
                          local_518 * 4);
                local_27c = *puVar4;
                local_278 = puVar4[1];
                *param_2 = 0xf;
                FUN_00424770(local_4b4);
                ExceptionList = local_c;
                return param_2;
              }
              FUN_00649920(local_4ec,s_ConversationMgr_Conversations_Co_00743f30,iVar1,local_518);
              local_4 = 8;
              uVar2 = FUN_00649940();
              iVar3 = FUN_00647e40(param_3,uVar2);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar3 == 0) {
                FUN_00406a80();
                local_4bc = 2;
                local_26c = *(undefined4 *)
                             (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar1 * 4) +
                                               0x28) + local_518 * 4) + 8);
                *param_2 = 2;
                FUN_00424770(local_4b4);
                ExceptionList = local_c;
                return param_2;
              }
              FUN_00649920(local_500,s_ConversationMgr_Conversations_Co_00743ee8,iVar1,local_518);
              local_4 = 9;
              uVar2 = FUN_00649940();
              iVar3 = FUN_00647e40(param_3,uVar2);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar3 == 0) {
                FUN_00406a80();
                local_270 = *(undefined4 *)
                             (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar1 * 4) +
                                               0x28) + local_518 * 4) + 0xc);
                goto LAB_005a1986;
              }
              FUN_00649920(local_4e4,s_ConversationMgr_Conversations_Co_00743ea8,iVar1,local_518);
              local_4 = 10;
              uVar2 = FUN_00649940();
              iVar3 = FUN_00647e40(param_3,uVar2);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar3 == 0) {
                FUN_00406a80();
                local_4bc = 3;
                local_268 = *(undefined4 *)
                             (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar1 * 4) +
                                               0x28) + local_518 * 4) + 0x10);
                *param_2 = 3;
                FUN_00424770(local_4b4);
                ExceptionList = local_c;
                return param_2;
              }
              local_518 = local_518 + 1;
            } while (local_518 < *(int *)(*(int *)(local_514 + *(int *)(param_1 + 0x50)) + 0x24));
          }
          FUN_00649920(local_4cc,s_ConversationMgr_Conversations_Co_00743e68,iVar1);
          local_4 = 0xb;
          uVar2 = FUN_00649940();
          iVar3 = FUN_00647e40(param_3,uVar2);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar3 == 0) {
            FUN_00406a80();
            local_4bc = 1;
            local_270 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x50) + iVar1 * 4) + 0x40);
            *param_2 = 1;
            FUN_00424770(local_4b4);
            ExceptionList = local_c;
            return param_2;
          }
          local_518 = 0;
          if (0 < *(int *)(*(int *)(local_514 + *(int *)(param_1 + 0x50)) + 0x40)) {
            do {
              FUN_00649920(local_4dc,s_ConversationMgr_Conversations_Co_00743e20,iVar1,local_518);
              local_4 = 0xc;
              uVar2 = FUN_00649940();
              iVar3 = FUN_00647e40(param_3,uVar2);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar3 == 0) {
                FUN_00406a80();
                puVar4 = *(undefined4 **)
                          (*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar1 * 4) + 0x44) +
                          local_518 * 4);
                local_27c = *puVar4;
                local_278 = puVar4[1];
LAB_005a1a12:
                local_4bc = 0x10;
                *param_2 = 0x10;
                FUN_00424770(local_4b4);
                ExceptionList = local_c;
                return param_2;
              }
              FUN_00649920(local_4fc,s_ConversationMgr_Conversations_Co_00743dd8,iVar1,local_518);
              local_4 = 0xd;
              uVar2 = FUN_00649940();
              iVar3 = FUN_00647e40(param_3,uVar2);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar3 == 0) {
                FUN_00406a80();
                iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar1 * 4) + 0x44) +
                                local_518 * 4);
                local_27c = *(undefined4 *)(iVar1 + 8);
                local_278 = *(undefined4 *)(iVar1 + 0xc);
LAB_005a1c9c:
                local_4bc = 0xf;
                *param_2 = 0xf;
                FUN_00424770(local_4b4);
                ExceptionList = local_c;
                return param_2;
              }
              FUN_00649920(local_4f8,s_ConversationMgr_Conversations_Co_00743d90,iVar1,local_518);
              local_4 = 0xe;
              uVar2 = FUN_00649940();
              iVar3 = FUN_00647e40(param_3,uVar2);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar3 == 0) {
                FUN_00406a80();
                iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar1 * 4) + 0x44) +
                                local_518 * 4);
                local_27c = *(undefined4 *)(iVar1 + 0x10);
                local_278 = *(undefined4 *)(iVar1 + 0x14);
                goto LAB_005a1c9c;
              }
              local_518 = local_518 + 1;
            } while (local_518 < *(int *)(*(int *)(local_514 + *(int *)(param_1 + 0x50)) + 0x40));
          }
          FUN_00649920(local_4f0,s_ConversationMgr_Conversations_Co_00743d58,iVar1);
          local_4 = 0xf;
          uVar2 = FUN_00649940();
          iVar3 = FUN_00647e40(param_3,uVar2);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar3 == 0) {
            FUN_00406a80();
            local_270 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x50) + iVar1 * 4) + 0x5c);
            goto LAB_005a1986;
          }
          local_518 = 0;
          if (0 < *(int *)(*(int *)(local_514 + *(int *)(param_1 + 0x50)) + 0x5c)) {
            do {
              FUN_00649920(local_4e8,s_ConversationMgr_Conversations_Co_00743d18,iVar1,local_518);
              local_4 = 0x10;
              uVar2 = FUN_00649940();
              iVar3 = FUN_00647e40(param_3,uVar2);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar3 == 0) {
                FUN_00406a80();
                local_4bc = 0x10;
                puVar4 = *(undefined4 **)
                          (*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar1 * 4) + 0x60) +
                          local_518 * 4);
                local_27c = *puVar4;
                local_278 = puVar4[1];
                *param_2 = 0x10;
                FUN_00424770(local_4b4);
                ExceptionList = local_c;
                return param_2;
              }
              FUN_00649920(local_504,s_ConversationMgr_Conversations_Co_00743c90,iVar1,local_518);
              local_4 = 0x11;
              uVar2 = FUN_00649940();
              iVar3 = FUN_00647e40(param_3,uVar2);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar3 == 0) {
                FUN_00406a80();
                local_4bc = 0xd;
                uVar2 = *(undefined4 *)
                         (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar1 * 4) + 0x60) +
                                  local_518 * 4) + 0xc);
                goto LAB_005a215b;
              }
              FUN_00649920(local_50c,s_ConversationMgr_Conversations_Co_00743c4c,iVar1,local_518);
              local_4 = 0x12;
              uVar2 = FUN_00649940();
              iVar3 = FUN_00647e40(param_3,uVar2);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar3 == 0) {
                FUN_00406a80();
                local_4bc = 2;
                local_26c = *(undefined4 *)
                             (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar1 * 4) +
                                               0x60) + local_518 * 4) + 0x40);
                *param_2 = 2;
                FUN_00424770(local_4b4);
                ExceptionList = local_c;
                return param_2;
              }
              FUN_00649920(local_508,s_ConversationMgr_Conversations_Co_00743c08,iVar1,local_518);
              local_4 = 0x13;
              uVar2 = FUN_00649940();
              iVar3 = FUN_00647e40(param_3,uVar2);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar3 == 0) {
                FUN_00406a80();
                local_4bc = 2;
                local_26c = *(undefined4 *)
                             (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar1 * 4) +
                                               0x60) + local_518 * 4) + 0x38);
                *param_2 = 2;
                FUN_00424770(local_4b4);
                ExceptionList = local_c;
                return param_2;
              }
              FUN_00649920(local_510,s_ConversationMgr_Conversations_Co_00743bc0,iVar1,local_518);
              local_4 = 0x14;
              uVar2 = FUN_00649940();
              iVar3 = FUN_00647e40(param_3,uVar2);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar3 == 0) {
                FUN_00406a80();
                local_4bc = 1;
                local_270 = *(undefined4 *)
                             (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar1 * 4) +
                                               0x60) + local_518 * 4) + 0x3c);
                *param_2 = 1;
                FUN_00424770(local_4b4);
                ExceptionList = local_c;
                return param_2;
              }
              local_518 = local_518 + 1;
            } while (local_518 < *(int *)(*(int *)(local_514 + *(int *)(param_1 + 0x50)) + 0x5c));
          }
        }
        iVar1 = iVar1 + 1;
        local_514 = local_514 + 4;
      } while (iVar1 < *(int *)(param_1 + 0x4c));
    }
    iVar1 = FUN_00647e40(param_3,s_ConversationMgr_ConversationList_00743b84);
    if (iVar1 == 0) {
      FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
      FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
      local_270 = *(undefined4 *)(param_1 + 0x68);
      local_4bc = 1;
      *param_2 = 1;
      FUN_00424770(local_4b4);
    }
    else {
      iVar1 = 0;
      if (0 < *(int *)(param_1 + 0x68)) {
LAB_005a1eb3:
        FUN_00649920(local_510,s_ConversationMgr_ConversationList_00743b48,iVar1);
        local_4 = 0x15;
        uVar2 = FUN_00649940();
        iVar3 = FUN_00647e40(param_3,uVar2);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar3 == 0) {
          FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
          FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
          local_4bc = 4;
          uVar2 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x6c) + iVar1 * 4) + 0x1c);
LAB_005a215b:
          FUN_00647d70(local_4b4,uVar2,0x200);
          local_2b5 = 0;
          *param_2 = local_4bc;
          FUN_00424770(local_4b4);
          ExceptionList = local_c;
          return param_2;
        }
        FUN_00649920(local_508,s_ConversationMgr_ConversationList_00743b00,iVar1);
        local_4 = 0x16;
        uVar2 = FUN_00649940();
        iVar3 = FUN_00647e40(param_3,uVar2);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar3 != 0) goto code_r0x005a1f51;
        FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
        FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
        local_4bc = 1;
        local_270 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x6c) + iVar1 * 4) + 8);
        *param_2 = 1;
LAB_005a21fa:
        puVar4 = local_4b4;
        puVar5 = param_2 + 2;
        for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        FUN_00480f60(local_2b4);
        goto LAB_005a221d;
      }
LAB_005a1ff0:
      iVar1 = FUN_00647e40(param_3,s_ConversationMgr_DialogLists_Dial_00743a3c);
      if (iVar1 == 0) {
        FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
        FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
        local_4bc = 1;
        local_270 = *(undefined4 *)(param_1 + 0x84);
        *param_2 = 1;
        puVar4 = local_4b4;
        puVar5 = param_2 + 2;
        for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        FUN_00480f60(local_2b4);
LAB_005a2082:
        FUN_00425250(&local_29c);
        FUN_004357e0(&local_298);
        FUN_004357e0(&local_28c);
        param_2[0x90] = local_27c;
        param_2[0x91] = local_278;
        param_2[0x92] = local_274;
        param_2[0x93] = local_270;
        param_2[0x94] = local_26c;
        param_2[0x95] = local_268;
      }
      else {
        iVar1 = 0;
        if (0 < *(int *)(param_1 + 0x84)) {
          do {
            FUN_00649920(local_510,s_ConversationMgr_DialogLists_Dial_00743a0c,iVar1);
            local_4 = 0x18;
            uVar2 = FUN_00649940();
            iVar3 = FUN_00647e40(param_3,uVar2);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar3 == 0) {
              FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
              FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
              local_4bc = 4;
              FUN_00647d70(local_4b4,
                           *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x88) + iVar1 * 4) + 0x1c),
                           0x200);
              local_2b5 = 0;
              *param_2 = local_4bc;
              puVar4 = local_4b4;
              puVar5 = param_2 + 2;
              for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
                *puVar5 = *puVar4;
                puVar4 = puVar4 + 1;
                puVar5 = puVar5 + 1;
              }
              FUN_004357e0(local_2b4);
              FUN_004357e0(local_2a8);
              goto LAB_005a2082;
            }
            FUN_00649920(local_508,s_ConversationMgr_DialogLists_Dial_007439d8,iVar1);
            local_4 = 0x19;
            uVar2 = FUN_00649940();
            iVar3 = FUN_00647e40(param_3,uVar2);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar3 == 0) {
              FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
              FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
              local_4bc = 0xf;
              iVar1 = *(int *)(*(int *)(param_1 + 0x88) + iVar1 * 4);
              local_27c = *(undefined4 *)(iVar1 + 0x48);
              local_278 = *(undefined4 *)(iVar1 + 0x4c);
              *param_2 = 0xf;
              puVar4 = local_4b4;
              puVar5 = param_2 + 2;
              for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
                *puVar5 = *puVar4;
                puVar4 = puVar4 + 1;
                puVar5 = puVar5 + 1;
              }
              FUN_004357e0(local_2b4);
              FUN_004357e0(local_2a8);
LAB_005a221d:
              FUN_00425250(&local_29c);
LAB_005a27d2:
              FUN_004357e0(&local_298);
              FUN_004357e0(&local_28c);
              param_2[0x90] = local_27c;
              param_2[0x91] = local_278;
              param_2[0x92] = local_274;
              param_2[0x93] = local_270;
              param_2[0x94] = local_26c;
              param_2[0x95] = local_268;
              ExceptionList = local_c;
              return param_2;
            }
            FUN_00649920(local_50c,s_ConversationMgr_DialogLists_Dial_007439a0,iVar1);
            local_4 = 0x1a;
            uVar2 = FUN_00649940();
            iVar3 = FUN_00647e40(param_3,uVar2);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar3 == 0) {
              FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
              FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
              local_4bc = 1;
              local_270 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x88) + iVar1 * 4) + 8);
              *param_2 = 1;
              puVar4 = local_4b4;
              puVar5 = param_2 + 2;
              for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
                *puVar5 = *puVar4;
                puVar4 = puVar4 + 1;
                puVar5 = puVar5 + 1;
              }
              FUN_004357e0(local_2b4);
              FUN_004357e0(local_2a8);
              *(undefined1 *)((int)param_2 + 0x223) = local_299;
              *(undefined1 *)((int)param_2 + 0x222) = local_29a;
              *(undefined1 *)((int)param_2 + 0x221) = local_29b;
              *(undefined1 *)(param_2 + 0x88) = local_29c;
              goto LAB_005a27d2;
            }
            local_514 = 0;
            if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0x88) + iVar1 * 4) + 8)) {
LAB_005a23e0:
              FUN_00649920(local_504,s_ConversationMgr_DialogLists_Dial_00743968,iVar1,local_514);
              local_4 = 0x1b;
              uVar2 = FUN_00649940();
              iVar3 = FUN_00647e40(param_3,uVar2);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar3 != 0) goto code_r0x005a2434;
              local_5c = 0x7f7fffff;
              local_58 = 0x7f7fffff;
              local_54 = 0x7f7fffff;
              FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
              local_264 = 0xd;
              FUN_00647d70(local_25c,
                           *(undefined4 *)
                            (*(int *)(*(int *)(*(int *)(param_1 + 0x88) + iVar1 * 4) + 0xc) +
                            local_514 * 0x2c),0x200);
              *param_2 = local_264;
              local_5d = 0;
              puVar4 = local_25c;
              puVar5 = param_2 + 2;
              for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
                *puVar5 = *puVar4;
                puVar4 = puVar4 + 1;
                puVar5 = puVar5 + 1;
              }
              param_2[0x82] = local_5c;
              param_2[0x83] = local_58;
              param_2[0x84] = local_54;
              param_2[0x85] = local_50;
              param_2[0x86] = local_4c;
              param_2[0x87] = local_48;
              *(undefined1 *)((int)param_2 + 0x223) = local_41;
              *(undefined1 *)((int)param_2 + 0x222) = local_42;
              *(undefined1 *)((int)param_2 + 0x221) = local_43;
              *(undefined1 *)(param_2 + 0x88) = local_44;
              param_2[0x89] = local_40;
              param_2[0x8a] = local_3c;
              param_2[0x8b] = local_38;
              param_2[0x8c] = local_34;
              param_2[0x8d] = local_30;
              param_2[0x8e] = local_2c;
              param_2[0x90] = local_24;
              param_2[0x91] = local_20;
              param_2[0x92] = local_1c;
              param_2[0x93] = local_18;
              param_2[0x94] = local_14;
              local_268 = local_10;
              goto LAB_005a2587;
            }
LAB_005a2451:
            iVar1 = iVar1 + 1;
          } while (iVar1 < *(int *)(param_1 + 0x84));
        }
        *param_2 = 0;
        puVar4 = local_4b4;
        puVar5 = param_2 + 2;
        for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        param_2[0x82] = 0x7f7fffff;
        param_2[0x83] = 0x7f7fffff;
        param_2[0x84] = 0x7f7fffff;
        param_2[0x85] = 0xff7fffff;
        param_2[0x86] = 0xff7fffff;
        param_2[0x87] = 0xff7fffff;
        *(undefined1 *)((int)param_2 + 0x223) = local_299;
        *(undefined1 *)((int)param_2 + 0x222) = local_29a;
        *(undefined1 *)((int)param_2 + 0x221) = local_29b;
        *(undefined1 *)(param_2 + 0x88) = local_29c;
        param_2[0x89] = local_298;
        param_2[0x8a] = local_294;
        param_2[0x8b] = local_290;
        param_2[0x8c] = local_28c;
        param_2[0x8d] = local_288;
        param_2[0x8e] = local_284;
        param_2[0x90] = local_27c;
        param_2[0x91] = local_278;
        param_2[0x92] = local_274;
        param_2[0x93] = local_270;
        param_2[0x94] = local_26c;
LAB_005a2587:
        param_2[0x95] = local_268;
      }
    }
  }
  ExceptionList = local_c;
  return param_2;
code_r0x005a1f51:
  local_514 = 0;
  if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0x6c) + iVar1 * 4) + 8)) {
    do {
      FUN_00649920(local_50c,s_ConversationMgr_ConversationList_00743a68,iVar1,local_514);
      local_4 = 0x17;
      uVar2 = FUN_00649940();
      iVar3 = FUN_00647e40(param_3,uVar2);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar3 == 0) {
        FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
        FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
        local_4bc = 0xd;
        FUN_00647d70(local_4b4,
                     *(undefined4 *)
                      (*(int *)(*(int *)(*(int *)(param_1 + 0x6c) + iVar1 * 4) + 0xc) +
                      local_514 * 0x2c),0x200);
        local_2b5 = 0;
        *param_2 = local_4bc;
        goto LAB_005a21fa;
      }
      local_514 = local_514 + 1;
    } while (local_514 < *(int *)(*(int *)(*(int *)(param_1 + 0x6c) + iVar1 * 4) + 8));
  }
  iVar1 = iVar1 + 1;
  if (*(int *)(param_1 + 0x68) <= iVar1) goto LAB_005a1ff0;
  goto LAB_005a1eb3;
code_r0x005a2434:
  local_514 = local_514 + 1;
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x88) + iVar1 * 4) + 8) <= local_514) goto LAB_005a2451;
  goto LAB_005a23e0;
}

