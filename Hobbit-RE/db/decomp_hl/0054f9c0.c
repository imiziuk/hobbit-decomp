
void __thiscall FUN_0054f9c0(int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x10))) &&
     (*(int *)(param_1 + 0x24) != 0)) {
    puVar1 = (uint *)(*(int *)(param_1 + 0x24) +
                     ((int)param_2 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18);
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar3 = __allshl();
    if (((uint)uVar3 & *puVar1) == 0 && ((uint)((ulonglong)uVar3 >> 0x20) & puVar1[1]) == 0) {
      *(undefined1 *)((uVar2 & param_2) * 0x2fc + 0x2f8 + puVar1[2]) = 1;
    }
  }
  return;
}

