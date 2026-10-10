
undefined4 __thiscall FUN_006b6f20(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar2 = (int *)(param_1 + 0x1000);
  do {
    if (*piVar2 != 0) {
      iVar1 = FUN_00647ed0(param_2,*(undefined4 *)(*piVar2 + 0x20));
      if (iVar1 == 0) break;
    }
    iVar4 = iVar4 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar4 < 0x400);
  if (iVar4 == 0x400) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x1000 + iVar4 * 4);
  if (0 < *(int *)(iVar1 + 0x1c)) {
    return 0;
  }
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 0x14)) {
    do {
      (**(code **)(param_1 + 0x2004))(*(undefined4 *)(*(int *)(iVar1 + 0x2c) + iVar3 * 4));
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x1000 + iVar4 * 4) + 0x30) + iVar3 * 4);
      if (iVar1 != 0) {
        (**(code **)(param_1 + 0x2004))(iVar1);
      }
      iVar3 = iVar3 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1000 + iVar4 * 4) + 0x2c) + -4 + iVar3 * 4) = 0;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1000 + iVar4 * 4) + 0x30) + -4 + iVar3 * 4) = 0;
      iVar1 = *(int *)(param_1 + 0x1000 + iVar4 * 4);
    } while (iVar3 < *(int *)(iVar1 + 0x14));
  }
  FUN_00674810(*(undefined4 *)(param_1 + 0x1000 + iVar4 * 4));
  *(undefined4 *)(param_1 + 0x1000 + iVar4 * 4) = 0;
  return 1;
}

