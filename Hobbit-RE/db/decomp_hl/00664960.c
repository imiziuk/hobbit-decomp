
/* WARNING: Removing unreachable block (ram,0x00664ac4) */
/* WARNING: Removing unreachable block (ram,0x00664ad9) */
/* WARNING: Removing unreachable block (ram,0x00664ae0) */
/* WARNING: Removing unreachable block (ram,0x00664aef) */
/* WARNING: Removing unreachable block (ram,0x00664af8) */

void __thiscall FUN_00664960(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar7 = *(undefined4 **)(param_1 + 0x358);
  if (*(int *)(param_1 + 0x35c) - (int)puVar7 >> 2 != 0) {
    FUN_006692d0(puVar7,puVar7,puVar7 + 1);
    FUN_00669300(*(int *)(param_1 + 0x358),1 - (*(int *)(param_1 + 0x358) - (int)puVar7 >> 2),
                 &param_2);
    puVar6 = *(undefined4 **)(param_1 + 0x358);
    if (puVar7 != puVar6) {
      do {
        *puVar7 = param_2;
        puVar7 = puVar7 + 1;
      } while (puVar7 != puVar6);
      *(int *)(param_1 + 0x358) = *(int *)(param_1 + 0x358) + 4;
      return;
    }
    *(int *)(param_1 + 0x358) = *(int *)(param_1 + 0x358) + 4;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x354);
  if ((iVar1 == 0) || (uVar4 = (int)puVar7 - iVar1 >> 2, uVar4 < 2)) {
    uVar4 = 1;
  }
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)puVar7 - iVar1 >> 2;
  }
  iVar1 = iVar1 + uVar4;
  iVar2 = iVar1;
  if (iVar1 < 0) {
    iVar2 = 0;
  }
  pvVar3 = operator_new(iVar2 * 4);
  pvVar5 = pvVar3;
  for (puVar6 = *(undefined4 **)(param_1 + 0x354); puVar6 != puVar7; puVar6 = puVar6 + 1) {
    FUN_00669b80(pvVar5,puVar6);
    pvVar5 = (void *)((int)pvVar5 + 4);
  }
  FUN_00669300(pvVar5,1,&param_2);
  FUN_006692d0(puVar7,*(undefined4 *)(param_1 + 0x358),(int)pvVar5 + 4);
  FUN_005b8840(*(undefined4 *)(param_1 + 0x354),*(undefined4 *)(param_1 + 0x358));
  FUN_006bf840(*(undefined4 *)(param_1 + 0x354));
  iVar2 = *(int *)(param_1 + 0x354);
  *(void **)(param_1 + 0x35c) = (void *)((int)pvVar3 + iVar1 * 4);
  if (iVar2 == 0) {
    *(void **)(param_1 + 0x354) = pvVar3;
    *(int *)(param_1 + 0x358) = (int)pvVar3 + 4;
    return;
  }
  *(void **)(param_1 + 0x354) = pvVar3;
  *(int *)(param_1 + 0x358) = (int)pvVar3 + (*(int *)(param_1 + 0x358) - iVar2 >> 2) * 4 + 4;
  return;
}

