
int __thiscall FUN_005c90f0(int param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  
  puVar2 = *(uint **)(param_1 + 0x28);
  if (puVar2 == (uint *)0x0) {
    FUN_005c9290((int)*(short *)(param_1 + 0x1c) + *(int *)(param_1 + 0x10));
    puVar2 = *(uint **)(param_1 + 0x28);
    if (puVar2 == (uint *)0x0) {
      return 0;
    }
  }
  uVar1 = puVar2[1];
  if (*puVar2 == 0) {
    *param_3 = 0x20;
  }
  else {
    uVar1 = *puVar2;
    *param_3 = 0;
  }
  uVar1 = uVar1 & -uVar1;
  if ((uVar1 & 0xffff0000) != 0) {
    *param_3 = *param_3 + 0x10;
  }
  if ((uVar1 & 0xff00ff00) != 0) {
    *param_3 = *param_3 + 8;
  }
  if ((uVar1 & 0xf0f0f0f0) != 0) {
    *param_3 = *param_3 + 4;
  }
  if ((uVar1 & 0xcccccccc) != 0) {
    *param_3 = *param_3 + 2;
  }
  if ((uVar1 & 0xaaaaaaaa) != 0) {
    *param_3 = *param_3 + 1;
  }
  uVar3 = __allshl();
  *puVar2 = *puVar2 & ~(uint)uVar3;
  uVar1 = puVar2[1] & ~(uint)((ulonglong)uVar3 >> 0x20);
  puVar2[1] = uVar1;
  if (*puVar2 == 0 && uVar1 == 0) {
    if (*(uint **)(param_1 + 0x28) == puVar2) {
      *(uint *)(param_1 + 0x28) = puVar2[3];
    }
    if (*(uint **)(param_1 + 0x2c) == puVar2) {
      *(uint *)(param_1 + 0x2c) = puVar2[4];
    }
    if (puVar2[3] != 0) {
      *(uint *)(puVar2[3] + 0x10) = puVar2[4];
    }
    if (puVar2[4] != 0) {
      *(uint *)(puVar2[4] + 0xc) = puVar2[3];
    }
    puVar2[3] = 0;
    puVar2[4] = 0;
  }
  *param_2 = ((int)puVar2 - *(int *)(param_1 + 0x24)) / 0x18;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return *(int *)(param_1 + 8) * *param_3 + puVar2[2];
}

