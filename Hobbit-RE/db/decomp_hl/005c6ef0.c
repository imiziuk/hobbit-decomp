
int __fastcall FUN_005c6ef0(int param_1)

{
  short *psVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df878;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_clutter_mgr__GetFadeSlot_007461cc);
  psVar1 = *(short **)(param_1 + 0x84);
  iVar2 = 0;
  do {
    if (*psVar1 == -1) {
      local_4 = 0xffffffff;
      FUN_00649720();
      ExceptionList = local_c;
      return iVar2;
    }
    iVar2 = iVar2 + 1;
    psVar1 = psVar1 + 1;
  } while (iVar2 < 0x80);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return -1;
}

