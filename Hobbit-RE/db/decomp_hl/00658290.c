
undefined4 FUN_00658290(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_4;
  
  iVar1 = FUN_0065a610(param_1);
  iVar3 = 0;
  if (iVar1 == 0) {
    local_4 = FUN_00658080(param_1);
    iVar1 = FUN_0065a610(param_1);
  }
  else {
    local_4 = 0;
  }
  if (iVar1 == 0) {
    return 0;
  }
  if (0 < *(int *)(iVar1 + 0xf0)) {
    do {
      iVar2 = (uint)*(ushort *)(*(int *)(iVar1 + 0x194) + iVar3 * 8) + *(int *)(iVar1 + 0x198);
      FUN_00459dd0(iVar2);
      FUN_0064a2e0(iVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar1 + 0xf0));
  }
  if (local_4 != 0) {
    FUN_006581c0(param_1);
  }
  return 1;
}

