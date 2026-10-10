
undefined8 __thiscall FUN_005b71e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_1 + 8);
  if (0 < iVar1) {
    iVar2 = *(int *)(param_1 + 0xc);
    do {
      uVar4 = FUN_005b6e70();
      iVar3 = (int)((ulonglong)uVar4 >> 0x20);
      if ((int)uVar4 == param_2) {
        return CONCAT44(iVar3,*(undefined4 *)(iVar2 + iVar3 * 4));
      }
    } while (iVar3 + 1 < iVar1);
  }
  return 0;
}

