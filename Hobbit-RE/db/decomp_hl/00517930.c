
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00517930(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  *(undefined4 *)(param_1 + 0x174) = 1;
  FUN_006a2400(param_2,param_3,param_4,param_5,param_6,param_7,0);
  iVar1 = FUN_0052d730();
  *(uint *)(param_1 + 0x178) = (uint)(iVar1 == 0);
  *(undefined4 *)(param_1 + 0x15c) = 0;
  uVar2 = FUN_006a3320(5);
  *(undefined4 *)(param_1 + 0x158) = uVar2;
  *(undefined4 *)(param_1 + 0x160) = 0;
  uVar2 = FUN_006a3320(2);
  *(undefined4 *)(param_1 + 0x164) = uVar2;
  uVar2 = FUN_006a3320(3);
  *(undefined4 *)(param_1 + 0x168) = uVar2;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  uVar2 = FUN_006a3320(4);
  *(undefined4 *)(param_1 + 0x16c) = uVar2;
  uVar2 = FUN_006a3320(0);
  *(undefined4 *)(param_1 + 0x170) = uVar2;
  if (*(int *)(param_1 + 0x178) == 0) {
    uVar3 = FUN_006a3230();
    FUN_006a3220(uVar3 & 0xfffffffe);
  }
  else {
    iVar1 = FUN_006a22a0(300);
    iVar4 = FUN_006a2260(0);
    uVar2 = FUN_006a22a0(300);
    local_10 = FUN_006a2260(0);
    local_c = uVar2;
    local_8 = iVar4 + 0x26c;
    local_4 = iVar1 + 0x1e;
    (**(code **)(**(int **)(param_1 + 0x158) + 0xc))(&local_10);
  }
  if (*(int **)(param_1 + 0x160) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x160) + 0x30))(0x11);
  }
  (**(code **)(**(int **)(param_1 + 0x164) + 0x30))(0x11);
  (**(code **)(**(int **)(param_1 + 0x168) + 0x30))(0x11);
  if (*(int **)(param_1 + 0x16c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x16c) + 0x30))(0x11);
  }
  if (*(int *)(param_1 + 0x160) != 0) {
    FUN_006a58d0(DAT_00762b04);
  }
  FUN_006a58d0(DAT_00762b08);
  FUN_006a58d0(DAT_00762b0c);
  if (*(int *)(param_1 + 0x16c) != 0) {
    FUN_006a58d0(DAT_00762b00);
  }
  _DAT_00763ed4 = 1;
  FUN_006a2bd0(*(undefined4 *)(param_1 + 0x164));
  return param_5;
}

