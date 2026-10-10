
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0065de70(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  HMONITOR hMonitor;
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int unaff_retaddr;
  tagMONITORINFO tStack_5c;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  HWND pHStack_4;
  
  pHStack_4 = (HWND)0xffffffff;
  puStack_8 = &LAB_006e6787;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((DAT_007f1410 == 0) && (DAT_007f1410 = 1, ExceptionList = &pvStack_c, param_4 != 0)) {
    ExceptionList = &pvStack_c;
    FUN_00655430();
  }
  DAT_007eff68 = 0;
  _DAT_007efff8 = 0;
  _DAT_007efffc = 0;
  _DAT_007f0000 = 0;
  _DAT_007f0004 = 0;
  _DAT_007f0008 = 0;
  _DAT_007f000c = 0;
  _DAT_007f0010 = 0;
  _DAT_007f0014 = 0;
  _DAT_007f0018 = 0;
  _DAT_007f001c = 0;
  _DAT_007f0020 = 0;
  _DAT_007f0024 = 0;
  DAT_007f0028 = 0;
  DAT_007f002c = 0;
  DAT_007f0030 = 0;
  DAT_007f0034 = 0;
  uVar4 = FUN_0064cb70();
  DAT_007f003c = (undefined4)((ulonglong)uVar4 >> 0x20);
  DAT_007f0038 = (undefined4)uVar4;
  DAT_007f0134 = 0x40000000;
  DAT_007f0138 = 0;
  DAT_007f013c = 0x80000000;
  DAT_007f0140 = 0x40008;
  hMonitor = (HMONITOR)(**(code **)(*DAT_007f0310 + 0x38))(DAT_007f0310,DAT_007edafc);
  tStack_5c.cbSize = 0x48;
  BVar1 = GetMonitorInfoA(hMonitor,&tStack_5c);
  if (BVar1 == 0) {
    FUN_00649920(&stack0xffffff78,s_GetMonitorInfo_failed_for_adapte_0074eb14,DAT_007edafc);
    pvStack_c = (void *)0x0;
    DVar2 = GetLastError();
    uVar3 = FUN_00649940(DVar2);
    FUN_0065d0f0(0,uVar3);
    pvStack_c = (void *)0xffffffff;
    FUN_00649950();
  }
  DAT_007eff88 = tStack_5c.rcWork.right - tStack_5c.rcWork.left;
  DAT_007eff8c = tStack_5c.rcWork.bottom - tStack_5c.rcWork.top;
  DAT_007eff90 = 0x280;
  DAT_007eff94 = 0x1e0;
  LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  GetStockObject(0);
  RegisterClassA((WNDCLASSA *)&stack0xffffff7c);
  CreateWindowExA(DAT_007f0138,s_Hobbit_Window_Class_0074eb50,(LPCSTR)0x0,DAT_007f0134,0,0,
                  unaff_retaddr,param_1,pHStack_4,(HMENU)0x0,DAT_007edad8,(LPVOID)0x0);
  ExceptionList = pvStack_14;
  return;
}

