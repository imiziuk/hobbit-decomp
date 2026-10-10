
int * FUN_006088a0(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  void *unaff_ESI;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e3b1b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar1 = operator_new(0xb8);
  piVar2 = (int *)0x0;
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    piVar2 = (int *)FUN_0063ba80();
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 4))(param_1,param_2);
  ExceptionList = unaff_ESI;
  return piVar2;
}

