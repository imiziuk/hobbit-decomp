
void __fastcall FUN_006b9c00(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int iStack_4;
  
  iVar1 = *(int *)(param_1 + 4);
  FUN_005a3d00();
  iVar3 = __ftol();
  *(int *)(param_1 + 0x108) = iVar3;
  if (0 < iVar3) {
    if ((*(byte *)(iVar1 + 0x84) & 8) == 0) {
      fVar2 = *(float *)(iVar1 + 0x8c) / (float)iVar3;
    }
    else {
      fVar2 = (*(float *)(iVar1 + 0x7c) - *(float *)(iVar1 + 0x78)) / (float)iVar3;
    }
    *(float *)(param_1 + 0xb4) = fVar2;
    iStack_4 = 0;
    pfVar4 = (float *)(param_1 + 0x10c);
    if (0 < *(int *)(iVar1 + 0x88)) {
      do {
        fVar2 = (float)iStack_4;
        iStack_4 = iStack_4 + 1;
        *pfVar4 = fVar2 * *(float *)(param_1 + 0xb4);
        pfVar4 = pfVar4 + 0x11;
      } while (iStack_4 < *(int *)(iVar1 + 0x88));
    }
  }
  return;
}

