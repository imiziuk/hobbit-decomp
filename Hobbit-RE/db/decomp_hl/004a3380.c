
float10 __fastcall FUN_004a3380(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x304) + 0x158);
  if (iVar1 != 0) {
    return (float10)*(float *)(iVar1 + 0x48);
  }
  return (float10)DAT_006e92e4;
}

