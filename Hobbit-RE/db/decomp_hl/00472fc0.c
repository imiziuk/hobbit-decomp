
undefined4 __thiscall FUN_00472fc0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  
  fVar1 = *(float *)(param_2 * 0x40 + 0x3c + *(int *)(param_1 + 0xd0));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xcc)) {
    pfVar3 = (float *)(*(int *)(param_1 + 0xd0) + 0x3c);
    do {
      if ((iVar2 != param_2) && (((uint)*pfVar3 & 0x1000000000000) == 0)) {
        if (*pfVar3 < fVar1 != (NAN(*pfVar3) || NAN(fVar1))) {
          return 0;
        }
      }
      iVar2 = iVar2 + 1;
      pfVar3 = pfVar3 + 0x10;
    } while (iVar2 < *(int *)(param_1 + 0xcc));
  }
  return 1;
}

