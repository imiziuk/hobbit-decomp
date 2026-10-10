
undefined4 FUN_006c3edc(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_006c56d0();
  DAT_00757f10 = TlsAlloc();
  if (DAT_00757f10 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_006c29f3(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_00757f10,lpTlsValue);
      if (BVar1 != 0) {
        FUN_006c3f30(lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}

