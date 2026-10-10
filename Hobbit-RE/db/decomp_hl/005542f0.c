
void __thiscall FUN_005542f0(int param_1,uint param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if ((*(int *)(param_1 + 0x30) != 0) &&
     (uVar5 = *(uint *)(param_1 + 0x94) & param_2,
     iVar1 = *(int *)(*(int *)(param_1 + 0xa0) + 8 +
                     ((int)param_2 >> (*(byte *)(param_1 + 0x9a) & 0x1f)) * 0x18),
     *(int *)(iVar1 + uVar5 * 4) = *(int *)(iVar1 + uVar5 * 4) + -1,
     *(int *)(*(int *)(*(int *)(param_1 + 0xa0) + 8 +
                      ((int)param_2 >> (*(byte *)(param_1 + 0x9a) & 0x1f)) * 0x18) +
             (*(uint *)(param_1 + 0x94) & param_2) * 4) == 0)) {
    iVar1 = *(int *)(*(int *)(param_1 + 100) + 8 +
                    ((int)param_2 >> (*(byte *)(param_1 + 0x5e) & 0x1f)) * 0x18);
    iVar3 = (*(uint *)(param_1 + 0x58) & param_2) * 0xa04;
    iVar4 = iVar3 + iVar1;
    iVar6 = 0;
    if (0 < *(int *)(iVar3 + 0x9dc + iVar1)) {
      do {
        puVar2 = (undefined1 *)FUN_005493e0(*(int *)(iVar4 + 0x9d8) + iVar6 * 4);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = &DAT_0075b6e0;
        }
        FUN_005491a0(puVar2);
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(iVar4 + 0x9dc));
    }
  }
  return;
}

