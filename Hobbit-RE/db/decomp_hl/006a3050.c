
void __fastcall FUN_006a3050(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  while (0 < iVar1) {
    if ((undefined4 *)**(int **)(param_1 + 0x1c) != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)**(int **)(param_1 + 0x1c))(1);
    }
    iVar1 = *(int *)(param_1 + 0x18);
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x18)) {
      piVar3 = *(int **)(iVar1 + 0x1c);
      iVar4 = -1;
      do {
        if (*piVar3 == param_1) {
          iVar4 = iVar2;
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < *(int *)(iVar1 + 0x18));
      if (iVar4 != -1) {
        iVar2 = (*(int *)(iVar1 + 0x18) - iVar4) + -1;
        if (0 < iVar2) {
          iVar4 = iVar4 * 4;
          do {
            *(undefined4 *)(iVar4 + *(int *)(iVar1 + 0x1c)) =
                 *(undefined4 *)(iVar4 + 4 + *(int *)(iVar1 + 0x1c));
            iVar4 = iVar4 + 4;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + -1;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

