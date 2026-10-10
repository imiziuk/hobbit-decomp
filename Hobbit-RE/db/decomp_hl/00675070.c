
uint FUN_00675070(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = 0;
  iVar1 = FUN_00675150();
  if (0 < iVar1) {
    do {
      iVar1 = FUN_00675160(iVar3);
      if (iVar1 != 0) {
        uVar2 = uVar2 | 1 << ((byte)iVar3 & 0x1f);
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_00675150();
    } while (iVar3 < iVar1);
  }
  return uVar2;
}

