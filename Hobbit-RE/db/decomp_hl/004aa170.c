
undefined4 * __fastcall FUN_004aa170(undefined4 *param_1)

{
  undefined1 local_29;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3d79;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[0xb] = 0x7f7fffff;
  param_1[0xc] = 0x7f7fffff;
  param_1[0xd] = 0x7f7fffff;
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  param_1[0x11] = 0x7f7fffff;
  param_1[0x12] = 0x7f7fffff;
  param_1[0x13] = 0x7f7fffff;
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  param_1[0x1d] = 0x7fffffff;
  *(undefined1 *)(param_1 + 0x22) = local_29;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *param_1 = &PTR_FUN_006ede98;
  *(undefined2 *)(param_1 + 0x1e) = 0xffff;
  param_1[4] = 0;
  *(undefined2 *)((int)param_1 + 0x7a) = 0;
  param_1[0x17] = 0;
  *(undefined1 *)((int)param_1 + 0x9f) = 0xff;
  *(undefined1 *)((int)param_1 + 0x9e) = 0;
  *(undefined1 *)((int)param_1 + 0x9d) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)((int)param_1 + 0x9f) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  local_4 = 1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  FUN_00404870(0xbf800000,0xbf800000,0xbf800000);
  FUN_00404870(0x3f800000,0x3f800000,0x3f800000);
  local_24 = 0x3f800000;
  local_20 = 0x3f800000;
  local_1c = 0x3f800000;
  local_18 = 0xbf800000;
  local_14 = 0xbf800000;
  local_10 = 0xbf800000;
  FUN_004acf40(&local_18,&local_24);
  param_1[0x28] = s_NONAME_0072b754;
  *(undefined1 *)((int)param_1 + 0x7d) = 0;
  *(undefined2 *)((int)param_1 + 0x62) = 0xffff;
  *(undefined1 *)((int)param_1 + 0x7e) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_004ab450(1);
  FUN_004ab480(1);
  FUN_004ab4a0(1);
  FUN_004ab4c0(1);
  *(byte *)((int)param_1 + 0x7f) = *(byte *)((int)param_1 + 0x7f) & 0x94;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0xff;
  *(undefined1 *)((int)param_1 + 0x81) = 0x80;
  ExceptionList = local_c;
  return param_1;
}

