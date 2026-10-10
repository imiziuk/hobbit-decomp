
void __thiscall FUN_004ce250(int param_1,float param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4c78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_skybox__OnAdvanceLogic_0072d558);
  local_4 = 0;
  iVar1 = FUN_004c71a0();
  if ((iVar1 != 0) && ((*(byte *)(param_1 + 0x15b) & 0x40) != 0)) {
    FUN_0053b780(param_2 * *(float *)(param_1 + 0x16c));
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

