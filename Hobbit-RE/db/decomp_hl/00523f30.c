
void __fastcall FUN_00523f30(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_b4 [44];
  undefined1 auStack_88 [76];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d7a71;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = FUN_0052e130();
  *(undefined4 *)(param_1 + 0x174) = uVar1;
  FUN_006a4b90();
  uVar4 = 0;
  uVar1 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_NEW_GAME_00735484);
  FUN_006a4b40(uVar1,uVar4);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x174)) {
    do {
      FUN_006499d0();
      uStack_4 = 0;
      FUN_0064afa0();
      uStack_3c = 0xffffffff;
      uStack_38 = 0xffffffff;
      uStack_34 = 0;
      uStack_2c = 0;
      uStack_2a = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_14 = 0;
      uStack_10 = 0;
      uStack_4 = 1;
      iVar2 = FUN_0052f3c0(iVar3,auStack_b4);
      if (iVar2 != 0) {
        FUN_006a4af0(auStack_88,0);
      }
      uStack_4 = 2;
      FUN_0064b190();
      uStack_4 = 0xffffffff;
      FUN_00649ba0();
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x174));
  }
  FUN_006a4c90(0);
  ExceptionList = pvStack_c;
  return;
}

