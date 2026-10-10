
void __fastcall FUN_00433bc0(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006cf6cc;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_0064ff40(*(undefined4 *)(param_1 + 0xb60),s_C__projects_meridian_Support_Obj_0072305c,700);
  local_4 = local_4 & 0xffffff00;
  if ((*(int *)(param_1 + 0xfc) != 2) && (iVar1 = *(int *)(param_1 + 0xf4), iVar1 != 0)) {
    FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
    FUN_006bf840(iVar1 + -4);
  }
  local_4 = 0xffffffff;
  if ((*(int *)(param_1 + 0xe0) != 2) && (iVar1 = *(int *)(param_1 + 0xd8), iVar1 != 0)) {
    FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
    FUN_006bf840(iVar1 + -4);
  }
  ExceptionList = local_c;
  return;
}

