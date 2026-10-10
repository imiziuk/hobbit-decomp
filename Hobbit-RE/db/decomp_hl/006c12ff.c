
uint FUN_006c12ff(int param_1)

{
  uint uVar1;
  
  if (1 < DAT_007589d8) {
    uVar1 = FUN_006c6f0c(param_1,4);
    return uVar1;
  }
  return (byte)PTR_DAT_007587cc[param_1 * 2] & 4;
}

