
undefined8 __thiscall FUN_0054c210(int param_1,char *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((*param_2 != '\0') && (0 < *(int *)(param_1 + 0x28d8))) {
    iVar4 = 0;
    iVar5 = 0;
    do {
      piVar1 = *(int **)(iVar4 + *(int *)(param_1 + 0x28c0));
      if (piVar1 != (int *)0x0) {
        uVar2 = (**(code **)(*piVar1 + 0x4c))(param_2);
        iVar3 = FUN_00647ed0(uVar2);
        if (iVar3 == 0) {
          return *(undefined8 *)(*(int *)(*(int *)(param_1 + 0x28c0) + iVar5 * 0x14) + 8);
        }
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x14;
    } while (iVar5 < *(int *)(param_1 + 0x28d8));
  }
  return 0;
}

