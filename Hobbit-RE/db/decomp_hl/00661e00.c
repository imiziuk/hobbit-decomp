
void FUN_00661e00(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  
  puVar4 = &DAT_0074f28c;
  uVar1 = FUN_005496c0(s_PerformanceSettings2_bin_0074f2ac,s_CSIDL_APPDATA_The_Hobbit_0074f290);
  iVar2 = FUN_0064f210(uVar1,puVar4);
  if (iVar2 != 0) {
    puVar3 = &DAT_007f016c;
    do {
      FUN_0064f420(puVar3,4,1,iVar2);
      puVar3 = puVar3 + 10;
    } while ((int)puVar3 < 0x7f02fc);
    FUN_0064f420(&DAT_007f02d8,4,1,iVar2);
    FUN_0064f2b0(iVar2);
  }
  return;
}

