
void __fastcall FUN_0047d300(int param_1)

{
  undefined1 local_78 [44];
  undefined4 local_4c [2];
  undefined4 local_44;
  undefined4 local_40;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d2378;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0064e870(6,s_CINEMA__Starting_AI_Trigger__s_00728430,*(undefined4 *)(param_1 + 0x1c));
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 6;
  FUN_00649b60(param_1 + 0x1c);
  local_4 = 0;
  local_44 = 0;
  local_40 = 0;
  local_4c[0] = 0x13;
  FUN_006499d0();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0064a320(local_78);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  local_4 = 2;
  FUN_0054e4d0(*(undefined4 *)(DAT_0075cf1c + 8),*(undefined4 *)(DAT_0075cf1c + 0xc),local_4c);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

