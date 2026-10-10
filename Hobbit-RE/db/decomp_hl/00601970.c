
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00601970(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_48;
  int local_44;
  int local_40;
  int *local_3c;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e35db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_44 = param_1;
  if ((DAT_007cc598 & 1) == 0) {
    DAT_007cc598 = DAT_007cc598 | 1;
    DAT_007cc5f0 = 0;
    DAT_007cc5ec = 0;
    _DAT_007cc5f4 = 0;
    _DAT_007cc5fc = 0;
    DAT_007cc5f8 = 0;
    _DAT_007cc5e4 = 0;
    _DAT_007cc5e8 = 0;
    ExceptionList = &local_c;
    FUN_006bfe55(&LAB_00601e20);
  }
  if ((DAT_007cc598 & 2) == 0) {
    DAT_007cc598 = DAT_007cc598 | 2;
    DAT_007cc5a8 = (int *)0x0;
    DAT_007cc5a4 = 0;
    DAT_007cc5ac = 0;
    DAT_007cc5b4 = 0;
    DAT_007cc5b0 = 0;
    _DAT_007cc59c = 0;
    _DAT_007cc5a0 = 0;
    FUN_006bfe55(&LAB_00601de0);
  }
  if ((DAT_007cc598 & 4) == 0) {
    DAT_007cc598 = DAT_007cc598 | 4;
    DAT_007cc56c = 0;
    _DAT_007cc568 = 0;
    _DAT_007cc570 = 0;
    _DAT_007cc578 = 0;
    DAT_007cc574 = 0;
    _DAT_007cc560 = 0;
    _DAT_007cc564 = 0;
    FUN_006bfe55(&LAB_00601dc0);
  }
  if (DAT_00748058 != 0) {
    DAT_00748058 = 0;
    FUN_0054d730(&DAT_007cc5e4,&DAT_007cc560);
    DAT_007cc620 = 0x12;
    local_40 = 0;
    if (0 < DAT_007cc5ec) {
      local_48 = 0;
      do {
        piVar6 = (int *)0x0;
        FUN_00649b80(local_48 + DAT_007cc5f0);
        local_4 = 0;
        piVar2 = DAT_007cc5a8;
        iVar3 = DAT_007cc5ac;
        if (DAT_007cc5ac < DAT_007cc5a4 + 1) {
          if (DAT_007cc5b4 == 0) {
            iVar3 = DAT_007cc5ac / 2;
            iVar8 = 1;
            if (0 < iVar3) {
              iVar8 = iVar3;
            }
            if (iVar8 + DAT_007cc5a4 < 1) {
              iVar3 = 1;
            }
            else {
              if (iVar3 < 1) {
                iVar3 = 1;
              }
              iVar3 = iVar3 + DAT_007cc5a4;
            }
          }
          else {
            iVar3 = DAT_007cc5b4 + DAT_007cc5a4;
          }
          local_3c = (int *)operator_new(iVar3 * 0x2c + 4);
          local_4._0_1_ = 1;
          if (local_3c != (int *)0x0) {
            piVar6 = local_3c + 1;
            *local_3c = iVar3;
            FUN_006c043b(piVar6,0x2c,iVar3,FUN_006499d0,FUN_00649ba0);
          }
          iVar8 = 0;
          local_4 = (uint)local_4._1_3_ << 8;
          if (0 < DAT_007cc5a4) {
            iVar7 = 0;
            do {
              FUN_0064a320(iVar7 + (int)DAT_007cc5a8);
              iVar8 = iVar8 + 1;
              iVar7 = iVar7 + 0x2c;
            } while (iVar8 < DAT_007cc5a4);
          }
          piVar2 = piVar6;
          if (DAT_007cc5a8 != (int *)0x0) {
            FUN_00407f70(3);
          }
        }
        DAT_007cc5ac = iVar3;
        DAT_007cc5a8 = piVar2;
        FUN_0064a320(local_38);
        DAT_007cc5a4 = DAT_007cc5a4 + 1;
        local_4 = 0xffffffff;
        FUN_00649ba0();
        local_40 = local_40 + 1;
        local_48 = local_48 + 0x4c;
      } while (local_40 < DAT_007cc5ec);
    }
  }
  FUN_00649920(&local_40,s_AIManager_Triggers_Trigger__d_Wo_007489f0,*(undefined4 *)(local_44 + 4));
  local_4 = 2;
  uVar4 = FUN_00649940();
  uVar1 = param_2;
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 0xc;
    FUN_00647d10(iVar3,uVar4);
    *(undefined4 *)(iVar3 + 0x84) = 0x10;
    *(undefined4 *)(iVar3 + 0xf0) = 0;
    *(int *)(iVar3 + 0xf4) = DAT_007cc5a4;
    *(undefined **)(iVar3 + 0x100) = &DAT_007cc59c;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  uVar4 = *(undefined4 *)(DAT_007cc56c + DAT_007cc620 * 4);
  FUN_00649920(&param_2,s_AIManager_Triggers_Trigger__d_Wo_007489c4,*(undefined4 *)(local_44 + 4));
  local_4 = 3;
  uVar5 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 0xf;
    FUN_00647d10(iVar3,uVar5);
    *(undefined4 *)(iVar3 + 0x84) = 0;
    *(undefined4 *)(iVar3 + 0x100) = uVar4;
    *(undefined4 *)(iVar3 + 0x104) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&local_44,s_AIManager_Triggers_Trigger__d_Vo_007482a4,*(undefined4 *)(local_44 + 4));
  local_4 = 4;
  uVar4 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 0xf;
    FUN_00647d10(iVar3,uVar4);
    *(undefined4 *)(iVar3 + 0x84) = 0;
    *(undefined4 *)(iVar3 + 0x100) = 0x2f;
    *(undefined4 *)(iVar3 + 0x104) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_005f1470(uVar1);
  ExceptionList = local_c;
  return;
}

