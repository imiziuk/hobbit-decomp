
void __thiscall FUN_00557d60(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
    *(float *)(param_1 + 0x58) = -*(float *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x14);
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe;
  }
  puVar2 = (undefined4 *)(param_1 + 0x38);
  if ((param_2 != puVar2) && (puVar2 != (undefined4 *)(param_1 + 0x78))) {
    puVar1 = param_2 + 2;
    iVar3 = (int)puVar2 - (int)param_2;
    do {
      puVar1[-2] = *puVar2;
      puVar1[-1] = puVar2[1];
      *puVar1 = *(undefined4 *)(iVar3 + (int)puVar1);
      puVar1[1] = puVar2[3];
      puVar2 = puVar2 + 4;
      puVar1 = puVar1 + 4;
    } while (puVar2 != (undefined4 *)(param_1 + 0x78));
  }
  return;
}

