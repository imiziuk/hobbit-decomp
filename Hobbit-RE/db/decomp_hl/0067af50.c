
void __fastcall FUN_0067af50(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6eb2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_audio_channel_mgr__Update_00752d84);
  local_4 = 0;
  FUN_0067be00();
  FUN_00649600(s_audio_channel_mgr__UpdateLocked_00752da0);
  iVar4 = *(int *)(param_1 + 0x8c);
  local_4._0_1_ = 1;
  if (iVar4 != param_1 + 0x88) {
    do {
      iVar2 = *(int *)(iVar4 + 4);
      iVar1 = FUN_0067b7a0(iVar4);
      if (iVar1 == 0) {
        iVar3 = 0;
        FUN_00679ab0();
        iVar1 = *(int *)(iVar4 + 0x10);
        if (iVar1 != 0) {
          iVar3 = *(int *)(iVar1 + 0xc);
        }
        FUN_0067b090(iVar4,1,1);
        if (((iVar1 != 0) && (iVar3 != 0)) && (iVar4 = *(int *)(iVar3 + 0x10), iVar4 != 0)) {
          if (iVar4 == iVar2) {
            iVar2 = *(int *)(iVar4 + 4);
          }
          iVar1 = FUN_0067b7a0(iVar4);
          if (iVar1 != 0) {
            FUN_0067b090(iVar4,1,1);
          }
        }
        FUN_00679ac0();
      }
      iVar4 = iVar2;
    } while (iVar2 != param_1 + 0x88);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649720();
  FUN_0067be20();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

