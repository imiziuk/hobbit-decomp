
void __thiscall FUN_004d27f0(int param_1,float param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4e58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_Switch__OnAdvanceLogic_0072d854);
  local_4 = 0;
  if (*(float *)(param_1 + 0x168) < *(float *)(param_1 + 0x164) !=
      (NAN(*(float *)(param_1 + 0x168)) || NAN(*(float *)(param_1 + 0x164)))) {
    *(float *)(param_1 + 0x168) = param_2 + *(float *)(param_1 + 0x168);
  }
  iVar1 = FUN_004c71a0();
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x140);
    *(undefined4 *)(iVar1 + 0x60) = 0;
    *(undefined4 *)(iVar1 + 100) = 1;
    iVar1 = *(int *)(param_1 + 0x140);
    if ((*(byte *)(param_1 + 0x160) & 2) == 0) {
      if (*(float *)(iVar1 + 0x10) <= DAT_006e92e4) goto LAB_004d28b0;
      param_2 = -param_2;
    }
    else if ((float)(*(int *)(iVar1 + 0xc) + -2) <= *(float *)(iVar1 + 0x10)) goto LAB_004d28b0;
    FUN_0053b780(param_2);
  }
LAB_004d28b0:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

