
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0065f0c0(void)

{
  HWND pHVar1;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (DAT_007f0308 == '\0') {
    pHVar1 = FindWindowA(s_Hobbit_Window_Class_0074ef54,(LPCSTR)0x0);
    if (pHVar1 != (HWND)0x0) {
      FUN_0065d0f0(0,s_The_Hobbit_is_already_running__0074ef68,0);
    }
    SetUnhandledExceptionFilter(FUN_0065ea60);
    uStack_4 = 0;
    uStack_8 = 8;
    _DAT_007f0ff4 = 8;
    SystemParametersInfoA(0x3a,8,&DAT_007f0ff4,0);
    SystemParametersInfoA(0x3b,8,&uStack_8,0);
    FUN_0065b960();
  }
  if ((DAT_007eff88 < 1) && ((DAT_007f0448 == 0 || (DAT_007f044c == 0)))) {
    FUN_0065e0a0(0,0x280,0x1e0,1);
    return;
  }
  FUN_0065e0a0(0,DAT_007f0448,DAT_007f044c,1);
  return;
}

