
void FUN_0053c940(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = (uVar1 & 0xff00 | uVar1 << 0x10) << 8 | (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8;
  return;
}

