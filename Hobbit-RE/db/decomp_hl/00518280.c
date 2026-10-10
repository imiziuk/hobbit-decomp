
void FUN_00518280(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  FUN_0052cd20(0);
  thunk_FUN_006a2880(param_1,param_2);
  iVar1 = FUN_006a22a0(0x50);
  iVar2 = FUN_006a2260(0x280);
  iVar3 = FUN_006a22a0(0);
  iStack_10 = FUN_006a2260(0);
  iStack_10 = iStack_10 + 1;
  iStack_8 = iVar2 + 1;
  iStack_c = iVar3 + -1;
  iStack_4 = iVar1 + -1;
  param_2 = 0xff000000;
  uVar4 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_OPTIONS_SCREEN_0073285c);
  puVar8 = &param_2;
  uVar7 = 0x12;
  piVar6 = &iStack_10;
  uVar5 = FUN_0069fa60(s_large_0071ceac);
  FUN_0069fb40(uVar5,piVar6,uVar7,puVar8,uVar4);
  iStack_10 = iStack_10 + -1;
  iStack_8 = iStack_8 + -1;
  iStack_c = iStack_c + -1;
  iStack_4 = iStack_4 + -1;
  param_2 = 0xffffffff;
  uVar4 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_OPTIONS_SCREEN_0073285c);
  puVar8 = &param_2;
  uVar7 = 0x12;
  piVar6 = &iStack_10;
  uVar5 = FUN_0069fa60(s_large_0071ceac);
  FUN_0069fb40(uVar5,piVar6,uVar7,puVar8,uVar4);
  return;
}

