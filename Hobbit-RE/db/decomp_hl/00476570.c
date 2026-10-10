
undefined4 * __fastcall FUN_00476570(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d1a43;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xf8;
  *param_1 = &PTR_FUN_006ed02c;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  local_4 = 0;
  FUN_006499d0();
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_006ed064;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_0064a2e0(&DAT_0075b6e0);
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 1;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 1;
  ExceptionList = local_c;
  return param_1;
}

