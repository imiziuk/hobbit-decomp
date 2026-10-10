
void FUN_0065b960(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 local_8;
  int local_4;
  
  if (DAT_007edb1c != '\0') {
    FUN_0065b920();
    DAT_007edb1c = 0;
    return;
  }
  puVar3 = &DAT_0074e238;
  DAT_007edb00 = 0x3f800000;
  DAT_007f0144 = 0x20;
  DAT_007f0464 = 0;
  uVar1 = FUN_005496c0(s_DisplaySettings_bin_0074e258,s_CSIDL_APPDATA_The_Hobbit_0074e23c);
  iVar2 = FUN_0064f210(uVar1,puVar3);
  if (iVar2 != 0) {
    FUN_0064f350(&DAT_007edb00,4,1,iVar2);
    FUN_0064f350(&DAT_007f0144,4,1,iVar2);
    FUN_0064f350(&DAT_007f0464,4,1,iVar2);
    FUN_0064f350(&local_4,4,1,iVar2);
    FUN_0064f350(&local_8,4,1,iVar2);
    if (DAT_007f0448 == 0) {
      DAT_007f044c = local_8;
      DAT_007f0448 = local_4;
    }
    FUN_0064f2b0(iVar2);
  }
  DAT_007f0464 = 0;
  DAT_007f0144 = 0x20;
  return;
}

