
void __fastcall FUN_00557f20(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d9e68;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x9d0) != 0) {
    ExceptionList = &local_c;
    FUN_006bf840(*(int *)(param_1 + 0x9d0));
  }
  iVar1 = *(int *)(param_1 + 0x9d8);
  if (iVar1 != 0) {
    FUN_006c026a(iVar1,4,*(undefined4 *)(iVar1 + -4),FUN_00406ba0);
    FUN_006bf840(iVar1 + -4);
  }
  if (*(int *)(param_1 + 0xa00) != 0) {
    FUN_006bf840(*(int *)(param_1 + 0xa00));
  }
  *(undefined4 *)(param_1 + 0x9d0) = 0;
  *(undefined4 *)(param_1 + 0x9d8) = 0;
  *(undefined4 *)(param_1 + 0xa00) = 0;
  *(undefined4 *)(param_1 + 0x9cc) = 0xf172568c;
  local_4 = 0xffffffff;
  FUN_006c026a(param_1 + 0x238,0x78,0x10,&LAB_00557c70);
  ExceptionList = local_c;
  return;
}

