
undefined4 FUN_005afb00(undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006de60c;
  local_c = ExceptionList;
  switch(param_1) {
  case 0:
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x20);
    local_4 = 1;
    if (pvVar1 != (void *)0x0) {
      uVar2 = FUN_00567b80();
      ExceptionList = local_c;
      return uVar2;
    }
    break;
  case 1:
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x60);
    local_4 = 0;
    if (pvVar1 != (void *)0x0) {
      uVar2 = FUN_00568520();
      ExceptionList = local_c;
      return uVar2;
    }
    break;
  case 2:
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x58);
    local_4 = 2;
    if (pvVar1 != (void *)0x0) {
      uVar2 = FUN_00569570();
      ExceptionList = local_c;
      return uVar2;
    }
    break;
  case 3:
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x10);
    local_4 = 3;
    if (pvVar1 != (void *)0x0) {
      uVar2 = FUN_0056a060();
      ExceptionList = local_c;
      return uVar2;
    }
  }
  ExceptionList = local_c;
  return 0;
}

