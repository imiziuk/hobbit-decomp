
void __thiscall FUN_006a6e40(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x13c) != 0) {
    iVar4 = *(int *)(param_1 + 0x104);
    if ((((*(int *)(param_1 + 0x128) <= *(int *)(param_1 + 0x100)) &&
         (*(int *)(param_1 + 0x100) <= *(int *)(param_1 + 0x130))) &&
        (*(int *)(param_1 + 300) <= iVar4)) && (iVar4 <= *(int *)(param_1 + 0x134))) {
      iVar1 = *(int *)(param_1 + 0x160);
      if (param_4 - iVar4 < 1) {
        if (-1 < param_4 - iVar4) goto LAB_006a6ee0;
        iVar4 = __ftol();
        iVar4 = iVar1 + iVar4;
        if (iVar4 < 0) {
          iVar4 = 0;
        }
      }
      else {
        iVar2 = __ftol();
        iVar3 = *(int *)(param_1 + 0x158) - *(int *)(param_1 + 0x15c);
        iVar4 = iVar1 + iVar2;
        if (iVar3 < iVar1 + iVar2) {
          iVar4 = iVar3;
        }
      }
      if (iVar4 != iVar1) {
        *(int *)(param_1 + 0x160) = iVar4;
      }
    }
  }
LAB_006a6ee0:
  if (*(int *)(param_1 + 0x138) != 0) {
    iVar4 = *(int *)(param_1 + 0x100);
    iVar1 = *(int *)(param_1 + 0x104);
    if (((iVar4 < *(int *)(param_1 + 0x118)) || (*(int *)(param_1 + 0x120) < iVar4)) ||
       ((iVar1 < *(int *)(param_1 + 0x11c) || (*(int *)(param_1 + 0x124) < iVar1)))) {
      if (((*(int *)(param_1 + 0x108) <= iVar4) && (iVar4 <= *(int *)(param_1 + 0x110))) &&
         ((*(int *)(param_1 + 0x10c) <= iVar1 && (iVar1 <= *(int *)(param_1 + 0x114))))) {
        *(int *)(param_1 + 0x104) = param_4;
        *(undefined4 *)(param_1 + 0x138) = 1;
        *(undefined4 *)(param_1 + 0x100) = param_3;
        return;
      }
      *(int *)(param_1 + 0x104) = param_4;
      *(undefined4 *)(param_1 + 0x138) = 0;
      *(undefined4 *)(param_1 + 0x100) = param_3;
      return;
    }
    *(undefined4 *)(param_1 + 0x138) = 1;
  }
  *(int *)(param_1 + 0x104) = param_4;
  *(undefined4 *)(param_1 + 0x100) = param_3;
  return;
}

