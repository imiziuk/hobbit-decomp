
DWORD FUN_006c8806(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (DAT_00816480 <= param_1) {
LAB_006c8887:
    puVar4 = (undefined4 *)FUN_006c5643();
    *puVar4 = 9;
    return 0xffffffff;
  }
  iVar5 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_00816380)[(int)param_1 >> 5] + 4 + iVar5) & 1) == 0) goto LAB_006c8887;
  FUN_006ca856(param_1);
  if ((*(byte *)((&DAT_00816380)[(int)param_1 >> 5] + 4 + iVar5) & 1) != 0) {
    hFile = (HANDLE)FUN_006ca814(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    if (DVar2 == 0) goto LAB_006c887c;
    pDVar3 = (DWORD *)FUN_006c564c();
    *pDVar3 = DVar2;
  }
  puVar4 = (undefined4 *)FUN_006c5643();
  *puVar4 = 9;
  DVar2 = 0xffffffff;
LAB_006c887c:
  FUN_006ca8b5(param_1);
  return DVar2;
}

