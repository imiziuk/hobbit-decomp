
void FUN_004169a0(undefined4 param_1,undefined4 param_2)

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
  puStack_8 = &LAB_006cef16;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649b20(param_1);
  local_4 = 0;
  piVar3 = DAT_0075b7dc;
  iVar1 = DAT_0075b7e0;
  if (DAT_0075b7e0 < DAT_0075b7d8 + 1) {
    if (DAT_0075b7e8 == 0) {
      iVar1 = DAT_0075b7e0 / 2;
      iVar4 = 1;
      if (0 < iVar1) {
        iVar4 = iVar1;
      }
      if (iVar4 + DAT_0075b7d8 < 1) {
        iVar1 = 1;
      }
      else {
        if (iVar1 < 1) {
          iVar1 = 1;
        }
        iVar1 = iVar1 + DAT_0075b7d8;
      }
    }
    else {
      iVar1 = DAT_0075b7d8 + DAT_0075b7e8;
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
    if (0 < DAT_0075b7d8) {
      iVar4 = 0;
      iVar5 = 0;
      do {
        FUN_0064a320(iVar4 + (int)DAT_0075b7dc);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x2c;
      } while (iVar5 < DAT_0075b7d8);
    }
    if (DAT_0075b7dc != (int *)0x0) {
      piVar2 = DAT_0075b7dc + -1;
      FUN_006c026a(DAT_0075b7dc,0x2c,DAT_0075b7dc[-1],FUN_00649ba0);
      FUN_006bf840(piVar2);
    }
  }
  DAT_0075b7e0 = iVar1;
  DAT_0075b7dc = piVar3;
  FUN_0064a320(local_64);
  DAT_0075b7d8 = DAT_0075b7d8 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(param_2);
  local_4 = 2;
  piVar3 = DAT_0075b74c;
  iVar1 = DAT_0075b750;
  if (DAT_0075b750 < DAT_0075b748 + 1) {
    if (DAT_0075b758 == 0) {
      iVar1 = DAT_0075b750 / 2;
      iVar4 = 1;
      if (0 < iVar1) {
        iVar4 = iVar1;
      }
      if (iVar4 + DAT_0075b748 < 1) {
        iVar1 = 1;
      }
      else {
        if (iVar1 < 1) {
          iVar1 = 1;
        }
        iVar1 = iVar1 + DAT_0075b748;
      }
    }
    else {
      iVar1 = DAT_0075b748 + DAT_0075b758;
    }
    piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
    local_4._0_1_ = 3;
    if (piVar2 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = piVar2 + 1;
      *piVar2 = iVar1;
      FUN_006c043b(piVar3,0x2c,iVar1,FUN_006499d0,FUN_00649ba0);
    }
    iVar4 = 0;
    local_4 = CONCAT31(local_4._1_3_,2);
    if (0 < DAT_0075b748) {
      iVar5 = 0;
      do {
        FUN_0064a320(iVar5 + (int)DAT_0075b74c);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar4 < DAT_0075b748);
    }
    if (DAT_0075b74c != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_0075b750 = iVar1;
  DAT_0075b74c = piVar3;
  FUN_0064a320(local_38);
  DAT_0075b748 = DAT_0075b748 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00417a80(&stack0x0000000c);
  FUN_00417a80(&stack0x00000010);
  FUN_00417a80(&stack0x00000014);
  ExceptionList = local_c;
  return;
}

