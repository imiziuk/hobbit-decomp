
void * FUN_006c65ab(void)

{
  char cVar1;
  short sVar2;
  undefined *puVar3;
  short *psVar4;
  short *psVar5;
  size_t _Size;
  void *pvVar6;
  int iVar7;
  char *pcVar8;
  void *pvVar10;
  short *psVar11;
  LPCH pCVar12;
  undefined4 uVar13;
  char *pcVar9;
  
  puVar3 = PTR_FUN_0075b2d0;
  pvVar10 = (void *)0x0;
  psVar11 = (short *)0x0;
  pCVar12 = (LPCH)0x0;
  if (DAT_00815f14 == 0) {
    psVar11 = (short *)(*(code *)PTR_FUN_0075b2d0)();
    if (psVar11 != (short *)0x0) {
      DAT_00815f14 = 1;
LAB_006c6602:
      if ((psVar11 == (short *)0x0) &&
         (psVar11 = (short *)(*(code *)puVar3)(), psVar11 == (short *)0x0)) {
        return (void *)0x0;
      }
      puVar3 = PTR_FUN_0075b2ec;
      sVar2 = *psVar11;
      psVar5 = psVar11;
      while (sVar2 != 0) {
        do {
          psVar4 = psVar5;
          psVar5 = psVar4 + 1;
        } while (*psVar5 != 0);
        psVar5 = psVar4 + 2;
        sVar2 = *psVar5;
      }
      uVar13 = 0;
      _Size = (*(code *)PTR_FUN_0075b2ec)(0,0,psVar11,((int)psVar5 - (int)psVar11 >> 1) + 1,0,0,0,0)
      ;
      if (((_Size != 0) && (pvVar6 = _malloc(_Size), pvVar6 != (void *)0x0)) &&
         (pvVar10 = pvVar6, iVar7 = (*(code *)puVar3)(0,0,psVar11,uVar13,pvVar6,_Size,0,0),
         iVar7 == 0)) {
        FUN_006c1d53(pvVar10);
        pvVar10 = (void *)0x0;
      }
      (*(code *)PTR_FUN_0075b2c8)(psVar11);
      return pvVar10;
    }
    pCVar12 = GetEnvironmentStrings();
    if (pCVar12 == (LPCH)0x0) {
      return (void *)0x0;
    }
    DAT_00815f14 = 2;
  }
  else {
    if (DAT_00815f14 == 1) goto LAB_006c6602;
    if (DAT_00815f14 != 2) {
      return (void *)0x0;
    }
  }
  if ((pCVar12 == (LPCH)0x0) && (pCVar12 = GetEnvironmentStrings(), pCVar12 == (LPCH)0x0)) {
    return (void *)0x0;
  }
  cVar1 = *pCVar12;
  pcVar8 = pCVar12;
  while (cVar1 != '\0') {
    do {
      pcVar9 = pcVar8;
      pcVar8 = pcVar9 + 1;
    } while (*pcVar8 != '\0');
    pcVar8 = pcVar9 + 2;
    cVar1 = *pcVar8;
  }
  pvVar10 = _malloc((size_t)(pcVar8 + (1 - (int)pCVar12)));
  if (pvVar10 == (void *)0x0) {
    pvVar10 = (void *)0x0;
  }
  else {
    FUN_006c2dc0(pvVar10,pCVar12,pcVar8 + (1 - (int)pCVar12));
  }
  FreeEnvironmentStringsA(pCVar12);
  return pvVar10;
}

