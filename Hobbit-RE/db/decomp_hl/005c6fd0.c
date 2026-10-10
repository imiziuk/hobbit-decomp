
void __fastcall FUN_005c6fd0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    if (*(int *)(param_1 + 0x58) < 0) goto LAB_005c703c;
    do {
      iVar2 = *(int *)(param_1 + 0x6c);
      if (((iVar2 != 0) &&
          (iVar1 = (int)uVar3 >> (*(byte *)(param_1 + 0x66) & 0x1f), uVar4 = __allshl(),
          (*(uint *)(iVar2 + iVar1 * 0x18) & (uint)uVar4) == 0 &&
          (*(uint *)(iVar2 + 4 + iVar1 * 0x18) & (uint)((ulonglong)uVar4 >> 0x20)) == 0)) &&
         (*(short *)(*(int *)(iVar2 + 8 + ((int)uVar3 >> (*(byte *)(param_1 + 0x66) & 0x1f)) * 0x18)
                     + 0x24 + (*(uint *)(param_1 + 0x60) & uVar3) * 0x28) != 0)) {
        FUN_005c6de0(uVar3);
      }
LAB_005c703c:
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < *(int *)(param_1 + 0x58));
  }
  iVar2 = 0;
  do {
    *(undefined2 *)(iVar2 + *(int *)(param_1 + 0x84)) = 0xffff;
    iVar2 = iVar2 + 2;
  } while (iVar2 < 0x100);
  return;
}

