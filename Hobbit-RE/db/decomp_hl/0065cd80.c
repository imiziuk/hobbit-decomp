
HWND FUN_0065cd80(void)

{
  char cVar1;
  HMONITOR hMonitor;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 uVar4;
  uint uVar5;
  wchar_t *pwVar6;
  HWND hWnd;
  wchar_t *pwVar7;
  uint uVar8;
  uint dwStyle;
  int unaff_retaddr;
  char *pcStack_9c;
  int iStack_98;
  LPARAM LStack_8c;
  undefined1 auStack_88 [4];
  HICON pHStack_84;
  undefined1 auStack_7c [36];
  char *pcStack_58;
  int iStack_54;
  char *pcStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_006e66ba;
  pvStack_c = ExceptionList;
  DAT_007eff68 = 1;
  ExceptionList = &pvStack_c;
  pHStack_84 = LoadIconA(DAT_007edad8,s_IDC_ICON1_0074e44c);
  auStack_7c._0_4_ = 3;
  auStack_7c._4_4_ = &LAB_0065d860;
  auStack_7c._8_4_ = 0;
  auStack_7c._12_4_ = 0;
  auStack_7c._16_4_ = DAT_007edad8;
  auStack_7c._20_4_ = pHStack_84;
  auStack_7c._24_4_ = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  auStack_7c._28_4_ = GetStockObject(0);
  auStack_7c._32_4_ = (LPCSTR)0x0;
  pcStack_58 = s_Hobbit_Window_Class_0074e458;
  RegisterClassA((WNDCLASSA *)auStack_7c);
  hMonitor = (HMONITOR)(**(code **)(*DAT_007f0310 + 0x38))(DAT_007f0310,DAT_007edafc);
  auStack_7c._32_4_ = (LPCSTR)0x48;
  BVar2 = GetMonitorInfoA(hMonitor,(LPMONITORINFO)(auStack_7c + 0x20));
  if (BVar2 == 0) {
    FUN_00649920(auStack_88,s_GetMonitorInfo_failed_for_adapte_0074e46c,DAT_007edafc);
    pvStack_c = (void *)0x0;
    DVar3 = GetLastError();
    uVar4 = FUN_00649940(DVar3);
    FUN_0065d0f0(0,uVar4);
    pvStack_c = (void *)0xffffffff;
    FUN_00649950();
  }
  dwStyle = 0x80080000;
  DAT_007f0134 = 0xcf0000;
  DAT_007f0138 = 0x40000;
  DAT_007f013c = 0x80080000;
  DAT_007f0140 = 0x40008;
  if (DAT_007f0464 == 0) {
    DVar3 = 0x40008;
  }
  else {
    dwStyle = 0xcf0000;
    DVar3 = 0x40000;
  }
  DAT_007eff88 = iStack_40 - (int)pcStack_48;
  DAT_007eff8c = iStack_3c - iStack_44;
  DAT_007f0124 = pcStack_48;
  DAT_007f0128 = iStack_44;
  DAT_007eff90 = 0x280;
  DAT_007eff94 = 0x1e0;
  if (DAT_007f0464 == 0) {
    pcStack_9c = pcStack_58;
    iStack_98 = iStack_54;
  }
  else {
    pcStack_9c = pcStack_48;
    iStack_98 = iStack_44;
  }
  AdjustWindowRectEx((LPRECT)&stack0xffffff54,dwStyle,0,DVar3);
  DAT_007f012c = pcStack_48;
  DAT_007f0130 = iStack_44;
  if (DAT_007edb30 != 0) goto LAB_0065d052;
  uVar5 = FUN_006c24c6(u_Hobbit_0074e494);
  if (0x7ffffffd < uVar5) {
    FUN_006bf8fc();
  }
  if (((DAT_007edb2c == (wchar_t *)0x0) ||
      (cVar1 = *(char *)((int)DAT_007edb2c + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar5 == 0) {
      FUN_006678a0(1);
      goto LAB_0065d052;
    }
    if ((0x1f < DAT_007edb34) || (DAT_007edb34 < uVar5)) {
      FUN_006678a0(1);
      goto LAB_0065d019;
    }
  }
  else {
    if (uVar5 == 0) {
      *(char *)((int)DAT_007edb2c + -1) = cVar1 + -1;
      DAT_007edb2c = (wchar_t *)0x0;
      DAT_007edb30 = 0;
      DAT_007edb34 = 0;
      goto LAB_0065d052;
    }
LAB_0065d019:
    FUN_00669340(uVar5);
  }
  pwVar7 = u_Hobbit_0074e494;
  pwVar6 = DAT_007edb2c;
  for (uVar8 = uVar5; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pwVar6 = *pwVar7;
    pwVar6 = pwVar6 + 1;
    pwVar7 = pwVar7 + 1;
  }
  DAT_007edb30 = uVar5;
  DAT_007edb2c[uVar5] = L'\0';
LAB_0065d052:
  hWnd = CreateWindowExA(DVar3,s_Hobbit_Window_Class_0074e4ac,s_Hobbit_0074e4a4,dwStyle | 0x10000000
                         ,(int)pcStack_9c,iStack_98,iStack_4,unaff_retaddr,(HWND)0x0,(HMENU)0x0,
                         DAT_007edad8,(LPVOID)0x0);
  SendMessageA(hWnd,0x80,1,LStack_8c);
  GetWindowRect(hWnd,(LPRECT)&DAT_007eff78);
  ExceptionList = pvStack_14;
  return hWnd;
}

