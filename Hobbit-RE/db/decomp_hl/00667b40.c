
void __fastcall FUN_00667b40(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = *(undefined4 **)(*param_1 + 8);
  if (puVar1 != DAT_007f1434) {
    for (puVar2 = (undefined4 *)*puVar1; puVar2 != DAT_007f1434; puVar2 = (undefined4 *)*puVar2) {
      puVar1 = puVar2;
    }
    *param_1 = (int)puVar1;
    return;
  }
  iVar3 = *(int *)(*param_1 + 4);
  if (*param_1 == *(int *)(iVar3 + 8)) {
    do {
      *param_1 = iVar3;
      iVar3 = *(int *)(iVar3 + 4);
    } while (*param_1 == *(int *)(iVar3 + 8));
  }
  if (*(int *)(*param_1 + 8) != iVar3) {
    *param_1 = iVar3;
  }
  return;
}

