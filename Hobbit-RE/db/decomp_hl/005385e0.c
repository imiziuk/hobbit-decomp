
void FUN_005385e0(void)

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
  puStack_8 = &LAB_006d8f36;
  local_c = ExceptionList;
  iVar5 = 0;
  if (DAT_007647f4 == 0) {
    ExceptionList = &local_c;
    FUN_00649b20(s_SWITCH_NORMAL_007376ec);
    local_4 = 0;
    piVar3 = DAT_007647f8;
    iVar1 = DAT_007647fc;
    if (DAT_007647fc < DAT_007647f4 + 1) {
      if (DAT_00764804 == 0) {
        iVar1 = DAT_007647fc / 2;
        iVar4 = 1;
        if (0 < iVar1) {
          iVar4 = iVar1;
        }
        if (iVar4 + DAT_007647f4 < 1) {
          iVar1 = 1;
        }
        else {
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar1 = iVar1 + DAT_007647f4;
        }
      }
      else {
        iVar1 = DAT_007647f4 + DAT_00764804;
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
      if (0 < DAT_007647f4) {
        iVar4 = 0;
        do {
          FUN_0064a320(iVar4 + (int)DAT_007647f8);
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x2c;
        } while (iVar5 < DAT_007647f4);
      }
      if (DAT_007647f8 != (int *)0x0) {
        piVar2 = DAT_007647f8 + -1;
        FUN_006c026a(DAT_007647f8,0x2c,DAT_007647f8[-1],FUN_00649ba0);
        FUN_006bf840(piVar2);
      }
    }
    DAT_007647fc = iVar1;
    DAT_007647f8 = piVar3;
    FUN_0064a320(local_64);
    DAT_007647f4 = DAT_007647f4 + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(s_SWITCH_AT_BREAK_007376dc);
    local_4 = 2;
    piVar3 = DAT_007647f8;
    iVar5 = DAT_007647fc;
    if (DAT_007647fc < DAT_007647f4 + 1) {
      if (DAT_00764804 == 0) {
        iVar5 = DAT_007647fc / 2;
        iVar1 = 1;
        if (0 < iVar5) {
          iVar1 = iVar5;
        }
        if (iVar1 + DAT_007647f4 < 1) {
          iVar5 = 1;
        }
        else {
          if (iVar5 < 1) {
            iVar5 = 1;
          }
          iVar5 = iVar5 + DAT_007647f4;
        }
      }
      else {
        iVar5 = DAT_007647f4 + DAT_00764804;
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
      if (0 < DAT_007647f4) {
        iVar4 = 0;
        do {
          FUN_0064a320(iVar4 + (int)DAT_007647f8);
          iVar1 = iVar1 + 1;
          iVar4 = iVar4 + 0x2c;
        } while (iVar1 < DAT_007647f4);
      }
      if (DAT_007647f8 != (int *)0x0) {
        FUN_00407f70(3);
      }
    }
    DAT_007647fc = iVar5;
    DAT_007647f8 = piVar3;
    FUN_0064a320(local_64);
    DAT_007647f4 = DAT_007647f4 + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(s_SWITCH_WITH_VOLUME_FADE_007376c4);
    local_4 = 4;
    FUN_00469980(local_64);
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(s_SWITCH_IMMEDIATE_007376b0);
    local_4 = 5;
    FUN_00469980(local_38);
    local_4 = 0xffffffff;
    FUN_00649ba0();
  }
  ExceptionList = local_c;
  return;
}

