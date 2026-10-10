
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005239d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  float fVar7;
  undefined1 *puVar8;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_3d = 0xff;
  uStack_3e = 200;
  uStack_3f = 200;
  uStack_40 = 200;
  FUN_0052cd20(0);
  FUN_006a2880(param_2,param_3);
  uVar1 = FUN_006a22a0(0x50);
  uVar2 = FUN_006a2260(0x280);
  uVar3 = FUN_006a22a0(0);
  uStack_28 = FUN_006a2260(0);
  uStack_24 = uVar3;
  uStack_20 = uVar2;
  uStack_1c = uVar1;
  uVar1 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_SAVE_GAME_PC_00735470);
  puVar8 = &uStack_40;
  uVar3 = 0x12;
  puVar6 = &uStack_28;
  uVar2 = FUN_0069fa60(s_large_0071ceac);
  FUN_0069fb40(uVar2,puVar6,uVar3,puVar8,uVar1);
  if ((*(int *)(param_1 + 0x178) != 0) && (*(int *)(*(int *)(param_1 + 0x178) + 0x10) != 0)) {
    FUN_0066c3a0(7,0x13);
    FUN_0066db80(*(undefined4 *)(param_1 + 0x178),0);
    uVar3 = 0xffffffff;
    uVar1 = FUN_0041b9c0((float)DAT_007626c4,(float)_DAT_007626c0);
    uVar2 = 0;
    iVar4 = FUN_006a22a0(0x55,0,uVar1,uVar3);
    fVar7 = (float)iVar4;
    iVar4 = FUN_006a2260(DAT_007626c8,fVar7);
    uVar1 = FUN_00401f00((float)iVar4,fVar7,uVar2);
    FUN_0066e5a0(uVar1);
    FUN_0066d9a0();
  }
  if (0 < *(int *)(param_1 + 0x170)) {
    FUN_0052f800(*(int *)(param_1 + 0x170) + -1);
  }
  iVar4 = FUN_006a0380(*(undefined4 *)(*(int *)(param_1 + 0x16c) + 8));
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x16c) + 0x10))();
  iStack_18 = *piVar5 + *(int *)(param_1 + 0x44) + -10;
  iStack_c = piVar5[3] + *(int *)(param_1 + 0x48) + 0xb;
  iStack_10 = piVar5[2] + *(int *)(param_1 + 0x44) + 10;
  iStack_14 = piVar5[1] + *(int *)(param_1 + 0x48) + -0xb;
  uStack_8 = *(undefined4 *)(iVar4 + 0x2c);
  uStack_4 = 0;
  FUN_006a1330(&iStack_18);
  return;
}

