
void __thiscall FUN_006a6480(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 == *(int *)(param_1 + 0x158)) {
    if (param_4 == 5) {
      if (*(int *)(param_1 + 0x15c) != 0) {
        iVar1 = FUN_006a4c80();
        if (iVar1 != -1) {
          uVar2 = FUN_006a4c60();
          **(undefined4 **)(param_1 + 0x15c) = uVar2;
        }
      }
      FUN_006a16c0(*(undefined4 *)(param_1 + 0x164),1);
      return;
    }
    if (param_4 == 6) {
      FUN_006a16c0(*(undefined4 *)(param_1 + 0x164),1);
    }
  }
  return;
}

