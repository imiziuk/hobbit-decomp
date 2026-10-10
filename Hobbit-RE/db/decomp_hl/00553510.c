
void __fastcall FUN_00553510(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  FUN_006bf840(*(undefined4 *)(param_1 + 0xb8));
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_005536c0();
  if (0 < *(int *)(param_1 + 0x4c)) {
    do {
      if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0xa0) + 8 +
                               ((int)uVar3 >> (*(byte *)(param_1 + 0x9a) & 0x1f)) * 0x18) +
                      (*(uint *)(param_1 + 0x94) & uVar3) * 4)) {
        iVar4 = (*(uint *)(param_1 + 0x58) & uVar3) * 0xa04;
        iVar6 = 0;
        iVar1 = *(int *)(*(int *)(param_1 + 100) + 8 +
                        ((int)uVar3 >> (*(byte *)(param_1 + 0x5e) & 0x1f)) * 0x18);
        iVar5 = iVar4 + iVar1;
        if (0 < *(int *)(iVar4 + 0x9dc + iVar1)) {
          do {
            puVar2 = (undefined1 *)FUN_005493e0(*(int *)(iVar5 + 0x9d8) + iVar6 * 4);
            if (puVar2 == (undefined1 *)0x0) {
              puVar2 = &DAT_0075b6e0;
            }
            FUN_005491a0(puVar2);
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(iVar5 + 0x9dc));
        }
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < *(int *)(param_1 + 0x4c));
  }
  FUN_005c9070();
  FUN_005c9070();
  *(undefined4 *)(param_1 + 0xe8) = 0x7fffffff;
  return;
}

