
void __thiscall FUN_006648a0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar2 = *(int **)(param_1 + 0x358);
  piVar4 = *(int **)(param_1 + 0x354);
  if (piVar4 != piVar2) {
    do {
      if (*piVar4 == param_2) break;
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar2);
    if (piVar4 != piVar2) {
      piVar1 = *(int **)(param_1 + 0x358);
      piVar2 = piVar4 + 1;
      if (piVar2 != piVar1) {
        iVar3 = (int)piVar4 - (int)piVar2;
        do {
          *(int *)(iVar3 + (int)piVar2) = *piVar2;
          piVar2 = piVar2 + 1;
        } while (piVar2 != piVar1);
      }
      *(int *)(param_1 + 0x358) = *(int *)(param_1 + 0x358) + -4;
      piVar2 = *(int **)(param_1 + 0x368);
      piVar4 = *(int **)(param_1 + 0x364);
      if (piVar4 != piVar2) {
        do {
          if (*piVar4 == param_2) break;
          piVar4 = piVar4 + 1;
        } while (piVar4 != piVar2);
        if (piVar4 != piVar2) {
          piVar1 = *(int **)(param_1 + 0x368);
          piVar2 = piVar4 + 1;
          if (piVar2 != piVar1) {
            iVar3 = (int)piVar4 - (int)piVar2;
            do {
              *(int *)(iVar3 + (int)piVar2) = *piVar2;
              piVar2 = piVar2 + 1;
            } while (piVar2 != piVar1);
          }
          *(int *)(param_1 + 0x368) = *(int *)(param_1 + 0x368) + -4;
        }
      }
    }
  }
  if ((*(int *)(param_1 + 0x354) == 0) ||
     (*(int *)(param_1 + 0x358) - *(int *)(param_1 + 0x354) >> 2 == 0)) {
    *(undefined4 *)(param_1 + 0x348) = 0;
  }
  return;
}

