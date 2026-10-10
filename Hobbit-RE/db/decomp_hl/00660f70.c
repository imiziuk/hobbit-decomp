
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00660f70(void)

{
  undefined *puVar1;
  DWORD DVar2;
  DWORD DVar3;
  HWND pHVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_EBX;
  int iVar7;
  int unaff_EBP;
  int iVar8;
  int unaff_ESI;
  undefined4 *puVar9;
  DWORD DVar10;
  int unaff_EDI;
  undefined4 *puVar11;
  DWORD DVar12;
  int *piVar13;
  tagRECT *ptVar14;
  int *piVar15;
  LPRECT lpRect;
  UINT cPoints;
  int iStack_50;
  int iStack_4c;
  tagRECT local_48;
  tagRECT tStack_38;
  tagRECT atStack_28 [2];
  
  if ((DAT_007f02dc == 0) && (DAT_007f00f0 == 0)) {
    FUN_0064e7d0(s_Cutting_out_of_OnUserReset_0074f144);
    return 0;
  }
  if (DAT_007f1428 != '\0') {
    FUN_0064e7d0(s_OnUserReset_recursed_0074f1d0);
    return 1;
  }
  FUN_0064e7d0(s_OnUserReset_0074f160);
  DAT_007f1428 = 1;
  FUN_00660da0();
  GetClientRect(DAT_007edadc,&local_48);
  atStack_28[0].top = local_48.top;
  atStack_28[0].left = local_48.left;
  atStack_28[0].right = local_48.right;
  atStack_28[0].bottom = local_48.bottom;
  pHVar4 = GetParent(DAT_007edadc);
  lpRect = atStack_28;
  if (pHVar4 == (HWND)0x0) {
    GetWindowRect(DAT_007edadc,lpRect);
  }
  else {
    cPoints = 2;
    pHVar4 = GetParent(DAT_007edadc);
    MapWindowPoints(DAT_007edadc,pHVar4,(LPPOINT)lpRect,cPoints);
  }
  if (DAT_007f0464 != 0) {
    DAT_007f012c = atStack_28[0].left;
    DAT_007f0130 = atStack_28[0].top;
  }
  iVar8 = local_48.right - local_48.left;
  iVar7 = local_48.bottom - local_48.top;
  iStack_50 = iVar8;
  iStack_4c = iVar7;
  if (DAT_007f02dc != 0) {
    puVar9 = &DAT_007f0448;
    puVar11 = &DAT_007f00f0;
    for (iVar6 = 0xd; iVar7 = DAT_007f02e4, iVar8 = DAT_007f02e0, iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    DAT_007f00f0 = DAT_007f02e0;
    iStack_50 = DAT_007f02e0;
    DAT_007f00f4 = DAT_007f02e4;
    iStack_4c = DAT_007f02e4;
    DAT_007f010c = DAT_007f02ec;
    _DAT_007f00f8 = DAT_007f02e8;
    FUN_0064e7d0(s_Setting_back_buffer_format_to__0_0074f170,DAT_007f02e8);
    DAT_007f02dc = 0;
    DAT_007f02e0 = 0;
    DAT_007f02e4 = 0;
    DAT_007f02e8 = 0x15;
    DAT_007f02ec = 0;
  }
  puVar9 = &DAT_007f00f0;
  puVar11 = &DAT_007f0448;
  for (iVar6 = 0xd; DVar12 = DAT_007f0140, DVar10 = DAT_007f013c, DVar3 = DAT_007f0138,
      DVar2 = DAT_007f0134, iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  tStack_38.left = 0;
  tStack_38.top = 0;
  tStack_38.right = 0;
  tStack_38.bottom = 0;
  if (DAT_007f010c == 0) {
    AdjustWindowRectEx(&tStack_38,DAT_007f013c,0,DAT_007f0140);
    FUN_0065bb60(&iStack_50,&iStack_4c);
    local_48.right = (DAT_007f0124 - tStack_38.left) + tStack_38.right + iStack_50;
    local_48.bottom = (DAT_007f0128 - tStack_38.top) + tStack_38.bottom;
    local_48.left = DAT_007f0124;
    local_48.top = DAT_007f0128;
    iVar7 = iStack_4c;
    iVar8 = iStack_50;
  }
  else {
    AdjustWindowRectEx(&tStack_38,DAT_007f0134,0,DAT_007f0138);
    local_48.right = (DAT_007f012c - tStack_38.left) + tStack_38.right + iVar8;
    local_48.bottom = (DAT_007f0130 - tStack_38.top) + tStack_38.bottom;
    local_48.left = DAT_007f012c;
    local_48.top = DAT_007f0130;
    DVar10 = DVar2;
    DVar12 = DVar3;
  }
  puVar1 = PTR_FUN_0075b2f8;
  local_48.bottom = local_48.bottom + iVar7;
  (*(code *)PTR_FUN_0075b2f8)(DAT_007edadc,0xfffffff0,DVar10);
  (*(code *)puVar1)(DAT_007edadc,0xffffffec,DVar12);
  SetWindowPos(DAT_007edadc,(HWND)0xfffffffe,unaff_EDI,unaff_ESI,unaff_EBP - unaff_EDI,
               unaff_EBX - unaff_ESI,0x20);
  GetClientRect(DAT_007edadc,(LPRECT)&DAT_007eff78);
  DAT_007f00ed = 0;
  DAT_007f0450 = 0x15;
  DAT_007f0448 = iVar8;
  DAT_007f044c = iVar7;
  piVar15 = DAT_007f1000;
  iVar6 = (**(code **)(*DAT_007f1000 + 0x38))(DAT_007f1000,&DAT_007f0448);
  if (iVar6 == 0) {
    FUN_0064e7d0(s_OnUserReset__device_reset___d__d_0074f194,iVar8,iVar7);
    ptVar14 = &tStack_38;
    tStack_38.left = 0;
    tStack_38.top = 0;
    atStack_28[0].left = 0;
    atStack_28[0].top = 0x3f800000;
    piVar13 = DAT_007f1000;
    tStack_38.right = iVar8;
    tStack_38.bottom = iVar7;
    (**(code **)(*DAT_007f1000 + 0xa0))(DAT_007f1000,ptVar14);
    if (DAT_007edb14 != 0) {
      DAT_007edb14 = 0;
    }
    iVar8 = 0;
    (**(code **)(*DAT_007f1000 + 0x90))(DAT_007f1000,0,0,7,DAT_007edaf0,0x3f800000,0);
    DAT_007eff74 = 1;
    ShowWindow(DAT_007edadc,5);
    FUN_00660e80();
    FUN_0067d150((int)ptVar14 - iVar8,(int)piVar15 - (int)piVar13,0,0,7,0xc,8);
    GetClientRect(DAT_007edadc,(LPRECT)&DAT_007eff78);
    uVar5 = FUN_0065fd00(0);
    FUN_00660270(uVar5);
    DAT_007f1428 = 0;
    return 1;
  }
  FUN_0064e7d0(s_Failed_to_reset_device_0074f1b8);
  Sleep(1000);
  DAT_007f1428 = 0;
  return 1;
}

