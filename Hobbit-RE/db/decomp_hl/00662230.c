
void FUN_00662230(undefined4 param_1,float param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00661450();
  if (iVar1 < 10) {
    if ((&DAT_007f0168)[iVar1 * 10] == 1) {
      (&DAT_007f016c)[iVar1 * 10] = (&DAT_007f0148)[iVar1 * 10];
      return;
    }
    param_2 = (float)((&DAT_007f0168)[iVar1 * 10] + -1) * param_2;
    FUN_006c0ae5((double)param_2);
    iVar2 = __ftol();
    param_2 = param_2 - (float)iVar2;
    (&DAT_007f016c)[iVar1 * 10] =
         param_2 * *(float *)(&DAT_007f014c + iVar2 * 4 + iVar1 * 0x28) +
         (DAT_006e92e8 - param_2) * (float)(&DAT_007f0148 + iVar1 * 10)[iVar2];
  }
  return;
}

