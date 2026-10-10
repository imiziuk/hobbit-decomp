
void __thiscall FUN_004c0ce0(int param_1,undefined4 param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4708;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_rigid_instance__OnAdvanceLogic_0072c864);
  local_4 = 0;
  if (((*(ushort *)(param_1 + 0x15a) & 0x400) != 0) &&
     ((*(ushort *)(param_1 + 0x15a) & 0x1000) == 0)) {
    FUN_004c1750(param_2);
  }
  iVar1 = FUN_004c71a0();
  if (iVar1 != 0) {
    if ((*(byte *)(param_1 + 0x15b) & 0x40) != 0) {
      FUN_004c0e10(param_2);
    }
    *(byte *)(param_1 + 0x15d) =
         ((byte)((ushort)*(undefined2 *)(param_1 + 0x15a) >> 0xe) << 4 ^ *(byte *)(param_1 + 0x15d))
         & 0x10 ^ *(byte *)(param_1 + 0x15d);
  }
  if ((*(byte *)(param_1 + 0x15b) & 1) != 0) {
    FUN_004c14a0(param_2);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

