
void __fastcall FUN_0051a5e0(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  CRect aCStack_54 [12];
  undefined4 uStack_48;
  undefined4 uStack_44;
  int *piStack_40;
  int *piStack_3c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d75f8;
  local_c = ExceptionList;
  piStack_3c = &local_28;
  piStack_40 = &local_24;
  uStack_44 = 0x51a60c;
  ExceptionList = &local_c;
  FUN_0065f8a0();
  piStack_3c = (int *)s_dlg_pause_options__OnUpdate_00734904;
  piStack_40 = (int *)0x51a61d;
  FUN_006501d0();
  local_4 = 0;
  if (*(int *)(param_1 + 0x204) != 0) {
    piStack_3c = (int *)0x0;
    piStack_40 = (int *)0x98;
    uStack_44 = 0x51a63a;
    FUN_00671130();
    piStack_3c = (int *)0x51a642;
    piStack_3c = (int *)__ftol();
    piStack_40 = (int *)0x0;
    uStack_44 = 0x97;
    uStack_48 = 0x51a64e;
    FUN_00671130();
    piStack_40 = (int *)0x51a656;
    piStack_40 = (int *)__ftol();
    uStack_44 = *(undefined4 *)(param_1 + 8);
    uStack_48 = 0x51a663;
    FUN_006a03c0();
    if (*(int *)(param_1 + 0x1fc) == 0) {
LAB_0051a677:
      if (*(int *)(param_1 + 0x200) != 0) {
        piStack_3c = (int *)0x51a686;
        uVar1 = FUN_006a3230();
        if ((uVar1 & 0x400) != 0) goto LAB_0051a699;
      }
      piStack_3c = *(int **)(param_1 + 0x164);
      piStack_40 = (int *)0x51a699;
      FUN_006a2bd0();
    }
    else {
      piStack_3c = (int *)0x51a672;
      uVar1 = FUN_006a3230();
      if ((uVar1 & 0x400) == 0) goto LAB_0051a677;
    }
LAB_0051a699:
    *(undefined4 *)(param_1 + 0x204) = 0;
  }
  if (*(int *)(param_1 + 500) != 0) {
    if (*(int *)(param_1 + 400) == 1) {
      piStack_3c = (int *)0x51a6cd;
      FUN_006a0f10();
      *(undefined4 *)(param_1 + 0x160) = 1;
      *(undefined4 *)(param_1 + 0x15c) = 0;
      *(undefined4 *)(param_1 + 500) = 0;
    }
    else if (*(int *)(param_1 + 400) == 2) {
      *(undefined4 *)(param_1 + 500) = 0;
    }
    goto LAB_0051aa45;
  }
  piStack_3c = (int *)0x51a6f3;
  uVar1 = FUN_006a3230();
  uVar4 = (uint)((uVar1 & 0x400) != 0);
  piStack_3c = (int *)0x51a708;
  uVar1 = FUN_006a3230();
  if ((uVar1 & 0x400) != 0) {
    uVar4 = 2;
  }
  piStack_3c = (int *)0x51a71d;
  uVar1 = FUN_006a3230();
  if ((uVar1 & 0x400) != 0) {
    uVar4 = 3;
  }
  piStack_3c = (int *)0x51a732;
  uVar1 = FUN_006a3230();
  if ((uVar1 & 0x400) != 0) {
    uVar4 = 4;
  }
  if (uVar4 != *(uint *)(param_1 + 0x1f8)) {
    piStack_3c = (int *)0x1;
    piStack_40 = (int *)s_CursorMove_00731fe0;
    uStack_44 = 0x51a755;
    FUN_00659600();
    *(uint *)(param_1 + 0x1f8) = uVar4;
  }
  switch(*(undefined4 *)(param_1 + 0x158)) {
  case 1:
    piStack_3c = (int *)0x1;
    piStack_40 = (int *)DAT_00813038;
    uStack_44 = 0x51a786;
    FUN_006a16c0();
    piStack_3c = (int *)0x0;
    piStack_40 = (int *)0x5;
    uStack_44 = 0;
    local_20 = aCStack_54;
    CRect::CRect(aCStack_54,0x10,0x10,local_24 + -0x10,local_28 + -0x10);
    pcVar5 = s_options_audio_00732e20;
    break;
  case 2:
    piStack_3c = (int *)0x1;
    piStack_40 = (int *)DAT_00813038;
    uStack_44 = 0x51a7ca;
    FUN_006a16c0();
    piStack_3c = (int *)0x0;
    piStack_40 = (int *)0x15;
    uStack_44 = 0;
    local_20 = aCStack_54;
    CRect::CRect(aCStack_54,0x10,0x10,local_24 + -0x10,local_28 + -0x10);
    FUN_006a1430(DAT_00813038,s_options_video_pc_007343dc);
    goto LAB_0051aa45;
  case 3:
    piStack_3c = (int *)0x1;
    piStack_40 = (int *)DAT_00813038;
    uStack_44 = 0x51a81f;
    FUN_006a16c0();
    piStack_3c = (int *)0x0;
    piStack_40 = (int *)0x5;
    uStack_44 = 0;
    local_20 = aCStack_54;
    CRect::CRect(aCStack_54,0x10,0x10,local_24 + -0x10,local_28 + -0x10);
    pcVar5 = s_options_camera_00732df8;
    break;
  case 4:
    piStack_3c = (int *)0x1;
    piStack_40 = (int *)DAT_00813038;
    uStack_44 = 0x51a8fc;
    FUN_006a16c0();
    piStack_3c = (int *)0x0;
    piStack_40 = (int *)0x15;
    uStack_44 = 0;
    local_20 = aCStack_54;
    CRect::CRect(aCStack_54,0x10,0x10,local_24 + -0x10,local_28 + -0x10);
    FUN_006a1430(DAT_00813038,s_options_controls_menu_00734348);
    goto LAB_0051aa45;
  case 5:
    piStack_3c = (int *)0x1;
    piStack_40 = (int *)DAT_00813038;
    uStack_44 = 0x51a951;
    FUN_006a16c0();
    piStack_3c = (int *)0x0;
    piStack_40 = (int *)0x5;
    uStack_44 = 0;
    local_20 = aCStack_54;
    CRect::CRect(aCStack_54,0x10,0x10,local_24 + -0x10,local_28 + -0x10);
    pcVar5 = s_options_performance_pc_007343ac;
    break;
  case 6:
    piStack_3c = (int *)0x1;
    piStack_40 = (int *)DAT_00813038;
    uStack_44 = 0x51a863;
    FUN_006a16c0();
    piStack_3c = (int *)0x0;
    piStack_40 = (int *)0x5;
    uStack_44 = 0;
    local_20 = aCStack_54;
    CRect::CRect(aCStack_54,0x10,0x10,local_24 + -0x10,local_28 + -0x10);
    FUN_006a1430(DAT_00813038,s_front_load_game_pc_00732b94);
    goto LAB_0051aa45;
  case 7:
    piStack_3c = (int *)0x1;
    piStack_40 = (int *)DAT_00813038;
    uStack_44 = 0x51a8b8;
    FUN_006a16c0();
    piStack_3c = (int *)0x0;
    piStack_40 = (int *)0x5;
    uStack_44 = 0;
    local_20 = aCStack_54;
    CRect::CRect(aCStack_54,0x10,0x10,local_24 + -0x10,local_28 + -0x10);
    pcVar5 = s_save_game_pc_007348f4;
    break;
  default:
    if (*(int *)(param_1 + 0x1fc) == 0) {
LAB_0051a9d8:
      if (*(int *)(param_1 + 0x200) == 0) goto LAB_0051aa45;
      piStack_3c = (int *)0x51a9e7;
      uVar1 = FUN_006a3230();
      if ((uVar1 & 0x400) == 0) goto LAB_0051aa45;
      piStack_3c = (int *)0x51a9f7;
      piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x200) + 0x10))();
      iStack_1c = *piVar2;
      iStack_18 = piVar2[1];
      iStack_14 = piVar2[2];
      iStack_10 = piVar2[3];
      iVar3 = *(int *)(param_1 + 0x200);
    }
    else {
      piStack_3c = (int *)0x51a9a2;
      uVar1 = FUN_006a3230();
      if ((uVar1 & 0x400) == 0) goto LAB_0051a9d8;
      piStack_3c = (int *)0x51a9b2;
      piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x1fc) + 0x10))();
      iStack_1c = *piVar2;
      iStack_18 = piVar2[1];
      iStack_14 = piVar2[2];
      iStack_10 = piVar2[3];
      iVar3 = *(int *)(param_1 + 0x1fc);
    }
    iStack_10 = iStack_10 + 0x10;
    iStack_1c = iStack_1c + 0x10;
    iStack_18 = iStack_18 + 0x10;
    iStack_14 = iStack_14 + 0x10;
    piStack_3c = (int *)0x0;
    piStack_40 = &iStack_1c;
    uStack_44 = *(undefined4 *)(iVar3 + 8);
    uStack_48 = 0x51aa45;
    FUN_006a0430();
    goto LAB_0051aa45;
  }
  FUN_006a1430(DAT_00813038,pcVar5);
LAB_0051aa45:
  local_4 = 0xffffffff;
  piStack_3c = (int *)0x51aa56;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

