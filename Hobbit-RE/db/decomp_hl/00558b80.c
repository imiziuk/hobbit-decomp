
uint __fastcall FUN_00558b80(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = FUN_0052a620();
  uVar1 = *(uint *)(DAT_00771ec0 + 4 + *(int *)(param_1 + 0x104) * 0x24);
  uVar4 = FUN_00558c20();
  uVar2 = *(uint *)(param_1 + 0x118);
  uVar5 = FUN_00558ca0();
  uVar6 = FUN_00558c80();
  uVar7 = FUN_00554750();
  return ((((((*(int *)(param_1 + 0x110) << 1 | uVar7) << 1 | uVar6) << 1 | uVar5) << 1 |
           uVar2 >> 1 & 1) << 1 | uVar4) << 1 | uVar1) << 1 | uVar3;
}

