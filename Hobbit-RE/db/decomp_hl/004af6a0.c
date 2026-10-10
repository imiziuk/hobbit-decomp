
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004af6a0(undefined4 *param_1)

{
  short sVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d3fa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ee1b8;
  local_4 = 0;
  FUN_0054f7c0(param_1 + 0x59);
  sVar1 = *(short *)(param_1 + 0x5a);
  if (sVar1 != 0) {
    if ((((sVar1 != -1) && (iVar2 = *(int *)(DAT_0076f648 + sVar1 * 0x14), iVar2 != 0)) &&
        ((*(byte *)(iVar2 + 0x7f) & 0x10) != 0)) && (iVar2 != 0)) {
      FUN_0054be30(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc));
    }
    *(undefined2 *)(param_1 + 0x5a) = 0;
  }
  FUN_004b3730();
  _DAT_0075d3c0 = _DAT_0075d3c0 + -1;
  if (_DAT_0075d3c0 == 0) {
    if (DAT_0075d3b8 == 0) {
      if (DAT_0075d3b0 != 0) {
        iVar2 = DAT_0075d3b0 + -4;
        FUN_006c026a(DAT_0075d3b0,0x2c,*(undefined4 *)(DAT_0075d3b0 + -4),FUN_00649ba0);
        FUN_006bf840(iVar2);
      }
      DAT_0075d3b0 = 0;
      DAT_0075d3b4 = 0;
    }
    DAT_0075d3ac = 0;
    DAT_0072bae4 = 1;
  }
  local_4 = 0xffffffff;
  FUN_004c0460();
  ExceptionList = local_c;
  return;
}

