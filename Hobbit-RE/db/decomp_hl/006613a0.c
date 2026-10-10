
bool FUN_006613a0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_3c;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6922;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649b20(param_1);
  iVar1 = DAT_007f042c;
  local_4 = 0;
  param_1 = FUN_00669540(local_38);
  if (param_1 != DAT_007f042c) {
    iVar2 = FUN_0064a9c0(local_38,param_1 + 0xc);
    if (iVar2 == 0) {
      piVar3 = &param_1;
      goto LAB_00661419;
    }
  }
  local_3c = DAT_007f042c;
  piVar3 = &local_3c;
LAB_00661419:
  iVar2 = *piVar3;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return iVar2 != iVar1;
}

