
void __fastcall FUN_004d6440(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d5230;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  uVar1 = FUN_00434eb0(&stack0x00000004);
  *(byte *)(param_1 + 0x7b) = *(byte *)(param_1 + 0x7b) & 0xf7;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  FUN_0064a320(&stack0x00000004);
  uVar1 = FUN_00433b30(uVar1);
  uVar1 = FUN_00649b20(uVar1);
  local_4._0_1_ = 1;
  FUN_0064b830(uVar1);
  local_4._0_1_ = 0;
  FUN_00649ba0();
  FUN_00434eb0(param_1 + 0x1fc);
  puVar2 = (undefined4 *)FUN_00649b80(param_1 + 0x1ac);
  local_4._0_1_ = 2;
  uVar1 = FUN_005496c0(*puVar2,s_Props_00720224);
  uVar1 = FUN_00649b20(uVar1);
  local_4._0_1_ = 3;
  FUN_0064b830(uVar1);
  local_4._0_1_ = 2;
  FUN_00649ba0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649ba0();
  *(undefined4 *)(param_1 + 0x1f8) = 0x3f800000;
  iVar3 = FUN_00434eb0(param_1 + 0x1fc);
  if (iVar3 == 1) {
    *(undefined4 *)(param_1 + 0x188) = 0x32;
  }
  else if (iVar3 == 2) {
    *(undefined4 *)(param_1 + 0x188) = 5;
  }
  else if (iVar3 == 4) {
    *(undefined4 *)(param_1 + 0x188) = 0xf;
  }
  else {
    *(undefined4 *)(param_1 + 0x188) = 1;
  }
  *(undefined4 *)(param_1 + 0x168) = 0;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

