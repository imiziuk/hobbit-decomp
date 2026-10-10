
int __thiscall FUN_0052f6a0(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_38 [11];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d8598;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x88) != 0) {
    ExceptionList = &local_c;
    FUN_00674e10(param_1 + 0x78);
  }
  FUN_00650380();
  FUN_0064a670(local_38,param_1 + 0x98,param_2 * 0xa8 + *(int *)(param_1 + 0xc));
  local_4 = 0;
  FUN_0064a210(".hobbit",s__xbmp_007306e8,0);
  iVar1 = FUN_00652870(local_38[0]);
  if (iVar1 != 0) {
    FUN_00674c70(param_1 + 0x78);
  }
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return param_1 + 0x78;
}

