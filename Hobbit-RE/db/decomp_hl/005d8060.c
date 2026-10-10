
void __thiscall FUN_005d8060(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined1 local_48 [8];
  int local_40;
  int *local_3c;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e0973;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_40 = param_1;
  FUN_005cc820(param_2);
  if (DAT_00798540 != 0) {
    ExceptionList = local_c;
    return;
  }
  FUN_00649920(local_48,s_AIManager_Actions_Action__d_NPC_007470b8,*(undefined4 *)(param_1 + 4));
  local_4 = 0;
  uVar2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 0x10;
    FUN_00647d10(iVar3,uVar2);
    *(undefined4 *)(iVar3 + 0x100) = 0x10;
    *(undefined4 *)(iVar3 + 0x84) = 0;
    *(undefined4 *)(iVar3 + 0x104) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  uVar2 = *(undefined4 *)(param_1 + 0x48);
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  FUN_00649600(s_obj_mgr__LockObjectEvenIfDeactiv_0071d1b4);
  local_4 = 1;
  iVar3 = FUN_00406ce0(uVar2,uVar1);
  local_4 = 0xffffffff;
  if (iVar3 == -1) {
    FUN_00649720();
  }
  else {
    iVar3 = *(int *)(DAT_0076f648 + iVar3 * 0x14);
    FUN_00649720();
    if (iVar3 != 0) {
      iVar3 = FUN_005b0110();
      FUN_00649920(&param_2,s_AIManager_Actions_Action__d_Stat_0074719c,*(undefined4 *)(param_1 + 4)
                  );
      local_4 = 2;
      uVar2 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar6 = FUN_00425010();
        *(undefined4 *)(iVar6 + 0x80) = 0xd;
        FUN_00647d10(iVar6,uVar2);
        *(undefined4 *)(iVar6 + 0x84) = 0;
        *(undefined4 *)(iVar6 + 0xf0) = 0;
        *(undefined4 *)(iVar6 + 0xf4) = *(undefined4 *)(iVar3 + 8);
        *(int *)(iVar6 + 0x100) = iVar3;
      }
      goto LAB_005d83e4;
    }
  }
  if (DAT_007cc4d4 == 0) {
    if (DAT_007cc4cc != (int *)0x0) {
      piVar4 = DAT_007cc4cc + -1;
      FUN_006c026a(DAT_007cc4cc,0x2c,DAT_007cc4cc[-1],FUN_00649ba0);
      FUN_006bf840(piVar4);
    }
    DAT_007cc4cc = (int *)0x0;
    DAT_007cc4d0 = 0;
  }
  DAT_007cc4c8 = 0;
  FUN_00649b20(&DAT_00720670);
  local_4 = 3;
  piVar4 = DAT_007cc4cc;
  iVar3 = DAT_007cc4d0;
  if (DAT_007cc4d0 < DAT_007cc4c8 + 1) {
    if (DAT_007cc4d8 == 0) {
      iVar3 = DAT_007cc4d0 / 2;
      iVar6 = 1;
      if (0 < iVar3) {
        iVar6 = iVar3;
      }
      if (iVar6 + DAT_007cc4c8 < 1) {
        iVar3 = 1;
      }
      else {
        if (iVar3 < 1) {
          iVar3 = 1;
        }
        iVar3 = iVar3 + DAT_007cc4c8;
      }
    }
    else {
      iVar3 = DAT_007cc4d8 + DAT_007cc4c8;
    }
    local_3c = (int *)operator_new(iVar3 * 0x2c + 4);
    local_4._0_1_ = 4;
    if (local_3c == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = local_3c + 1;
      *local_3c = iVar3;
      FUN_006c043b(piVar4,0x2c,iVar3,FUN_006499d0,FUN_00649ba0);
    }
    iVar6 = 0;
    local_4 = CONCAT31(local_4._1_3_,3);
    if (0 < DAT_007cc4c8) {
      iVar5 = 0;
      do {
        FUN_0064a320(iVar5 + (int)DAT_007cc4cc);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < DAT_007cc4c8);
    }
    param_1 = local_40;
    if (DAT_007cc4cc != (int *)0x0) {
      FUN_00407f70(3);
      param_1 = local_40;
    }
  }
  DAT_007cc4d0 = iVar3;
  DAT_007cc4cc = piVar4;
  FUN_0064a320(local_38);
  DAT_007cc4c8 = DAT_007cc4c8 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649920(&local_3c,s_AIManager_Actions_Action__d_Stat_0074719c,*(undefined4 *)(param_1 + 4));
  local_4 = 5;
  uVar2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 0xd;
    FUN_00647d10(iVar3,uVar2);
    *(undefined4 *)(iVar3 + 0x84) = 0;
    *(undefined4 *)(iVar3 + 0xf0) = 0;
    *(int *)(iVar3 + 0xf4) = DAT_007cc4c8;
    *(undefined **)(iVar3 + 0x100) = &DAT_007cc4c0;
  }
LAB_005d83e4:
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return;
}

