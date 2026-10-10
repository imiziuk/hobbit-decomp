
void __thiscall FUN_00535310(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d8ce8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_MusicLogic__OnAdvanceLogic_0073736c);
  local_4 = 0;
  uVar1 = FUN_005310a0();
  iVar2 = FUN_00647ed0(*(undefined4 *)(param_1 + 0x2c8),uVar1);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x160) = 1;
  }
  if (*(int *)(param_1 + 0x24c) == 1) {
    iVar2 = FUN_00647ed0(s_MUSIC_Silence_00724fb8,*(undefined4 *)(param_1 + 400));
    if (iVar2 != 0) {
      iVar2 = FUN_00647ed0(s_MUSIC_Silence_00724fb8,uVar1);
      if (iVar2 == 0) {
        iVar2 = FUN_00647ed0(s_MUSIC_Silence_00724fb8,*(undefined4 *)(param_1 + 0x1bc));
        if (iVar2 != 0) {
          iVar2 = FUN_00647ed0(s_MUSIC_Silence_00724fb8,uVar1);
          if ((iVar2 == 0) && (*(int *)(param_1 + 0x160) != 0)) {
            FUN_0064a2e0(s_AMBIENTOUTDOOR_00737278);
            FUN_00535810(&DAT_00764560,*(undefined4 *)(param_1 + 0x264),1);
          }
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x15c) == 0) {
    iVar2 = param_1 + 400;
    uVar3 = FUN_0064a320(iVar2);
    FUN_0064a320(uVar3);
    FUN_005342d0();
    FUN_005323f0(iVar2,3,0);
    FUN_0064a320(iVar2);
    *(undefined4 *)(param_1 + 0x160) = 0;
    FUN_00534f30(*(undefined4 *)(param_1 + 0x298));
  }
  if (*(int *)(param_1 + 0x240) != 0) {
    if ((*(int *)(param_1 + 0x294) != 0) && (*(int *)(param_1 + 0x160) != 0)) {
      iVar2 = FUN_00534f20(*(undefined4 *)(param_1 + 0x2c8));
      if ((*(int *)(param_1 + 0x294) < iVar2) && (*(int *)(param_1 + 0x240) != 0)) {
        iVar2 = FUN_00647ed0(uVar1,*(undefined4 *)(param_1 + 0x2c8));
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0x294) = 0;
          FUN_0064a320(&DAT_0076458c);
          *(undefined4 *)(param_1 + 0x240) = 1;
          FUN_005355f0(*(undefined4 *)(param_1 + 0x280));
          FUN_005323f0(&DAT_0076458c,2,0x40800000);
          FUN_0064a320(&DAT_0076458c);
          *(undefined4 *)(param_1 + 0x160) = 0;
        }
      }
    }
    goto LAB_00535588;
  }
  iVar2 = FUN_005321d0();
  if ((iVar2 != 0) || (*(int *)(param_1 + 0x160) == 0)) goto LAB_00535588;
  *(undefined4 *)(param_1 + 0x240) = 1;
  *(undefined4 *)(param_1 + 0x244) = 3;
  if (*(int *)(param_1 + 0x24c) == 1) {
    iVar2 = param_1 + 0x1bc;
LAB_005354b9:
    FUN_0064a320(iVar2);
  }
  else if (*(int *)(param_1 + 0x24c) == 3) {
    iVar2 = param_1 + 0x1e8;
    goto LAB_005354b9;
  }
  FUN_005323f0(param_1 + 400,0,0);
  FUN_0064a320(param_1 + 400);
  *(undefined4 *)(param_1 + 0x160) = 0;
LAB_00535588:
  FUN_00535200(param_2);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

