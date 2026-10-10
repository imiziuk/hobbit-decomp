
undefined4 __thiscall FUN_0046a520(int param_1,int *param_2)

{
  uint uVar1;
  
  if (*param_2 == 0xe) {
    uVar1 = *(uint *)(param_1 + 0x194);
    if (((uVar1 & 4) == 0) && (((uVar1 & 2) == 0 || ((uVar1 & 1) != 0)))) {
      FUN_0046a550();
    }
    return 1;
  }
  return 0;
}

