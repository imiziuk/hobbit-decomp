
void __thiscall FUN_0040c680(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_0041a060(param_2);
  FUN_0063d930(*(uint *)(param_1 + 0x1630) & 1);
  FUN_0063d930(*(uint *)(param_1 + 0x1630) >> 1 & 1);
  FUN_0063d930(*(uint *)(param_1 + 0x1630) >> 2 & 1);
  FUN_0063d930(*(uint *)(param_1 + 0x1630) >> 4 & 1);
  FUN_0063d930(*(uint *)(param_1 + 0x1630) >> 5 & 1);
  FUN_0063d930(*(uint *)(param_1 + 0x1630) >> 6 & 1);
  FUN_0063d930(*(uint *)(param_1 + 0x1630) >> 7 & 1);
  FUN_0063d930(*(uint *)(param_1 + 0x1630) >> 8 & 1);
  FUN_0063d930(*(uint *)(param_1 + 0x1630) >> 9 & 1);
  FUN_0063d930(*(uint *)(param_1 + 0x1630) >> 10 & 1);
  FUN_0063d930(*(uint *)(param_1 + 0x1630) >> 0xc & 1);
  FUN_0063d930(*(byte *)(param_1 + 0x1632) & 1);
  FUN_0063d930(*(uint *)(param_1 + 0x1630) >> 0xd & 1);
  FUN_0063d930(*(uint *)(param_1 + 0x1630) >> 0xe & 1);
  FUN_0063d930(*(uint *)(param_1 + 0x1630) >> 0xf & 1);
  FUN_0063d930(*(uint *)(param_1 + 0x1630) >> 0x11 & 1);
  FUN_0063d930(*(uint *)(param_1 + 0x1630) >> 0x14 & 1);
  FUN_0063d930(*(uint *)(param_1 + 0x1630) >> 0x15 & 1);
  puVar1 = (undefined4 *)(param_1 + 0x1634);
  iVar2 = 2;
  do {
    FUN_0063d930(*puVar1);
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)(param_1 + 0x164c);
  iVar2 = 4;
  do {
    FUN_0063d930(puVar1[-4]);
    FUN_0063d930(*puVar1);
    FUN_0063d930(puVar1[4]);
    FUN_0063d930(puVar1[8]);
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_0063cb80(*(undefined2 *)(param_1 + 0x15a8),3);
  FUN_0063cb80(*(undefined2 *)(param_1 + 0x15c8),2);
  FUN_00410650(param_2);
  FUN_00410650(param_2);
  FUN_0040b470(param_2);
  return;
}

