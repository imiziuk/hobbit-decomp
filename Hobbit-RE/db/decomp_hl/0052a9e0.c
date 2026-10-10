
void __fastcall FUN_0052a9e0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined4 local_38;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d8108;
  local_c = ExceptionList;
  piVar1 = (int *)(param_1 + 0x30);
  if (*(char *)(param_1 + 0x4c) == '\0') {
    iVar3 = *piVar1;
  }
  else {
    iVar3 = *(int *)*piVar1 + *piVar1;
  }
  if (iVar3 == 0) {
    ExceptionList = &local_c;
    uVar2 = FUN_0052ac90();
    FUN_00649920(local_40,s_title__s_xbmp_00735de8,uVar2);
    local_4 = 0;
    uVar2 = FUN_00649940();
    FUN_00649b20(uVar2);
    local_4._0_1_ = 2;
    FUN_00649950();
    uVar2 = FUN_005496c0(local_38,&DAT_0073065c);
    iVar3 = FUN_00652870(uVar2);
    if (iVar3 == 0) {
      FUN_00649920(local_3c,s_TITLE_Texture_Not_Found__UI1003__00735dc4,local_38);
      local_4._0_1_ = 3;
      FUN_00649940();
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_00649950();
    }
    else {
      FUN_00674c70(piVar1);
    }
    local_4 = 0xffffffff;
    FUN_00649ba0();
  }
  ExceptionList = local_c;
  return;
}

