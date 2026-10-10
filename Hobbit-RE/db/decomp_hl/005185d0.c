
int * FUN_005185d0(undefined4 param_1,undefined4 param_2,void *param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  void *pvVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d747b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar1 = operator_new(0x1f90);
  piVar2 = (int *)0x0;
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    piVar2 = (int *)FUN_00518660();
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0x8c))(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  ExceptionList = param_3;
  return piVar2;
}

