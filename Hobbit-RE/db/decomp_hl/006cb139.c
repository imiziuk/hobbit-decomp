
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006cb139(void)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  char *_Str1;
  DWORD DVar4;
  int iVar5;
  size_t sVar6;
  char *_Source;
  int local_8;
  
  FUN_006c56f9(0xc);
  DAT_0075ad60 = 0xffffffff;
  DAT_0075ad50 = 0xffffffff;
  DAT_00815f78 = 0;
  _Str1 = (char *)FUN_006c15ef(&DAT_006fdb9c);
  if (_Str1 == (char *)0x0) {
    FUN_006c575a(0xc);
    DVar4 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_00815f80);
    puVar3 = PTR_FUN_0075b2ec;
    if (DVar4 == 0xffffffff) {
      return;
    }
    DAT_0075acbc = DAT_00815f80 * 0x3c;
    DAT_00815f78 = 1;
    if (DAT_00815fc6 != 0) {
      DAT_0075acbc = DAT_0075acbc + DAT_00815fd4 * 0x3c;
    }
    if ((DAT_0081601a == 0) || (DAT_00816028 == 0)) {
      DAT_0075acc0 = 0;
      _DAT_0075acc4 = 0;
    }
    else {
      DAT_0075acc0 = 1;
      _DAT_0075acc4 = (DAT_00816028 - DAT_00815fd4) * 0x3c;
    }
    iVar5 = (*(code *)PTR_FUN_0075b2ec)
                      (DAT_00815f44,0x220,&DAT_00815f84,0xffffffff,PTR_DAT_0075ad48,0x3f,0,&local_8)
    ;
    if ((iVar5 == 0) || (local_8 != 0)) {
      *PTR_DAT_0075ad48 = 0;
    }
    else {
      PTR_DAT_0075ad48[0x3f] = 0;
    }
    iVar5 = (*(code *)puVar3)(DAT_00815f44,0x220,&DAT_00815fd8,0xffffffff,PTR_DAT_0075ad4c,0x3f,0,
                              &local_8);
    if ((iVar5 != 0) && (local_8 == 0)) {
      PTR_DAT_0075ad4c[0x3f] = 0;
      return;
    }
LAB_006cb3aa:
    *PTR_DAT_0075ad4c = 0;
  }
  else {
    if ((*_Str1 != '\0') &&
       ((DAT_0081602c == (char *)0x0 || (iVar5 = _strcmp(_Str1,DAT_0081602c), iVar5 != 0)))) {
      FUN_006c1d53(DAT_0081602c);
      sVar6 = _strlen(_Str1);
      DAT_0081602c = (char *)_malloc(sVar6 + 1);
      if (DAT_0081602c != (char *)0x0) {
        FUN_006c9dd0(DAT_0081602c,_Str1);
        FUN_006c575a(0xc);
        _strncpy(PTR_DAT_0075ad48,_Str1,3);
        _Source = _Str1 + 3;
        PTR_DAT_0075ad48[3] = 0;
        cVar2 = *_Source;
        if (cVar2 == '-') {
          _Source = _Str1 + 4;
        }
        iVar5 = FUN_006c2430(_Source);
        DAT_0075acbc = iVar5 * 0xe10;
        for (; (cVar1 = *_Source, cVar1 == '+' || (('/' < cVar1 && (cVar1 < ':'))));
            _Source = _Source + 1) {
        }
        if (*_Source == ':') {
          _Source = _Source + 1;
          iVar5 = FUN_006c2430(_Source);
          DAT_0075acbc = DAT_0075acbc + iVar5 * 0x3c;
          for (; ('/' < *_Source && (*_Source < ':')); _Source = _Source + 1) {
          }
          if (*_Source == ':') {
            _Source = _Source + 1;
            iVar5 = FUN_006c2430(_Source);
            DAT_0075acbc = DAT_0075acbc + iVar5;
            for (; ('/' < *_Source && (*_Source < ':')); _Source = _Source + 1) {
            }
          }
        }
        if (cVar2 == '-') {
          DAT_0075acbc = -DAT_0075acbc;
        }
        DAT_0075acc0 = (int)*_Source;
        if (DAT_0075acc0 != 0) {
          _strncpy(PTR_DAT_0075ad4c,_Source,3);
          PTR_DAT_0075ad4c[3] = 0;
          return;
        }
        goto LAB_006cb3aa;
      }
    }
    FUN_006c575a(0xc);
  }
  return;
}

