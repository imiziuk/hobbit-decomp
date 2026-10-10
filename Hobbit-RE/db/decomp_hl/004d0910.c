
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d0910(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d4d64;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006eef98;
  local_4 = 2;
  FUN_004d1cb0();
  FUN_004d0a50();
  iVar2 = DAT_0075db24;
  _DAT_0075db28 = _DAT_0075db28 + -1;
  if ((_DAT_0075db28 == 0) && (DAT_0075db24 != 0)) {
    if (*(int *)(DAT_0075db24 + 0x14) == 0) {
      iVar1 = *(int *)(DAT_0075db24 + 0xc);
      if (iVar1 != 0) {
        FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
        FUN_006bf840(iVar1 + -4);
      }
      *(undefined4 *)(iVar2 + 0xc) = 0;
      *(undefined4 *)(iVar2 + 0x10) = 0;
    }
    *(undefined4 *)(iVar2 + 8) = 0;
    iVar2 = DAT_0075db24;
    if (DAT_0075db24 != 0) {
      if ((*(int *)(DAT_0075db24 + 0x14) != 2) && (iVar1 = *(int *)(DAT_0075db24 + 0xc), iVar1 != 0)
         ) {
        FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
        FUN_006bf840(iVar1 + -4);
      }
      FUN_006bf840(iVar2);
    }
    DAT_0075db24 = 0;
  }
  iVar2 = param_1[0x33];
  local_4._0_1_ = 1;
  while (0 < iVar2) {
    FUN_00582290();
    iVar2 = param_1[0x33];
  }
  param_1 = param_1 + 0x2f;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00549580(param_1);
  FUN_00549350(param_1);
  *param_1 = 0x7fffffff;
  local_4 = 0xffffffff;
  FUN_004aa360();
  ExceptionList = local_c;
  return;
}

