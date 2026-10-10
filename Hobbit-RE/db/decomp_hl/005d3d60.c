
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005d3d60(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_48;
  int local_40;
  int *local_3c;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e045e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005cc820(param_2);
  if (DAT_00798540 == 0) {
    if ((DAT_007cc464 & 1) == 0) {
      DAT_007cc464 = DAT_007cc464 | 1;
      DAT_007cc454 = (int *)0x0;
      DAT_007cc450 = 0;
      DAT_007cc458 = 0;
      DAT_007cc460 = 0;
      DAT_007cc45c = 0;
      _DAT_007cc448 = 0;
      _DAT_007cc44c = 0;
      FUN_006bfe55(&LAB_005d4480);
    }
    if ((DAT_007cc464 & 2) == 0) {
      DAT_007cc464 = DAT_007cc464 | 2;
      DAT_007cc3bc = 0;
      DAT_007cc3b8 = 0;
      _DAT_007cc3c0 = 0;
      _DAT_007cc3c8 = 0;
      DAT_007cc3c4 = 0;
      _DAT_007cc3b0 = 0;
      _DAT_007cc3b4 = 0;
      FUN_006bfe55(&LAB_005d4440);
    }
    if ((DAT_007cc464 & 4) == 0) {
      DAT_007cc464 = DAT_007cc464 | 4;
      DAT_007cc494 = (int *)0x0;
      DAT_007cc490 = 0;
      DAT_007cc498 = 0;
      DAT_007cc4a0 = 0;
      DAT_007cc49c = 0;
      _DAT_007cc488 = 0;
      _DAT_007cc48c = 0;
      FUN_006bfe55(&LAB_005d4400);
    }
    if ((DAT_007cc464 & 8) == 0) {
      DAT_007cc464 = DAT_007cc464 | 8;
      DAT_007cc34c = 0;
      _DAT_007cc348 = 0;
      _DAT_007cc350 = 0;
      _DAT_007cc358 = 0;
      DAT_007cc354 = 0;
      _DAT_007cc340 = 0;
      _DAT_007cc344 = 0;
      FUN_006bfe55(&LAB_005d43e0);
    }
    if (DAT_00746578 != 0) {
      DAT_007cc530 = 0x12;
      DAT_00746578 = 0;
      if (DAT_007cc45c == 0) {
        if (DAT_007cc454 != (int *)0x0) {
          FUN_00407f70(3);
        }
        DAT_007cc454 = (int *)0x0;
        DAT_007cc458 = 0;
      }
      DAT_007cc450 = 0;
      local_48 = 0;
      iVar2 = FUN_00434e50();
      if (0 < iVar2) {
        do {
          piVar5 = (int *)0x0;
          uVar3 = FUN_00434e80(local_48);
          FUN_00649b20(uVar3);
          local_4 = 0;
          piVar1 = DAT_007cc454;
          iVar2 = DAT_007cc458;
          if (DAT_007cc458 < DAT_007cc450 + 1) {
            if (DAT_007cc460 == 0) {
              iVar2 = DAT_007cc458 / 2;
              iVar7 = 1;
              if (0 < iVar2) {
                iVar7 = iVar2;
              }
              if (iVar7 + DAT_007cc450 < 1) {
                iVar2 = 1;
              }
              else {
                if (iVar2 < 1) {
                  iVar2 = 1;
                }
                iVar2 = iVar2 + DAT_007cc450;
              }
            }
            else {
              iVar2 = DAT_007cc460 + DAT_007cc450;
            }
            local_3c = (int *)operator_new(iVar2 * 0x2c + 4);
            local_4._0_1_ = 1;
            if (local_3c != (int *)0x0) {
              piVar5 = local_3c + 1;
              *local_3c = iVar2;
              FUN_006c043b(piVar5,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
            }
            iVar7 = 0;
            local_4 = (uint)local_4._1_3_ << 8;
            if (0 < DAT_007cc450) {
              iVar6 = 0;
              do {
                FUN_0064a320((int)DAT_007cc454 + iVar6);
                iVar7 = iVar7 + 1;
                iVar6 = iVar6 + 0x2c;
              } while (iVar7 < DAT_007cc450);
            }
            piVar1 = piVar5;
            if (DAT_007cc454 != (int *)0x0) {
              FUN_00407f70(3);
            }
          }
          DAT_007cc458 = iVar2;
          DAT_007cc454 = piVar1;
          FUN_0064a320(local_38);
          DAT_007cc450 = DAT_007cc450 + 1;
          local_4 = 0xffffffff;
          FUN_00649ba0();
          local_48 = local_48 + 1;
          iVar2 = FUN_00434e50();
        } while (local_48 < iVar2);
      }
      FUN_0054d730(&DAT_007cc3b0,&DAT_007cc340);
      local_40 = 0;
      if (0 < DAT_007cc3b8) {
        local_48 = 0;
        do {
          piVar5 = (int *)0x0;
          FUN_00649b80(DAT_007cc3bc + local_48);
          local_4 = 2;
          piVar1 = DAT_007cc494;
          iVar2 = DAT_007cc498;
          if (DAT_007cc498 < DAT_007cc490 + 1) {
            if (DAT_007cc4a0 == 0) {
              iVar2 = DAT_007cc498 / 2;
              iVar7 = 1;
              if (0 < iVar2) {
                iVar7 = iVar2;
              }
              if (iVar7 + DAT_007cc490 < 1) {
                iVar2 = 1;
              }
              else {
                if (iVar2 < 1) {
                  iVar2 = 1;
                }
                iVar2 = iVar2 + DAT_007cc490;
              }
            }
            else {
              iVar2 = DAT_007cc490 + DAT_007cc4a0;
            }
            local_3c = (int *)operator_new(iVar2 * 0x2c + 4);
            local_4._0_1_ = 3;
            if (local_3c != (int *)0x0) {
              piVar5 = local_3c + 1;
              *local_3c = iVar2;
              FUN_006c043b(piVar5,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
            }
            iVar7 = 0;
            local_4 = CONCAT31(local_4._1_3_,2);
            if (0 < DAT_007cc490) {
              iVar6 = 0;
              do {
                FUN_0064a320((int)DAT_007cc494 + iVar6);
                iVar7 = iVar7 + 1;
                iVar6 = iVar6 + 0x2c;
              } while (iVar7 < DAT_007cc490);
            }
            piVar1 = piVar5;
            if (DAT_007cc494 != (int *)0x0) {
              FUN_00407f70(3);
            }
          }
          DAT_007cc498 = iVar2;
          DAT_007cc494 = piVar1;
          FUN_0064a320(local_38);
          DAT_007cc490 = DAT_007cc490 + 1;
          local_4 = 0xffffffff;
          FUN_00649ba0();
          local_40 = local_40 + 1;
          local_48 = local_48 + 0x4c;
        } while (local_40 < DAT_007cc3b8);
      }
    }
    FUN_00649920(&local_40,s_AIManager_Actions_Action__d_Item_00746df0,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 4;
    uVar3 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar2 = FUN_00425010();
      *(undefined4 *)(iVar2 + 0x80) = 0xd;
      FUN_00647d10(iVar2,uVar3);
      *(undefined4 *)(iVar2 + 0x84) = 2;
      *(undefined4 *)(iVar2 + 0xf0) = 0;
      *(int *)(iVar2 + 0xf4) = DAT_007cc450;
      *(undefined **)(iVar2 + 0x100) = &DAT_007cc448;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920(&local_40,s_AIManager_Actions_Action__d_Add__00746dbc,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 5;
    uVar3 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar2 = FUN_00425010();
      *(undefined4 *)(iVar2 + 0x80) = 3;
      FUN_00647d10(iVar2,uVar3);
      *(undefined4 *)(iVar2 + 0x84) = 0;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920(&local_40,s_AIManager_Actions_Action__d_Amou_00746d98,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 6;
    uVar4 = FUN_00649940(0,0,0xffffffff);
    uVar3 = param_2;
    FUN_00499e60(param_2,uVar4);
    local_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920(&param_2,s_AIManager_Actions_Action__d_Sour_00746d68,*(undefined4 *)(param_1 + 4));
    local_4 = 7;
    uVar4 = FUN_00649940(&DAT_007cc488,0x10);
    FUN_00496020(uVar3,uVar4);
    local_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920(&local_3c,s_AIManager_Actions_Action__d_Sour_00746d3c,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 8;
    uVar4 = FUN_00649940(*(undefined4 *)(DAT_007cc34c + DAT_007cc530 * 4),1,0,0);
    FUN_00459f30(uVar3,uVar4);
    local_4 = 0xffffffff;
    FUN_00649950();
  }
  ExceptionList = local_c;
  return;
}

