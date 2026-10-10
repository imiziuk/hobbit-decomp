
undefined4 __thiscall
FUN_006a13b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = -1;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    iVar2 = 0;
    do {
      iVar1 = FUN_0064a7e0(*(int *)(param_1 + 0x4c) + iVar2,param_2);
      if (iVar1 != 0) {
        iVar3 = iVar4;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x34;
    } while (iVar4 < *(int *)(param_1 + 0x48));
    if (iVar3 != -1) {
      return 0;
    }
  }
  iVar3 = FUN_006a1f60();
  FUN_0064a2e0(param_2);
  *(undefined4 *)(iVar3 + 0x30) = param_3;
  *(undefined4 *)(iVar3 + 0x2c) = param_4;
  return 1;
}

