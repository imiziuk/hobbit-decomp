
void FUN_00659ed0(uint param_1)

{
  int iVar1;
  
  iVar1 = (param_1 & 0xffff) - 1;
  if ((-1 < iVar1) && (iVar1 < DAT_00806800)) {
    FUN_00678a90();
    return;
  }
  FUN_00678a90();
  return;
}

