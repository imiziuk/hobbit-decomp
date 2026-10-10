
void __thiscall FUN_0053dd20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x54)) {
      iVar2 = 0;
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x20 + iVar2) = 0;
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0x50;
      } while (iVar1 < *(int *)(param_1 + 0x54));
    }
    iVar1 = *(int *)(param_1 + 0x7c);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) - iVar1;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - iVar1;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) - iVar1;
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) - iVar1;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x7c);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + iVar1;
  iVar2 = 0;
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + iVar1;
  if (0 < *(int *)(param_1 + 0x54)) {
    iVar1 = 0;
    do {
      *(int *)(*(int *)(param_1 + 0x58) + 0x20 + iVar1) = param_1;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x50;
    } while (iVar2 < *(int *)(param_1 + 0x54));
  }
  return;
}

