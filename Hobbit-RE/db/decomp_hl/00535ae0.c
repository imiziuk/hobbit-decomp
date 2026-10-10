
void FUN_00535ae0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  undefined4 local_64 [22];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d8d53;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0054c5c0();
  FUN_006499d0();
  local_4 = 0;
  if (DAT_00764558 == 0) {
    if (DAT_00764550 != (int *)0x0) {
      FUN_00407f70();
    }
    DAT_00764550 = (int *)0x0;
    DAT_00764554 = 0;
  }
  DAT_0076454c = 0;
  lVar5 = FUN_0054c790();
  iVar1 = DAT_0076454c;
  do {
    DAT_0076454c = iVar1;
    if (lVar5 == 0) {
      FUN_00641480();
      iVar2 = 0;
      if (0 < iVar1) {
        do {
          FUN_0064a320();
          FUN_00649920();
          local_4._0_1_ = 4;
          FUN_00649940();
          FUN_006414f0();
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_00649950();
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar1);
        if (0 < iVar1) {
          do {
            FUN_0064a320();
            FUN_00649b60(local_64);
            FUN_00467620();
            FUN_00649920(&stack0x00000004,s_NPCThreat_s_00737388,local_64[0]);
            local_4._0_1_ = 5;
            FUN_00649940();
            FUN_00641400();
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_00649950();
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
      }
      FUN_0054c880();
      local_4 = 0xffffffff;
      FUN_00649ba0();
      ExceptionList = local_c;
      return;
    }
    FUN_00649600();
    local_4._0_1_ = 1;
    iVar1 = FUN_00406ce0();
    local_4 = (uint)local_4._1_3_ << 8;
    if (iVar1 == -1) {
      FUN_00649720();
    }
    else {
      FUN_00649720();
    }
    FUN_004675a0();
    local_4._0_1_ = 2;
    FUN_0064a320();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649ba0();
    iVar1 = 0;
    if (0 < DAT_0076454c) {
      do {
        iVar2 = FUN_0064a860();
        if (iVar2 != 0) {
          if (iVar1 != -1) goto LAB_00535d51;
          break;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_0076454c);
    }
    piVar4 = DAT_00764550;
    iVar1 = DAT_00764554;
    if (DAT_00764554 < DAT_0076454c + 1) {
      if (DAT_0076455c == 0) {
        iVar1 = DAT_00764554 / 2;
        iVar2 = 1;
        if (0 < iVar1) {
          iVar2 = iVar1;
        }
        if (iVar2 + DAT_0076454c < 1) {
          iVar1 = 1;
        }
        else {
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar1 = iVar1 + DAT_0076454c;
        }
      }
      else {
        iVar1 = DAT_0076454c + DAT_0076455c;
      }
      piVar3 = (int *)operator_new(iVar1 * 0x2c + 4);
      local_4._0_1_ = 3;
      if (piVar3 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = piVar3 + 1;
        *piVar3 = iVar1;
        FUN_006c043b();
      }
      iVar2 = 0;
      local_4 = (uint)local_4._1_3_ << 8;
      if (0 < DAT_0076454c) {
        do {
          FUN_0064a320();
          iVar2 = iVar2 + 1;
        } while (iVar2 < DAT_0076454c);
      }
      if (DAT_00764550 != (int *)0x0) {
        FUN_00407f70();
      }
    }
    DAT_00764554 = iVar1;
    DAT_00764550 = piVar4;
    FUN_0064a320();
    DAT_0076454c = DAT_0076454c + 1;
LAB_00535d51:
    lVar5 = FUN_0054c790();
    iVar1 = DAT_0076454c;
  } while( true );
}

