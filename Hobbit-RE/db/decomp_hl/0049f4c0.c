
void __fastcall FUN_0049f4c0(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3799;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_NPCObject__OnInit_0072ac80);
  local_4 = 0;
  pvVar1 = operator_new(0x2f8);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00590ff0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  }
  local_4._0_1_ = 0;
  *(undefined4 *)(param_1 + 0x304) = uVar2;
  pvVar1 = operator_new(0x218);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005ac650(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  }
  local_4._0_1_ = 0;
  *(undefined4 *)(param_1 + 0x300) = uVar2;
  pvVar1 = operator_new(0x50);
  local_4._0_1_ = 3;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005aa6b0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0x308) = uVar2;
  *(undefined4 *)(param_1 + 0x30) = 0xc2c80000;
  *(undefined4 *)(param_1 + 0x3c) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x2c) = 0xc2480000;
  *(undefined4 *)(param_1 + 0x34) = 0xc2480000;
  *(undefined4 *)(param_1 + 0x38) = 0x42480000;
  *(undefined4 *)(param_1 + 0x40) = 0x42480000;
  *(undefined1 *)(param_1 + 0x85) = DAT_0075d2bb;
  *(undefined1 *)(param_1 + 0x84) = DAT_0075d2ba;
  *(undefined1 *)(param_1 + 0x83) = DAT_0075d2b9;
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined1 *)(param_1 + 0x82) = DAT_0075d2b8;
  FUN_00580a90(0);
  FUN_005814e0(*(undefined4 *)(param_1 + 0x10));
  *(byte *)(param_1 + 0x7f) = *(byte *)(param_1 + 0x7f) | 1;
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

