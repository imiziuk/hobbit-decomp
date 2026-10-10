
void __fastcall FUN_004ee250(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x160);
  if (0 < iVar1) {
    if (iVar1 < 3) {
      FUN_004ede30();
      if (*(int *)(param_1 + 0x238) != 0) {
        FUN_004edc30(200);
      }
    }
    else if (iVar1 == 3) {
      FUN_004ede30();
      FUN_004edc30(200);
      return;
    }
  }
  return;
}

