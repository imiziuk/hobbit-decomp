
void FUN_00533950(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined **local_40;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d8b63;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00764510 == 0) {
    ExceptionList = &local_c;
    if (DAT_00764508 != (int *)0x0) {
      piVar3 = DAT_00764508 + -1;
      ExceptionList = &local_c;
      FUN_006c026a(DAT_00764508,0x2c,DAT_00764508[-1],FUN_00649ba0);
      FUN_006bf840(piVar3);
    }
    DAT_00764508 = (int *)0x0;
    DAT_0076450c = 0;
  }
  DAT_00764504 = 0;
  local_40 = &PTR_s_STATE_NONE_007370b0;
  do {
    iVar5 = 0;
    FUN_00649b20(*local_40);
    local_4 = 0;
    piVar3 = DAT_00764508;
    iVar1 = DAT_0076450c;
    if (DAT_0076450c < DAT_00764504 + 1) {
      if (DAT_00764514 == 0) {
        iVar1 = DAT_0076450c / 2;
        iVar4 = 1;
        if (0 < iVar1) {
          iVar4 = iVar1;
        }
        if (iVar4 + DAT_00764504 < 1) {
          iVar1 = 1;
        }
        else {
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar1 = iVar1 + DAT_00764504;
        }
      }
      else {
        iVar1 = DAT_00764504 + DAT_00764514;
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
      if (0 < DAT_00764504) {
        iVar4 = 0;
        do {
          FUN_0064a320(iVar4 + (int)DAT_00764508);
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x2c;
        } while (iVar5 < DAT_00764504);
      }
      if (DAT_00764508 != (int *)0x0) {
        piVar2 = DAT_00764508 + -1;
        FUN_006c026a(DAT_00764508,0x2c,DAT_00764508[-1],FUN_00649ba0);
        FUN_006bf840(piVar2);
      }
    }
    DAT_0076450c = iVar1;
    DAT_00764508 = piVar3;
    FUN_0064a320(local_38);
    DAT_00764504 = DAT_00764504 + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    local_40 = local_40 + 1;
  } while ((int)local_40 < 0x7370e0);
  ExceptionList = local_c;
  return;
}

