
void FUN_0059aa70(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd5a3;
  local_c = ExceptionList;
  iVar5 = 0;
  ExceptionList = &local_c;
  if (DAT_00798560 == 0) {
    ExceptionList = &local_c;
    if (DAT_00798558 != (int *)0x0) {
      piVar3 = DAT_00798558 + -1;
      ExceptionList = &local_c;
      FUN_006c026a(DAT_00798558,0x2c,DAT_00798558[-1],FUN_00649ba0);
      FUN_006bf840(piVar3);
    }
    DAT_00798558 = (int *)0x0;
    DAT_0079855c = 0;
  }
  DAT_00798554 = 0;
  FUN_00649b20(&DAT_00720670);
  local_4 = 0;
  piVar3 = DAT_00798558;
  iVar1 = DAT_0079855c;
  if (DAT_0079855c < DAT_00798554 + 1) {
    if (DAT_00798564 == 0) {
      iVar1 = DAT_0079855c / 2;
      iVar4 = 1;
      if (0 < iVar1) {
        iVar4 = iVar1;
      }
      if (iVar4 + DAT_00798554 < 1) {
        iVar1 = 1;
      }
      else {
        if (iVar1 < 1) {
          iVar1 = 1;
        }
        iVar1 = iVar1 + DAT_00798554;
      }
    }
    else {
      iVar1 = DAT_00798554 + DAT_00798564;
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
    if (0 < DAT_00798554) {
      iVar4 = 0;
      do {
        FUN_0064a320(iVar4 + (int)DAT_00798558);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x2c;
      } while (iVar5 < DAT_00798554);
    }
    if (DAT_00798558 != (int *)0x0) {
      piVar2 = DAT_00798558 + -1;
      FUN_006c026a(DAT_00798558,0x2c,DAT_00798558[-1],FUN_00649ba0);
      FUN_006bf840(piVar2);
    }
  }
  DAT_0079855c = iVar1;
  DAT_00798558 = piVar3;
  FUN_0064a320(local_38);
  DAT_00798554 = DAT_00798554 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

