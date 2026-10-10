
void __fastcall FUN_004b5230(uint *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d4248;
  local_c = ExceptionList;
  uVar1 = *param_1 * 2;
  local_4 = 0;
  ExceptionList = &local_c;
  if (((uVar1 ^ *param_1) & 0x7fffffff ^ uVar1) != 0xffffffff) {
    ExceptionList = &local_c;
    FUN_0054f7c0(param_1 + 1);
  }
  local_4 = 0xffffffff;
  FUN_00549580(param_1);
  FUN_00549350(param_1);
  *param_1 = 0x7fffffff;
  ExceptionList = local_c;
  return;
}

