
float10 __fastcall FUN_0064cf10(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x14) < 1) {
    return (float10)DAT_006e92e4;
  }
  fVar1 = (float10)FUN_0064cd30();
  return fVar1 / (float10)*(int *)(param_1 + 0x14);
}

