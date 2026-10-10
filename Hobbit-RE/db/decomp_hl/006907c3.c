
void FUN_006907c3(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  do {
    if (-1 < *(int *)(param_1 + iVar2 * 4)) break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  if (iVar2 == 0x10) {
    FUN_006912c1(param_1,param_2);
    return;
  }
  uVar3 = 0;
  do {
    iVar2 = 0;
    do {
      uVar1 = *(uint *)(param_1 + iVar2 * 4);
      if (((int)uVar1 < 0) && ((uVar1 & 0xffffff) == uVar3)) break;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x10);
    if (iVar2 == 0x10) {
      iVar2 = 0;
      do {
        if (-1 < *(int *)(param_1 + iVar2 * 4)) {
          *(uint *)(param_1 + iVar2 * 4) = uVar3;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x10);
      FUN_00690bf3(param_1,param_2,uVar3,uVar3);
      return;
    }
    uVar3 = uVar3 + 1;
  } while( true );
}

