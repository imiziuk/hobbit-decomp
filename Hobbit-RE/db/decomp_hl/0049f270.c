
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0049f270(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d375c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006edd20;
  local_4 = 6;
  if (param_1[0x94] != 0) {
    FUN_006c0816(param_1[0x94]);
    param_1[0x94] = 0;
  }
  iVar2 = param_1[0x6c];
  if (((iVar2 == 0x38) || (iVar2 == 0x37)) || (iVar2 == 0x39)) {
    DAT_007607f8 = 0;
    DAT_007607fc = 0;
  }
  if ((undefined4 *)param_1[0xc1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xc1])(1);
    param_1[0xc1] = 0;
  }
  if ((undefined4 *)param_1[0xc0] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xc0])(1);
    param_1[0xc0] = 0;
  }
  if ((undefined4 *)param_1[0xc2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xc2])(1);
    param_1[0xc2] = 0;
  }
  iVar2 = param_1[0x98];
  if (iVar2 != 0) {
    FUN_0064b190();
    FUN_006bf840(iVar2);
    param_1[0x98] = 0;
  }
  iVar2 = param_1[0xa1];
  if (iVar2 != 0) {
    FUN_005a9cc0();
    FUN_006bf840(iVar2);
    param_1[0xa1] = 0;
  }
  iVar2 = param_1[0xa2];
  if (iVar2 != 0) {
    puVar1 = (undefined4 *)(iVar2 + 0x380);
    FUN_00549580(puVar1);
    FUN_00549350(puVar1);
    *puVar1 = 0x7fffffff;
    FUN_006bf840(iVar2);
    param_1[0xa2] = 0;
  }
  _DAT_0075d2c8 = _DAT_0075d2c8 + -1;
  if (_DAT_0075d2c8 == 0) {
    if (DAT_0075d2ac == 0) {
      if (DAT_0075d2a4 != 0) {
        iVar2 = DAT_0075d2a4 + -4;
        FUN_006c026a(DAT_0075d2a4,0x4c,*(undefined4 *)(DAT_0075d2a4 + -4),FUN_0064b190);
        FUN_006bf840(iVar2);
      }
      DAT_0075d2a4 = 0;
      _DAT_0075d2a8 = 0;
    }
    _DAT_0075d2a0 = 0;
  }
  local_4._0_1_ = 5;
  FUN_00649ba0();
  local_4._0_1_ = 4;
  FUN_00649ba0();
  local_4._0_1_ = 3;
  FUN_005805b0();
  local_4._0_1_ = 2;
  FUN_00649ba0();
  local_4._0_1_ = 1;
  FUN_00649ba0();
  param_1 = param_1 + 0x9c;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00549580(param_1);
  FUN_00549350(param_1);
  *param_1 = 0x7fffffff;
  local_4 = 0xffffffff;
  FUN_004642a0();
  ExceptionList = pvStack_c;
  return;
}

