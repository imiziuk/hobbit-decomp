
void __fastcall FUN_00669460(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  
  puVar5 = *(undefined2 **)(param_1 + 4);
  if (puVar5 == (undefined2 *)0x0) {
    return;
  }
  cVar1 = *(char *)((int)puVar5 + -1);
  if (cVar1 == '\0') {
    return;
  }
  if (cVar1 == -1) {
    return;
  }
  *(char *)((int)puVar5 + -1) = cVar1 + -1;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar3 = FUN_006c24c6(puVar5);
  if (0x7ffffffd < uVar3) {
    FUN_006bf8fc();
  }
  iVar2 = *(int *)(param_1 + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar3 == 0) {
      FUN_006678a0(1);
      return;
    }
    if ((*(uint *)(param_1 + 0xc) < 0x20) && (uVar3 <= *(uint *)(param_1 + 0xc))) goto LAB_0066950e;
    FUN_006678a0(1);
  }
  else if (uVar3 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_006678a0(0);
    return;
  }
  FUN_00669340(uVar3);
LAB_0066950e:
  puVar4 = *(undefined2 **)(param_1 + 4);
  for (uVar6 = uVar3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar4 = *puVar5;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(uint *)(param_1 + 8) = uVar3;
  *(undefined2 *)(*(int *)(param_1 + 4) + uVar3 * 2) = 0;
  return;
}

