
void __fastcall FUN_005ad090(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006de1f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_StateController__UpdateCombat_00744b84);
  local_4 = 0;
  FUN_005c7ec0(*(undefined4 *)(param_1 + 0x19c),*(undefined4 *)(param_1 + 0x170),
               *(undefined4 *)(param_1 + 0x174));
  iVar1 = FUN_005c7e40();
  if (iVar1 == 0) {
    iVar1 = FUN_005c7e60(*(undefined4 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x174));
    if (iVar1 != 2) goto LAB_005ad118;
  }
  *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) | 0x400;
LAB_005ad118:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

