
undefined4 __thiscall FUN_00658080(int param_1,undefined4 param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e65db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_audio_mgr__LoadPackage___0074e15c);
  local_4 = 0;
  FUN_006501d0(s_audio_mgr__LoadPackage___0074e178);
  local_4._0_1_ = 1;
  pvVar2 = operator_new(0x1cc);
  local_4._0_1_ = 2;
  if (pvVar2 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0067c520();
  }
  local_4._0_1_ = 1;
  iVar4 = FUN_0067c640(param_2);
  if (iVar4 != 0) {
    *(int *)(iVar3 + 0x88) = iVar3;
    piVar1 = (int *)(iVar3 + 0x80);
    *(undefined4 *)(iVar3 + 0x84) = *(undefined4 *)(param_1 + 0x2264);
    *piVar1 = param_1 + 0x2260;
    **(int **)(param_1 + 0x2264) = (int)piVar1;
    *(int **)(param_1 + 0x2264) = piVar1;
    FUN_0065a6a0();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_006501e0();
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return 1;
  }
  if (iVar3 != 0) {
    FUN_0067c580();
    FUN_006bf840(iVar3);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_006501e0();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 0;
}

