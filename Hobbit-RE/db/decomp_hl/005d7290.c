
void __fastcall FUN_005d7290(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e0808;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0();
  local_4 = 0;
  FUN_00649b60(param_1 + 0x18);
  FUN_0055d360();
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

