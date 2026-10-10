
undefined4 FUN_006c4a29(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_006ca814(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_006ca814(2);
      iVar2 = FUN_006ca814(1);
      if (iVar2 == iVar1) goto LAB_006c4a77;
    }
    hObject = (HANDLE)FUN_006ca814(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_006c4a79;
    }
  }
LAB_006c4a77:
  DVar4 = 0;
LAB_006c4a79:
  FUN_006ca795(param_1);
  *(undefined1 *)((&DAT_00816380)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_006c55d0(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

