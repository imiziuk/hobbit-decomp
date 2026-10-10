
void __fastcall FUN_00659d20(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6611;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x2264);
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_0064e870(7,s_Remaining_Loaded_Audio_Packages__0074e1c8);
  iVar2 = *(int *)(iVar1 + 8);
  while (iVar2 != 0) {
    FUN_00649920(&local_10,&DAT_0074e1ec,iVar2);
    local_4 = 0;
    uVar3 = FUN_00649940();
    FUN_0064e870(7,uVar3);
    local_4 = 0xffffffff;
    FUN_00649950();
    iVar1 = *(int *)(iVar1 + 4);
    iVar2 = *(int *)(iVar1 + 8);
  }
  ExceptionList = local_c;
  return;
}

