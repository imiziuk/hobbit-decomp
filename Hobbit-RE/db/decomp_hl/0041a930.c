
void __fastcall FUN_0041a930(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  
  uVar1 = *(undefined1 *)(param_1 + 0x80);
  if (*(int *)(param_1 + 0x4db0) != 0 || *(int *)(param_1 + 0x4db4) != 0) {
    piVar2 = (int *)FUN_004021c0(*(int *)(param_1 + 0x4db0),*(int *)(param_1 + 0x4db4));
    if ((piVar2 != (int *)0x0) && ((*(byte *)((int)piVar2 + 0x126) & 1) == 0)) {
      *(undefined1 *)(piVar2 + 0x20) = uVar1;
      (**(code **)(*piVar2 + 0x60))();
    }
  }
  if (*(int *)(param_1 + 0x4db8) != 0 || *(int *)(param_1 + 0x4dbc) != 0) {
    piVar2 = (int *)FUN_004021c0(*(int *)(param_1 + 0x4db8),*(int *)(param_1 + 0x4dbc));
    if ((piVar2 != (int *)0x0) && ((*(byte *)((int)piVar2 + 0x126) & 1) == 0)) {
      *(undefined1 *)(piVar2 + 0x20) = uVar1;
      *(undefined1 *)((int)piVar2 + 0x85) = 0xff;
      *(undefined1 *)(piVar2 + 0x21) = 0xc4;
      *(undefined1 *)((int)piVar2 + 0x83) = 0xc4;
      *(undefined1 *)((int)piVar2 + 0x82) = 0xc4;
      (**(code **)(*piVar2 + 0x60))();
    }
  }
  if (*(int *)(param_1 + 0x4dc0) != 0 || *(int *)(param_1 + 0x4dc4) != 0) {
    piVar2 = (int *)FUN_004021c0(*(int *)(param_1 + 0x4dc0),*(int *)(param_1 + 0x4dc4));
    if ((piVar2 != (int *)0x0) && ((*(byte *)((int)piVar2 + 0x126) & 1) == 0)) {
      *(undefined1 *)(piVar2 + 0x20) = uVar1;
      *(undefined1 *)(piVar2 + 0x21) = 0xc4;
      *(undefined1 *)((int)piVar2 + 0x83) = 0xc4;
      *(undefined1 *)((int)piVar2 + 0x82) = 0xc4;
      *(undefined1 *)((int)piVar2 + 0x85) = 0xff;
                    /* WARNING: Could not recover jumptable at 0x0041aa26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 0x60))();
      return;
    }
  }
  return;
}

