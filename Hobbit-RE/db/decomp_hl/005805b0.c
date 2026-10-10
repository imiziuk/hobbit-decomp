
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005805b0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 auStack_18 [4];
  undefined4 *local_14;
  undefined1 auStack_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006dc038;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006f3eec;
  local_4 = 5;
  local_14 = param_1;
  FUN_00580730();
  FUN_006bf840(param_1[0x50]);
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  uVar1 = param_1[0x47];
  local_4 = CONCAT31(local_4._1_3_,3);
  puVar3 = (undefined4 *)FUN_005b8370(auStack_18);
  FUN_00581710(auStack_10,*puVar3,uVar1);
  FUN_006bf840(param_1[0x47]);
  param_1[0x47] = 0;
  param_1[0x49] = 0;
  FUN_006bf84b();
  iVar2 = DAT_007778e0;
  _DAT_007778dc = _DAT_007778dc + -1;
  iVar4 = 0;
  if (_DAT_007778dc == 0) {
    DAT_007778e0 = 0;
    iVar4 = iVar2;
  }
  FUN_006bf8e7();
  if (iVar4 != 0) {
    FUN_006bf840(iVar4);
  }
  iVar2 = param_1[0x44];
  iVar4 = param_1[0x43];
  local_4._0_1_ = 2;
  for (; iVar4 != iVar2; iVar4 = iVar4 + 0x10) {
    FUN_004acdf0();
  }
  FUN_006bf840(param_1[0x43]);
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  iVar2 = param_1[8];
  local_4._0_1_ = 1;
  while (0 < iVar2) {
    FUN_00582290();
    iVar2 = param_1[8];
  }
  param_1 = param_1 + 5;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00549580(param_1);
  FUN_00549350(param_1);
  *param_1 = 0x7fffffff;
  local_4 = 0xffffffff;
  FUN_005a32c0();
  ExceptionList = pvStack_c;
  return;
}

