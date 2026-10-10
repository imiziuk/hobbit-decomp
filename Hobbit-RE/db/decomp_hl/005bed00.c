
void __thiscall FUN_005bed00(int param_1)

{
  undefined *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int in_stack_00000028;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006df203;
  local_c = ExceptionList;
  puVar1 = *(undefined **)(param_1 + 4);
  local_4 = 0;
  ExceptionList = &local_c;
  if (puVar1 != &DAT_007ba744) {
    ExceptionList = &local_c;
    if (puVar1 != (undefined *)0x0) {
      ExceptionList = &local_c;
      FUN_00649ba0();
      FUN_006bf840(puVar1);
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (in_stack_00000028 == 0) {
    *(undefined **)(param_1 + 4) = &DAT_007ba744;
  }
  else {
    pvVar2 = operator_new(0x2c);
    local_4._0_1_ = 1;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00649b60(&stack0x00000004);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    *(undefined4 *)(param_1 + 4) = uVar3;
  }
  uVar3 = FUN_005becf0();
  iVar4 = FUN_005af160(uVar3);
  if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x5c) & 8) != 0)) {
    *(undefined4 *)(iVar4 + 100) = 0;
  }
  *(undefined2 *)(param_1 + 0x42) = 0;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

