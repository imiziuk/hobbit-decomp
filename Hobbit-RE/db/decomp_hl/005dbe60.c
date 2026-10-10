
void __fastcall FUN_005dbe60(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_58;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e0d28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0064e7d0(s_OVERLAY___s_00747368,*(undefined4 *)(param_1 + 0x44));
  FUN_0064afa0();
  local_4 = 0;
  uVar1 = FUN_006ab1a0(&DAT_0071da28,*(undefined4 *)(param_1 + 0x44));
  FUN_0064b7b0(uVar1);
  if (*(int *)(param_1 + 0x70) == 0) {
    FUN_00526640(&DAT_0071da20,local_58,0);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x44);
    uVar2 = FUN_006ab1a0(&DAT_0071da28,uVar1);
    uVar1 = FUN_006ab1d0(&DAT_0071da28,uVar1);
    FUN_0052d9b0(uVar1,uVar2);
  }
  FUN_005268b0(*(undefined4 *)(param_1 + 0x18));
  local_4 = 0xffffffff;
  FUN_0064b190();
  ExceptionList = local_c;
  return;
}

