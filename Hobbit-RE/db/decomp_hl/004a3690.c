
void __fastcall FUN_004a3690(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x260);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) != 0 || *(int *)(iVar1 + 0xc) != 0) {
      FUN_0054be30(*(int *)(iVar1 + 8),*(int *)(iVar1 + 0xc));
    }
    iVar1 = **(int **)(param_1 + 0x260);
    iVar2 = (*(int **)(param_1 + 0x260))[1];
    if (iVar1 != 0 || iVar2 != 0) {
      FUN_0054be30(iVar1,iVar2);
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x260) + 0x10);
    iVar2 = *(int *)(*(int *)(param_1 + 0x260) + 0x14);
    if (iVar1 != 0 || iVar2 != 0) {
      FUN_0054be30(iVar1,iVar2);
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x260) + 0x18);
    iVar2 = *(int *)(*(int *)(param_1 + 0x260) + 0x1c);
    if (iVar1 != 0 || iVar2 != 0) {
      FUN_0054be30(iVar1,iVar2);
    }
  }
  return;
}

