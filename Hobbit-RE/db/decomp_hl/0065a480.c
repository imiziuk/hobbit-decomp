
float10 FUN_0065a480(uint param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = (param_1 & 0xffff) - 1;
  if ((-1 < iVar1) && (iVar1 < DAT_00806800)) {
    fVar2 = (float10)FUN_00678540(iVar1 * 0xf8 + DAT_008067f8 &
                                  (*(uint *)(iVar1 * 0xf8 + 0xe0 + DAT_008067f8) !=
                                  ((int)param_1 >> 0x10 & 0xffffU)) - 1);
    return fVar2 + fVar2;
  }
  fVar2 = (float10)FUN_00678540(0);
  return fVar2 + fVar2;
}

