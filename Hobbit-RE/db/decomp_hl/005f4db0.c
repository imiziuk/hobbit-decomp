
void FUN_005f4db0(void)

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
  puStack_8 = &LAB_006e27a6;
  local_c = ExceptionList;
  iVar5 = 0;
  ExceptionList = &local_c;
  if (DAT_007cc590 == 0) {
    ExceptionList = &local_c;
    if (DAT_007cc588 != (int *)0x0) {
      piVar3 = DAT_007cc588 + -1;
      ExceptionList = &local_c;
      FUN_006c026a(DAT_007cc588,0x2c,DAT_007cc588[-1],FUN_00649ba0);
      FUN_006bf840(piVar3);
    }
    DAT_007cc588 = (int *)0x0;
    DAT_007cc58c = 0;
  }
  DAT_007cc584 = 0;
  FUN_00649b20(s_Ranged_00748380);
  local_4 = 0;
  piVar3 = DAT_007cc588;
  iVar1 = DAT_007cc58c;
  if (DAT_007cc58c < DAT_007cc584 + 1) {
    if (DAT_007cc594 == 0) {
      iVar1 = DAT_007cc58c / 2;
      iVar4 = 1;
      if (0 < iVar1) {
        iVar4 = iVar1;
      }
      if (iVar4 + DAT_007cc584 < 1) {
        iVar1 = 1;
      }
      else {
        if (iVar1 < 1) {
          iVar1 = 1;
        }
        iVar1 = iVar1 + DAT_007cc584;
      }
    }
    else {
      iVar1 = DAT_007cc584 + DAT_007cc594;
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
    if (0 < DAT_007cc584) {
      iVar4 = 0;
      do {
        FUN_0064a320(iVar4 + (int)DAT_007cc588);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x2c;
      } while (iVar5 < DAT_007cc584);
    }
    if (DAT_007cc588 != (int *)0x0) {
      piVar2 = DAT_007cc588 + -1;
      FUN_006c026a(DAT_007cc588,0x2c,DAT_007cc588[-1],FUN_00649ba0);
      FUN_006bf840(piVar2);
    }
  }
  DAT_007cc58c = iVar1;
  DAT_007cc588 = piVar3;
  iVar1 = 0;
  FUN_0064a320(local_64);
  DAT_007cc584 = DAT_007cc584 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Melee_00748378);
  local_4 = 2;
  piVar3 = DAT_007cc588;
  iVar5 = DAT_007cc58c;
  if (DAT_007cc58c < DAT_007cc584 + 1) {
    if (DAT_007cc594 == 0) {
      iVar5 = DAT_007cc58c / 2;
      iVar4 = 1;
      if (0 < iVar5) {
        iVar4 = iVar5;
      }
      if (iVar4 + DAT_007cc584 < 1) {
        iVar5 = 1;
      }
      else {
        if (iVar5 < 1) {
          iVar5 = 1;
        }
        iVar5 = iVar5 + DAT_007cc584;
      }
    }
    else {
      iVar5 = DAT_007cc584 + DAT_007cc594;
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
    if (0 < DAT_007cc584) {
      iVar4 = 0;
      do {
        FUN_0064a320(iVar4 + (int)DAT_007cc588);
        iVar1 = iVar1 + 1;
        iVar4 = iVar4 + 0x2c;
      } while (iVar1 < DAT_007cc584);
    }
    if (DAT_007cc588 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_007cc58c = iVar5;
  DAT_007cc588 = piVar3;
  FUN_0064a320(local_38);
  DAT_007cc584 = DAT_007cc584 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

