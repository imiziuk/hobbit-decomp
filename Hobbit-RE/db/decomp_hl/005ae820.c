
void __fastcall FUN_005ae820(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0xa8)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0xac) + iVar4 * 4) + 0x30))();
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0xa8));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0xa8)) {
    do {
      iVar3 = iVar4 * 4;
      (**(code **)(**(int **)(iVar3 + *(int *)(param_1 + 0xac)) + 0x34))();
      iVar2 = FUN_005be200();
      if (iVar2 == 0) {
        puVar1 = *(undefined4 **)(iVar3 + *(int *)(param_1 + 0xac));
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
        iVar2 = (*(int *)(param_1 + 0xa8) - iVar4) + -1;
        if (0 < iVar2) {
          do {
            *(undefined4 *)(iVar3 + *(int *)(param_1 + 0xac)) =
                 *(undefined4 *)(iVar3 + 4 + *(int *)(param_1 + 0xac));
            iVar3 = iVar3 + 4;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + -1;
        iVar4 = iVar4 + -1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0xa8));
  }
  return;
}

