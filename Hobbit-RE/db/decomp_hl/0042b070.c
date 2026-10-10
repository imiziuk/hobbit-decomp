
void __fastcall FUN_0042b070(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int local_4;
  
  puVar4 = &DAT_00720e08;
  local_4 = param_1;
  uVar1 = FUN_005496c0("BilboControlSetup7.bin",s_CSIDL_APPDATA_The_Hobbit_00720d9c);
  iVar2 = FUN_0064f210(uVar1,puVar4);
  if (iVar2 != 0) {
    iVar3 = 0x56;
    local_4 = 0x56;
    FUN_0064f420(&local_4,4,1,iVar2);
    do {
      FUN_0064f420(param_1,4,1,iVar2);
      param_1 = param_1 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    FUN_0064f2b0(iVar2);
    return;
  }
  FUN_0064e7d0(s_WARNING__unable_to_save_control_m_00720dc0);
  return;
}

