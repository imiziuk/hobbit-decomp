
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00559080(void)

{
  uint uVar1;
  
  uVar1 = __ftol();
  uVar1 = uVar1 & 0xff;
  (**(code **)(*DAT_007f1000 + 200))
            (DAT_007f1000,0x3c,((uVar1 << 8 | uVar1) << 8 | uVar1) << 8 | uVar1);
  return;
}

