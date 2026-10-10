
void __fastcall FUN_0052ab10(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d8128;
  local_c = ExceptionList;
  piVar1 = (int *)(param_1 + 0x50);
  if (*(char *)(param_1 + 0x6c) == '\0') {
    iVar3 = *piVar1;
  }
  else {
    iVar3 = *(int *)*piVar1 + *piVar1;
  }
  if (iVar3 == 0) {
    ExceptionList = &local_c;
    *(undefined4 *)(param_1 + 0x80) = 0;
    local_10 = param_1;
    uVar2 = FUN_005496c0(s_textbox_xbmp_00735e28,&DAT_0073065c);
    iVar3 = FUN_00652870(uVar2);
    if (iVar3 == 0) {
      FUN_00649920(&local_10,s_TITLE_Texture_Not_Found__UI1003__00735df8);
      local_4 = 0;
      FUN_00649940();
      local_4 = 0xffffffff;
      FUN_00649950();
      ExceptionList = local_c;
      return;
    }
    FUN_00674c70(piVar1);
  }
  ExceptionList = local_c;
  return;
}

