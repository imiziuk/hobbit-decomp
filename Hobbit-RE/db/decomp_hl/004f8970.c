
void __thiscall FUN_004f8970(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x868) != 0) && (*(int *)(param_1 + 0x870) == 0)) {
    fVar1 = *(float *)(param_1 + 0x864) - *(float *)(param_1 + 0x86c);
    if (fVar1 < DAT_006e92e4) {
      fVar1 = -fVar1;
      if (param_2 < fVar1 != (NAN(param_2) || NAN(fVar1))) {
        fVar1 = param_2;
      }
      *(float *)(param_1 + 0x86c) = *(float *)(param_1 + 0x86c) - fVar1;
    }
    else {
      if (param_2 < fVar1 != (NAN(param_2) || NAN(fVar1))) {
        fVar1 = param_2;
      }
      *(float *)(param_1 + 0x86c) = fVar1 + *(float *)(param_1 + 0x86c);
    }
    iVar2 = __ftol();
    iVar3 = __ftol();
    if (iVar3 <= iVar2) {
      *(undefined4 *)(param_1 + 0x86c) = 0;
    }
  }
  return;
}

