
uint FUN_0064cb70(void)

{
  DWORD DVar1;
  
  DVar1 = timeGetTime();
  if (DVar1 < DAT_007cd000) {
    return DAT_007cd000;
  }
  DAT_007cd000 = DVar1;
  return DVar1;
}

