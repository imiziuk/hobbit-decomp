
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005f7a30(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_40;
  int *local_3c;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e2ad3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_007cc600 & 1) == 0) {
    DAT_007cc600 = DAT_007cc600 | 1;
    DAT_007cc550 = (int *)0x0;
    DAT_007cc54c = 0;
    DAT_007cc554 = 0;
    DAT_007cc55c = 0;
    DAT_007cc558 = 0;
    _DAT_007cc544 = 0;
    _DAT_007cc548 = 0;
    ExceptionList = &local_c;
    FUN_006bfe55(&LAB_005f7d90);
  }
  if (DAT_00748054 != 0) {
    DAT_00748054 = 0;
    if (DAT_007cc558 == 0) {
      if (DAT_007cc550 != (int *)0x0) {
        piVar5 = DAT_007cc550 + -1;
        FUN_006c026a(DAT_007cc550,0x2c,DAT_007cc550[-1],FUN_00649ba0);
        FUN_006bf840(piVar5);
      }
      DAT_007cc550 = (int *)0x0;
      DAT_007cc554 = 0;
    }
    iVar6 = 0;
    DAT_007cc54c = 0;
    local_40 = 0;
    iVar2 = FUN_00434e50();
    if (0 < iVar2) {
      do {
        uVar3 = FUN_00434e80(iVar6);
        FUN_00649b20(uVar3);
        iVar7 = 0;
        local_4 = 0;
        piVar5 = DAT_007cc550;
        iVar2 = DAT_007cc554;
        if (DAT_007cc554 < DAT_007cc54c + 1) {
          if (DAT_007cc55c == 0) {
            iVar2 = DAT_007cc554 / 2;
            iVar6 = 1;
            if (0 < iVar2) {
              iVar6 = iVar2;
            }
            if (iVar6 + DAT_007cc54c < 1) {
              iVar2 = 1;
            }
            else {
              if (iVar2 < 1) {
                iVar2 = 1;
              }
              iVar2 = iVar2 + DAT_007cc54c;
            }
          }
          else {
            iVar2 = DAT_007cc55c + DAT_007cc54c;
          }
          local_3c = (int *)operator_new(iVar2 * 0x2c + 4);
          local_4._0_1_ = 1;
          if (local_3c == (int *)0x0) {
            piVar5 = (int *)0x0;
          }
          else {
            piVar5 = local_3c + 1;
            *local_3c = iVar2;
            FUN_006c043b(piVar5,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
          }
          local_4 = (uint)local_4._1_3_ << 8;
          if (0 < DAT_007cc54c) {
            iVar6 = 0;
            do {
              FUN_0064a320(iVar6 + (int)DAT_007cc550);
              iVar7 = iVar7 + 1;
              iVar6 = iVar6 + 0x2c;
            } while (iVar7 < DAT_007cc54c);
          }
          iVar6 = local_40;
          if (DAT_007cc550 != (int *)0x0) {
            piVar1 = DAT_007cc550 + -1;
            FUN_006c026a(DAT_007cc550,0x2c,DAT_007cc550[-1],FUN_00649ba0);
            FUN_006bf840(piVar1);
            iVar6 = local_40;
          }
        }
        DAT_007cc554 = iVar2;
        DAT_007cc550 = piVar5;
        FUN_0064a320(local_38);
        DAT_007cc54c = DAT_007cc54c + 1;
        local_4 = 0xffffffff;
        FUN_00649ba0();
        iVar6 = iVar6 + 1;
        local_40 = iVar6;
        iVar2 = FUN_00434e50();
      } while (iVar6 < iVar2);
    }
  }
  FUN_00649920(&local_40,s_AIManager_Triggers_Trigger__d_It_0074857c,*(undefined4 *)(param_1 + 4));
  local_4 = 2;
  uVar4 = FUN_00649940();
  uVar3 = param_2;
  if (DAT_0075d338 == 0) {
    iVar6 = FUN_00425010();
    *(undefined4 *)(iVar6 + 0x80) = 0xd;
    FUN_00647d10(iVar6,uVar4);
    *(undefined4 *)(iVar6 + 0x84) = 2;
    *(undefined4 *)(iVar6 + 0xf0) = 0;
    *(int *)(iVar6 + 0xf4) = DAT_007cc54c;
    *(undefined **)(iVar6 + 0x100) = &DAT_007cc544;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_2,s_AIManager_Triggers_Trigger__d_Am_00748540,*(undefined4 *)(param_1 + 4));
  local_4 = 3;
  uVar4 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar6 = FUN_00425010();
    *(undefined4 *)(iVar6 + 0x80) = 1;
    FUN_00647d10(iVar6,uVar4);
    *(undefined4 *)(iVar6 + 0x84) = 2;
    *(undefined4 *)(iVar6 + 0xf0) = 0;
    *(undefined4 *)(iVar6 + 0xf4) = 0xffffffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_005f1470(uVar3);
  ExceptionList = local_c;
  return;
}

