
int __thiscall FUN_00645ca0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(short *)(*(int *)(param_1 + 0x3c) + 0x10)) {
    iVar2 = 0;
    do {
      iVar1 = FUN_00647e40(param_2,(int)*(short *)(iVar2 + 8 + *(int *)(param_1 + 0x40)) +
                                   *(int *)(param_1 + 0x60));
      if (iVar1 == 0) {
        return *(int *)(param_1 + 0x40) + iVar3 * 0xc;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 < *(short *)(*(int *)(param_1 + 0x3c) + 0x10));
  }
  return 0;
}

