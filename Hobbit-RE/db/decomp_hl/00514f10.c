
undefined4
FUN_00514f10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d727b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x1c4);
  uVar2 = 0;
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_00514f90();
  }
  local_4 = 0xffffffff;
  FUN_00515350(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  ExceptionList = local_c;
  return uVar2;
}

