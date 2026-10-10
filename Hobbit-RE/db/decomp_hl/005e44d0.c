
void __fastcall FUN_005e44d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_00435950();
  if (0 < iVar1) {
    while( true ) {
      iVar1 = FUN_00435960(iVar2,*(undefined4 *)(param_1 + 0x18));
      if (iVar1 != 0) break;
      iVar2 = iVar2 + 1;
      iVar1 = FUN_00435950();
      if (iVar1 <= iVar2) {
        return;
      }
    }
    FUN_004371e0(iVar2);
  }
  return;
}

