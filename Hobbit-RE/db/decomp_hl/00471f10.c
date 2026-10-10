
void __fastcall FUN_00471f10(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x194);
  *(uint *)(param_1 + 0x194) = uVar1 & 0xfffffffd;
  if ((uVar1 & 4) != 0) {
    FUN_00473020();
    if (((*(byte *)(param_1 + 0x194) & 4) != 0) &&
       (FUN_0046aa20(), (*(byte *)(param_1 + 0x194) & 4) != 0)) {
      FUN_0046ab10(1);
    }
    DAT_0075cd00 = 0;
    DAT_0075cd04 = 0;
  }
  FUN_0064e870(6,s_Clearing_Cinema_Queue_due_to_OnR_00727a58);
  if (DAT_0075ccf0 == 0) {
    FUN_006bf840(DAT_0075cce8);
    DAT_0075cce8 = 0;
    DAT_0075ccec = 0;
  }
  DAT_0075cce4 = 0;
  iVar2 = *(int *)(param_1 + 0xe8);
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  if (0 < iVar2) {
    do {
      piVar3 = *(int **)(*(int *)(*(int *)(param_1 + 0xec) + iVar4 * 4) + 0x30);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x30))();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  (**(code **)(*(int *)(param_1 + 0x118) + 0x30))();
                    /* WARNING: Could not recover jumptable at 0x00471fe9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x150) + 0x30))();
  return;
}

