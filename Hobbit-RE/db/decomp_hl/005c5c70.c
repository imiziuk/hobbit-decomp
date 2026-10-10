
int __fastcall FUN_005c5c70(int param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df73e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006499d0();
  local_4 = 0;
  FUN_006499d0();
  local_4._0_1_ = 1;
  FUN_006499d0();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_006499d0();
  uVar1 = DAT_006f44b4;
  *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) & 0xfe;
  *(undefined4 *)(param_1 + 0xb0) = uVar1;
  ExceptionList = local_c;
  return param_1;
}

