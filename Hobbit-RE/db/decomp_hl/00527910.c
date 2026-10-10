
undefined4 __fastcall FUN_00527910(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_006e92e4 < *(float *)(param_1 + 0x2ec)) {
    return 0xffffffff;
  }
  iVar2 = 0;
  do {
    if (((int)(&DAT_00735c00)[iVar2] < *(int *)(param_1 + 0x2e8)) &&
       (*(int *)(param_1 + 0x2e8) < (int)(&DAT_00735c04)[iVar2])) {
      iVar1 = *(int *)(&DAT_00735b40 + (iVar2 + *(int *)(param_1 + 0x2f0) * 6) * 4);
      if (iVar1 == 0) {
        return 0;
      }
      if ((((iVar1 == 8) || (iVar1 == 10)) || (iVar1 == 0xc)) ||
         (((iVar1 == 0xe || (iVar1 == 0x10)) || (iVar1 == 0x12)))) {
        return 8;
      }
      if (((iVar1 == 7) || (iVar1 == 9)) ||
         ((iVar1 == 0xb || (((iVar1 == 0xd || (iVar1 == 0xf)) || (iVar1 == 0x11)))))) {
        return *(undefined4 *)(param_1 + 0x14);
      }
    }
    iVar2 = iVar2 + 1;
    if (5 < iVar2) {
      *(undefined4 *)(param_1 + 0x2ec) = 0x3f800000;
      return 0;
    }
  } while( true );
}

