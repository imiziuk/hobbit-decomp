
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0065e490(void)

{
  HWND pHVar1;
  HWND pHVar2;
  int iVar3;
  int iVar4;
  HMONITOR hMonitor;
  BOOL BVar5;
  HDC hdc;
  undefined4 *puVar6;
  short *psVar7;
  bool bVar8;
  undefined8 uVar9;
  float fVar10;
  HWND pHStack_104;
  HWND pHStack_100;
  char *pcStack_fc;
  undefined4 *puStack_f8;
  tagRECT tStack_e0;
  undefined *puStack_d0;
  int *piStack_cc;
  LONG LStack_c8;
  undefined4 uStack_c4;
  tagMONITORINFO tStack_78;
  CHAR aCStack_50 [32];
  HWND pHStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006e67b2;
  pvStack_c = ExceptionList;
  uStack_c4 = 0x65e4b5;
  ExceptionList = &pvStack_c;
  FUN_00665200();
  pHVar2 = DAT_007edadc;
  uStack_c4 = 0x65e4c7;
  pHVar1 = GetParent(DAT_007edadc);
  while (pHVar1 != (HWND)0x0) {
    uStack_c4 = 0x65e4d3;
    pHVar2 = GetParent(pHVar2);
    uStack_c4 = 0x65e4d8;
    pHVar1 = GetParent(pHVar2);
  }
  uStack_c4 = 0x65e4e2;
  FUN_00670360();
  uStack_c4 = 0;
  LStack_c8 = DAT_007edafc;
  DAT_007f0ca8 = 0;
  piStack_cc = DAT_007f0310;
  puStack_d0 = (undefined *)0x65e505;
  iVar3 = (**(code **)(*DAT_007f0310 + 0x14))();
  if (iVar3 != 0) {
    puStack_d0 = (undefined *)DAT_007edafc;
    tStack_e0.right = (LONG)&stack0xffffff40;
    tStack_e0.bottom = (LONG)s_GetAdapterIdentifier_failed_for_a_0074ebc0;
    tStack_e0.top = 0x65e523;
    FUN_00649920();
    uStack_14 = 0;
    tStack_e0.bottom = 0x65e539;
    puStack_d0 = (undefined *)iVar3;
    tStack_e0.bottom = FUN_00649940();
    tStack_e0.right = (LONG)pvStack_c;
    tStack_e0.top = 0x65e547;
    FUN_0065d0f0();
    uStack_14 = 0xffffffff;
    puStack_d0 = (undefined *)0x65e55a;
    FUN_00649950();
  }
  puStack_d0 = &DAT_007f0438;
  tStack_e0.bottom = DAT_007edafc;
  tStack_e0.right = (LONG)DAT_007f0310;
  tStack_e0.top = 0x65e57a;
  iVar4 = (**(code **)(*DAT_007f0310 + 0x20))();
  iVar3 = iVar4;
  if (iVar4 < 0) {
    iVar3 = -iVar4;
  }
  if (iVar4 != 0) {
    if (iVar4 < 0) {
      iVar3 = -iVar3;
    }
    tStack_e0.top = DAT_007edafc;
    tStack_e0.left = (LONG)s_GetAdapterDisplayMode_failed_for_0074ec18;
    FUN_00649920();
    uStack_20 = 1;
    tStack_e0.left = 0x65e5c7;
    tStack_e0.top = iVar3;
    tStack_e0.left = FUN_00649940();
    FUN_0065d0f0();
    uStack_20 = 0xffffffff;
    tStack_e0.top = 0x65e5e1;
    FUN_00649950();
  }
  tStack_e0.top = DAT_007edafc;
  tStack_e0.left = (LONG)DAT_007f0310;
  hMonitor = (HMONITOR)(**(code **)(*DAT_007f0310 + 0x38))();
  tStack_78.cbSize = 0x48;
  BVar5 = GetMonitorInfoA(hMonitor,&tStack_78);
  if (BVar5 == 0) {
    FUN_00649920();
    uStack_28 = 2;
    GetLastError();
    FUN_00649940();
    FUN_0065d0f0();
    uStack_28 = 0xffffffff;
    FUN_00649950();
  }
  puStack_f8 = (undefined4 *)0x65e66e;
  hdc = CreateDCA(aCStack_50,(LPCSTR)0x0,(LPCSTR)0x0,(DEVMODEA *)0x0);
  iVar3 = GetDeviceCaps(hdc,0xc);
  iVar4 = GetDeviceCaps(hdc,4);
  tStack_e0.bottom = iVar4;
  puStack_d0 = (undefined *)GetDeviceCaps(hdc,6);
  if ((iVar4 == 0) || (puStack_d0 == (undefined *)0x0)) {
    _DAT_007eff6c = 1.3333334;
  }
  else {
    _DAT_007eff6c = (float)tStack_e0.bottom / (float)(int)puStack_d0;
  }
  DeleteDC(hdc);
  if (iVar3 < 0x20) {
    DAT_007f0464 = 0;
    iVar3 = 0x20;
  }
  puStack_f8 = (undefined4 *)0x65e6e9;
  (**(code **)(*DAT_007f0310 + 0x34))();
  DAT_007edb19 = DAT_007f0f2e & 1;
  DAT_007edb1a = '\x01' - (DAT_007f0fb0 == 0);
  DAT_007edb1b = (byte)(DAT_007f0fac >> 1) & 1;
  if (DAT_007edb39 == '\0') {
    if (DAT_007edb38 != '\0') {
      DAT_007f0fa8 = 2;
      DAT_007f0eb0 = 0;
      DAT_007f0eb4 = 0;
      goto LAB_0065e768;
    }
    if (1 < DAT_007f0fa8) goto LAB_0065e768;
  }
  else {
    DAT_007edb1b = 0;
    DAT_007f0fa8 = 2;
    DAT_007f0eb4 = 0x150;
LAB_0065e768:
    if (2 < DAT_007f0fa4) goto LAB_0065e790;
  }
  puStack_f8 = (undefined4 *)0x0;
  pcStack_fc = s_You_need_a_video_card_which_supp_0074ec70;
  pHStack_100 = pHStack_30;
  pHStack_104 = (HWND)0x65e784;
  FUN_0065d0f0();
LAB_0065e790:
  puStack_f8 = (undefined4 *)0x65e795;
  FUN_00661490();
  puStack_f8 = (undefined4 *)uStack_28;
  pcStack_fc = (char *)uStack_2c;
  pHStack_104 = (HWND)0x65e7ab;
  pHStack_100 = (HWND)iVar3;
  pcStack_fc = (char *)FUN_0065c3f0();
  if (pcStack_fc != (char *)0x0) {
    puStack_f8 = (undefined4 *)0x0;
    pHStack_100 = pHStack_30;
    pHStack_104 = (HWND)0x65e7ba;
    FUN_0065d0f0();
  }
  if ((DAT_007edb19 == 0) || (DAT_007edb1a == '\0')) {
    DAT_007edb08 = 3;
    pHStack_100 = (HWND)0x20;
  }
  else if (DAT_007edb1b == 0) {
    DAT_007edb08 = 2;
    pHStack_100 = (HWND)0x80;
  }
  else {
    DAT_007edb08 = 1;
    pHStack_100 = (HWND)0x40;
  }
  puStack_f8 = &DAT_007f1000;
  pcStack_fc = (char *)&DAT_007f0448;
  pHStack_104 = pHStack_30;
  iVar3 = (**(code **)(*DAT_007f0310 + 0x3c))
                    (DAT_007f0310,DAT_007edafc,(((byte)DAT_007edaec & 2) != 0) + '\x01');
  bVar8 = iVar3 < 0;
  if (bVar8) {
    iVar3 = -iVar3;
  }
  GetClientRect(pHStack_30,&tStack_e0);
  iVar4 = iVar3;
  if (bVar8) {
    iVar4 = -iVar3;
  }
  if (iVar4 != 0) {
    FUN_0065b920();
    FUN_0065ba60();
    if (bVar8) {
      iVar3 = -iVar3;
    }
    FUN_0065d0f0(pHStack_30,s_CreateDevice_failed__0074ecb8,iVar3);
  }
  (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x99,0);
  DAT_007edb0c = 1;
  if (DAT_007edb18 != '\0') {
    puVar6 = (undefined4 *)FUN_0065d4e0(&tStack_e0.top);
    MessageBoxA(pHStack_30,(LPCSTR)*puVar6,s_Hobbit_Display_Information_0074ecd0,0);
    FUN_00649ba0();
  }
  if ((DAT_007edb08 == 3) && (DAT_007f0308 == '\0')) {
    MessageBoxA(pHStack_30,s_Your_video_card_doesn_t_support_a_0074ed00,s_Hobbit_Message_0074ecec,0)
    ;
    DAT_007edb0c = 3;
  }
  GetClientRect(DAT_007edadc,(LPRECT)&DAT_007eff78);
  if (DAT_007f0448 != 0) {
    uVar9 = FUN_0065b910();
    if ((int)uVar9 != 0) {
      puStack_f8 = DAT_007f044c;
      pHStack_104 = (HWND)0x0;
      pHStack_100 = (HWND)0x0;
      pcStack_fc = (char *)(undefined4 *)((ulonglong)uVar9 >> 0x20);
      (**(code **)(*DAT_007f1000 + 0xa0))(DAT_007f1000,&pHStack_104);
    }
  }
  ShowWindow(DAT_007edadc,1);
  UpdateWindow(DAT_007edadc);
  SetActiveWindow(DAT_007edadc);
  BVar5 = 1;
  pHVar2 = (HWND)FUN_006605b0();
  DragAcceptFiles(pHVar2,BVar5);
  (**(code **)(*DAT_007f1000 + 0x4c))(DAT_007f1000,&DAT_007f04a8);
  iVar3 = 0;
  do {
    if (((0xff < (ushort)(&DAT_007f04a8)[iVar3]) || (0xff < (ushort)(&DAT_007f08a8)[iVar3])) ||
       (0xff < (ushort)(&DAT_007f06a8)[iVar3])) break;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x100);
  if (iVar3 == 0x100) {
    psVar7 = &DAT_007f06a8;
    do {
      psVar7[-0x100] = psVar7[-0x100] * 0x101;
      *psVar7 = *psVar7 * 0x101;
      psVar7[0x100] = psVar7[0x100] * 0x101;
      psVar7 = psVar7 + 1;
    } while ((int)psVar7 < 0x7f08a8);
  }
  fVar10 = DAT_007edb00;
  if (DAT_007edb00 <= DAT_006e92e4) {
    fVar10 = 1.0;
  }
  FUN_006608d0(fVar10);
  FUN_006c2518(0x20000,0x30000);
  ExceptionList = (void *)tStack_78.rcMonitor.top;
  return;
}

