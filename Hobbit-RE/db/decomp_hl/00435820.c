
void __thiscall FUN_00435820(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  if (param_3 != -1) {
    piVar1 = (int *)(param_1 + 0xb38);
    iVar2 = 4;
    do {
      if (*piVar1 == param_3) {
        *piVar1 = -1;
        piVar1[1] = 0;
      }
      piVar1 = piVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(int *)(param_1 + 0xb38 + param_2 * 8) = param_3;
    *(undefined4 *)(param_1 + 0xb3c + param_2 * 8) = param_4;
  }
  return;
}

