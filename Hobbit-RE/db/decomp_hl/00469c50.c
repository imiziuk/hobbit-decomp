
undefined4 * __fastcall FUN_00469c50(undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d0f00;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004aa170();
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2e] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x35] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3c] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x43] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  local_4._0_1_ = 4;
  local_4._1_3_ = 0;
  FUN_0047a3c0();
  local_4._0_1_ = 5;
  FUN_0047a3c0();
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x6a] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  param_1[0x74] = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  local_4._0_1_ = 8;
  *param_1 = &PTR_FUN_006ecde8;
  FUN_006501d0(s_cinema__cinema___00726bfc);
  local_4._0_1_ = 9;
  if (DAT_0075ccf8 != 0) goto LAB_00469e72;
  FUN_0064e870(6,s_Initializing_Cinema_Queue_00726be0);
  if (DAT_0075ccf0 == 0) {
    FUN_006bf840(DAT_0075cce8);
    DAT_0075cce8 = (void *)0x0;
    DAT_0075ccec = 0;
LAB_00469e0e:
    DAT_0075cce4 = 0;
    pvVar1 = operator_new(0x40);
    iVar2 = 0;
    if (0 < DAT_0075cce4) {
      do {
        *(undefined4 *)((int)pvVar1 + iVar2 * 8) = *(undefined4 *)((int)DAT_0075cce8 + iVar2 * 8);
        *(undefined4 *)((int)pvVar1 + iVar2 * 8 + 4) =
             *(undefined4 *)((int)DAT_0075cce8 + iVar2 * 8 + 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_0075cce4);
    }
    FUN_006bf840(DAT_0075cce8);
    DAT_0075ccec = 8;
    DAT_0075cce8 = pvVar1;
  }
  else {
    DAT_0075cce4 = 0;
    if (DAT_0075ccec != 8) goto LAB_00469e0e;
  }
  DAT_0075ccf8 = 1;
LAB_00469e72:
  *(undefined2 *)((int)param_1 + 0x18e) = 0xffff;
  param_1[100] = 0xffffffff;
  param_1[0x65] = param_1[0x65] & 0xfe2e8208 | 0x8200;
  *(byte *)((int)param_1 + 0x7f) = *(byte *)((int)param_1 + 0x7f) | 1;
  param_1[0x4d] = 3;
  param_1[0x5b] = 3;
  param_1[0x6d] = 0;
  param_1[0x6f] = 0;
  *(undefined2 *)(param_1 + 99) = 0;
  param_1[0x62] = 1;
  param_1[0x48] = 0x3f800000;
  param_1[0x56] = 0x3f800000;
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_006501e0();
  ExceptionList = local_c;
  return param_1;
}

