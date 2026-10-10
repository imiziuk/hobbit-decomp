
void __thiscall thunk_FUN_005091c0(int param_1,undefined4 param_2,undefined4 param_3)

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
  
  uStack_c = *(undefined4 *)(param_1 + 0x184);
  uStack_8 = *(undefined4 *)(param_1 + 0x188);
  uStack_12 = 200;
  uStack_13 = 200;
  uStack_14 = 200;
  uStack_10 = *(undefined4 *)(param_1 + 0x180);
  uStack_4 = *(undefined4 *)(param_1 + 0x18c);
  uStack_11 = 0xff;
  FUN_006a0430(*(undefined4 *)(param_1 + 8),&uStack_10,0);
  FUN_006a2880(param_2,param_3);
  uVar1 = FUN_006a22a0(0x50);
  uVar2 = FUN_006a2260(0x280);
  uVar3 = FUN_006a22a0(0);
  uStack_10 = FUN_006a2260(0);
  uStack_c = uVar3;
  uStack_8 = uVar2;
  uStack_4 = uVar1;
  uVar1 = FUN_006ab1a0(&DAT_0071ceb4,*(undefined4 *)(param_1 + 0x1f64));
  puVar5 = &uStack_14;
  uVar3 = 0x12;
  puVar4 = &uStack_10;
  uVar2 = FUN_0069fa60(s_large_0071ceac);
  FUN_0069fb40(uVar2,puVar4,uVar3,puVar5,uVar1);
  return;
}

