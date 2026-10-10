
void __fastcall FUN_00621760(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[0x14];
  *param_1 = &PTR_FUN_006f5fd0;
  while (iVar2 != 0) {
    FUN_006bf840(*(undefined4 *)param_1[0x15]);
    iVar2 = param_1[0x14] + -1;
    if (0 < iVar2) {
      iVar1 = 0;
      do {
        *(undefined4 *)(iVar1 + param_1[0x15]) = *(undefined4 *)(iVar1 + 4 + param_1[0x15]);
        iVar1 = iVar1 + 4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = param_1[0x14] + -1;
    param_1[0x14] = iVar2;
  }
  if (param_1[0x17] == 0) {
    FUN_006bf840(param_1[0x15]);
    param_1[0x15] = 0;
    param_1[0x16] = 0;
  }
  param_1[0x14] = 0;
  if (param_1[0x17] != 2) {
    FUN_006bf840(param_1[0x15]);
  }
  FUN_005be180();
  return;
}

