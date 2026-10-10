
int __thiscall FUN_006452b0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    do {
      iVar1 = FUN_00645ca0(param_2);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x34));
  }
  return 0;
}

