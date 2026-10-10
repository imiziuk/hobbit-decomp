
void __thiscall
FUN_00574980(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined4 param_5,
            undefined4 param_6)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  char *pcVar9;
  float10 fVar10;
  undefined4 local_38;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db9d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_event_mgr__HandleCinematicEvent_0074006c);
  local_4 = 0;
  uVar3 = FUN_0053f310(0);
  FUN_00649b20(uVar3);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar4 = FUN_0064a100(0x20,0);
  if (iVar4 != -1) {
    FUN_00649e60(iVar4,local_14 - iVar4);
  }
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  local_4._0_1_ = 2;
  iVar4 = FUN_00406ce0(param_4,param_5);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (iVar4 == -1) {
    FUN_00649720();
    param_4 = (int *)0x0;
  }
  else {
    uVar2 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
    param_4 = (int *)(-(uint)((*(byte *)(uVar2 + 0x7f) & 0x10) != 0) & uVar2);
    FUN_00649720();
  }
  cVar1 = (char)param_4[0x1f];
  FUN_00576a50();
  iVar5 = FUN_00659600(local_38,1);
  fVar10 = (float10)FUN_00658020(iVar5);
  iVar4 = *(int *)(param_1 + 0x88);
  if (*(int *)(param_1 + 0x90) < iVar4 + 1) {
    if (*(int *)(param_1 + 0x98) == 0) {
      iVar6 = *(int *)(param_1 + 0x90) / 2;
      iVar8 = 1;
      if (0 < iVar6) {
        iVar8 = iVar6;
      }
      if (iVar8 + iVar4 < 1) {
        iVar4 = 1;
      }
      else {
        if (iVar6 < 1) {
          iVar6 = 1;
        }
        iVar4 = iVar4 + iVar6;
      }
    }
    else {
      iVar4 = *(int *)(param_1 + 0x98) + iVar4;
    }
    pvVar7 = operator_new(iVar4 * 4);
    iVar8 = 0;
    if (0 < *(int *)(param_1 + 0x88)) {
      do {
        *(undefined4 *)((int)pvVar7 + iVar8 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x8c) + iVar8 * 4);
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(param_1 + 0x88));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0x8c));
    *(void **)(param_1 + 0x8c) = pvVar7;
    *(int *)(param_1 + 0x90) = iVar4;
  }
  iVar4 = *(int *)(param_1 + 0x88) + 1;
  *(int *)(param_1 + 0x88) = iVar4;
  *(int *)(*(int *)(param_1 + 0x8c) + -4 + iVar4 * 4) = iVar5;
  pcVar9 = s_FOUND_00740064;
  if (iVar5 == 0) {
    pcVar9 = s____NOTFOUND____00740054;
  }
  iVar4 = iVar5;
  uVar3 = FUN_0053f210(0);
  FUN_0064e870(6,s_ANIM_EVENT__DLG____s___from___s__0074001c,local_38,param_6,uVar3,pcVar9,iVar4);
  FUN_0054e780(local_38,(float)fVar10,0);
  if (((cVar1 == '\x12') || (cVar1 == '\x1c')) || (cVar1 == '\x13')) {
    (**(code **)(*param_4 + 0xfc))(iVar5);
  }
  else {
    FUN_0064e870(6,s_Warning__Audio_Dialog_<_s>_from_A_0073ffd0,local_38);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00649ba0();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

