
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00653590(void)

{
  int iVar1;
  int iVar2;
  
  FUN_00653cf0();
  iVar1 = FUN_00653c70();
  while( true ) {
    iVar2 = FUN_00653bc0();
    if (iVar2 == 0) break;
    if (iVar2 != iVar1) {
      FUN_00653a30();
      FUN_006538e0();
      FUN_006bf840(iVar2);
    }
  }
  DAT_007e35fc = 0;
  _DAT_007e86c8 = 0;
  FUN_00653d20();
  return;
}

