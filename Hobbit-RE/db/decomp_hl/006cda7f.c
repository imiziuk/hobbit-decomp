
void FUN_006cda7f(byte *param_1,undefined4 param_2,LONG *param_3,int param_4,LONG param_5)

{
  LONG *Target;
  byte bVar1;
  code *pcVar2;
  int iVar3;
  DWORD DVar4;
  byte *pbVar5;
  int iVar6;
  HMODULE pHVar7;
  LONG LVar8;
  byte *pbVar9;
  bool bVar10;
  
  if (DAT_008160c8 == 0) {
    DAT_0075b1ac = GetModuleHandleA(PTR_s_kernel32_dll_0075b1a8);
    pcVar2 = (code *)_GetProcAddressInternal_8(DAT_0075b1ac,"GetFileAttributesW");
    if (((pcVar2 == (code *)0x0) || (iVar3 = (*pcVar2)(L"???.???"), iVar3 != -1)) ||
       (DVar4 = GetLastError(), DVar4 != 0x7b)) {
      DAT_008160c8 = 2;
      goto LAB_006cdad9;
    }
    DAT_008160c8 = 1;
LAB_006cdae8:
    iVar3 = 1;
    pbVar9 = PTR_s_kernel32_dll_0075b1a8;
    while (pbVar5 = param_1, pbVar9 != (byte *)0x0) {
      do {
        bVar1 = *pbVar5;
        bVar10 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_006cdb16:
          iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_006cdb1b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar10 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_006cdb16;
        pbVar9 = pbVar9 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_006cdb1b:
      if (iVar6 == 0) {
        Target = &DAT_0075b1a4 + iVar3 * 2;
        if (*Target == 0) {
          pHVar7 = LoadLibraryA((LPCSTR)param_1);
          if ((pHVar7 == (HMODULE)0x0) && (iVar3 == 0xd)) {
            pHVar7 = LoadLibraryA("security.dll");
          }
          LVar8 = InterlockedExchange(Target,(LONG)pHVar7);
          if (LVar8 != 0) {
            FreeLibrary(pHVar7);
          }
        }
        LVar8 = *Target;
        goto LAB_006cdbce;
      }
      iVar6 = iVar3 * 2;
      iVar3 = iVar3 + 1;
      pbVar9 = (&PTR_s_kernel32_dll_0075b1a8)[iVar6];
    }
  }
  else {
LAB_006cdad9:
    if (DAT_008160c8 == 1) goto LAB_006cdae8;
    if (param_4 != 0) goto LAB_006cdb31;
    LVar8 = DAT_0075b1a4;
    if (DAT_0075b1a4 == 0) {
      pHVar7 = (HMODULE)FUN_006cd7d4();
      if ((pHVar7 != (HMODULE)0x0) &&
         (LVar8 = InterlockedExchange(&DAT_0075b1a4,(LONG)pHVar7), LVar8 != 0)) {
        FreeLibrary(pHVar7);
      }
      LVar8 = DAT_0075b1a4;
      if (DAT_0075b1a4 != 0) goto LAB_006cdbce;
    }
    else {
LAB_006cdbce:
      param_4 = _GetProcAddressInternal_8(LVar8,param_2);
      if (param_4 != 0) goto LAB_006cdb31;
    }
  }
  param_4 = param_5;
LAB_006cdb31:
  InterlockedExchange(param_3,param_4);
  return;
}

