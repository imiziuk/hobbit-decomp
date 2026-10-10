
void FUN_00561400(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dac16;
  local_c = ExceptionList;
  iVar6 = 0;
  ExceptionList = &local_c;
  if (DAT_00771f9c == 0) {
    ExceptionList = &local_c;
    if (DAT_00771f94 != (int *)0x0) {
      piVar4 = DAT_00771f94 + -1;
      ExceptionList = &local_c;
      FUN_006c026a(DAT_00771f94,0x2c,DAT_00771f94[-1],FUN_00649ba0);
      FUN_006bf840(piVar4);
    }
    DAT_00771f94 = (int *)0x0;
    DAT_00771f98 = 0;
  }
  DAT_00771f90 = 0;
  uVar1 = FUN_00649b20(s_Enabled_0072e61c);
  local_4 = 0;
  piVar4 = DAT_00771f94;
  iVar2 = DAT_00771f98;
  if (DAT_00771f98 < DAT_00771f90 + 1) {
    if (DAT_00771fa0 == 0) {
      iVar2 = DAT_00771f98 / 2;
      iVar5 = 1;
      if (0 < iVar2) {
        iVar5 = iVar2;
      }
      if (iVar5 + DAT_00771f90 < 1) {
        iVar2 = 1;
      }
      else {
        if (iVar2 < 1) {
          iVar2 = 1;
        }
        iVar2 = iVar2 + DAT_00771f90;
      }
    }
    else {
      iVar2 = DAT_00771f90 + DAT_00771fa0;
    }
    piVar3 = (int *)operator_new(iVar2 * 0x2c + 4);
    local_4._0_1_ = 1;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar2;
      FUN_006c043b(piVar4,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (0 < DAT_00771f90) {
      iVar5 = 0;
      do {
        FUN_0064a320(iVar5 + (int)DAT_00771f94);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < DAT_00771f90);
    }
    if (DAT_00771f94 != (int *)0x0) {
      piVar3 = DAT_00771f94 + -1;
      FUN_006c026a(DAT_00771f94,0x2c,DAT_00771f94[-1],FUN_00649ba0);
      FUN_006bf840(piVar3);
    }
  }
  DAT_00771f98 = iVar2;
  DAT_00771f94 = piVar4;
  iVar2 = 0;
  FUN_0064a320(uVar1);
  DAT_00771f90 = DAT_00771f90 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Disabled_0072c590);
  local_4 = 2;
  piVar4 = DAT_00771f94;
  iVar6 = DAT_00771f98;
  if (DAT_00771f98 < DAT_00771f90 + 1) {
    if (DAT_00771fa0 == 0) {
      iVar6 = DAT_00771f98 / 2;
      iVar5 = 1;
      if (0 < iVar6) {
        iVar5 = iVar6;
      }
      if (iVar5 + DAT_00771f90 < 1) {
        iVar6 = 1;
      }
      else {
        if (iVar6 < 1) {
          iVar6 = 1;
        }
        iVar6 = iVar6 + DAT_00771f90;
      }
    }
    else {
      iVar6 = DAT_00771f90 + DAT_00771fa0;
    }
    piVar3 = (int *)operator_new(iVar6 * 0x2c + 4);
    local_4._0_1_ = 3;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar6;
      FUN_006c043b(piVar4,0x2c,iVar6,FUN_006499d0,FUN_00649ba0);
    }
    local_4 = CONCAT31(local_4._1_3_,2);
    if (0 < DAT_00771f90) {
      iVar5 = 0;
      do {
        FUN_0064a320(iVar5 + (int)DAT_00771f94);
        iVar2 = iVar2 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar2 < DAT_00771f90);
    }
    if (DAT_00771f94 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_00771f98 = iVar6;
  DAT_00771f94 = piVar4;
  FUN_0064a320(uVar1);
  DAT_00771f90 = DAT_00771f90 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Permanently_Enabled_0073efcc);
  local_4 = 4;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  uVar1 = FUN_00649b20(s_Permanently_Disabled_0073efb4);
  local_4 = 5;
  FUN_00469980(uVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

