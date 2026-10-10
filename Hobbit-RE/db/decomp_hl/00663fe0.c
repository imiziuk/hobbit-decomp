
/* WARNING: Removing unreachable block (ram,0x00664144) */
/* WARNING: Removing unreachable block (ram,0x00664159) */
/* WARNING: Removing unreachable block (ram,0x00664160) */
/* WARNING: Removing unreachable block (ram,0x0066416f) */
/* WARNING: Removing unreachable block (ram,0x00664178) */

void __thiscall FUN_00663fe0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar7 = *(undefined4 **)(param_1 + 0x368);
  if (*(int *)(param_1 + 0x36c) - (int)puVar7 >> 2 != 0) {
    FUN_006692d0(puVar7,puVar7,puVar7 + 1);
    FUN_00669300(*(int *)(param_1 + 0x368),1 - (*(int *)(param_1 + 0x368) - (int)puVar7 >> 2),
                 &param_2);
    puVar6 = *(undefined4 **)(param_1 + 0x368);
    if (puVar7 != puVar6) {
      do {
        *puVar7 = param_2;
        puVar7 = puVar7 + 1;
      } while (puVar7 != puVar6);
      *(int *)(param_1 + 0x368) = *(int *)(param_1 + 0x368) + 4;
      return;
    }
    *(int *)(param_1 + 0x368) = *(int *)(param_1 + 0x368) + 4;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x364);
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
  for (puVar6 = *(undefined4 **)(param_1 + 0x364); puVar6 != puVar7; puVar6 = puVar6 + 1) {
    FUN_00669b80(pvVar5,puVar6);
    pvVar5 = (void *)((int)pvVar5 + 4);
  }
  FUN_00669300(pvVar5,1,&param_2);
  FUN_006692d0(puVar7,*(undefined4 *)(param_1 + 0x368),(int)pvVar5 + 4);
  FUN_005b8840(*(undefined4 *)(param_1 + 0x364),*(undefined4 *)(param_1 + 0x368));
  FUN_006bf840(*(undefined4 *)(param_1 + 0x364));
  iVar2 = *(int *)(param_1 + 0x364);
  *(void **)(param_1 + 0x36c) = (void *)((int)pvVar3 + iVar1 * 4);
  if (iVar2 == 0) {
    *(void **)(param_1 + 0x364) = pvVar3;
    *(int *)(param_1 + 0x368) = (int)pvVar3 + 4;
    return;
  }
  *(void **)(param_1 + 0x364) = pvVar3;
  *(int *)(param_1 + 0x368) = (int)pvVar3 + (*(int *)(param_1 + 0x368) - iVar2 >> 2) * 4 + 4;
  return;
}

