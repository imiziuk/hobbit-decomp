
void FUN_0059d1f0(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 local_64 [9];
  int local_40;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd7db;
  local_c = ExceptionList;
  iVar5 = 0;
  ExceptionList = &local_c;
  if (DAT_0079859c == 0) {
    ExceptionList = &local_c;
    if (DAT_00798594 != (int *)0x0) {
      piVar3 = DAT_00798594 + -1;
      ExceptionList = &local_c;
      FUN_006c026a(DAT_00798594,0x2c,DAT_00798594[-1],FUN_00649ba0);
      FUN_006bf840(piVar3);
    }
    DAT_00798594 = (int *)0x0;
    DAT_00798598 = 0;
  }
  DAT_00798590 = 0;
  FUN_0059d070(local_64);
  local_4 = 0;
  if (local_40 != 0) {
    FUN_00658290(local_64[0],&DAT_00798588);
    FUN_00658080(local_64[0]);
    DAT_007986ac = 1;
  }
  FUN_00649b20(&DAT_00720670);
  local_4._0_1_ = 1;
  piVar3 = DAT_00798594;
  iVar1 = DAT_00798598;
  if (DAT_00798598 < DAT_00798590 + 1) {
    if (DAT_007985a0 == 0) {
      iVar1 = DAT_00798598 / 2;
      iVar4 = 1;
      if (0 < iVar1) {
        iVar4 = iVar1;
      }
      if (iVar4 + DAT_00798590 < 1) {
        iVar1 = 1;
      }
      else {
        if (iVar1 < 1) {
          iVar1 = 1;
        }
        iVar1 = iVar1 + DAT_00798590;
      }
    }
    else {
      iVar1 = DAT_00798590 + DAT_007985a0;
    }
    piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
    local_4._0_1_ = 2;
    if (piVar2 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = piVar2 + 1;
      *piVar2 = iVar1;
      FUN_006c043b(piVar3,0x2c,iVar1,FUN_006499d0,FUN_00649ba0);
    }
    local_4._0_1_ = 1;
    if (0 < DAT_00798590) {
      iVar4 = 0;
      do {
        FUN_0064a320(iVar4 + (int)DAT_00798594);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x2c;
      } while (iVar5 < DAT_00798590);
    }
    if (DAT_00798594 != (int *)0x0) {
      piVar2 = DAT_00798594 + -1;
      FUN_006c026a(DAT_00798594,0x2c,DAT_00798594[-1],FUN_00649ba0);
      FUN_006bf840(piVar2);
    }
  }
  DAT_00798598 = iVar1;
  DAT_00798594 = piVar3;
  FUN_0064a320(local_38);
  DAT_00798590 = DAT_00798590 + 1;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649ba0();
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

