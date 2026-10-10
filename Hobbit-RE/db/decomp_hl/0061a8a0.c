
bool __fastcall FUN_0061a8a0(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = true;
  if (*(int *)(param_1 + 0x68) != 0 || *(int *)(param_1 + 0x6c) != 0) {
    piVar1 = (int *)FUN_004021c0(*(int *)(param_1 + 0x68),*(int *)(param_1 + 0x6c));
    if (piVar1 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
    else {
      iVar2 = (**(code **)(*piVar1 + 0x108))();
      bVar3 = iVar2 != 0;
    }
  }
  if (*(int *)(param_1 + 0x90) != 0 || *(int *)(param_1 + 0x94) != 0) {
    piVar1 = (int *)FUN_004021c0(*(int *)(param_1 + 0x90),*(int *)(param_1 + 0x94));
    if (piVar1 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined4 *)(param_1 + 0x94) = 0;
    }
    else {
      if (bVar3 != false) {
        iVar2 = (**(code **)(*piVar1 + 0x108))();
        if (iVar2 != 0) {
          bVar3 = true;
          goto LAB_0061a930;
        }
      }
      bVar3 = false;
    }
  }
LAB_0061a930:
  if (*(int *)(param_1 + 0xb8) != 0 || *(int *)(param_1 + 0xbc) != 0) {
    piVar1 = (int *)FUN_004021c0(*(int *)(param_1 + 0xb8),*(int *)(param_1 + 0xbc));
    if (piVar1 != (int *)0x0) {
      if (bVar3 != false) {
        iVar2 = (**(code **)(*piVar1 + 0x108))();
        if (iVar2 != 0) {
          return true;
        }
      }
      return false;
    }
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  return bVar3;
}

