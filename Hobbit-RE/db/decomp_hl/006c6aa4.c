
void FUN_006c6aa4(DWORD param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  size_t sVar4;
  HANDLE hFile;
  int iVar5;
  char acStackY_1e3 [7];
  undefined1 *puStackY_1dc;
  char *pcStackY_1d8;
  undefined4 uStackY_1d4;
  undefined1 *puStackY_1d0;
  undefined4 uStackY_1cc;
  undefined1 *puStackY_1c8;
  undefined *puStackY_1c4;
  LPCVOID lpBuffer;
  LPDWORD lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  CHAR local_1a8 [260];
  undefined1 local_a4 [160];
  
  iVar5 = 0;
  pDVar2 = &DAT_00758628;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x7586b8);
  if (param_1 == (&DAT_00758628)[iVar5 * 2]) {
    if ((DAT_00815d90 == 1) || ((DAT_00815d90 == 0 && (DAT_00757e78 == 1)))) {
      lpNumberOfBytesWritten = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x75862c);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      puStackY_1c4 = (undefined *)0x6c6bed;
      hFile = GetStdHandle(0xfffffff4);
      puStackY_1c4 = (undefined *)0x6c6bf4;
      WriteFile(hFile,lpBuffer,sVar4,lpNumberOfBytesWritten,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_006c9dd0();
      }
      sVar4 = _strlen(local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen(local_1a8);
        puStackY_1c4 = (undefined *)0x6c6b6e;
        _strncpy(acStackY_1e3 + sVar4,&DAT_00755ef8,3);
      }
      FUN_006c9dd0();
      puStackY_1c4 = (undefined *)0x6c6b8f;
      FUN_006c9de0();
      puStackY_1c8 = local_a4;
      puStackY_1c4 = &DAT_006fdac4;
      uStackY_1cc = 0x6c6ba0;
      FUN_006c9de0();
      uStackY_1cc = *(undefined4 *)(iVar5 * 8 + 0x75862c);
      puStackY_1d0 = local_a4;
      uStackY_1d4 = 0x6c6bb2;
      FUN_006c9de0();
      uStackY_1d4 = 0x12010;
      puStackY_1dc = local_a4;
      pcStackY_1d8 = "Microsoft Visual C++ Runtime Library";
      acStackY_1e3[3] = -0x38;
      acStackY_1e3[4] = 'k';
      acStackY_1e3[5] = 'l';
      acStackY_1e3[6] = '\0';
      FUN_006cb968();
    }
  }
  return;
}

