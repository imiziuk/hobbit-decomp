
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005533e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 local_18 [4];
  int local_14;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d9b74;
  pvStack_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &pvStack_c;
  local_14 = param_1;
  FUN_00555ec0(local_18,**(undefined4 **)(param_1 + 0xfc),*(undefined4 **)(param_1 + 0xfc));
  FUN_006bf840(*(undefined4 *)(param_1 + 0xfc));
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  FUN_006bf84b();
  iVar2 = DAT_00771d64;
  _DAT_00771d60 = _DAT_00771d60 + -1;
  iVar3 = 0;
  if (_DAT_00771d60 == 0) {
    DAT_00771d64 = 0;
    iVar3 = iVar2;
  }
  FUN_006bf8e7();
  if (iVar3 != 0) {
    FUN_006bf840(iVar3);
  }
  puVar1 = (undefined4 *)(param_1 + 0xe8);
  local_4._0_1_ = 1;
  FUN_00549580(puVar1);
  FUN_00549350(puVar1);
  *puVar1 = 0x7fffffff;
  local_10 = (undefined4 *)(param_1 + 0x7c);
  *local_10 = &PTR_FUN_006f3e2c;
  iVar2 = *(int *)(param_1 + 0x80);
  local_4._0_1_ = 3;
  while (iVar2 != 0) {
    FUN_005c9070();
    iVar2 = *(int *)(param_1 + 0x80);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005c8fe0();
  local_10 = (undefined4 *)(param_1 + 0x40);
  *local_10 = &PTR_FUN_006f3e38;
  iVar2 = *(int *)(param_1 + 0x44);
  local_4 = 4;
  while (iVar2 != 0) {
    FUN_005c9070();
    iVar2 = *(int *)(param_1 + 0x44);
  }
  local_4 = 0xffffffff;
  FUN_005c8fe0();
  ExceptionList = pvStack_c;
  return;
}

