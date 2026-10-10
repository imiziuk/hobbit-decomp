
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_004c0370(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4646;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004d0800();
  param_1[0x4f] = 0x7fffffff;
  *param_1 = &PTR_FUN_006ee888;
  _DAT_0075da40 = _DAT_0075da40 + 1;
  local_4 = 1;
  *(undefined1 *)(param_1 + 0x20) = 0xff;
  FUN_004ab450(0);
  FUN_004ab480(1);
  *(ushort *)((int)param_1 + 0x15a) = *(ushort *)((int)param_1 + 0x15a) & 0x10;
  *(undefined1 *)((int)param_1 + 0x81) = 0x80;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  param_1[0x50] = 0;
  param_1[0x2e] = 0;
  *(undefined2 *)(param_1 + 0x49) = 0;
  *(undefined1 *)((int)param_1 + 0x15e) = 0;
  param_1[0x51] = 0;
  *(byte *)((int)param_1 + 0x15d) = *(byte *)((int)param_1 + 0x15d) & 0x80;
  param_1[0x52] = 0;
  *(undefined2 *)(param_1 + 0x56) = 0xffff;
  ExceptionList = local_c;
  return param_1;
}

