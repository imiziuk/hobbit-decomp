
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ffba0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar3 = &DAT_00720e08;
  uVar1 = FUN_005496c0(s_AudioSettings_bin_0073102c,s_CSIDL_APPDATA_The_Hobbit_00720d9c);
  iVar2 = FUN_0064f210(uVar1,puVar3);
  if (iVar2 != 0) {
    local_8 = DAT_00762ae0;
    FUN_0064f420(&local_8,4,1,iVar2);
    local_8 = _DAT_00762ae4;
    FUN_0064f420(&local_8,4,1,iVar2);
    local_8 = _DAT_00762ae8;
    FUN_0064f420(&local_8,4,1,iVar2);
    local_4 = DAT_00762afc;
    FUN_0064f420(&local_4,4,1,iVar2);
    FUN_0064f2b0(iVar2);
  }
  return;
}

