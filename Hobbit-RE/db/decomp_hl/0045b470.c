
undefined4 FUN_0045b470(void)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d04eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x170);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_0045b4d0(pvVar1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

