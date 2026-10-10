
DWORD __thiscall FUN_00682d35(undefined4 *param_1,LPCSTR param_2,int param_3)

{
  undefined *puVar1;
  HANDLE pvVar2;
  LPVOID pvVar3;
  DWORD DVar4;
  CHAR aCStack_c8 [4];
  _OSVERSIONINFOA local_9c;
  undefined4 local_8;
  
  if (param_2 == (LPCSTR)0x0) {
    return 0x8876086c;
  }
  if (param_3 != 0) {
    local_9c.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_9c);
    puVar1 = PTR_FUN_0075b2ec;
    if (local_9c.dwPlatformId != 2) {
      aCStack_c8[0] = '\0';
      aCStack_c8[1] = '\0';
      aCStack_c8[2] = '\0';
      aCStack_c8[3] = '\0';
      local_8 = (*(code *)PTR_FUN_0075b2ec)();
      FUN_006c04f0();
      (*(code *)puVar1)(0,0,param_2,0xffffffff,aCStack_c8,local_8,0,0);
      param_3 = 0;
      param_2 = aCStack_c8;
    }
    if (param_3 != 0) {
      aCStack_c8[0] = -0x32;
      aCStack_c8[1] = '-';
      aCStack_c8[2] = 'h';
      aCStack_c8[3] = '\0';
      pvVar2 = (HANDLE)(*(code *)PTR_FUN_0075b2c0)();
      goto LAB_00682de9;
    }
  }
  aCStack_c8[0] = -0x17;
  aCStack_c8[1] = '-';
  aCStack_c8[2] = 'h';
  aCStack_c8[3] = '\0';
  pvVar2 = CreateFileA(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x10000000,(HANDLE)0x0);
LAB_00682de9:
  *param_1 = pvVar2;
  if (pvVar2 != (HANDLE)0xffffffff) {
    pvVar2 = CreateFileMappingA(pvVar2,(LPSECURITY_ATTRIBUTES)0x0,2,0,0,(LPCSTR)0x0);
    param_1[1] = pvVar2;
    if (pvVar2 != (HANDLE)0xffffffff) {
      pvVar3 = MapViewOfFile(pvVar2,4,0,0,0);
      param_1[2] = pvVar3;
      if (pvVar3 != (LPVOID)0x0) {
        DVar4 = GetFileSize((HANDLE)*param_1,(LPDWORD)0x0);
        param_1[3] = DVar4;
        if (DVar4 != 0xffffffff) {
          return 0;
        }
      }
    }
  }
  DVar4 = GetLastError();
  if (0 < (int)DVar4) {
    DVar4 = DVar4 & 0xffff | 0x80070000;
  }
  return DVar4;
}

