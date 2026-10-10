
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004e7720(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d5b40;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ef708;
  local_4 = 4;
  FUN_004ea400(1);
  param_1[0x78] = 0x7fffffff;
  puVar2 = param_1 + 0x78;
  puVar3 = param_1 + 0x79;
  *puVar3 = 0x7fffffff;
  param_1 = param_1 + 0x7a;
  *param_1 = 0x7fffffff;
  _DAT_0075e2d4 = _DAT_0075e2d4 + -1;
  if (_DAT_0075e2d4 == 0) {
    if (DAT_0075e294 == 0) {
      if (DAT_0075e28c != 0) {
        puVar1 = (undefined4 *)(DAT_0075e28c + -4);
        FUN_006c026a(DAT_0075e28c,0x2c,*puVar1,FUN_00649ba0);
        FUN_006bf840(puVar1);
      }
      DAT_0075e28c = 0;
      DAT_0075e290 = 0;
    }
    DAT_0075e288 = 0;
    if (DAT_0075e2cc == 0) {
      if (DAT_0075e2c4 != 0) {
        puVar1 = (undefined4 *)(DAT_0075e2c4 + -4);
        FUN_006c026a(DAT_0075e2c4,0x2c,*puVar1,FUN_00649ba0);
        FUN_006bf840(puVar1);
      }
      DAT_0075e2c4 = 0;
      DAT_0075e2c8 = 0;
    }
    DAT_0075e2c0 = 0;
    DAT_0072eae8 = 1;
  }
  local_4._0_1_ = 3;
  FUN_005a32c0();
  local_4._0_1_ = 2;
  FUN_00549580(param_1);
  FUN_00549350(param_1);
  *param_1 = 0x7fffffff;
  local_4._0_1_ = 1;
  FUN_00549580(puVar3);
  FUN_00549350(puVar3);
  *puVar3 = 0x7fffffff;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00549580(puVar2);
  FUN_00549350(puVar2);
  *puVar2 = 0x7fffffff;
  local_4 = 0xffffffff;
  FUN_004e1e00();
  ExceptionList = local_c;
  return;
}

