
void FUN_0064c600(float *param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  
  if ((NAN(*param_1) || NAN(DAT_006e92e4)) != (*param_1 == DAT_006e92e4)) {
    *param_1 = 0.0;
    return;
  }
  fVar1 = *param_1;
  param_2 = ((uint)fVar1 >> 0x17 & 0xff) + param_2;
  if (0 < param_2) {
    *param_1 = (float)((uint)fVar1 & 0x807fffff | param_2 * 0x800000);
    return;
  }
  uVar2 = (uint)fVar1 & 0x7fffff | 0x800000;
  if (param_2 < -6) {
    iVar3 = (-param_2 - 7U >> 3) + 1;
    param_2 = param_2 + iVar3 * 8;
    do {
      uVar2 = uVar2 >> 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (param_2 < 1) {
    param_2 = 1 - param_2;
    do {
      uVar2 = uVar2 >> 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  *param_1 = (float)(uVar2 | (uint)fVar1 & 0x80000000);
  return;
}

