
void FUN_0064c520(float *param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  *param_2 = 0;
  if ((NAN(*param_1) || NAN(DAT_006e92e4)) != (*param_1 == DAT_006e92e4)) {
    *param_1 = 0.0;
    return;
  }
  fVar1 = *param_1;
  if (((uint)fVar1 & 0x7f800000) != 0) {
    *param_2 = ((uint)fVar1 >> 0x17 & 0xff) - 0x7e;
    *param_1 = (float)((uint)fVar1 & 0xbf7fffff | 0x3f000000);
    return;
  }
  uVar3 = (uint)fVar1 & 0x80000000;
  *param_2 = -0x7d;
  if (((uint)fVar1 & 0xff8000) == 0) {
    iVar2 = -0x7d;
    do {
      fVar1 = (float)((int)fVar1 << 8);
      iVar2 = iVar2 + -8;
    } while (((uint)fVar1 & 0xff8000) == 0);
    *param_2 = iVar2;
  }
  if (((uint)fVar1 & 0x800000) == 0) {
    iVar2 = *param_2;
    do {
      fVar1 = (float)((int)fVar1 << 1);
      iVar2 = iVar2 + -1;
    } while (((uint)fVar1 & 0x800000) == 0);
    *param_2 = iVar2;
  }
  *param_1 = (float)((uint)fVar1 & 0x7fffff | uVar3 | 0x3f000000);
  return;
}

