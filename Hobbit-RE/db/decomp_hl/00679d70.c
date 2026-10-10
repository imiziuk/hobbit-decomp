
int FUN_00679d70(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6da0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_audio_voice_mgr__UpdateStateResu_00752b88);
  local_4 = 0;
  FUN_00649600(s_audio_voice_mgr__UpdateCheckElem_00752b60);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar1 = param_1 + 0xc;
  local_4._0_1_ = 1;
  if (iVar3 == iVar1) {
    FUN_006795e0(param_1,1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
    param_1 = 0;
  }
  else {
    iVar4 = -1;
    *(undefined4 *)(param_1 + 0x14) = 0;
    do {
      if ((*(int *)(iVar3 + 0x94) == 0) && (*(int *)(param_1 + 0x14) == 0)) {
        *(int *)(param_1 + 0x14) = iVar3;
      }
      if ((iVar4 < *(int *)(iVar3 + 0x40)) && (*(int *)(iVar3 + 0x94) < 6)) {
        iVar4 = *(int *)(iVar3 + 0x40);
      }
      iVar3 = *(int *)(iVar3 + 4);
    } while (iVar3 != iVar1);
    if (iVar4 != *(int *)(param_1 + 0x4c)) {
      *(int *)(param_1 + 0x4c) = iVar4;
      DAT_00806940 = 1;
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
    *(undefined4 *)(param_1 + 0xf0) = 2;
    for (iVar3 = *(int *)(param_1 + 0x10); iVar1 != iVar3; iVar3 = *(int *)(iVar3 + 4)) {
      if ((((*(int *)(iVar3 + 0x94) == 2) &&
           (uVar2 = *(uint *)(iVar3 + 0x10), DAT_00806b04 <= uVar2)) && (uVar2 <= DAT_00806b08)) &&
         (*(int *)(uVar2 + 0x54) == 4)) {
        FUN_0067ad30(uVar2);
        *(undefined4 *)(iVar3 + 0x94) = 1;
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return param_1;
}

