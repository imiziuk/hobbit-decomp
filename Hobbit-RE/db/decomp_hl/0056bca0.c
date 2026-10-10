
float10 __fastcall FUN_0056bca0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_0041bcc0();
  iVar1 = *(int *)(param_1 + 0x730);
  if (*(int *)(iVar2 + 0x6f8) == 0) {
    if (*(float *)(param_1 + 0x698) < *(float *)(iVar1 + 0xc) !=
        (NAN(*(float *)(param_1 + 0x698)) || NAN(*(float *)(iVar1 + 0xc)))) {
      return (float10)*(float *)(iVar1 + 0xc);
    }
  }
  else if (*(float *)(param_1 + 0x698) < *(float *)(iVar1 + 0x2c) !=
           (NAN(*(float *)(param_1 + 0x698)) || NAN(*(float *)(iVar1 + 0x2c)))) {
    return (float10)*(float *)(iVar1 + 0x2c);
  }
  return (float10)*(float *)(param_1 + 0x698);
}

