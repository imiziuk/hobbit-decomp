
void __thiscall
FUN_005150a0(int *param_1,undefined1 *param_2,undefined1 *param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  bool bVar8;
  bool bVar9;
  int in_stack_00000020;
  undefined1 *puStack_20;
  
  puStack_20 = param_2;
  (**(code **)(*param_1 + 0x1c))();
  param_1[0x6f] = in_stack_00000020;
  puVar7 = param_2;
  if (param_2 == (undefined1 *)0x0) {
    puVar7 = &stack0xffffffe8;
  }
  puVar5 = param_3;
  if (param_3 == (undefined1 *)0x0) {
    puVar5 = &stack0xffffffe8;
  }
  puVar6 = param_4;
  if (param_4 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)&stack0xffffffe8;
  }
  (**(code **)(*(int *)param_1[0x56] + 0x1c))(puVar7);
  (**(code **)(*(int *)param_1[0x57] + 0x1c))(puVar5);
  (**(code **)(*(int *)param_1[0x58] + 0x1c))(puVar6);
  iVar2 = FUN_006480e0(puVar7);
  bVar8 = iVar2 != 0;
  if (bVar8) {
    uVar3 = FUN_006a3230();
    FUN_006a3220(uVar3 & 0xfffffeff | 1);
  }
  else {
    uVar3 = FUN_006a3230();
    FUN_006a3220(uVar3 & 0xfffffffe | 0x100);
  }
  iVar2 = FUN_006480e0(puVar5);
  bVar9 = iVar2 != 0;
  if (bVar9) {
    uVar3 = FUN_006a3230();
    FUN_006a3220(uVar3 & 0xfffffeff | 1);
  }
  else {
    uVar3 = FUN_006a3230();
    FUN_006a3220(uVar3 & 0xfffffffe | 0x100);
  }
  iVar2 = FUN_006480e0(puVar6);
  if (iVar2 != 0) {
    uVar3 = FUN_006a3230();
    FUN_006a3220(uVar3 & 0xfffffeff | 1);
  }
  else {
    uVar3 = FUN_006a3230();
    FUN_006a3220(uVar3 & 0xfffffffe | 0x100);
  }
  if (((bVar9) && (!bVar8)) && (iVar2 == 0)) {
    piVar4 = (int *)(**(code **)(*param_1 + 0x10))();
    iVar2 = *piVar4;
    iVar1 = piVar4[2];
    (**(code **)(*(int *)param_1[0x57] + 0x10))();
    puStack_20 = (undefined1 *)((iVar1 - iVar2) / 2 + -0x46);
    (**(code **)(*(int *)param_1[0x57] + 0xc))(&puStack_20);
    param_1[0x70] = 1;
  }
  FUN_0064b7b0(param_2);
  *(char *)((int)param_1 + 0x1b3) = (char)((uint)param_3 >> 0x18);
  *(char *)((int)param_1 + 0x1b2) = (char)((uint)param_3 >> 0x10);
  *(char *)((int)param_1 + 0x1b1) = (char)((uint)param_3 >> 8);
  *(char *)(param_1 + 0x6c) = (char)param_3;
  param_1[0x6d] = (int)param_4;
  param_1[0x6e] = -0x40800000;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if ((bVar9) && (param_5 != 0)) {
    FUN_006a2bd0(param_1[0x57]);
    param_1[0x70] = 1;
    return;
  }
  if (bVar8) {
    FUN_006a2bd0(param_1[0x56]);
    param_1[0x70] = 0;
    return;
  }
  param_1[0x70] = -1;
  return;
}

