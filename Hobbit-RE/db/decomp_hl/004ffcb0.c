
void FUN_004ffcb0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 local_4;
  
  puVar3 = &DAT_00720e08;
  uVar1 = FUN_005496c0(s_CameraSettings_bin_00731040,s_CSIDL_APPDATA_The_Hobbit_00720d9c);
  iVar2 = FUN_0064f210(uVar1,puVar3);
  if (iVar2 != 0) {
    local_4 = DAT_00762b08;
    FUN_0064f420(&local_4,4,1,iVar2);
    local_4 = DAT_00762b0c;
    FUN_0064f420(&local_4,4,1,iVar2);
    local_4 = DAT_00762b00;
    FUN_0064f420(&local_4,4,1,iVar2);
    FUN_0064f2b0(iVar2);
  }
  return;
}

