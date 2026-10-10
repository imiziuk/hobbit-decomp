
float10 __fastcall FUN_0056bc20(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = FUN_0041bcc0();
  iVar1 = *(int *)(param_1 + 0x730);
  if (*(int *)(iVar2 + 0x6f8) == 0) {
    if (*(float *)(param_1 + 0x698) < *(float *)(iVar1 + 8) !=
        (NAN(*(float *)(param_1 + 0x698)) || NAN(*(float *)(iVar1 + 8)))) {
      fVar3 = (float10)*(float *)(iVar1 + 8);
      goto LAB_0056bc6c;
    }
  }
  else if (*(float *)(iVar1 + 0x28) < *(float *)(param_1 + 0x698)) {
    fVar3 = (float10)*(float *)(iVar1 + 0x28);
    goto LAB_0056bc6c;
  }
  fVar3 = (float10)*(float *)(param_1 + 0x698);
LAB_0056bc6c:
  if (((*(uint *)(param_1 + 0x484) & 0x100) != 0) &&
     (fVar3 < (float10)*(float *)(param_1 + 0x680) ==
      (NAN(fVar3) || NAN((float10)*(float *)(param_1 + 0x680))))) {
    fVar3 = (float10)*(float *)(param_1 + 0x680);
  }
  return fVar3;
}

