
undefined4 FUN_0042b8c0(undefined4 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined1 local_58 [76];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cf65f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0064afa0(0);
  local_4 = 1;
  if (param_2 != 0) {
    iVar1 = FUN_0042b820(param_2,&param_2);
    if (param_2 == 0) {
      pcVar2 = "IDS_INPUT_KBD_ESCAPE" + iVar1 * 0x20;
    }
    else if (param_2 == 2) {
      pcVar2 = "IDS_INPUT_MOUSE_X_REL" + iVar1 * 0x20;
    }
    else if (param_2 == 1) {
      pcVar2 = "IDS_INPUT_MOUSE_BTN_L" + iVar1 * 0x20;
    }
    else if (param_2 == 4) {
      pcVar2 = "IDS_INPUT_PC_LEFT_JOYSTICK" + iVar1 * 0x20;
    }
    else {
      if (param_2 != 3) goto LAB_0042b96d;
      pcVar2 = "IDS_INPUT_PC_BTN_0" + iVar1 * 0x20;
    }
    uVar3 = FUN_006ab1a0(&DAT_0071ceb4,pcVar2);
    FUN_0064b7b0(uVar3);
  }
LAB_0042b96d:
  FUN_0064b170(local_58);
  local_4 = local_4 & 0xffffff00;
  FUN_0064b190();
  ExceptionList = local_c;
  return param_1;
}

