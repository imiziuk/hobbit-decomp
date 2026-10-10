
undefined4 __fastcall FUN_00612210(int param_1)

{
  int *piVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0xd4) = 0;
  piVar1 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x108))(0);
    if (iVar2 != 0) {
      *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + 1;
    }
  }
  piVar1 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x108))(0);
    if (iVar2 != 0) {
      *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + 1;
    }
  }
  piVar1 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4));
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x108))(0);
    if (iVar2 != 0) {
      *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + 1;
    }
  }
  piVar1 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac));
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x108))(0);
    if (iVar2 != 0) {
      *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + 1;
    }
  }
  return 0;
}

