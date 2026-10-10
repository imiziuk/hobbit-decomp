
undefined * FUN_005bf100(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 local_64 [44];
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df276;
  local_c = ExceptionList;
  iVar5 = 0;
  ExceptionList = &local_c;
  if (DAT_007ba7a0 == 0) {
    ExceptionList = &local_c;
    if (DAT_007ba798 != (int *)0x0) {
      ExceptionList = &local_c;
      FUN_00407f70(3);
    }
    DAT_007ba798 = (int *)0x0;
    DAT_007ba79c = 0;
  }
  DAT_007ba794 = 0;
  FUN_00649b20(s_STATE_NONE_007371bc);
  local_4 = 0;
  piVar3 = DAT_007ba798;
  iVar1 = DAT_007ba79c;
  if (DAT_007ba79c < DAT_007ba794 + 1) {
    if (DAT_007ba7a4 == 0) {
      iVar1 = DAT_007ba79c / 2;
      iVar4 = 1;
      if (0 < iVar1) {
        iVar4 = iVar1;
      }
      if (iVar4 + DAT_007ba794 < 1) {
        iVar1 = 1;
      }
      else {
        if (iVar1 < 1) {
          iVar1 = 1;
        }
        iVar1 = iVar1 + DAT_007ba794;
      }
    }
    else {
      iVar1 = DAT_007ba794 + DAT_007ba7a4;
    }
    piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
    local_4._0_1_ = 1;
    if (piVar2 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = piVar2 + 1;
      *piVar2 = iVar1;
      FUN_006c043b(piVar3,0x2c,iVar1,FUN_006499d0,FUN_00649ba0);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (0 < DAT_007ba794) {
      iVar4 = 0;
      do {
        FUN_0064a320(iVar4 + (int)DAT_007ba798);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x2c;
      } while (iVar5 < DAT_007ba794);
    }
    if (DAT_007ba798 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_007ba79c = iVar1;
  DAT_007ba798 = piVar3;
  iVar1 = 0;
  FUN_0064a320(local_64);
  DAT_007ba794 = DAT_007ba794 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_STATE_IDLE_00745c10);
  local_4 = 2;
  piVar3 = DAT_007ba798;
  iVar5 = DAT_007ba79c;
  if (DAT_007ba79c < DAT_007ba794 + 1) {
    if (DAT_007ba7a4 == 0) {
      iVar5 = DAT_007ba79c / 2;
      iVar4 = 1;
      if (0 < iVar5) {
        iVar4 = iVar5;
      }
      if (iVar4 + DAT_007ba794 < 1) {
        iVar5 = 1;
      }
      else {
        if (iVar5 < 1) {
          iVar5 = 1;
        }
        iVar5 = iVar5 + DAT_007ba794;
      }
    }
    else {
      iVar5 = DAT_007ba794 + DAT_007ba7a4;
    }
    piVar2 = (int *)operator_new(iVar5 * 0x2c + 4);
    local_4._0_1_ = 3;
    if (piVar2 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = piVar2 + 1;
      *piVar2 = iVar5;
      FUN_006c043b(piVar3,0x2c,iVar5,FUN_006499d0,FUN_00649ba0);
    }
    local_4 = CONCAT31(local_4._1_3_,2);
    if (0 < DAT_007ba794) {
      iVar4 = 0;
      do {
        FUN_0064a320(iVar4 + (int)DAT_007ba798);
        iVar1 = iVar1 + 1;
        iVar4 = iVar4 + 0x2c;
      } while (iVar1 < DAT_007ba794);
    }
    if (DAT_007ba798 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_007ba79c = iVar5;
  DAT_007ba798 = piVar3;
  FUN_0064a320(local_64);
  DAT_007ba794 = DAT_007ba794 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_STATE_ALERT_00745c04);
  local_4 = 4;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_STATE_ATTACK_00745bf4);
  local_4 = 5;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_STATE_RANGEDATTACK_00745be0);
  local_4 = 6;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_STATE_RETREAT_00745bd0);
  local_4 = 7;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_STATE_FLEE_00745bc4);
  local_4 = 8;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_STATE_CAST_00745bb8);
  local_4 = 9;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_STATE_CONVERSE_00745ba8);
  local_4 = 10;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_STATE_TAKECOVER_00745b98);
  local_4 = 0xb;
  FUN_00469980(local_38);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return &DAT_007ba78c;
}

