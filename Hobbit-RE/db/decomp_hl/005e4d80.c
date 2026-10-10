
undefined4 __fastcall FUN_005e4d80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = 0;
  iVar1 = FUN_00435950();
  if (0 < iVar1) {
    do {
      iVar1 = FUN_00435960(iVar3,*(undefined4 *)(param_1 + 0x18));
      if (iVar1 != 0) {
        uVar2 = 1;
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_00435950();
    } while (iVar3 < iVar1);
  }
  return uVar2;
}

