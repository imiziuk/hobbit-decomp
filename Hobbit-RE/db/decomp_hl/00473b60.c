
void __fastcall FUN_00473b60(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xe8)) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0xec) + iVar3 * 4);
      iVar2 = piVar1[0xc];
      if ((iVar2 != 0) && (*piVar1 == 4)) {
        *(undefined4 *)(*(short *)(iVar2 + 0xe) * 0x3c + 0x38 + *(int *)(param_1 + 0xb4)) =
             *(undefined4 *)(iVar2 + 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xe8));
  }
  return;
}

