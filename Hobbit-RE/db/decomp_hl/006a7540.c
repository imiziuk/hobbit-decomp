
undefined4
FUN_006a7540(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e7c0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0xec);
  uVar2 = 0;
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_006a75c0();
  }
  local_4 = 0xffffffff;
  FUN_006a5570(param_1,param_2,param_3,param_4,param_5);
  ExceptionList = local_c;
  return uVar2;
}

