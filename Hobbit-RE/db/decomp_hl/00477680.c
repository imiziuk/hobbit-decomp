
void __fastcall FUN_00477680(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d1b88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ed09c;
  DAT_0075cd60 = DAT_0075cd60 + -1;
  local_4 = 0;
  if (DAT_0075cd60 == 0) {
    if (DAT_0075cd20 == 0) {
      if (DAT_0075cd18 != 0) {
        iVar1 = DAT_0075cd18 + -4;
        FUN_006c026a(DAT_0075cd18,0x2c,*(undefined4 *)(DAT_0075cd18 + -4),FUN_00649ba0);
        FUN_006bf840(iVar1);
      }
      DAT_0075cd18 = 0;
      DAT_0075cd1c = 0;
    }
    DAT_0075cd14 = 0;
    if (DAT_0075cd3c == 0) {
      if (DAT_0075cd34 != 0) {
        iVar1 = DAT_0075cd34 + -4;
        FUN_006c026a(DAT_0075cd34,0x2c,*(undefined4 *)(DAT_0075cd34 + -4),FUN_00649ba0);
        FUN_006bf840(iVar1);
      }
      DAT_0075cd34 = 0;
      DAT_0075cd38 = 0;
    }
    DAT_0075cd30 = 0;
    DAT_00727b9c = 1;
  }
  *param_1 = &PTR_FUN_006ed02c;
  ExceptionList = local_c;
  return;
}

