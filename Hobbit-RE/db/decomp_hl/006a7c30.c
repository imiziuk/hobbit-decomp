
undefined4 FUN_006a7c30(uint param_1)

{
  char cVar1;
  
  if (((param_1 & 0xffff) < 0x100) && (((&DAT_0074c490)[param_1 & 0xffff] & 1) != 0)) {
    cVar1 = FUN_006a7c10(param_1);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}

