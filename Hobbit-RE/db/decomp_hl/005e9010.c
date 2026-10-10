
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005e9010(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_48;
  int local_44;
  int local_40;
  int *local_3c;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e1bab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_40 = param_1;
  FUN_005cc820(param_2);
  if (DAT_00798540 == 0) {
    if ((DAT_007cc3cc & 1) == 0) {
      DAT_007cc3cc = DAT_007cc3cc | 1;
      DAT_007cc4b0 = 0;
      DAT_007cc4ac = 0;
      _DAT_007cc4b4 = 0;
      _DAT_007cc4bc = 0;
      DAT_007cc4b8 = 0;
      _DAT_007cc4a4 = 0;
      _DAT_007cc4a8 = 0;
      FUN_006bfe55(&LAB_005e95a0);
    }
    if ((DAT_007cc3cc & 2) == 0) {
      DAT_007cc3cc = DAT_007cc3cc | 2;
      DAT_007cc384 = (int *)0x0;
      DAT_007cc380 = 0;
      DAT_007cc388 = 0;
      DAT_007cc390 = 0;
      DAT_007cc38c = 0;
      _DAT_007cc378 = 0;
      _DAT_007cc37c = 0;
      FUN_006bfe55(&LAB_005e9560);
    }
    if ((DAT_007cc3cc & 4) == 0) {
      DAT_007cc3cc = DAT_007cc3cc | 4;
      DAT_007cc3a0 = 0;
      _DAT_007cc39c = 0;
      _DAT_007cc3a4 = 0;
      _DAT_007cc3ac = 0;
      DAT_007cc3a8 = 0;
      _DAT_007cc394 = 0;
      _DAT_007cc398 = 0;
      FUN_006bfe55(&LAB_005e9540);
    }
    if (DAT_00746588 != 0) {
      DAT_00746588 = 0;
      FUN_0054d730(&DAT_007cc4a4,&DAT_007cc394);
      DAT_007cc540 = 0x12;
      local_44 = 0;
      if (0 < DAT_007cc4ac) {
        local_48 = 0;
        do {
          piVar5 = (int *)0x0;
          FUN_00649b80(local_48 + DAT_007cc4b0);
          local_4 = 0;
          piVar1 = DAT_007cc384;
          iVar2 = DAT_007cc388;
          if (DAT_007cc388 < DAT_007cc380 + 1) {
            if (DAT_007cc390 == 0) {
              iVar2 = DAT_007cc388 / 2;
              iVar7 = 1;
              if (0 < iVar2) {
                iVar7 = iVar2;
              }
              if (iVar7 + DAT_007cc380 < 1) {
                iVar2 = 1;
              }
              else {
                if (iVar2 < 1) {
                  iVar2 = 1;
                }
                iVar2 = iVar2 + DAT_007cc380;
              }
            }
            else {
              iVar2 = DAT_007cc390 + DAT_007cc380;
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
            if (0 < DAT_007cc380) {
              iVar6 = 0;
              do {
                FUN_0064a320(iVar6 + (int)DAT_007cc384);
                iVar7 = iVar7 + 1;
                iVar6 = iVar6 + 0x2c;
              } while (iVar7 < DAT_007cc380);
            }
            param_1 = local_40;
            piVar1 = piVar5;
            if (DAT_007cc384 != (int *)0x0) {
              FUN_00407f70(3);
              param_1 = local_40;
            }
          }
          DAT_007cc388 = iVar2;
          DAT_007cc384 = piVar1;
          FUN_0064a320(local_38);
          DAT_007cc380 = DAT_007cc380 + 1;
          local_4 = 0xffffffff;
          FUN_00649ba0();
          local_44 = local_44 + 1;
          local_48 = local_48 + 0x4c;
        } while (local_44 < DAT_007cc4ac);
      }
    }
    FUN_00649920(&local_40,s_AIManager_Actions_Action__d_Worl_00747294,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 2;
    uVar3 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar2 = FUN_00425010();
      *(undefined4 *)(iVar2 + 0x80) = 0xc;
      FUN_00647d10(iVar2,uVar3);
      *(undefined4 *)(iVar2 + 0x84) = 0x10;
      *(undefined4 *)(iVar2 + 0xf0) = 0;
      *(int *)(iVar2 + 0xf4) = DAT_007cc380;
      *(undefined **)(iVar2 + 0x100) = &DAT_007cc378;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
    uVar3 = *(undefined4 *)(DAT_007cc3a0 + DAT_007cc540 * 4);
    FUN_00649920(&local_40,s_AIManager_Actions_Action__d_Worl_0074726c,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 3;
    uVar4 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar2 = FUN_00425010();
      *(undefined4 *)(iVar2 + 0x80) = 0xf;
      FUN_00647d10(iVar2,uVar4);
      *(undefined4 *)(iVar2 + 0x84) = 0;
      *(undefined4 *)(iVar2 + 0x100) = uVar3;
      *(undefined4 *)(iVar2 + 0x104) = 1;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
    if (*(int *)(param_1 + 0x18) != 0 || *(int *)(param_1 + 0x1c) != 0) {
      FUN_00649920(&local_40,s_AIManager_Actions_Action__d_Coll_00747b2c,
                   *(undefined4 *)(param_1 + 4));
      local_4 = 4;
      uVar3 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar2 = FUN_00425010();
        *(undefined4 *)(iVar2 + 0x80) = 3;
        FUN_00647d10(iVar2,uVar3);
        *(undefined4 *)(iVar2 + 0x84) = 2;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(&param_2,s_AIManager_Actions_Action__d_Bilb_00747b00,*(undefined4 *)(param_1 + 4)
                  );
      local_4 = 5;
      uVar3 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar2 = FUN_00425010();
        *(undefined4 *)(iVar2 + 0x80) = 3;
        FUN_00647d10(iVar2,uVar3);
        *(undefined4 *)(iVar2 + 0x84) = 2;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(&local_44,s_AIManager_Actions_Action__d_NPC_C_00747ad4,
                   *(undefined4 *)(param_1 + 4));
      local_4 = 6;
      uVar3 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar2 = FUN_00425010();
        *(undefined4 *)(iVar2 + 0x80) = 3;
        FUN_00647d10(iVar2,uVar3);
        *(undefined4 *)(iVar2 + 0x84) = 2;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
    }
  }
  ExceptionList = local_c;
  return;
}

