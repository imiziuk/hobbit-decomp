
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0050c0f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  float fVar7;
  undefined1 *puVar8;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined4 auStack_40 [2];
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
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
  
  uStack_35 = 0xff;
  uStack_36 = 200;
  uStack_37 = 200;
  uStack_38 = 200;
  iVar1 = FUN_0052d730();
  if (iVar1 == 0) {
    uVar2 = FUN_006a22a0(0x1e0);
    uVar3 = FUN_006a2260(0x280);
    auStack_40[0] = FUN_006a22a0(0);
    uStack_28 = FUN_006a2260(0);
    uStack_47 = 0x30;
    uStack_24 = auStack_40[0];
    uStack_4c = 0x1e;
    uStack_44 = 0x1e;
    uStack_48 = 0x21;
    uStack_49 = 0xff;
    uStack_4a = 0x32;
    uStack_4b = 0x26;
    uStack_45 = 0xff;
    uStack_46 = 0x50;
    uStack_41 = 0xff;
    uStack_42 = 0x32;
    uStack_43 = 0x26;
    auStack_40[0] = 0xff503021;
    uStack_20 = uVar3;
    uStack_1c = uVar2;
    FUN_0069fd50(&uStack_28,auStack_40,&uStack_44,&uStack_48,&uStack_4c,0);
  }
  else {
    FUN_0052cd20(0);
  }
  FUN_006a2880(param_2,param_3);
  uVar2 = FUN_006a22a0(0x50);
  uVar3 = FUN_006a2260(0x280);
  uVar4 = FUN_006a22a0(0);
  uStack_28 = FUN_006a2260(0);
  uStack_24 = uVar4;
  uStack_20 = uVar3;
  uStack_1c = uVar2;
  uVar2 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_LOAD_GAME_PC_00732ba8);
  puVar8 = &uStack_38;
  uVar4 = 0x12;
  puVar6 = &uStack_28;
  uVar3 = FUN_0069fa60(s_large_0071ceac);
  FUN_0069fb40(uVar3,puVar6,uVar4,puVar8,uVar2);
  if ((*(int *)(param_1 + 0x174) != 0) && (*(int *)(*(int *)(param_1 + 0x174) + 0x10) != 0)) {
    FUN_0066c3a0(7,0x13);
    FUN_0066db80(*(undefined4 *)(param_1 + 0x174),0);
    uVar4 = 0xffffffff;
    uVar2 = FUN_0041b9c0((float)DAT_00762558,(float)_DAT_00762554);
    uVar3 = 0;
    iVar1 = FUN_006a22a0(0x55,0,uVar2,uVar4);
    fVar7 = (float)iVar1;
    iVar1 = FUN_006a2260(DAT_0076255c,fVar7);
    uVar2 = FUN_00401f00((float)iVar1,fVar7,uVar3);
    FUN_0066e5a0(uVar2);
    FUN_0066d9a0();
  }
  FUN_0052f800(*(undefined4 *)(param_1 + 0x16c));
  iVar1 = FUN_006a0380(*(undefined4 *)(*(int *)(param_1 + 0x168) + 8));
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x168) + 0x10))();
  iStack_18 = *piVar5 + *(int *)(param_1 + 0x44) + -10;
  iStack_14 = piVar5[1] + *(int *)(param_1 + 0x48) + -0xb;
  iStack_10 = piVar5[2] + *(int *)(param_1 + 0x44) + 10;
  iStack_c = piVar5[3] + *(int *)(param_1 + 0x48) + 0xb;
  uStack_8 = *(undefined4 *)(iVar1 + 0x2c);
  uStack_4 = 0;
  FUN_006a1330(&iStack_18);
  return;
}

