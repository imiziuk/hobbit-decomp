
void __fastcall FUN_00482380(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  FUN_004e3f20();
  *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x100);
  iVar4 = 2;
  puVar2 = (undefined4 *)(param_1 + 0x1c0);
  puVar3 = (undefined4 *)(param_1 + 0x240);
  do {
    puVar2[-3] = 0;
    puVar2[-2] = 0;
    *puVar2 = puVar3[2];
    puVar2[-1] = 0;
    uVar1 = puVar3[2];
    iVar4 = iVar4 + -1;
    puVar2[1] = *puVar3;
    puVar2[2] = uVar1;
    uVar1 = *puVar3;
    puVar2[4] = 0;
    puVar2[3] = uVar1;
    puVar2 = puVar2 + 8;
    puVar3 = puVar3 + 1;
  } while (iVar4 != 0);
  return;
}

