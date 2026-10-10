
void __fastcall FUN_00631c00(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006e5473;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f66f8;
  iVar2 = 0;
  local_4 = 1;
  if (0 < (int)param_1[0x14]) {
    do {
      iVar1 = *(int *)(param_1[0x15] + iVar2 * 4);
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 0x5c) != 2) {
          FUN_006bf840(*(undefined4 *)(iVar1 + 0x54));
        }
        if (*(int *)(iVar1 + 0x40) != 2) {
          FUN_006bf840(*(undefined4 *)(iVar1 + 0x38));
        }
        FUN_00649ba0();
        FUN_006bf840(iVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[0x14]);
  }
  if (param_1[0x17] != 2) {
    FUN_006bf840(param_1[0x15]);
  }
  local_4 = 0xffffffff;
  FUN_005be180();
  ExceptionList = local_c;
  return;
}

