
void FUN_00558610(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((((*(int *)(param_1 + 0x104) == *(int *)(param_2 + 0x104)) &&
       (((((*(byte *)(param_1 + 0x118) & 0x10) == 0 && ((*(byte *)(param_2 + 0x118) & 0x10) == 0))
         || (iVar1 = FUN_00647e40(param_1,param_2), iVar1 == 0)) &&
        ((iVar1 = FUN_006486a0(param_1 + 0x9bc,param_2 + 0x9bc,0x10), iVar1 == 0 &&
         (*(int *)(param_1 + 0x108) == *(int *)(param_2 + 0x108))))))) &&
      (*(int *)(param_1 + 0x10c) == *(int *)(param_2 + 0x10c))) &&
     ((((*(int *)(param_1 + 0x110) == *(int *)(param_2 + 0x110) &&
        (*(int *)(param_1 + 0x114) == *(int *)(param_2 + 0x114))) &&
       ((*(int *)(param_1 + 0x118) == *(int *)(param_2 + 0x118) &&
        (((*(int *)(param_1 + 0x234) == *(int *)(param_2 + 0x234) &&
          (iVar1 = FUN_00558530(param_1 + 0x11c,param_2 + 0x11c), iVar1 == 0)) &&
         (iVar1 = FUN_00558530(param_1 + 0x138,param_2 + 0x138), iVar1 == 0)))))) &&
      ((*(int *)(param_1 + 0x9dc) == *(int *)(param_2 + 0x9dc) &&
       (*(int *)(param_1 + 0x9d4) == *(int *)(param_2 + 0x9d4))))))) {
    iVar1 = *(int *)(param_1 + 0x9d0);
    if ((iVar1 == 0) || (*(int *)(param_2 + 0x9d0) == 0)) {
      if (iVar1 != *(int *)(param_2 + 0x9d0)) {
        return;
      }
    }
    else {
      iVar1 = FUN_006486a0(iVar1,*(int *)(param_2 + 0x9d0),*(int *)(param_1 + 0x9d4) << 2);
      if (iVar1 != 0) {
        return;
      }
    }
    iVar1 = *(int *)(param_1 + 0x9d8);
    if ((iVar1 == 0) || (*(int *)(param_2 + 0x9d8) == 0)) {
      if (iVar1 != *(int *)(param_2 + 0x9d8)) {
        return;
      }
    }
    else {
      iVar1 = FUN_006486a0(iVar1,*(int *)(param_2 + 0x9d8),*(int *)(param_1 + 0x9dc) << 2);
      if (iVar1 != 0) {
        return;
      }
    }
    if (*(int *)(param_1 + 0x104) != 9) {
      iVar3 = 0;
      iVar1 = param_1 + 0x154;
      do {
        iVar2 = FUN_00558530(iVar1,(param_2 - param_1) + iVar1);
        if (iVar2 != 0) {
          return;
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + 0x1c;
      } while (iVar3 < 8);
    }
    iVar3 = 0;
    iVar1 = param_1 + 0x238;
    do {
      iVar2 = FUN_005585c0(iVar1,(param_2 - param_1) + iVar1);
      if (iVar2 != 0) {
        return;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0x78;
    } while (iVar3 < 0x10);
  }
  return;
}

