
void __thiscall FUN_00457320(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0xf4);
  if (iVar2 < param_2) {
    iVar3 = param_2 - iVar2;
    do {
      FUN_00459dd0();
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if ((param_2 < iVar2) && (iVar2 = iVar2 + -1, param_2 <= iVar2)) {
    iVar3 = iVar2 * 0x2c;
    do {
      iVar1 = (*(int *)(param_1 + 0xf4) - iVar2) + -1;
      iVar4 = iVar3;
      if (0 < iVar1) {
        do {
          FUN_0064a320(iVar4 + 0x2c + *(int *)(param_1 + 0xf8));
          iVar1 = iVar1 + -1;
          iVar4 = iVar4 + 0x2c;
        } while (iVar1 != 0);
      }
      iVar2 = iVar2 + -1;
      iVar3 = iVar3 + -0x2c;
      *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + -1;
    } while (param_2 <= iVar2);
  }
  return;
}

