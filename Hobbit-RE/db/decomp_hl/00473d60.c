
undefined4 FUN_00473d60(undefined4 *param_1)

{
  int iVar1;
  int extraout_ECX;
  
  iVar1 = FUN_004021c0(*param_1,param_1[1]);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x7c) == '\x11')) {
    iVar1 = FUN_0046adc0();
    if ((iVar1 == 0) || ((*(byte *)(extraout_ECX + 0x194) & 1) != 0)) {
      return 1;
    }
  }
  return 0;
}

