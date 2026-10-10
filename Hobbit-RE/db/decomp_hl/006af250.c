
void __thiscall FUN_006af250(undefined1 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  iVar3 = param_2 - (int)param_1;
  iVar2 = 0x21;
  puVar4 = param_1;
  do {
    *puVar4 = puVar4[iVar3];
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar4 = param_1 + 0x21;
  do {
    *puVar4 = puVar4[iVar3];
    puVar4 = puVar4 + 1;
  } while (puVar4 + (-0x21 - (int)param_1) < (undefined1 *)0x21);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  puVar4 = param_1 + 0x8c;
  do {
    *puVar4 = puVar4[iVar3];
    puVar4 = puVar4 + 1;
  } while (puVar4 + (-0x8c - (int)param_1) < (undefined1 *)0xa5);
  puVar1 = (undefined4 *)(param_1 + 0x134);
  iVar2 = 5;
  do {
    *puVar1 = *(undefined4 *)((int)puVar1 + iVar3);
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)(param_1 + 0x148);
  iVar2 = 8;
  do {
    *puVar1 = *(undefined4 *)((int)puVar1 + iVar3);
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)(param_1 + 0x168);
  iVar2 = 8;
  do {
    *puVar1 = *(undefined4 *)((int)puVar1 + iVar3);
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar4 = (undefined1 *)(param_2 + 0x189);
  param_1 = param_1 + 0x18b;
  iVar2 = 4;
  do {
    *param_1 = param_1[iVar3];
    param_1[-1] = puVar4[1];
    param_1[-2] = *puVar4;
    param_1[-3] = puVar4[-1];
    puVar4 = puVar4 + 4;
    param_1 = param_1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

