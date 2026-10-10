
undefined * FUN_0047aec0(void)

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
  puStack_8 = &LAB_006d2056;
  local_c = ExceptionList;
  iVar5 = 0;
  if (DAT_0075cd4c == 0) {
    ExceptionList = &local_c;
    FUN_00649b20(s_Shake_007282b0);
    local_4 = 0;
    piVar3 = DAT_0075cd50;
    iVar1 = DAT_0075cd54;
    if (DAT_0075cd54 < DAT_0075cd4c + 1) {
      if (DAT_0075cd5c == 0) {
        iVar1 = DAT_0075cd54 / 2;
        iVar4 = 1;
        if (0 < iVar1) {
          iVar4 = iVar1;
        }
        if (iVar4 + DAT_0075cd4c < 1) {
          iVar1 = 1;
        }
        else {
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar1 = iVar1 + DAT_0075cd4c;
        }
      }
      else {
        iVar1 = DAT_0075cd4c + DAT_0075cd5c;
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
      if (0 < DAT_0075cd4c) {
        iVar4 = 0;
        do {
          FUN_0064a320(iVar4 + (int)DAT_0075cd50);
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x2c;
        } while (iVar5 < DAT_0075cd4c);
      }
      if (DAT_0075cd50 != (int *)0x0) {
        piVar2 = DAT_0075cd50 + -1;
        FUN_006c026a(DAT_0075cd50,0x2c,DAT_0075cd50[-1],FUN_00649ba0);
        FUN_006bf840(piVar2);
      }
    }
    DAT_0075cd54 = iVar1;
    DAT_0075cd50 = piVar3;
    FUN_0064a320(local_64);
    DAT_0075cd4c = DAT_0075cd4c + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(&DAT_007282a8);
    local_4 = 2;
    piVar3 = DAT_0075cd50;
    iVar5 = DAT_0075cd54;
    if (DAT_0075cd54 < DAT_0075cd4c + 1) {
      if (DAT_0075cd5c == 0) {
        iVar5 = DAT_0075cd54 / 2;
        iVar1 = 1;
        if (0 < iVar5) {
          iVar1 = iVar5;
        }
        if (iVar1 + DAT_0075cd4c < 1) {
          iVar5 = 1;
        }
        else {
          if (iVar5 < 1) {
            iVar5 = 1;
          }
          iVar5 = iVar5 + DAT_0075cd4c;
        }
      }
      else {
        iVar5 = DAT_0075cd4c + DAT_0075cd5c;
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
      iVar1 = 0;
      local_4 = CONCAT31(local_4._1_3_,2);
      if (0 < DAT_0075cd4c) {
        iVar4 = 0;
        do {
          FUN_0064a320(iVar4 + (int)DAT_0075cd50);
          iVar1 = iVar1 + 1;
          iVar4 = iVar4 + 0x2c;
        } while (iVar1 < DAT_0075cd4c);
      }
      if (DAT_0075cd50 != (int *)0x0) {
        FUN_00407f70(3);
      }
    }
    DAT_0075cd54 = iVar5;
    DAT_0075cd50 = piVar3;
    FUN_0064a320(local_64);
    DAT_0075cd4c = DAT_0075cd4c + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(&DAT_007282a0);
    local_4 = 4;
    FUN_00469980(local_64);
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(s_Cycle_00728298);
    local_4 = 5;
    FUN_00469980(local_38);
    local_4 = 0xffffffff;
    FUN_00649ba0();
  }
  ExceptionList = local_c;
  return &DAT_0075cd44;
}

