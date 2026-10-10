
void __fastcall FUN_0055d480(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    iVar2 = 0;
    do {
      iVar3 = *(int *)(param_1 + 0x4c);
      iVar5 = 0;
      if (0 < *(int *)(*(int *)(iVar2 + iVar3) + 0x8c)) {
        do {
          piVar1 = (int *)(*(int *)(*(int *)(iVar2 + iVar3) + 0x90) + iVar5 * 4);
          iVar3 = *piVar1;
          if ((iVar3 < 0) || (*(int *)(param_1 + 0x2c) <= iVar3)) {
            *piVar1 = 0;
          }
          iVar3 = *(int *)(param_1 + 0x4c);
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(*(int *)(iVar2 + iVar3) + 0x8c));
      }
      iVar3 = *(int *)(param_1 + 0x4c);
      iVar5 = 0;
      if (0 < *(int *)(*(int *)(iVar2 + iVar3) + 0x70)) {
        do {
          piVar1 = (int *)(*(int *)(*(int *)(iVar2 + iVar3) + 0x74) + iVar5 * 4);
          iVar3 = *piVar1;
          if ((iVar3 < 0) || (*(int *)(param_1 + 0x10) <= iVar3)) {
            *piVar1 = 0;
          }
          iVar3 = *(int *)(param_1 + 0x4c);
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(*(int *)(iVar2 + iVar3) + 0x70));
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar4 < *(int *)(param_1 + 0x48));
  }
  return;
}

