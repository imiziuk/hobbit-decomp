
void __fastcall FUN_005aee10(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (*(int *)(param_1 + 0x180) == 0 && *(int *)(param_1 + 0x184) == 0) {
    FUN_005af120();
    lVar4 = FUN_005aa850();
    if (lVar4 == 0) goto LAB_005aef36;
  }
  if ((*(int **)(param_1 + 0xbc) == (int *)0x0) ||
     (iVar1 = (**(code **)(**(int **)(param_1 + 0xbc) + 0x20))(), iVar1 == 0)) {
LAB_005aef36:
    FUN_005aede0();
    return;
  }
  if (*(int *)(param_1 + 0xc4) == 0) {
    iVar1 = *(int *)(param_1 + 0x180);
    iVar3 = *(int *)(param_1 + 0x184);
    if (iVar1 == 0 && iVar3 == 0) goto LAB_005aef03;
  }
  else {
    uVar5 = FUN_005c7dc0();
    if (((int)uVar5 == *(int *)(param_1 + 0x180)) &&
       ((int)((ulonglong)uVar5 >> 0x20) == *(int *)(param_1 + 0x184))) {
      return;
    }
    FUN_005af120();
    lVar4 = FUN_005aa850();
    lVar6 = FUN_005c7dc0();
    if (lVar4 == lVar6) {
      return;
    }
    FUN_005c7d30(*(undefined4 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x174));
    iVar1 = *(int *)(param_1 + 0x180);
    iVar3 = *(int *)(param_1 + 0x184);
    if (iVar1 == 0 && iVar3 == 0) {
LAB_005aef03:
      FUN_005af120();
      uVar5 = FUN_005aa850();
      uVar2 = FUN_005c7940(*(undefined4 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x174),uVar5);
      *(undefined4 *)(param_1 + 0xc4) = uVar2;
      return;
    }
  }
  uVar2 = FUN_005c7940(*(undefined4 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x174),iVar1,iVar3
                      );
  *(undefined4 *)(param_1 + 0xc4) = uVar2;
  return;
}

