
void FUN_00627f80(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_6c;
  undefined1 local_64 [44];
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e4e46;
  local_c = ExceptionList;
  iVar3 = 0;
  ExceptionList = &local_c;
  if (DAT_007cc754 == 0) {
    ExceptionList = &local_c;
    if (DAT_007cc74c != (int *)0x0) {
      piVar4 = DAT_007cc74c + -1;
      ExceptionList = &local_c;
      FUN_006c026a(DAT_007cc74c,0x2c,DAT_007cc74c[-1],FUN_00649ba0);
      FUN_006bf840(piVar4);
    }
    DAT_007cc74c = (int *)0x0;
    DAT_007cc750 = 0;
  }
  DAT_007cc748 = 0;
  FUN_00649b20(s_NO_ANIM_007432c0);
  local_4 = 0;
  piVar4 = DAT_007cc74c;
  iVar1 = DAT_007cc750;
  if (DAT_007cc750 < DAT_007cc748 + 1) {
    if (DAT_007cc758 == 0) {
      iVar1 = DAT_007cc750 / 2;
      iVar5 = 1;
      if (0 < iVar1) {
        iVar5 = iVar1;
      }
      if (iVar5 + DAT_007cc748 < 1) {
        iVar1 = 1;
      }
      else {
        if (iVar1 < 1) {
          iVar1 = 1;
        }
        iVar1 = iVar1 + DAT_007cc748;
      }
    }
    else {
      iVar1 = DAT_007cc748 + DAT_007cc758;
    }
    piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
    local_4._0_1_ = 1;
    if (piVar2 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar2 + 1;
      *piVar2 = iVar1;
      FUN_006c043b(piVar4,0x2c,iVar1,FUN_006499d0,FUN_00649ba0);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (0 < DAT_007cc748) {
      iVar5 = 0;
      do {
        FUN_0064a320(iVar5 + (int)DAT_007cc74c);
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar3 < DAT_007cc748);
    }
    if (DAT_007cc74c != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_007cc750 = iVar1;
  DAT_007cc74c = piVar4;
  FUN_0064a320(local_64);
  DAT_007cc748 = DAT_007cc748 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  local_6c = 0;
  FUN_005af120();
  iVar3 = FUN_00592920();
  iVar3 = FUN_005b7420(*(undefined4 *)(iVar3 + 0x1b0));
  if (0 < iVar3) {
    do {
      FUN_005af120();
      iVar3 = FUN_00592920();
      iVar3 = FUN_005b72d0(*(undefined4 *)(iVar3 + 0x1b0),local_6c);
      FUN_00649b20(iVar3 + 8);
      local_4 = 2;
      piVar4 = DAT_007cc74c;
      iVar3 = DAT_007cc750;
      if (DAT_007cc750 < DAT_007cc748 + 1) {
        if (DAT_007cc758 == 0) {
          iVar3 = DAT_007cc750 / 2;
          iVar1 = 1;
          if (0 < iVar3) {
            iVar1 = iVar3;
          }
          if (iVar1 + DAT_007cc748 < 1) {
            iVar3 = 1;
          }
          else {
            if (iVar3 < 1) {
              iVar3 = 1;
            }
            iVar3 = iVar3 + DAT_007cc748;
          }
        }
        else {
          iVar3 = DAT_007cc748 + DAT_007cc758;
        }
        piVar2 = (int *)operator_new(iVar3 * 0x2c + 4);
        local_4._0_1_ = 3;
        if (piVar2 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = piVar2 + 1;
          *piVar2 = iVar3;
          FUN_006c043b(piVar4,0x2c,iVar3,FUN_006499d0,FUN_00649ba0);
        }
        local_4 = CONCAT31(local_4._1_3_,2);
        if (0 < DAT_007cc748) {
          iVar1 = 0;
          iVar5 = 0;
          do {
            FUN_0064a320(iVar1 + (int)DAT_007cc74c);
            iVar5 = iVar5 + 1;
            iVar1 = iVar1 + 0x2c;
          } while (iVar5 < DAT_007cc748);
        }
        if (DAT_007cc74c != (int *)0x0) {
          FUN_00407f70(3);
        }
      }
      DAT_007cc750 = iVar3;
      DAT_007cc74c = piVar4;
      FUN_0064a320(local_38);
      DAT_007cc748 = DAT_007cc748 + 1;
      local_4 = 0xffffffff;
      FUN_00649ba0();
      local_6c = local_6c + 1;
      FUN_005af120();
      iVar3 = FUN_00592920();
      iVar3 = FUN_005b7420(*(undefined4 *)(iVar3 + 0x1b0));
    } while (local_6c < iVar3);
  }
  ExceptionList = local_c;
  return;
}

