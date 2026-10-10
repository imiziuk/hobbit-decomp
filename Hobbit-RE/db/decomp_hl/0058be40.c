
void __fastcall thunk_FUN_0058be50(int param_1)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = (undefined4 *)(param_1 + 0x1b808);
  for (iVar4 = 0x400; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined2 *)(param_1 + 0xc);
  iVar4 = 0x100;
  do {
    *(undefined4 *)(puVar2 + -6) = 0;
    puVar2[4] = 0xffff;
    *puVar2 = 0xffff;
    puVar2 = puVar2 + 0x10;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(int *)(param_1 + 0x1b800) = param_1;
  *(int *)(param_1 + 0x1b804) = param_1;
  puVar3 = (undefined4 *)(param_1 + 0x28);
  iVar4 = 0xff;
  do {
    puVar3[-1] = 0;
    *puVar3 = *(undefined4 *)(param_1 + 0x1b804);
    puVar1 = puVar3 + -2;
    puVar3 = puVar3 + 8;
    iVar4 = iVar4 + -1;
    *(undefined4 **)(param_1 + 0x1b804) = puVar1;
  } while (iVar4 != 0);
  *(undefined4 *)(param_1 + 0x1c808) = 0xffffffff;
  iVar4 = 0;
  puVar2 = (undefined2 *)(param_1 + 0x2020);
  do {
    puVar2[1] = 0;
    *puVar2 = *(undefined2 *)(param_1 + 0x1c808);
    *(int *)(param_1 + 0x1c808) = iVar4;
    iVar4 = iVar4 + 1;
    puVar2 = puVar2 + 0xcc;
  } while (iVar4 < 0x100);
  FUN_0058bef0();
  return;
}

