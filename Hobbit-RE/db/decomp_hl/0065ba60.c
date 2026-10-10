
void FUN_0065ba60(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar3 = &DAT_0074e26c;
  uVar1 = FUN_005496c0(s_DisplaySettings_bin_0074e28c,s_CSIDL_APPDATA_The_Hobbit_0074e270);
  iVar2 = FUN_0064f210(uVar1,puVar3);
  if (iVar2 != 0) {
    FUN_0064f420(&DAT_007edb00,4,1,iVar2);
    FUN_0064f420(&DAT_007f0144,4,1,iVar2);
    FUN_0064f420(&DAT_007f0464,4,1,iVar2);
    FUN_0064f420(&DAT_007f0448,4,1,iVar2);
    FUN_0064f420(&DAT_007f044c,4,1,iVar2);
    FUN_0064f2b0(iVar2);
  }
  return;
}

