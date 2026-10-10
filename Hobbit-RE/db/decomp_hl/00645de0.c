
int __thiscall FUN_00645de0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(short *)(*(int *)(param_1 + 0x3c) + 0x18)) {
    iVar3 = 0;
    do {
      iVar1 = FUN_00647e40(param_2,(int)*(short *)(iVar3 + 4 + *(int *)(param_1 + 0x50)) +
                                   *(int *)(param_1 + 0x60));
      if (iVar1 == 0) {
        iVar1 = FUN_00647e40(param_3,(int)*(short *)(iVar3 + 6 + *(int *)(param_1 + 0x50)) +
                                     *(int *)(param_1 + 0x60));
        if (iVar1 == 0) {
          return *(int *)(param_1 + 0x50) + iVar2 * 0xc;
        }
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar2 < *(short *)(*(int *)(param_1 + 0x3c) + 0x18));
  }
  return 0;
}

