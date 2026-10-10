
int __fastcall FUN_005349a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0041bcc0();
  FUN_00422420();
  FUN_00434c10();
  iVar1 = __ftol();
  DAT_007647ac = iVar1;
  if (*(float *)(param_1 + 0x2f4) < *(float *)(param_1 + 0x300)) {
    iVar2 = __ftol();
    DAT_007647a8 = iVar2 + 5;
    return iVar2 + 5 + iVar1;
  }
  return 4;
}

