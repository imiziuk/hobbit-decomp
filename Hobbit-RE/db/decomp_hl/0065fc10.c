
void FUN_0065fc10(int param_1)

{
  uint uVar1;
  
  uVar1 = 1 << ((byte)param_1 & 0x1f);
  if ((uVar1 & DAT_007eff64) == 0) {
    *(undefined **)(&DAT_007eff3c + DAT_007eff5c * 4) = &DAT_007edb3c + param_1 * 0x480;
    DAT_007eff5c = DAT_007eff5c + 1;
    DAT_007eff64 = DAT_007eff64 | uVar1;
  }
  return;
}

