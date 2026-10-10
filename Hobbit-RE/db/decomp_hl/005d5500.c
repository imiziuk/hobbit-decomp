
void __fastcall FUN_005d5500(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006e05c6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f471c;
  iVar2 = 0;
  local_4 = 1;
  if (0 < (int)param_1[8]) {
    do {
      iVar1 = *(int *)(param_1[9] + iVar2 * 4);
      if (iVar1 != 0) {
        local_4._0_1_ = 3;
        if (*(int *)(iVar1 + 0x14) == 0) {
          if (*(int *)(iVar1 + 0xc) != 0) {
            FUN_00407f70(3);
          }
          *(undefined4 *)(iVar1 + 0xc) = 0;
          *(undefined4 *)(iVar1 + 0x10) = 0;
        }
        *(undefined4 *)(iVar1 + 8) = 0;
        local_4._0_1_ = 2;
        FUN_00649ba0();
        local_4 = CONCAT31(local_4._1_3_,1);
        if ((*(int *)(iVar1 + 0x14) != 2) && (*(int *)(iVar1 + 0xc) != 0)) {
          FUN_00407f70(3);
        }
        FUN_006bf840(iVar1);
      }
      *(undefined4 *)(param_1[9] + iVar2 * 4) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[8]);
  }
  if (param_1[0xb] == 0) {
    FUN_006bf840(param_1[9]);
    param_1[9] = 0;
    param_1[10] = 0;
  }
  param_1[8] = 0;
  if (param_1[0xb] != 2) {
    FUN_006bf840(param_1[9]);
  }
  FUN_005cc2e0();
  ExceptionList = local_c;
  return;
}

