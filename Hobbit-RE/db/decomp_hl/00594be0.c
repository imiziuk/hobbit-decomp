
void __thiscall FUN_00594be0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_20 [5];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd190;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_PhysController__OnAdvanceLogic_00742edc);
  uVar1 = *(undefined4 *)(param_1 + 0x288);
  uVar2 = *(undefined4 *)(param_1 + 0x28c);
  local_4 = 0;
  *(undefined4 *)(param_1 + 0x294) = param_2;
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  local_4._0_1_ = 1;
  iVar3 = FUN_00406ce0(uVar1,uVar2);
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar3 == -1) {
    FUN_00649720();
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)(DAT_0076f648 + iVar3 * 0x14);
    uVar4 = -(uint)((*(byte *)(uVar4 + 0x7f) & 0x10) != 0) & uVar4;
    FUN_00649720();
  }
  *(uint *)(param_1 + 0x290) = uVar4;
  if (*(int *)(param_1 + 0x40) == 2) {
    FUN_00599b60();
  }
  FUN_00598c70();
  FUN_00595230();
  if ((*(byte *)(param_1 + 0x4c) & 4) != 0) {
    FUN_00594470();
  }
  if ((*(uint *)(param_1 + 0x4c) & 0x1000) != 0) {
    FUN_00595e80();
  }
  iVar3 = FUN_00596530(local_20);
  if (iVar3 != 0) {
    FUN_00592920();
    FUN_005af980(local_20[0]);
  }
  FUN_00598d60();
  FUN_00599ec0();
  if (((*(uint *)(param_1 + 0x4c) & 0x200000) != 0) && (*(int *)(param_1 + 400) != 0)) {
    iVar3 = FUN_00566dd0();
    if (iVar3 == 1) {
      FUN_00594ee0();
    }
  }
  if ((*(int *)(param_1 + 0x158) != 0) &&
     ((*(uint *)(*(int *)(param_1 + 0x158) + 0x78) & 0x8000) == 0x8000)) {
    FUN_00594da0();
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

