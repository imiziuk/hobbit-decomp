
void FUN_004ffc40(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar3 = &DAT_00720db8;
  uVar1 = FUN_005496c0(s_CameraSettings_bin_00731040,s_CSIDL_APPDATA_The_Hobbit_00720d9c);
  iVar2 = FUN_0064f210(uVar1,puVar3);
  if (iVar2 != 0) {
    FUN_0064f350(&DAT_00760128,4,1,iVar2);
    FUN_0064f350(&DAT_0076012c,4,1,iVar2);
    FUN_0064f350(&DAT_00760130,4,1,iVar2);
    FUN_0064f2b0(iVar2);
  }
  return;
}

