
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00583a80(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_006dc1d2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x1ac) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x1b0) = 0x7fffffff;
  local_4 = 1;
  uStack_3 = 0;
  FUN_00671410();
  local_4 = 2;
  FUN_006c043b(param_1 + 0x638,4,2,&LAB_00484230,FUN_00406ba0);
  _local_4 = CONCAT31(uStack_3,3);
  FUN_00649600(s____render_mgr__007407bb + 1);
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  _DAT_00815cdc = 0;
  _DAT_00815cd4 = 0;
  _DAT_00815cc8 = 0;
  FUN_00649720();
  ExceptionList = local_c;
  return param_1;
}

