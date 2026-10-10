
void __thiscall FUN_004cb390(int param_1,float param_2)

{
  float fVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4b48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_rope__OnAdvanceLogic_0072d33c);
  fVar1 = *(float *)(param_1 + 0x160) - param_2;
  local_4 = 0;
  *(float *)(param_1 + 0x160) = fVar1;
  if ((fVar1 < DAT_006e92e4 != (fVar1 == DAT_006e92e4)) && (*(int *)(param_1 + 0x15c) != -1)) {
    FUN_0054f7c0((undefined4 *)(param_1 + 0x15c));
    *(undefined4 *)(param_1 + 0x15c) = 0xffffffff;
  }
  if (*(float *)(param_1 + 0x134) < *(float *)(param_1 + 0xcc) !=
      (NAN(*(float *)(param_1 + 0x134)) || NAN(*(float *)(param_1 + 0xcc)))) {
    *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0xcc);
  }
  *(undefined4 *)(param_1 + 0x13c) = 0x3d072b02;
  FUN_004cb990();
  FUN_004c7f80();
  FUN_004c8dd0(0);
  param_2 = param_2 + *(float *)(param_1 + 0x138);
  *(float *)(param_1 + 0x138) = param_2;
  if (((param_2 <= *(float *)(param_1 + 0xe4)) && (*(int *)(param_1 + 300) != 7)) &&
     (*(int *)(param_1 + 300) != 6)) {
    FUN_004cb4a0();
    FUN_004c8aa0();
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

