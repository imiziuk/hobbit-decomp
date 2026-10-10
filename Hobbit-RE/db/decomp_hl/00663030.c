
void __fastcall FUN_00663030(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x24);
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar2 == *(int *)(param_1 + 0x34)) {
    *(undefined1 *)(param_1 + 0xc) = 1;
    return;
  }
  do {
    FUN_00663f80();
    iVar2 = iVar2 + 4;
    if (iVar2 == iVar1) {
      iVar2 = *(int *)(iVar3 + 4);
      iVar3 = iVar3 + 4;
      iVar1 = iVar2 + 0x1000;
    }
  } while (iVar2 != *(int *)(param_1 + 0x34));
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}

