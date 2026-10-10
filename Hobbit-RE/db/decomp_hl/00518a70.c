
void FUN_00518a70(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_11 = 0xff;
  uStack_12 = 200;
  uStack_13 = 200;
  uStack_14 = 200;
  FUN_0052cd20(0);
  FUN_005253e0(param_1,param_2);
  uVar1 = FUN_006a22a0(0x50);
  uVar2 = FUN_006a2260(0x280);
  uVar3 = FUN_006a22a0(0);
  uStack_10 = FUN_006a2260(0);
  uStack_c = uVar3;
  uStack_8 = uVar2;
  uStack_4 = uVar1;
  uVar1 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_OPTIONS_VIDEO_00732db8);
  puVar5 = &uStack_14;
  uVar3 = 0x12;
  puVar4 = &uStack_10;
  uVar2 = FUN_0069fa60(s_large_0071ceac);
  FUN_0069fb40(uVar2,puVar4,uVar3,puVar5,uVar1);
  return;
}

