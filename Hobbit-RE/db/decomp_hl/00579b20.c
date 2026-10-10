
void __fastcall FUN_00579b20(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbcd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_Coll_ApplyPolyCache_00740398);
  local_4 = 0;
  if (*(int *)(param_1 + 0x3d48) == 1) {
    FUN_0057e300();
  }
  else if (*(int *)(param_1 + 0x3d48) == 2) {
    FUN_0057ebd0();
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

