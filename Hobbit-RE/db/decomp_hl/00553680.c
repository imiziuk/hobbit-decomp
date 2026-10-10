
void FUN_00553680(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_00555d70();
  if (3 < iVar2) {
    DAT_00771ec0 = &PTR_LAB_0073de58;
    return;
  }
  cVar1 = FUN_00555d80();
  if (cVar1 != '\0') {
    DAT_00771ec0 = &PTR_LAB_0073dc38;
    return;
  }
  DAT_00771ec0 = &PTR_LAB_0073da18;
  return;
}

