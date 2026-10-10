
void __thiscall FUN_0040c8b0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iStack_10;
  
  uVar1 = param_2;
  FUN_0041a080(param_2);
  uVar2 = FUN_0063d990();
  *(uint *)(param_1 + 0x1630) =
       (*(uint *)(param_1 + 0x1630) ^ uVar2) & 1 ^ *(uint *)(param_1 + 0x1630);
  iVar3 = FUN_0063d990();
  *(uint *)(param_1 + 0x1630) =
       (iVar3 * 2 ^ *(uint *)(param_1 + 0x1630)) & 2 ^ *(uint *)(param_1 + 0x1630);
  iVar3 = FUN_0063d990();
  uVar2 = (iVar3 << 2 ^ *(uint *)(param_1 + 0x1630)) & 4 ^ *(uint *)(param_1 + 0x1630);
  *(uint *)(param_1 + 0x1630) = (uVar2 * 2 ^ uVar2) & 8 ^ uVar2;
  iVar3 = FUN_0063d990();
  *(uint *)(param_1 + 0x1630) =
       (iVar3 << 4 ^ *(uint *)(param_1 + 0x1630)) & 0x10 ^ *(uint *)(param_1 + 0x1630);
  iVar3 = FUN_0063d990();
  iVar4 = FUN_0063d990();
  iVar5 = FUN_0063d990();
  iVar6 = FUN_0063d990();
  iVar7 = FUN_0063d990();
  *(uint *)(param_1 + 0x1630) =
       (iVar7 << 9 ^ *(uint *)(param_1 + 0x1630)) & 0x200 ^ *(uint *)(param_1 + 0x1630);
  iVar7 = FUN_0063d990();
  uVar2 = (iVar7 << 10 ^ *(uint *)(param_1 + 0x1630)) & 0x400 ^ *(uint *)(param_1 + 0x1630);
  *(uint *)(param_1 + 0x1630) = (uVar2 * 2 ^ uVar2) & 0x800 ^ uVar2;
  iVar7 = FUN_0063d990();
  *(uint *)(param_1 + 0x1630) =
       (iVar7 << 0xc ^ *(uint *)(param_1 + 0x1630)) & 0x1000 ^ *(uint *)(param_1 + 0x1630);
  iVar7 = FUN_0063d990();
  *(uint *)(param_1 + 0x1630) =
       (iVar7 << 0x10 ^ *(uint *)(param_1 + 0x1630)) & 0x10000 ^ *(uint *)(param_1 + 0x1630);
  iVar7 = FUN_0063d990();
  *(uint *)(param_1 + 0x1630) =
       (iVar7 << 0xd ^ *(uint *)(param_1 + 0x1630)) & 0x2000 ^ *(uint *)(param_1 + 0x1630);
  iVar7 = FUN_0063d990();
  *(uint *)(param_1 + 0x1630) =
       (iVar7 << 0xe ^ *(uint *)(param_1 + 0x1630)) & 0x4000 ^ *(uint *)(param_1 + 0x1630);
  iVar7 = FUN_0063d990();
  *(uint *)(param_1 + 0x1630) =
       (iVar7 << 0xf ^ *(uint *)(param_1 + 0x1630)) & 0x8000 ^ *(uint *)(param_1 + 0x1630);
  iVar7 = FUN_0063d990();
  *(uint *)(param_1 + 0x1630) =
       (iVar7 << 0x11 ^ *(uint *)(param_1 + 0x1630)) & 0x20000 ^ *(uint *)(param_1 + 0x1630);
  iVar7 = FUN_0063d990();
  *(uint *)(param_1 + 0x1630) =
       (iVar7 << 0x14 ^ *(uint *)(param_1 + 0x1630)) & 0x100000 ^ *(uint *)(param_1 + 0x1630);
  iVar7 = FUN_0063d990();
  *(uint *)(param_1 + 0x1630) =
       (iVar7 << 0x15 ^ *(uint *)(param_1 + 0x1630)) & 0x200000 ^ *(uint *)(param_1 + 0x1630);
  puVar9 = (undefined4 *)(param_1 + 0x1634);
  iStack_10 = 2;
  do {
    uVar8 = FUN_0063d990();
    *puVar9 = uVar8;
    puVar9 = puVar9 + 1;
    iStack_10 = iStack_10 + -1;
  } while (iStack_10 != 0);
  puVar9 = (undefined4 *)(param_1 + 0x164c);
  iStack_10 = 4;
  do {
    uVar8 = FUN_0063d990();
    puVar9[-4] = uVar8;
    uVar8 = FUN_0063d990();
    *puVar9 = uVar8;
    uVar8 = FUN_0063d990();
    puVar9[4] = uVar8;
    uVar8 = FUN_0063d990();
    puVar9[8] = uVar8;
    puVar9 = puVar9 + 1;
    iStack_10 = iStack_10 + -1;
  } while (iStack_10 != 0);
  param_2 = 0;
  FUN_0063cd80(&param_2,3);
  *(int *)(param_1 + 0x15a8) = (int)(short)param_2;
  FUN_0063cd80(&param_2,2);
  *(int *)(param_1 + 0x15c8) = (int)(short)param_2;
  FUN_00410690(uVar1);
  FUN_00410690(uVar1);
  FUN_0040b4d0(uVar1);
  uVar2 = ((uint)(iVar3 == 0) << 5 ^ *(uint *)(param_1 + 0x1630)) & 0x20 ^
          *(uint *)(param_1 + 0x1630);
  uVar2 = ((uint)(iVar4 == 0) << 6 ^ uVar2) & 0x40 ^ uVar2;
  uVar2 = ((uint)(iVar5 == 0) << 7 ^ uVar2) & 0x80 ^ uVar2;
  *(uint *)(param_1 + 0x1630) = ((uint)(iVar6 == 0) << 8 ^ uVar2) & 0x100 ^ uVar2;
  FUN_0040ce00(iVar3);
  FUN_0040cfa0(iVar4);
  FUN_0040d0e0(iVar5);
  FUN_0040d400(iVar6);
  return;
}

