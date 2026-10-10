
undefined4 * __fastcall FUN_0063ba80(undefined4 *param_1)

{
  undefined1 local_1;
  
  FUN_005bfd20();
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  *(undefined1 *)(param_1 + 0x28) = local_1;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *param_1 = &PTR_FUN_006f6bd8;
  return param_1;
}

