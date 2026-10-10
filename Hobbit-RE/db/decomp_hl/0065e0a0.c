
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0065e0a0(HWND param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  tagPOINT tStack_d4;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int *piStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int *piStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int *piStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int *piStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int *piStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int *piStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int *piStack_6c;
  tagRECT tStack_10;
  
  FUN_0065bcf0();
  if (DAT_007f00c4 < DAT_007f00bc + 1) {
    if (DAT_007f00cc == 0) {
      iVar2 = DAT_007f00c4 / 2;
      iVar5 = 1;
      if (0 < iVar2) {
        iVar5 = iVar2;
      }
      if (iVar5 + DAT_007f00bc < 1) {
        iVar2 = 1;
      }
      else {
        if (iVar2 < 1) {
          iVar2 = 1;
        }
        iVar2 = iVar2 + DAT_007f00bc;
      }
    }
    else {
      iVar2 = DAT_007f00cc + DAT_007f00bc;
    }
    pvVar3 = operator_new(iVar2 << 4);
    iVar5 = 0;
    if (0 < DAT_007f00bc) {
      iVar4 = 0;
      do {
        puVar6 = (undefined4 *)((int)DAT_007f00c0 + iVar4);
        puVar1 = (undefined4 *)(iVar4 + (int)pvVar3);
        *puVar1 = *puVar6;
        puVar1[1] = puVar6[1];
        puVar1[2] = puVar6[2];
        puVar1[3] = puVar6[3];
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x10;
      } while (iVar5 < DAT_007f00bc);
    }
    FUN_006bf840();
    DAT_007f00c0 = pvVar3;
    DAT_007f00c4 = iVar2;
  }
  DAT_007f00bc = DAT_007f00bc + 1;
  *(undefined1 *)((int)DAT_007f00c0 + 0xd) = 0;
  DAT_007f00a8 = 1;
  _DAT_007f00b0 = 0;
  DAT_007f00ac = 0xffffffff;
  FUN_00671230();
  DAT_007f0310 = Direct3DCreate8();
  if (DAT_007f0310 == 0) {
    FUN_0065d0f0();
  }
  if (param_1 == (HWND)0x0) {
    DAT_007edadc = (HWND)FUN_0065cd80();
    FUN_0065e490();
  }
  else {
    GetWindowRect(param_1,&tStack_10);
    DAT_007f0464 = 1;
    DAT_007edadc = (HWND)FUN_0065de70();
    GetClientRect(param_1,&tStack_10);
    FUN_0065e490();
  }
  DAT_007f0088 = DAT_007edadc;
  ShowWindow(DAT_007edadc,10);
  UpdateWindow(DAT_007edadc);
  FUN_0067d030();
  FUN_0067d150();
  FUN_0067d1e0();
  piStack_6c = (int *)0x65e2c1;
  DAT_007edae4 = CreateFontA(0xc,0,0,0,400,0,0,0,0,0,0,1,2,(LPCSTR)0x0);
  FUN_0067d9ce();
  FUN_0065c9a0();
  FUN_00674860();
  FUN_0066c130();
  DAT_007eff74 = 1;
  (**(code **)(*DAT_007f1000 + 200))();
  (**(code **)(*DAT_007f1000 + 200))();
  (**(code **)(*DAT_007f1000 + 200))();
  (**(code **)(*DAT_007f1000 + 200))();
  piStack_6c = DAT_007f1000;
  uStack_70 = 0x65e365;
  (**(code **)(*DAT_007f1000 + 200))();
  uStack_70 = 1;
  uStack_74 = 0x1b;
  piStack_78 = DAT_007f1000;
  uStack_7c = 0x65e377;
  (**(code **)(*DAT_007f1000 + 200))();
  uStack_7c = 5;
  uStack_80 = 0x13;
  piStack_84 = DAT_007f1000;
  uStack_88 = 0x65e389;
  (**(code **)(*DAT_007f1000 + 200))();
  uStack_88 = 6;
  uStack_8c = 0x14;
  piStack_90 = DAT_007f1000;
  uStack_94 = 0x65e39b;
  (**(code **)(*DAT_007f1000 + 200))();
  uStack_94 = 2;
  uStack_98 = 0x11;
  uStack_9c = 0;
  piStack_a0 = DAT_007f1000;
  uStack_a4 = 0x65e3ae;
  (**(code **)(*DAT_007f1000 + 0xfc))();
  uStack_a4 = 2;
  uStack_a8 = 0x10;
  uStack_ac = 0;
  piStack_b0 = DAT_007f1000;
  uStack_b4 = 0x65e3c1;
  (**(code **)(*DAT_007f1000 + 0xfc))();
  uStack_b4 = 2;
  uStack_b8 = 0x12;
  uStack_bc = 0;
  piStack_c0 = DAT_007f1000;
  uStack_c4 = 0x65e3d4;
  (**(code **)(*DAT_007f1000 + 0xfc))();
  uStack_c4 = 1;
  uStack_c8 = 0xd;
  uStack_cc = 0;
  tStack_d4.y = (LONG)DAT_007f1000;
  tStack_d4.x = 0x65e3e7;
  (**(code **)(*DAT_007f1000 + 0xfc))();
  tStack_d4.x = 1;
  (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,0,0xe);
  uStack_a8 = 0xff000000;
  FUN_0065caf0(&uStack_a8);
  (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x89,0);
  SystemParametersInfoA(0x11,1,(PVOID)0x0,2);
  GetCursorPos(&tStack_d4);
  _DAT_007effc0 = (float)tStack_d4.x;
  DAT_007effd0 = 0;
  _DAT_007effc4 = (float)tStack_d4.y;
  _DAT_007effb8 = FUN_0064cb70();
  FUN_00662930();
  DAT_007f02f0 = 0;
  return;
}

