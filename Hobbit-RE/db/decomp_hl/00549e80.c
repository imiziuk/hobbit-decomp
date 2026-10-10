
/* WARNING: Removing unreachable block (ram,0x00549ea3) */

undefined1 * __thiscall FUN_00549e80(undefined1 *param_1,undefined1 *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar1 = *(uint *)(param_2 + 8);
  if (param_1 == param_2) {
    if (uVar1 != 0) {
      FUN_006bfb28();
    }
    FUN_0054ad20();
    iVar3 = *(int *)(param_1 + 8) - uVar1;
    iVar7 = -1;
    if ((iVar3 == -1) || (iVar7 = iVar3, iVar3 != 0)) {
      FUN_006c0fa0(*(int *)(param_1 + 4) + uVar1,*(int *)(param_1 + 4) + uVar1 + iVar7,iVar3 - iVar7
                  );
      iVar3 = *(int *)(param_1 + 8);
      cVar2 = FUN_0054a310(iVar3 - iVar7,0);
      if (cVar2 != '\0') {
        FUN_0054a2f0(iVar3 - iVar7);
      }
    }
    FUN_0054ad20();
    return param_1;
  }
  if (uVar1 != 0) {
    puVar4 = *(undefined1 **)(param_2 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_006f3ce8;
    }
    if ((byte)puVar4[-1] < 0xfe) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      puVar4 = *(undefined1 **)(param_2 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_006f3ce8;
      }
      *(undefined1 **)(param_1 + 4) = puVar4;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
      puVar4[-1] = puVar4[-1] + '\x01';
      return param_1;
    }
  }
  cVar2 = FUN_0054a310(uVar1,1);
  if (cVar2 != '\0') {
    puVar6 = (undefined4 *)&DAT_006f3ce8;
    if (*(undefined4 **)(param_2 + 4) != (undefined4 *)0x0) {
      puVar6 = *(undefined4 **)(param_2 + 4);
    }
    puVar8 = *(undefined4 **)(param_1 + 4);
    for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    FUN_0054a2f0(uVar1);
  }
  return param_1;
}

