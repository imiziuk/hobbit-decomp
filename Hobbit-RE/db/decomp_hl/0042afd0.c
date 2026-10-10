
void FUN_0042afd0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int local_8;
  undefined4 local_4;
  
  puVar4 = &DAT_00720db8;
  uVar1 = FUN_005496c0("BilboControlSetup7.bin",s_CSIDL_APPDATA_The_Hobbit_00720d9c);
  iVar2 = FUN_0064f210(uVar1,puVar4);
  if (iVar2 == 0) {
    FUN_0042aba0();
    return;
  }
  FUN_0064f350(&local_8,4,1,iVar2);
  iVar3 = 0;
  if (0 < local_8) {
    do {
      FUN_0064f350(&local_4,4,1,iVar2);
      FUN_0042b110(iVar3,local_4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_8);
  }
  FUN_0064f2b0(iVar2);
  return;
}

