
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00519fb0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  byte bStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  byte bStack_11;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  FUN_0052cd20(0);
  FUN_0052cf40();
  FUN_006a2880(param_2,param_3);
  iVar1 = FUN_006a22a0(0x50);
  iVar2 = FUN_006a2260(0x280);
  param_3 = FUN_006a22a0(0);
  iStack_10 = FUN_006a2260(0);
  iStack_10 = iStack_10 + 1;
  iStack_8 = iVar2 + 1;
  iStack_c = param_3 + -1;
  iStack_4 = iVar1 + -1;
  param_3 = 0xff000000;
  uVar3 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_OPTIONS_SCREEN_0073285c);
  puVar7 = &param_3;
  uVar6 = 0x12;
  piVar5 = &iStack_10;
  uVar4 = FUN_0069fa60(s_large_0071ceac);
  FUN_0069fb40(uVar4,piVar5,uVar6,puVar7,uVar3);
  iStack_10 = iStack_10 + -1;
  iStack_8 = iStack_8 + -1;
  iStack_c = iStack_c + -1;
  iStack_4 = iStack_4 + -1;
  param_3 = 0xffffffff;
  uVar3 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_OPTIONS_SCREEN_0073285c);
  puVar7 = &param_3;
  uVar6 = 0x12;
  piVar5 = &iStack_10;
  uVar4 = FUN_0069fa60(s_large_0071ceac);
  FUN_0069fb40(uVar4,piVar5,uVar6,puVar7,uVar3);
  if (*(int *)(param_1 + 0x160) == 1) {
    uVar3 = FUN_006a22a0(0x1e0);
    uVar4 = FUN_006a2260(0x280);
    param_3 = FUN_006a22a0(0);
    iStack_10 = FUN_006a2260(0);
    bStack_15 = *(byte *)(param_1 + 0x15c);
    iStack_c = param_3;
    param_3 = (uint)bStack_15 << 0x18;
    param_2 = (uint)bStack_15 << 0x18;
    uStack_16 = 0;
    uStack_17 = 0;
    uStack_18 = 0;
    uStack_12 = 0;
    uStack_13 = 0;
    uStack_14 = 0;
    bStack_11 = bStack_15;
    iStack_8 = uVar4;
    iStack_4 = uVar3;
    FUN_0069fd50(&iStack_10,&uStack_14,&uStack_18,&param_2,&param_3,0);
    iVar1 = *(int *)(param_1 + 0x15c) + 0x10;
    *(int *)(param_1 + 0x15c) = iVar1;
    if (0xff < iVar1) {
      FUN_0065f940(0xff000000);
      FUN_006a0f00();
      FUN_006a16c0(DAT_00813038,1);
      DAT_00760354 = 0;
      FUN_0052d740(0,6);
      FUN_0052a630(5);
      _DAT_007631f0 = 1;
    }
  }
  return;
}

