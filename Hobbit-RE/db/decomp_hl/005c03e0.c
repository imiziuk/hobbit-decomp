
uint FUN_005c03e0(uint param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_3 == 8) {
    uVar1 = 0;
  }
  else if (param_3 == 0x10) {
    uVar1 = 1;
  }
  else if (param_3 == 0x20) {
    uVar1 = (param_4 != 0) + 2;
  }
  return param_2 * 4 - 1U & 0xc | (param_1 & 0xf) << 4 | uVar1 & 3;
}

