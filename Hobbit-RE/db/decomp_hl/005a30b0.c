
void __thiscall FUN_005a30b0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(param_2 * 0x34 + *(int *)(param_1 + 0x14));
  puVar2 = (undefined4 *)(param_3 * 0x34 + *(int *)(param_1 + 0x14));
  *puVar2 = *puVar1;
  puVar2[1] = puVar1[1];
  puVar2[2] = puVar1[2];
  puVar2[3] = puVar1[3];
  puVar2[4] = puVar1[4];
  puVar2[5] = puVar1[5];
  puVar2[6] = puVar1[6];
  puVar2[7] = puVar1[7];
  puVar2[8] = puVar1[8];
  puVar2[9] = puVar1[9];
  puVar2[10] = puVar1[10];
  puVar2[0xb] = puVar1[0xb];
  puVar2[0xc] = puVar1[0xc];
  return;
}

