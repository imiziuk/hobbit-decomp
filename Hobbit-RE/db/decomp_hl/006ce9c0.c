
undefined4 FUN_006ce9c0(LPCSTR param_1,byte param_2)

{
  DWORD DVar1;
  undefined4 *puVar2;
  
  DVar1 = GetFileAttributesA(param_1);
  if (DVar1 == 0xffffffff) {
    DVar1 = GetLastError();
    FUN_006c55d0(DVar1);
  }
  else {
    if (((DVar1 & 1) == 0) || ((param_2 & 2) == 0)) {
      return 0;
    }
    puVar2 = (undefined4 *)FUN_006c5643();
    *puVar2 = 0xd;
    puVar2 = (undefined4 *)FUN_006c564c();
    *puVar2 = 5;
  }
  return 0xffffffff;
}

