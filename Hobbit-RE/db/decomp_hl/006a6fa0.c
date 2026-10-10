
void __fastcall FUN_006a6fa0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x100);
  iVar1 = *(int *)(param_1 + 0x104);
  iVar2 = *(int *)(param_1 + 0x160);
  if ((((iVar3 < *(int *)(param_1 + 0x118)) || (*(int *)(param_1 + 0x120) < iVar3)) ||
      (iVar1 < *(int *)(param_1 + 0x11c))) || (*(int *)(param_1 + 0x124) < iVar1)) {
    if (((iVar3 < *(int *)(param_1 + 0x108)) || (*(int *)(param_1 + 0x110) < iVar3)) ||
       ((iVar1 < *(int *)(param_1 + 0x10c) || (*(int *)(param_1 + 0x114) < iVar1)))) {
      iVar4 = iVar2;
      if (((*(int *)(param_1 + 0x128) <= iVar3) && (iVar3 <= *(int *)(param_1 + 0x130))) &&
         ((*(int *)(param_1 + 300) <= iVar1 && (iVar1 <= *(int *)(param_1 + 0x134))))) {
        *(undefined4 *)(param_1 + 0x13c) = 1;
      }
    }
    else {
      iVar4 = iVar2 + -1;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      *(undefined4 *)(param_1 + 0x138) = 1;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x158) - *(int *)(param_1 + 0x15c);
    iVar4 = iVar2 + 1;
    if (iVar3 < iVar2 + 1) {
      iVar4 = iVar3;
    }
    *(undefined4 *)(param_1 + 0x138) = 1;
  }
  if ((*(int *)(param_1 + 0x138) != 0) && (iVar4 != iVar2)) {
    *(int *)(param_1 + 0x160) = iVar4;
  }
  return;
}

