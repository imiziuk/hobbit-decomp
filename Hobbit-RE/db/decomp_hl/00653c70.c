
undefined4 FUN_00653c70(void)

{
  undefined4 uVar1;
  DWORD DVar2;
  
  if (DAT_007e35fc == 0) {
    return 0;
  }
  DVar2 = GetCurrentThreadId();
  FUN_00653cf0();
  if (DAT_0074d6e0 != DVar2) {
    DAT_0074d6e0 = DVar2;
    DAT_007e3600 = FUN_00653b10(DVar2);
  }
  uVar1 = DAT_007e3600;
  FUN_00653d20();
  return uVar1;
}

