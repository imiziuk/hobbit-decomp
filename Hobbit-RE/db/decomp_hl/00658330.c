
void __thiscall FUN_00658330(int param_1,float param_2)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e65ff;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_audio_mgr__Update_0074e1b0);
  local_4 = 0;
  iVar1 = FUN_0067b220();
  if (iVar1 != 0) {
    FUN_0067be00();
    *(float *)(param_1 + 0x21f8) = param_2 + *(float *)(param_1 + 0x21f8);
    FUN_0067af50();
    FUN_00679140(param_2);
    DAT_00806b14 = 1;
    FUN_006583e0();
    FUN_0067be20();
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

