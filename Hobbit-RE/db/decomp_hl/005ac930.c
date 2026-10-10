
void __fastcall FUN_005ac930(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006de186;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f4290;
  local_4 = 9;
  FUN_005aede0();
  FUN_006bf840(param_1[0x85]);
  iVar2 = 0;
  param_1[0x85] = 0;
  if (0 < (int)param_1[0x38]) {
    do {
      iVar1 = *(int *)(param_1[0x39] + iVar2 * 4);
      if (iVar1 != 0) {
        FUN_005ac420();
        FUN_006bf840(iVar1);
      }
      *(undefined4 *)(param_1[0x39] + iVar2 * 4) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[0x38]);
  }
  if (param_1[0x3b] == 0) {
    FUN_006bf840(param_1[0x39]);
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
  }
  param_1[0x38] = 0;
  iVar2 = 0;
  if (0 < (int)param_1[0x3f]) {
    do {
      iVar1 = *(int *)(param_1[0x40] + iVar2 * 4);
      if (iVar1 != 0) {
        FUN_005ac4c0();
        FUN_006bf840(iVar1);
      }
      *(undefined4 *)(param_1[0x40] + iVar2 * 4) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[0x3f]);
  }
  if (param_1[0x42] == 0) {
    FUN_006bf840(param_1[0x40]);
    param_1[0x40] = 0;
    param_1[0x41] = 0;
  }
  param_1[0x3f] = 0;
  FUN_005ad710();
  if (param_1[0x49] == 0) {
    FUN_006bf840(param_1[0x47]);
    param_1[0x47] = 0;
    param_1[0x48] = 0;
  }
  param_1[0x46] = 0;
  if (param_1[0x71] == 0) {
    if (param_1[0x6f] != 0) {
      FUN_00407f70(3);
    }
    param_1[0x6f] = 0;
    param_1[0x70] = 0;
  }
  param_1[0x6e] = 0;
  if (param_1[0x78] == 0) {
    if (param_1[0x76] != 0) {
      FUN_00407f70(3);
    }
    param_1[0x76] = 0;
    param_1[0x77] = 0;
  }
  param_1[0x75] = 0;
  if (param_1[0x7f] == 0) {
    if (param_1[0x7d] != 0) {
      FUN_00407f70(3);
    }
    param_1[0x7d] = 0;
    param_1[0x7e] = 0;
  }
  param_1[0x7c] = 0;
  if (DAT_007ba60c == 0) {
    if (DAT_007ba604 != 0) {
      FUN_00407f70(3);
    }
    DAT_007ba604 = 0;
    DAT_007ba608 = 0;
  }
  DAT_007ba600 = 0;
  if (DAT_007ba628 == 0) {
    if (DAT_007ba620 != 0) {
      FUN_00407f70(3);
    }
    DAT_007ba620 = 0;
    DAT_007ba624 = 0;
  }
  DAT_007ba61c = 0;
  if (DAT_007ba644 == 0) {
    FUN_006bf840(DAT_007ba63c);
    DAT_007ba63c = 0;
    DAT_007ba640 = 0;
  }
  DAT_007ba638 = 0;
  local_4._0_1_ = 8;
  if ((param_1[0x7f] != 2) && (param_1[0x7d] != 0)) {
    FUN_00407f70(3);
  }
  local_4._0_1_ = 7;
  FUN_004375f0();
  local_4._0_1_ = 6;
  FUN_004375f0();
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_00649ba0();
  if (param_1[0x49] != 2) {
    FUN_006bf840(param_1[0x47]);
  }
  local_4._0_1_ = 3;
  FUN_005c8440();
  local_4._0_1_ = 2;
  FUN_005c8440();
  local_4._0_1_ = 1;
  FUN_005c8440();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005b8a20();
  local_4 = 0xffffffff;
  FUN_005679b0();
  ExceptionList = local_c;
  return;
}

