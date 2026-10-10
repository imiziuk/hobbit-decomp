
void __fastcall FUN_004b65a0(undefined4 *param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d4422;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006ee508;
  iVar1 = param_1[0x6b];
  local_4 = 3;
  if (iVar1 != 0) {
    FUN_004b5230();
    FUN_006bf840(iVar1);
    param_1[0x6b] = 0;
  }
  if ((undefined4 *)param_1[0x56] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x56])(1);
    param_1[0x56] = 0;
  }
  if (-1 < (int)param_1[0x6c]) {
    FUN_005c1ed0(param_1[0x6c]);
    param_1[0x6c] = 0xffffffff;
  }
  if (param_1[0x68] != 0 || param_1[0x69] != 0) {
    FUN_0054be30(param_1[0x68],param_1[0x69]);
    param_1[0x68] = 0;
    param_1[0x69] = 0;
  }
  DAT_0075d8a4 = DAT_0075d8a4 + -1;
  iVar1 = param_1[0x3f];
  local_4._0_1_ = 2;
  while (0 < iVar1) {
    FUN_00582290();
    iVar1 = param_1[0x3f];
  }
  local_4._0_1_ = 1;
  FUN_005c15b0();
  param_1 = param_1 + 0x2a;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00549580(param_1);
  FUN_00549350(param_1);
  *param_1 = 0x7fffffff;
  local_4 = 0xffffffff;
  FUN_004aa360();
  ExceptionList = pvStack_c;
  return;
}

