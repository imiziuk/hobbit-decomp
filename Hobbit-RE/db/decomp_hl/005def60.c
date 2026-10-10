
void __fastcall FUN_005def60(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_00435950();
  if (0 < iVar1) {
    while( true ) {
      iVar1 = FUN_00435960(iVar2,*(undefined4 *)(param_1 + 0x24));
      if (iVar1 != 0) break;
      iVar2 = iVar2 + 1;
      iVar1 = FUN_00435950();
      if (iVar1 <= iVar2) {
        return;
      }
    }
    FUN_006ab170(s_QuestNames_00723b30,iVar2);
    FUN_00436f90(iVar2,*(undefined4 *)(param_1 + 0x20));
  }
  return;
}

