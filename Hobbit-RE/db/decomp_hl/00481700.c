
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00481700(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d28ee;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ed1b8;
  param_1[0x56] = 0x7fffffff;
  param_1[0x57] = 0x7fffffff;
  puVar2 = param_1 + 0x58;
  *puVar2 = 0x7fffffff;
  DAT_0075cdf0 = DAT_0075cdf0 + -1;
  local_4 = 2;
  if (DAT_0075cdf0 == 0) {
    DAT_007288ec = 1;
    if (DAT_0075cde8 == 0) {
      if (DAT_0075cde0 != 0) {
        iVar1 = DAT_0075cde0 + -4;
        FUN_006c026a(DAT_0075cde0,0x2c,*(undefined4 *)(DAT_0075cde0 + -4),FUN_00649ba0);
        FUN_006bf840(iVar1);
      }
      DAT_0075cde0 = 0;
      DAT_0075cde4 = 0;
    }
    DAT_0075cddc = 0;
    if (DAT_0075cd78 == 0) {
      if (DAT_0075cd70 != 0) {
        iVar1 = DAT_0075cd70 + -4;
        FUN_006c026a(DAT_0075cd70,0x2c,*(undefined4 *)(DAT_0075cd70 + -4),FUN_00649ba0);
        FUN_006bf840(iVar1);
      }
      DAT_0075cd70 = 0;
      DAT_0075cd74 = 0;
    }
    DAT_0075cd6c = 0;
    if (DAT_0075cd94 == 0) {
      if (DAT_0075cd8c != 0) {
        iVar1 = DAT_0075cd8c + -4;
        FUN_006c026a(DAT_0075cd8c,0x2c,*(undefined4 *)(DAT_0075cd8c + -4),FUN_00649ba0);
        FUN_006bf840(iVar1);
      }
      DAT_0075cd8c = 0;
      _DAT_0075cd90 = 0;
    }
    _DAT_0075cd88 = 0;
    if (DAT_0075cdcc == 0) {
      if (DAT_0075cdc4 != 0) {
        iVar1 = DAT_0075cdc4 + -4;
        FUN_006c026a(DAT_0075cdc4,0x2c,*(undefined4 *)(DAT_0075cdc4 + -4),FUN_00649ba0);
        FUN_006bf840(iVar1);
      }
      DAT_0075cdc4 = 0;
      _DAT_0075cdc8 = 0;
    }
    _DAT_0075cdc0 = 0;
  }
  local_4._0_1_ = 1;
  FUN_00549580(puVar2);
  FUN_00549350(puVar2);
  *puVar2 = 0x7fffffff;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_006c026a(param_1 + 0x56,4,2,FUN_00406ba0);
  local_4 = 0xffffffff;
  FUN_004e3e80();
  ExceptionList = local_c;
  return;
}

