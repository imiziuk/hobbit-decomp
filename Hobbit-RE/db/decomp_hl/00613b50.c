
void __fastcall FUN_00613b50(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006e43dc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f5af8;
  iVar1 = 0;
  local_4 = 6;
  if (0 < (int)param_1[0x15e]) {
    do {
      FUN_006bf840(*(undefined4 *)(param_1[0x15f] + iVar1 * 4));
      *(undefined4 *)(param_1[0x15f] + iVar1 * 4) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[0x15e]);
  }
  if (param_1[0x161] == 0) {
    FUN_006bf840(param_1[0x15f]);
    param_1[0x15f] = 0;
    param_1[0x160] = 0;
  }
  param_1[0x15e] = 0;
  puVar2 = param_1 + 0x76;
  iVar1 = 5;
  do {
    FUN_0054be30(puVar2[-10],puVar2[-9]);
    FUN_0054be30(*puVar2,puVar2[1]);
    FUN_0054be30(puVar2[10],puVar2[0xb]);
    puVar2[-10] = 0;
    puVar2[-9] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2 = puVar2 + 0x32;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0;
  if (0 < (int)param_1[0x166]) {
    do {
      FUN_0054be30(*(undefined4 *)(param_1[0x167] + iVar1 * 8),
                   *(undefined4 *)(param_1[0x167] + 4 + iVar1 * 8));
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[0x166]);
  }
  DAT_007cc6fc = 0;
  DAT_007cc708 = 0;
  local_4._0_1_ = 5;
  FUN_005426a0();
  local_4._0_1_ = 4;
  FUN_006cde30();
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_006cde30();
  if (param_1[0x170] != 2) {
    FUN_006bf840(param_1[0x16e]);
  }
  if (param_1[0x169] != 2) {
    FUN_006bf840(param_1[0x167]);
  }
  if (param_1[0x161] != 2) {
    FUN_006bf840(param_1[0x15f]);
  }
  local_4 = 0xffffffff;
  FUN_006361f0();
  ExceptionList = local_c;
  return;
}

