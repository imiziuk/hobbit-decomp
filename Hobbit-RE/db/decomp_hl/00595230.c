
void __fastcall FUN_00595230(int param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd1e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_PhysController__StateChange_00742fa4);
  local_4 = 0;
  FUN_00592920();
  iVar1 = FUN_005afae0();
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x38);
    if (((iVar1 == 3) || (iVar1 == 8)) || (iVar1 == 9)) {
      *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x10;
    }
    else {
      FUN_00595310();
    }
  }
  piVar2 = (int *)FUN_00592920();
  iVar1 = (**(code **)(*piVar2 + 0x108))(0);
  if ((iVar1 == 0) && (*(int *)(param_1 + 0x38) != 5)) {
    *(undefined4 *)(param_1 + 0x22c) = 5;
  }
  if (*(int *)(param_1 + 0x22c) != 0) {
    FUN_00595860();
  }
  if (*(int *)(param_1 + 0x230) != 0) {
    FUN_00595d60();
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_10;
  return;
}

