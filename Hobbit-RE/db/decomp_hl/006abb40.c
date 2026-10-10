
void __fastcall FUN_006abb40(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_1[3]) {
    iVar1 = 0;
    do {
      FUN_00674e10(*param_1 + iVar1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x20;
    } while (iVar2 < param_1[3]);
  }
  iVar2 = *param_1;
  if (iVar2 != 0) {
    FUN_006c026a(iVar2,0x20,*(undefined4 *)(iVar2 + -4),thunk_FUN_00650380);
    FUN_006bf840(iVar2 + -4);
  }
  *param_1 = 0;
  return;
}

