
void __thiscall FUN_00516e90(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  iStack_14 = param_1;
  if (*(int *)(param_1 + 0x1a8) == 0) {
    FUN_0052cd20(0);
  }
  else {
    uVar4 = FUN_006a22a0(0x17c);
    uVar5 = FUN_006a2260(0x25d);
    uVar7 = FUN_006a22a0(0x45);
    iStack_10 = FUN_006a2260(0x1d);
    uStack_20 = 0x21;
    uStack_18 = 0x21;
    uStack_1f = 0x30;
    uStack_17 = 0x30;
    uStack_24 = 0x1e;
    uStack_1c = 0x1e;
    uStack_21 = 0xff;
    uStack_22 = 0x32;
    uStack_23 = 0x26;
    uStack_1d = 0xff;
    uStack_1e = 0x50;
    uStack_19 = 0xff;
    uStack_1a = 0x32;
    uStack_1b = 0x26;
    uStack_15 = 0xff;
    uStack_16 = 0x50;
    iStack_c = uVar7;
    iStack_8 = uVar5;
    iStack_4 = uVar4;
    FUN_0069fd50(&iStack_10,&uStack_18,&uStack_1c,&uStack_20,&uStack_24,0);
  }
  FUN_006a2880(param_2,param_3);
  iVar1 = FUN_006a22a0(0x50);
  iVar2 = FUN_006a2260(0x280);
  iVar3 = FUN_006a22a0(0);
  iStack_10 = FUN_006a2260(0);
  if (*(int *)(iStack_14 + 0x1a8) == 0) {
    iStack_10 = iStack_10 + 1;
    iStack_8 = iVar2 + 1;
    iStack_c = iVar3 + -1;
    iStack_4 = iVar1 + -1;
    param_3 = 0xff000000;
    uVar4 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_OPTIONS_AUDIO_PC_00732d58);
    puVar8 = &param_3;
    uVar7 = 0x12;
    piVar6 = &iStack_10;
    uVar5 = FUN_0069fa60(s_large_0071ceac);
    FUN_0069fb40(uVar5,piVar6,uVar7,puVar8,uVar4);
    iStack_10 = iStack_10 + -1;
    iStack_8 = iStack_8 + -1;
    iStack_c = iStack_c + -1;
    iStack_4 = iStack_4 + -1;
    param_3 = 0xffffffff;
    uVar4 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_OPTIONS_AUDIO_PC_00732d58);
  }
  else {
    iStack_c = iVar3;
    iStack_8 = iVar2;
    iStack_4 = iVar1;
    iVar1 = FUN_006a22a0(0x50);
    iVar2 = FUN_006a2260(0x280);
    iVar3 = FUN_006a22a0(0);
    iStack_10 = FUN_006a2260(0);
    param_3 = 0xffc8c8c8;
    iStack_c = iVar3;
    iStack_8 = iVar2;
    iStack_4 = iVar1;
    uVar4 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_OPTIONS_SCREEN_0073285c);
  }
  puVar8 = &param_3;
  piVar6 = &iStack_10;
  uVar7 = 0x12;
  uVar5 = FUN_0069fa60(s_large_0071ceac);
  FUN_0069fb40(uVar5,piVar6,uVar7,puVar8,uVar4);
  return;
}

