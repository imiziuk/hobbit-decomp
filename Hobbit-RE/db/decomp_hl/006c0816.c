
undefined4 FUN_006c0816(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((*(byte *)(param_1 + 0xc) & 0x40) == 0) {
    FUN_006c4928(param_1);
    uVar1 = __fclose_lk(param_1);
    FUN_006c497a(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return uVar1;
}

