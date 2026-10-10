
void __fastcall FUN_0063bae0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_006f6bd8;
  iVar1 = param_1[0x2a];
  for (iVar2 = param_1[0x29]; iVar2 != iVar1; iVar2 = iVar2 + 0x10) {
    FUN_0063ba60();
  }
  FUN_006bf840(param_1[0x29]);
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  FUN_005bfdb0();
  return;
}

