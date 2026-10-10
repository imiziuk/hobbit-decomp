
void __thiscall FUN_006a4d50(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (*(int *)(param_1 + 0x14c) != 0) {
    iVar5 = *(int *)(param_1 + 0x114);
    if ((((*(int *)(param_1 + 0x138) <= *(int *)(param_1 + 0x110)) &&
         (*(int *)(param_1 + 0x110) <= *(int *)(param_1 + 0x140))) &&
        (*(int *)(param_1 + 0x13c) <= iVar5)) && (iVar5 <= *(int *)(param_1 + 0x144))) {
      iVar1 = *(int *)(param_1 + 0x17c);
      if (param_4 - iVar5 < 1) {
        if (param_4 - iVar5 < 0) {
          iVar5 = __ftol();
          iVar5 = iVar1 + iVar5;
          if (iVar5 < 0) {
            iVar5 = 0;
          }
          if ((iVar5 != iVar1) && (piVar2 = *(int **)(param_1 + 0xc), piVar2 != (int *)0x0)) {
            iVar1 = *(int *)(param_1 + 0x180) + -1 + iVar5;
            if (iVar1 < *(int *)(param_1 + 0x174)) {
              *(int *)(param_1 + 0x174) = iVar1;
            }
            *(int *)(param_1 + 0x17c) = iVar5;
            (**(code **)(*piVar2 + 0x3c))(piVar2,param_1,4,*(undefined4 *)(param_1 + 0x174));
          }
        }
      }
      else {
        iVar3 = __ftol();
        iVar4 = *(int *)(param_1 + 0x160) - *(int *)(param_1 + 0x180);
        iVar5 = iVar1 + iVar3;
        if (iVar4 < iVar1 + iVar3) {
          iVar5 = iVar4;
        }
        if ((iVar5 != iVar1) && (piVar2 = *(int **)(param_1 + 0xc), piVar2 != (int *)0x0)) {
          if (*(int *)(param_1 + 0x174) < iVar5) {
            *(int *)(param_1 + 0x174) = iVar5;
          }
          *(int *)(param_1 + 0x17c) = iVar5;
          (**(code **)(*piVar2 + 0x3c))(piVar2,param_1,4,*(undefined4 *)(param_1 + 0x174));
        }
      }
    }
  }
  *(int *)(param_1 + 0x110) = param_3;
  *(int *)(param_1 + 0x114) = param_4;
  FUN_006a33c0(&param_3,&param_4);
  iStack_c = *(int *)(param_1 + 0x11c);
  iStack_10 = *(int *)(param_1 + 0x118);
  iStack_8 = *(int *)(param_1 + 0x130);
  iStack_4 = *(int *)(param_1 + 0x134);
  FUN_006a3450(&iStack_10);
  if ((((param_3 < iStack_10) || (iStack_8 < param_3)) || (param_4 < iStack_c)) ||
     (iStack_4 < param_4)) {
    iVar5 = ((int)(param_4 + -4 + (param_4 + -4 >> 0x1f & 0xfU)) >> 4) + *(int *)(param_1 + 0x17c);
    if ((iVar5 < 0) || (*(int *)(param_1 + 0x160) <= iVar5)) {
      iVar5 = -1;
    }
    if ((*(uint *)(param_1 + 0x2c) & 0x200) == 0) {
      if (iVar5 != -1) {
        *(int *)(param_1 + 0x10c) = iVar5;
      }
      if (*(int **)(param_1 + 0xc) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0xc) + 0x58))(param_2,param_3,param_4);
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x174);
      if (iVar5 != -1) {
        *(int *)(param_1 + 0x174) = iVar5;
        *(int *)(param_1 + 0x10c) = iVar5;
        FUN_006a4cf0(iVar5);
        if ((*(int *)(param_1 + 0x174) != iVar1) &&
           (piVar2 = *(int **)(param_1 + 0xc), piVar2 != (int *)0x0)) {
          (**(code **)(*piVar2 + 0x3c))(piVar2,param_1,4,*(int *)(param_1 + 0x174));
          return;
        }
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x148) != 0) {
      iVar5 = *(int *)(param_1 + 0x110);
      iVar1 = *(int *)(param_1 + 0x114);
      if ((((iVar5 < *(int *)(param_1 + 0x128)) || (*(int *)(param_1 + 0x130) < iVar5)) ||
          (iVar1 < *(int *)(param_1 + 300))) || (*(int *)(param_1 + 0x134) < iVar1)) {
        if (((iVar5 < *(int *)(param_1 + 0x118)) || (*(int *)(param_1 + 0x120) < iVar5)) ||
           ((iVar1 < *(int *)(param_1 + 0x11c) || (*(int *)(param_1 + 0x124) < iVar1)))) {
          *(undefined4 *)(param_1 + 0x148) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x148) = 1;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x148) = 1;
      }
    }
    if (*(int **)(param_1 + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xc) + 0x58))(param_2,param_3,param_4);
      return;
    }
  }
  return;
}

