
int FUN_0067a600(int param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6e60;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_audio_voice_mgr__UpdateStateStar_00752af0);
  local_4 = 0;
  FUN_00649600(s_audio_voice_mgr__UpdateCheckElem_00752b60);
  iVar1 = *(int *)(param_1 + 0x10);
  local_4._0_1_ = 1;
  if (iVar1 == param_1 + 0xc) {
    FUN_006795e0(param_1,1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
    param_1 = 0;
  }
  else {
    iVar2 = -1;
    *(undefined4 *)(param_1 + 0x14) = 0;
    do {
      if ((*(int *)(iVar1 + 0x94) == 0) && (*(int *)(param_1 + 0x14) == 0)) {
        *(int *)(param_1 + 0x14) = iVar1;
      }
      if ((iVar2 < *(int *)(iVar1 + 0x40)) && (*(int *)(iVar1 + 0x94) < 6)) {
        iVar2 = *(int *)(iVar1 + 0x40);
      }
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != param_1 + 0xc);
    if (iVar2 != *(int *)(param_1 + 0x4c)) {
      *(int *)(param_1 + 0x4c) = iVar2;
      DAT_00806940 = 1;
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
    *(undefined4 *)(param_1 + 0xf0) = 2;
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return param_1;
}

