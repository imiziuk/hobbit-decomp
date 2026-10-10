
DWORD * FUN_006c3f43(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = (DWORD *)TlsGetValue(DAT_00757f10);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_006c29f3(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_00757f10,lpTlsValue);
      if (BVar1 != 0) {
        FUN_006c3f30(lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_006c3f9e;
      }
    }
    __amsg_exit(0x10);
  }
LAB_006c3f9e:
  SetLastError(dwErrCode);
  return lpTlsValue;
}

