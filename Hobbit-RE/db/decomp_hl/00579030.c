
void __thiscall FUN_00579030(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(param_1 + 4);
  iVar3 = 3;
  puVar2 = param_2;
  do {
    puVar1[-1] = *puVar2;
    *puVar1 = *(undefined4 *)(((int)param_2 - param_1) + (int)puVar1);
    puVar1[1] = puVar2[2];
    puVar2 = puVar2 + 3;
    puVar1 = puVar1 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(param_1 + 0x24) = param_2[9];
  *(undefined4 *)(param_1 + 0x28) = param_2[10];
  *(undefined4 *)(param_1 + 0x30) = param_2[0xc];
  *(undefined4 *)(param_1 + 0x34) = param_2[0xd];
  return;
}

