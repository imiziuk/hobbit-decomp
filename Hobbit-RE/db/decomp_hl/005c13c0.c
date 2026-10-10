
void __fastcall FUN_005c13c0(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006df416;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f447c;
  local_4 = 1;
  if (param_1[0x4e] != 0) {
    iVar1 = 0;
    if (0 < (int)param_1[0x19]) {
      do {
        FUN_00662510(param_1[0x4e] + iVar1 * 4);
        *(undefined4 *)(param_1[0x4e] + iVar1 * 4) = 0;
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)param_1[0x19]);
    }
    FUN_006bf840(param_1[0x4e]);
    param_1[0x4e] = 0;
  }
  local_4 = local_4 & 0xffffff00;
  FUN_005a4090();
  local_4 = 0xffffffff;
  FUN_005bfdb0();
  ExceptionList = local_c;
  return;
}

