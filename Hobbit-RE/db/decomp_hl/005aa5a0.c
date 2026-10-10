
void __fastcall FUN_005aa5a0(int param_1)

{
  int iVar1;
  float *pfVar2;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(int *)(param_1 + 0x68c) != 0) {
    iVar1 = 0;
    pfVar2 = (float *)(param_1 + 0x134);
    while (*pfVar2 < DAT_006e92e4 == (*pfVar2 == DAT_006e92e4)) {
      iVar1 = iVar1 + 1;
      pfVar2 = pfVar2 + 9;
      if (0x1f < iVar1) {
        return;
      }
    }
    pfVar2 = (float *)(param_1 + 0x11c + iVar1 * 0x24);
    pfVar2[6] = 1.0;
    pfVar2[7] = 0.2;
    *pfVar2 = *(float *)(param_1 + 0x14);
    pfVar2[1] = *(float *)(param_1 + 0x18);
    pfVar2[2] = *(float *)(param_1 + 0x1c);
    pfVar2[3] = 0.0;
    pfVar2[4] = -400.0;
    pfVar2[5] = 0.0;
    local_c = *pfVar2 + pfVar2[3];
    local_8 = pfVar2[4] + pfVar2[1];
    local_4 = pfVar2[5] + pfVar2[2];
    FUN_00579720(0,0,pfVar2,&local_c,1);
    iVar1 = FUN_00577e70();
    if (iVar1 != 0) {
      pfVar2[8] = DAT_006e92e8 - DAT_007734f0;
      return;
    }
    pfVar2[8] = 0.0;
  }
  return;
}

