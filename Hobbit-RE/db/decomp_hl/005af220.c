
undefined4 __thiscall FUN_005af220(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006de5c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_StateController__GetGoalListSetF_00744f30);
  iVar3 = 0;
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0xfc)) {
    do {
      iVar2 = FUN_0064a7e0(param_2,*(int *)(*(int *)(param_1 + 0x100) + iVar3 * 4) + 0x1c);
      if (iVar2 != 0) {
        uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x100) + iVar3 * 4);
        local_4 = 0xffffffff;
        FUN_00649720();
        ExceptionList = local_c;
        return uVar1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xfc));
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 0;
}

