
undefined4 * __fastcall FUN_00493980(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3138;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004aa170();
  *param_1 = &PTR_FUN_006ed700;
  *(undefined1 *)((int)param_1 + 0x111) = 0x10;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0x3f800000;
  param_1[0x43] = 1;
  *(undefined1 *)((int)param_1 + 0xcf) = 0xff;
  *(undefined1 *)((int)param_1 + 0xce) = 0xff;
  *(undefined1 *)((int)param_1 + 0xcd) = 0xff;
  *(undefined1 *)(param_1 + 0x33) = 0xff;
  param_1[0x35] = 0x3f800000;
  local_4 = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0x43480000;
  param_1[0x3a] = 0x41200000;
  param_1[0x3b] = 0x41700000;
  param_1[0x3c] = 0x40a00000;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  FUN_00401f00(0xc3480000,0xc3480000,0xc3480000);
  param_1[0xb] = local_30;
  param_1[0xc] = local_2c;
  param_1[0xd] = local_28;
  local_30 = 0x43480000;
  local_2c = 0x43480000;
  local_28 = 0x43480000;
  uVar1 = FUN_00402130(local_18,&local_24,&local_30);
  FUN_004357e0(uVar1);
  FUN_004946a0(0);
  FUN_004946d0(0);
  FUN_004948c0(1);
  FUN_00494900(0);
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined1 *)((int)param_1 + 0xd3) = *(undefined1 *)((int)param_1 + 0xcf);
  *(undefined1 *)((int)param_1 + 0xd2) = *(undefined1 *)((int)param_1 + 0xce);
  *(undefined1 *)((int)param_1 + 0xd1) = *(undefined1 *)((int)param_1 + 0xcd);
  *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_1 + 0x33);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x42] = 0x1c50;
  *(undefined1 *)(param_1 + 0x44) = 1;
  *(undefined1 *)((int)param_1 + 0x7d) = 1;
  *(byte *)((int)param_1 + 0x7f) = *(byte *)((int)param_1 + 0x7f) | 2;
  param_1[0x3f] = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}

