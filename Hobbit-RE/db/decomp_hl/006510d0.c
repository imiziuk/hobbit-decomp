
void __fastcall FUN_006510d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_400 [256];
  
  if (((*(byte *)(param_1 + 0x1b) & 1) != 0) &&
     (*(int *)(&DAT_006f6cf0 + *(char *)(param_1 + 0x1d) * 0x7c) == 8)) {
    iVar1 = 0;
    puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + 0x20);
    iVar3 = 0x10;
    do {
      if (iVar3 + -0x10 < iVar3 + -8) {
        puVar6 = puVar5 + -8;
        puVar7 = local_400 + iVar1;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        iVar1 = iVar1 + 8;
      }
      if (iVar3 < iVar3 + 8) {
        iVar4 = (iVar3 + 8) - iVar3;
        puVar6 = puVar5 + 8;
        puVar7 = local_400 + iVar1;
        for (iVar2 = iVar4; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        iVar1 = iVar1 + iVar4;
      }
      if (iVar3 + -8 < iVar3) {
        puVar6 = puVar5;
        puVar7 = local_400 + iVar1;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        iVar1 = iVar1 + 8;
      }
      if (iVar3 + 8 < iVar3 + 0x10) {
        iVar4 = (iVar3 + 0x10) - (iVar3 + 8);
        puVar6 = puVar5 + 0x10;
        puVar7 = local_400 + iVar1;
        for (iVar2 = iVar4; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        iVar1 = iVar1 + iVar4;
      }
      iVar2 = iVar3 + 0x10;
      puVar5 = puVar5 + 0x20;
      iVar3 = iVar3 + 0x20;
    } while (iVar2 < 0x100);
    puVar5 = local_400;
    puVar6 = *(undefined4 **)(param_1 + 4);
    for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xfe;
  }
  return;
}

