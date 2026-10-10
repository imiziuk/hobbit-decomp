
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00516b10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_8;
  
  *(undefined4 *)(param_1 + 0x19c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  iStack_24 = 0x516b3b;
  iVar1 = FUN_0052d730();
  iStack_24 = 0;
  *(uint *)(param_1 + 0x1a8) = (uint)(iVar1 == 0);
  uStack_28 = param_7;
  uStack_2c = param_6;
  param_6 = FUN_006a2400(param_2,param_3,param_4,param_5);
  iStack_24 = 1;
  uStack_28 = 0x516b7d;
  uVar2 = FUN_006a3320();
  iStack_24 = 2;
  *(undefined4 *)(param_1 + 0x158) = uVar2;
  uStack_28 = 0x516b8c;
  uVar2 = FUN_006a3320();
  iStack_24 = 3;
  *(undefined4 *)(param_1 + 0x15c) = uVar2;
  uStack_28 = 0x516b9b;
  uVar2 = FUN_006a3320();
  iStack_24 = 4;
  *(undefined4 *)(param_1 + 0x160) = uVar2;
  uStack_28 = 0x516baa;
  uVar2 = FUN_006a3320();
  iStack_24 = 5;
  *(undefined4 *)(param_1 + 0x184) = uVar2;
  uStack_28 = 0x516bb9;
  uVar2 = FUN_006a3320();
  iStack_24 = 6;
  *(undefined4 *)(param_1 + 0x188) = uVar2;
  uStack_28 = 0x516bc8;
  uVar2 = FUN_006a3320();
  iStack_24 = 0;
  *(undefined4 *)(param_1 + 0x18c) = uVar2;
  uStack_28 = 0x516bd6;
  uVar2 = FUN_006a3320();
  *(undefined4 *)(param_1 + 0x194) = uVar2;
  iStack_24 = 0x11;
  uStack_28 = 0x516be9;
  (**(code **)(**(int **)(param_1 + 0x184) + 0x30))();
  uStack_28 = 0x11;
  uStack_2c = 0x516bf6;
  (**(code **)(**(int **)(param_1 + 0x188) + 0x30))();
  uStack_2c = 0x11;
  (**(code **)(**(int **)(param_1 + 0x18c) + 0x30))();
  param_4 = 0xffffffff;
  (**(code **)(**(int **)(param_1 + 0x184) + 0x24))(&param_4);
  param_3 = 0xff969696;
  (**(code **)(**(int **)(param_1 + 0x188) + 0x24))(&param_3);
  param_2 = 0xff969696;
  (**(code **)(**(int **)(param_1 + 0x18c) + 0x24))(&param_2);
  piVar3 = (int *)FUN_006a3320(10);
  *(int **)(param_1 + 400) = piVar3;
  (**(code **)(*piVar3 + 0x30))(0x11);
  FUN_006a58d0(DAT_00762afc);
  uVar2 = __ftol();
  FUN_006a5e90(uVar2);
  uVar2 = __ftol();
  FUN_006a5e90(uVar2);
  uVar2 = __ftol();
  FUN_006a5e90(uVar2);
  uVar2 = FUN_004c8970();
  *(undefined4 *)(param_1 + 0x1ac) = uVar2;
  uVar2 = FUN_004c8970();
  *(undefined4 *)(param_1 + 0x1b0) = uVar2;
  uVar2 = FUN_004c8970();
  *(undefined4 *)(param_1 + 0x1b4) = uVar2;
  uVar2 = FUN_006a5900();
  *(undefined4 *)(param_1 + 0x1b8) = uVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x158) + 300) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x15c) + 300) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x160) + 300) = 1;
  uVar2 = FUN_006a3320(0xb);
  *(undefined4 *)(param_1 + 0x17c) = uVar2;
  if (*(int *)(param_1 + 0x1a8) == 0) {
    uVar4 = FUN_006a3230();
    FUN_006a3220(uVar4 & 0xfffffffe);
  }
  else {
    FUN_006a22a0(300);
    iVar1 = FUN_006a2260(0);
    uVar2 = FUN_006a22a0(300);
    uStack_2c = FUN_006a2260(0);
    uStack_28 = uVar2;
    iStack_24 = iVar1 + 0x26c;
    (**(code **)(**(int **)(param_1 + 0x17c) + 0xc))(&uStack_2c);
  }
  _DAT_00763ed4 = 1;
  uVar2 = FUN_006a32d0();
  FUN_006a2b00(uVar2);
  return uStack_8;
}

