
void __fastcall FUN_00576a50(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbb48;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_event_mgr__EndCinemaEvents_007401a8);
  iVar1 = *(int *)(param_1 + 0x88);
  local_4 = 0;
  while (iVar1 != 0) {
    iVar1 = FUN_00659e10(**(undefined4 **)(param_1 + 0x8c));
    if ((iVar1 == 0) && (iVar1 = FUN_00659e70(**(undefined4 **)(param_1 + 0x8c)), iVar1 == 0)) {
      uVar4 = **(undefined4 **)(param_1 + 0x8c);
      pcVar3 = s_ANIM_EVENT__dialog__ID____d__cut_00740180;
    }
    else {
      FUN_00659c80(**(undefined4 **)(param_1 + 0x8c),0);
      uVar4 = **(undefined4 **)(param_1 + 0x8c);
      pcVar3 = s_ANIM_EVENT__Skipped_dialog__ID___00740158;
    }
    FUN_0064e870(6,pcVar3,uVar4);
    iVar1 = *(int *)(param_1 + 0x88) + -1;
    if (0 < iVar1) {
      iVar2 = 0;
      do {
        *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x8c)) =
             *(undefined4 *)(iVar2 + 4 + *(int *)(param_1 + 0x8c));
        iVar2 = iVar2 + 4;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    iVar1 = *(int *)(param_1 + 0x88) + -1;
    *(int *)(param_1 + 0x88) = iVar1;
  }
  FUN_0054ec40();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

