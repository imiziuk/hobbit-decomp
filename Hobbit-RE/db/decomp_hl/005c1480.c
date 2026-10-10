
void __thiscall FUN_005c1480(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df428;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_rigid_geom__Load_00745d38);
  local_4 = 0;
  FUN_005c0600(param_2,param_3);
  FUN_005a56c0(param_2);
  FUN_00429100();
  iVar1 = FUN_005c10c0();
  if (1 < iVar1) {
    *(byte *)(param_1 + 0x134) = *(byte *)(param_1 + 0x134) | 1;
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

