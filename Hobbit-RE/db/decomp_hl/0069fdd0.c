
undefined4 __thiscall FUN_0069fdd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = -1;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    iVar2 = 0;
    do {
      iVar1 = FUN_0064a7e0(*(int *)(param_1 + 0x30) + iVar2,param_2);
      if (iVar1 != 0) {
        iVar3 = iVar4;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x30;
    } while (iVar4 < *(int *)(param_1 + 0x2c));
    if (iVar3 != -1) {
      return 0;
    }
  }
  iVar3 = FUN_006a1dd0();
  FUN_0064a2e0(param_2);
  *(undefined4 *)(iVar3 + 0x2c) = param_3;
  return 1;
}

