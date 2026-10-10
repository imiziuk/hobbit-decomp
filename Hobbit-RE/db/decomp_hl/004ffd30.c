
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ffd30(void)

{
  char cVar1;
  LANGID LVar2;
  LPCSTR pCVar3;
  DWORD DVar4;
  int iVar5;
  undefined1 *puVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  CHAR *pCVar10;
  LPCSTR pCVar11;
  LPCSTR pCVar12;
  undefined1 auStack_344 [4];
  UINT UStack_340;
  undefined4 uStack_33c;
  LPCSTR pCStack_338;
  CHAR aCStack_30c [256];
  CHAR aCStack_20c [256];
  CHAR aCStack_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d6811;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0064e7d0();
  LVar2 = GetUserDefaultLangID();
  FUN_005496c0();
  FUN_00649b20();
  iStack_4 = 0;
  FUN_0064e7d0();
  FUN_0064e7d0(s_Dialect__04X__Language__04X_00731288,LVar2,LVar2 & 0x3ff);
  FUN_00649920(auStack_344,&DAT_00731280,LVar2 & 0x3ff);
  pCVar10 = aCStack_30c;
  DVar4 = 0x100;
  pCVar11 = &DAT_0071fe94;
  iStack_4._0_1_ = 1;
  pCVar12 = pCStack_338;
  pCVar3 = (LPCSTR)FUN_00649940();
  DVar4 = GetPrivateProfileStringA(s_languages_00731274,pCVar3,pCVar11,pCVar10,DVar4,pCVar12);
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  FUN_00649950();
  if (DVar4 == 0) {
    FUN_0064e7d0();
  }
  else {
    FUN_0064e7d0(s_Locale_for_language__04X_is__s_00731254);
  }
  FUN_00649920(auStack_344);
  pCVar10 = aCStack_20c;
  DVar4 = 0x100;
  pCVar11 = &DAT_0075b6e0;
  iStack_4._0_1_ = 2;
  pCVar12 = pCStack_338;
  pCVar3 = (LPCSTR)FUN_00649940();
  DVar4 = GetPrivateProfileStringA(s_languages_00731274,pCVar3,pCVar11,pCVar10,DVar4,pCVar12);
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  FUN_00649950();
  if (DVar4 == 0) {
    FUN_0064e7d0();
  }
  else {
    FUN_0064e7d0(s_Locale_for_dialect__04X_is__s_00731210);
  }
  iVar9 = 1;
  if (1 < DAT_00815d40 + -1) {
LAB_004ffec6:
    iVar5 = FUN_00647ed0();
    if (iVar5 != 0) goto code_r0x004ffee1;
    pcVar7 = *(char **)(DAT_00815d44 + 4 + iVar9 * 4);
    pcVar8 = aCStack_30c;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      *pcVar8 = cVar1;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    puVar6 = (undefined1 *)FUN_00648010();
    if (puVar6 == (undefined1 *)0x0) {
      aCStack_20c[0] = '\0';
      FUN_0064e7d0();
    }
    else {
      pCVar10 = aCStack_20c;
      FUN_00647d10();
      *puVar6 = 0;
      FUN_0064e7d0(s_Command_line_Locale_for_language_007311a8,aCStack_30c,
                   CONCAT44(pCVar10,aCStack_20c));
    }
  }
LAB_004fff72:
  FUN_0064a2e0();
  FUN_0064e7d0();
  pCVar10 = aCStack_20c;
  if (aCStack_20c[0] == '\0') {
    pCVar10 = aCStack_30c;
  }
  FUN_0064e7d0();
  DVar4 = GetPrivateProfileSectionA(pCVar10,aCStack_10c,0x100,pCStack_338);
  if (DVar4 == 0) {
    FUN_0064e7d0();
    if (pCVar10 != aCStack_20c) {
      FUN_0064e7d0();
      goto LAB_00500056;
    }
    FUN_0064e7d0();
    pCVar10 = aCStack_30c;
    DVar4 = GetPrivateProfileSectionA(aCStack_30c,aCStack_10c,0x100,pCStack_338);
    if (DVar4 == 0) {
      FUN_0064e7d0();
      FUN_0064e7d0(s_Using_defaults_007310f0);
      goto LAB_00500056;
    }
  }
  FUN_0064e7d0();
LAB_00500056:
  GetPrivateProfileStringA(pCVar10,&DAT_007310dc,&DAT_0075b6e0,aCStack_10c,0x100,pCStack_338);
  FUN_0064a2e0();
  if (DAT_00760184 < 1) {
    FUN_0064e7d0();
  }
  else {
    DAT_0076018c = GetPrivateProfileIntA(pCVar10,&DAT_007310d4,0,pCStack_338);
    UStack_340 = GetPrivateProfileIntA(pCVar10,s_aspect_007310cc,0,pCStack_338);
    uStack_33c = 0;
    DAT_00760190 = (float)UStack_340 * _DAT_006e9360;
    DAT_00760194 = GetPrivateProfileIntA(pCVar10,s_charset_007310c4,0,pCStack_338);
    FUN_0064e7d0(s_Using_truetype_font__s___d___asp_00731090,DAT_00760160,DAT_0076018c,
                 (double)DAT_00760190);
  }
  DAT_00760198 = GetPrivateProfileIntA(pCVar10,s_binkStream_00731070,-1,pCStack_338);
  FUN_0064e7d0();
  FUN_00647d10(&DAT_007631f8,DAT_00760134);
  iStack_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = pvStack_c;
  return;
code_r0x004ffee1:
  iVar9 = iVar9 + 1;
  if (DAT_00815d40 + -1 <= iVar9) goto LAB_004fff72;
  goto LAB_004ffec6;
}

