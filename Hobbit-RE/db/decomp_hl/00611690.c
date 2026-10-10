
void FUN_00611690(void)

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
  puStack_8 = &LAB_006e41a6;
  local_c = ExceptionList;
  iVar3 = 0;
  ExceptionList = &local_c;
  if (DAT_007cc6c4 == 0) {
    ExceptionList = &local_c;
    if (DAT_007cc6bc != (int *)0x0) {
      piVar4 = DAT_007cc6bc + -1;
      ExceptionList = &local_c;
      FUN_006c026a(DAT_007cc6bc,0x2c,DAT_007cc6bc[-1],FUN_00649ba0);
      FUN_006bf840(piVar4);
    }
    DAT_007cc6bc = (int *)0x0;
    DAT_007cc6c0 = 0;
  }
  DAT_007cc6b8 = 0;
  FUN_00649b20(s_NO_ANIM_007432c0);
  local_4 = 0;
  piVar4 = DAT_007cc6bc;
  iVar1 = DAT_007cc6c0;
  if (DAT_007cc6c0 < DAT_007cc6b8 + 1) {
    if (DAT_007cc6c8 == 0) {
      iVar1 = DAT_007cc6c0 / 2;
      iVar5 = 1;
      if (0 < iVar1) {
        iVar5 = iVar1;
      }
      if (iVar5 + DAT_007cc6b8 < 1) {
        iVar1 = 1;
      }
      else {
        if (iVar1 < 1) {
          iVar1 = 1;
        }
        iVar1 = iVar1 + DAT_007cc6b8;
      }
    }
    else {
      iVar1 = DAT_007cc6b8 + DAT_007cc6c8;
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
    if (0 < DAT_007cc6b8) {
      iVar5 = 0;
      do {
        FUN_0064a320(iVar5 + (int)DAT_007cc6bc);
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar3 < DAT_007cc6b8);
    }
    if (DAT_007cc6bc != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_007cc6c0 = iVar1;
  DAT_007cc6bc = piVar4;
  FUN_0064a320(local_64);
  DAT_007cc6b8 = DAT_007cc6b8 + 1;
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
      piVar4 = DAT_007cc6bc;
      iVar3 = DAT_007cc6c0;
      if (DAT_007cc6c0 < DAT_007cc6b8 + 1) {
        if (DAT_007cc6c8 == 0) {
          iVar3 = DAT_007cc6c0 / 2;
          iVar1 = 1;
          if (0 < iVar3) {
            iVar1 = iVar3;
          }
          if (iVar1 + DAT_007cc6b8 < 1) {
            iVar3 = 1;
          }
          else {
            if (iVar3 < 1) {
              iVar3 = 1;
            }
            iVar3 = iVar3 + DAT_007cc6b8;
          }
        }
        else {
          iVar3 = DAT_007cc6b8 + DAT_007cc6c8;
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
        if (0 < DAT_007cc6b8) {
          iVar1 = 0;
          iVar5 = 0;
          do {
            FUN_0064a320(iVar1 + (int)DAT_007cc6bc);
            iVar5 = iVar5 + 1;
            iVar1 = iVar1 + 0x2c;
          } while (iVar5 < DAT_007cc6b8);
        }
        if (DAT_007cc6bc != (int *)0x0) {
          FUN_00407f70(3);
        }
      }
      DAT_007cc6c0 = iVar3;
      DAT_007cc6bc = piVar4;
      FUN_0064a320(local_38);
      DAT_007cc6b8 = DAT_007cc6b8 + 1;
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

