
void __thiscall FUN_005dfc60(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 local_48 [8];
  int local_40;
  int *local_3c;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e11c3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_40 = param_1;
  FUN_005cc820(param_2);
  piVar5 = (int *)0x0;
  if (DAT_00798540 != 0) {
    ExceptionList = local_c;
    return;
  }
  FUN_00649920(local_48,s_AIManager_Actions_Action__d_NPC_007470b8,*(undefined4 *)(param_1 + 4));
  local_4 = 0;
  uVar3 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar4 = FUN_00425010();
    *(undefined4 *)(iVar4 + 0x80) = 0xf;
    FUN_00647d10(iVar4,uVar3);
    *(undefined4 *)(iVar4 + 0x84) = 0;
    *(undefined4 *)(iVar4 + 0x100) = 0x1c;
    *(undefined4 *)(iVar4 + 0x104) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  uVar3 = *(undefined4 *)(param_1 + 0x48);
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  FUN_00649600(s_obj_mgr__LockObjectEvenIfDeactiv_0071d1b4);
  local_4 = 1;
  iVar4 = FUN_00406ce0(uVar3,uVar1);
  local_4 = 0xffffffff;
  if (iVar4 == -1) {
    FUN_00649720();
  }
  else {
    iVar4 = *(int *)(DAT_0076f648 + iVar4 * 0x14);
    FUN_00649720();
    if (iVar4 != 0) {
      iVar4 = FUN_0059aa60();
      FUN_00649920(local_48,s_AIManager_Actions_Action__d_Idle_00747650,*(undefined4 *)(param_1 + 4)
                  );
      local_4 = 2;
      uVar3 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar7 = FUN_00425010();
        *(undefined4 *)(iVar7 + 0x80) = 0xd;
        FUN_00647d10(iVar7,uVar3);
        *(undefined4 *)(iVar7 + 0x84) = 0;
        *(undefined4 *)(iVar7 + 0xf0) = 0;
        *(undefined4 *)(iVar7 + 0xf4) = *(undefined4 *)(iVar4 + 8);
        *(int *)(iVar7 + 0x100) = iVar4;
      }
      goto LAB_005dffce;
    }
  }
  if (DAT_007cc4d4 == 0) {
    if (DAT_007cc4cc != (int *)0x0) {
      piVar2 = DAT_007cc4cc + -1;
      FUN_006c026a(DAT_007cc4cc,0x2c,DAT_007cc4cc[-1],FUN_00649ba0);
      FUN_006bf840(piVar2);
    }
    DAT_007cc4cc = (int *)0x0;
    DAT_007cc4d0 = 0;
  }
  DAT_007cc4c8 = 0;
  FUN_00649b20(&DAT_00720670);
  local_4 = 3;
  piVar2 = DAT_007cc4cc;
  iVar4 = DAT_007cc4d0;
  if (DAT_007cc4d0 < DAT_007cc4c8 + 1) {
    if (DAT_007cc4d8 == 0) {
      iVar4 = DAT_007cc4d0 / 2;
      iVar7 = 1;
      if (0 < iVar4) {
        iVar7 = iVar4;
      }
      if (iVar7 + DAT_007cc4c8 < 1) {
        iVar4 = 1;
      }
      else {
        if (iVar4 < 1) {
          iVar4 = 1;
        }
        iVar4 = iVar4 + DAT_007cc4c8;
      }
    }
    else {
      iVar4 = DAT_007cc4d8 + DAT_007cc4c8;
    }
    local_3c = (int *)operator_new(iVar4 * 0x2c + 4);
    local_4._0_1_ = 4;
    if (local_3c != (int *)0x0) {
      piVar5 = local_3c + 1;
      *local_3c = iVar4;
      FUN_006c043b(piVar5,0x2c,iVar4,FUN_006499d0,FUN_00649ba0);
    }
    iVar7 = 0;
    local_4 = CONCAT31(local_4._1_3_,3);
    if (0 < DAT_007cc4c8) {
      iVar6 = 0;
      do {
        FUN_0064a320(iVar6 + (int)DAT_007cc4cc);
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 0x2c;
      } while (iVar7 < DAT_007cc4c8);
    }
    param_1 = local_40;
    piVar2 = piVar5;
    if (DAT_007cc4cc != (int *)0x0) {
      FUN_00407f70(3);
      param_1 = local_40;
    }
  }
  DAT_007cc4d0 = iVar4;
  DAT_007cc4cc = piVar2;
  FUN_0064a320(local_38);
  DAT_007cc4c8 = DAT_007cc4c8 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649920(&local_3c,s_AIManager_Actions_Action__d_Idle_00747650,*(undefined4 *)(param_1 + 4));
  local_4 = 5;
  uVar3 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar4 = FUN_00425010();
    *(undefined4 *)(iVar4 + 0x80) = 0xd;
    FUN_00647d10(iVar4,uVar3);
    *(undefined4 *)(iVar4 + 0x84) = 0;
    *(undefined4 *)(iVar4 + 0xf0) = 0;
    *(int *)(iVar4 + 0xf4) = DAT_007cc4c8;
    *(undefined **)(iVar4 + 0x100) = &DAT_007cc4c0;
  }
LAB_005dffce:
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return;
}

