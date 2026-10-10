
int __fastcall FUN_006204a0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e49e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006499d0();
  local_4 = 0;
  FUN_0064a2e0(&DAT_00720670);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  ExceptionList = local_c;
  return param_1;
}

