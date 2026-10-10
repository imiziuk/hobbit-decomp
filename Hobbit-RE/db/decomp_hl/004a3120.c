
void __fastcall FUN_004a3120(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0x260);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) != 0 || *(int *)(iVar1 + 0xc) != 0) {
      piVar3 = (int *)FUN_004021c0(*(int *)(iVar1 + 8),*(int *)(iVar1 + 0xc));
      if ((piVar3 != (int *)0x0) && ((*(byte *)((int)piVar3 + 0x126) & 1) == 0)) {
        *(undefined1 *)((int)piVar3 + 0x85) = DAT_0075d2bb;
        *(undefined1 *)(piVar3 + 0x21) = DAT_0075d2ba;
        *(undefined1 *)((int)piVar3 + 0x83) = DAT_0075d2b9;
        *(undefined1 *)((int)piVar3 + 0x82) = DAT_0075d2b8;
        (**(code **)(*piVar3 + 0x60))();
      }
    }
    iVar1 = **(int **)(param_1 + 0x260);
    iVar2 = (*(int **)(param_1 + 0x260))[1];
    if (iVar1 != 0 || iVar2 != 0) {
      piVar3 = (int *)FUN_004021c0(iVar1,iVar2);
      if ((piVar3 != (int *)0x0) && ((*(byte *)((int)piVar3 + 0x126) & 1) == 0)) {
        *(undefined1 *)((int)piVar3 + 0x85) = DAT_0075d2bb;
        *(undefined1 *)(piVar3 + 0x21) = DAT_0075d2ba;
        *(undefined1 *)((int)piVar3 + 0x83) = DAT_0075d2b9;
        *(undefined1 *)((int)piVar3 + 0x82) = DAT_0075d2b8;
        (**(code **)(*piVar3 + 0x60))();
      }
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x260) + 0x10);
    iVar2 = *(int *)(*(int *)(param_1 + 0x260) + 0x14);
    if (iVar1 != 0 || iVar2 != 0) {
      piVar3 = (int *)FUN_004021c0(iVar1,iVar2);
      if ((piVar3 != (int *)0x0) && ((*(byte *)((int)piVar3 + 0x126) & 1) == 0)) {
        *(undefined1 *)((int)piVar3 + 0x85) = DAT_0075d2bb;
        *(undefined1 *)(piVar3 + 0x21) = DAT_0075d2ba;
        *(undefined1 *)((int)piVar3 + 0x83) = DAT_0075d2b9;
        *(undefined1 *)((int)piVar3 + 0x82) = DAT_0075d2b8;
        (**(code **)(*piVar3 + 0x60))();
      }
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x260) + 0x18);
    iVar2 = *(int *)(*(int *)(param_1 + 0x260) + 0x1c);
    if (iVar1 != 0 || iVar2 != 0) {
      piVar3 = (int *)FUN_004021c0(iVar1,iVar2);
      if ((piVar3 != (int *)0x0) && ((*(byte *)((int)piVar3 + 0x126) & 1) == 0)) {
        *(undefined1 *)((int)piVar3 + 0x85) = DAT_0075d2bb;
        *(undefined1 *)(piVar3 + 0x21) = DAT_0075d2ba;
        *(undefined1 *)((int)piVar3 + 0x83) = DAT_0075d2b9;
        *(undefined1 *)((int)piVar3 + 0x82) = DAT_0075d2b8;
                    /* WARNING: Could not recover jumptable at 0x004a32b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar3 + 0x60))();
        return;
      }
    }
  }
  return;
}

