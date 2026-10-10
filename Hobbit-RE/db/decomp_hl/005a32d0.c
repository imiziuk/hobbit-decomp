
int __thiscall FUN_005a32d0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_2;
  if (iVar2 == 0) {
    return 0;
  }
  iVar1 = __ftol();
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 0:
    if (iVar1 < 0xb) {
      return 0;
    }
    break;
  case 1:
    if ((9 < iVar1) && (iVar1 < 0x15)) {
      return 1;
    }
    break;
  case 2:
    if ((0x13 < iVar1) && (iVar1 < 0x29)) {
      return 2;
    }
    break;
  case 3:
    if (0x27 < iVar1) {
      return 3;
    }
  }
  iVar3 = 0;
  if (9 < iVar1) {
    if (iVar1 < 0x14) {
      iVar3 = 1;
    }
    else if (iVar1 < 0x28) {
      iVar3 = 2;
    }
    else if (iVar1 < 0x50) {
      iVar3 = 3;
    }
    else if (3 < iVar2) {
      iVar3 = __ftol();
    }
  }
  if (iVar3 <= iVar2) {
    iVar2 = iVar3;
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return iVar2;
}

