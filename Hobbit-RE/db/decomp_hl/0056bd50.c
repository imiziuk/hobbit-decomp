
undefined4 __fastcall FUN_0056bd50(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  undefined1 local_c [12];
  
  pfVar5 = (float *)FUN_0056bb40(local_c);
  fVar2 = *(float *)(param_1 + 0x49c) - *pfVar5;
  fVar3 = *(float *)(param_1 + 0x4a0) - pfVar5[1];
  fVar4 = *(float *)(param_1 + 0x4a4) - pfVar5[2];
  fVar1 = *(float *)(*(int *)(param_1 + 0x730) + 0xb4);
  fVar2 = fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4;
  fVar1 = fVar1 * fVar1;
  if (fVar1 < fVar2 != (NAN(fVar1) || NAN(fVar2))) {
    return 1;
  }
  return 0;
}

