
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006beb70(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int iStack_78;
  int iStack_74;
  
  iVar2 = *(int *)(param_1 + 4);
  iStack_74 = 0;
  iStack_78 = 0;
  if (*(int *)(iVar2 + 0x9c) != -1 && -1 < *(int *)(iVar2 + 0x9c) + 1) {
    iVar8 = *(int *)(iVar2 + 0x98) + 1;
    do {
      uVar3 = __ftol();
      uVar4 = __ftol();
      uVar5 = __ftol();
      uVar6 = __ftol();
      iVar7 = 0;
      if (0 < iVar8) {
        do {
          iVar8 = *(int *)(param_1 + 0xd0);
          *(undefined1 *)(iVar8 + 3 + iStack_74 * 4) = uVar6;
          puVar1 = (undefined1 *)(iVar8 + iStack_74 * 4);
          iStack_74 = iStack_74 + 1;
          iVar7 = iVar7 + 1;
          puVar1[2] = uVar3;
          puVar1[1] = uVar4;
          *puVar1 = uVar5;
          iVar8 = *(int *)(iVar2 + 0x98) + 1;
        } while (iVar7 < iVar8);
      }
      iStack_78 = iStack_78 + 1;
    } while (iStack_78 < *(int *)(iVar2 + 0x9c) + 1);
  }
  return;
}

