
void __fastcall FUN_00497d60(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x124)) {
    iVar1 = 0;
    do {
      FUN_00559840(*(undefined4 *)(iVar1 + *(int *)(param_1 + 0x128)));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x2c;
    } while (iVar2 < *(int *)(param_1 + 0x124));
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x16c)) {
    iVar1 = 0;
    do {
      FUN_00559950(*(undefined4 *)(*(int *)(param_1 + 0x170) + iVar1));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x2c;
    } while (iVar2 < *(int *)(param_1 + 0x16c));
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x150)) {
    iVar1 = 0;
    do {
      FUN_005598a0(*(undefined4 *)(iVar1 + *(int *)(param_1 + 0x154)));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x2c;
    } while (iVar2 < *(int *)(param_1 + 0x150));
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x108)) {
    iVar1 = 0;
    do {
      FUN_005597e0(*(undefined4 *)(*(int *)(param_1 + 0x10c) + iVar1));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x2c;
    } while (iVar2 < *(int *)(param_1 + 0x108));
  }
  return;
}

