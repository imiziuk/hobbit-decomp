
int __thiscall FUN_006ad700(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_1[1]) {
    iVar2 = 0;
    do {
      iVar1 = FUN_00647ed0(param_2,iVar2 + 0xc + *param_1);
      if (iVar1 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x1c4;
    } while (iVar3 < param_1[1]);
  }
  return -1;
}

