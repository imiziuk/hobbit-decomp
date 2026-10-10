
int * FUN_005c1170(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  int *piVar2;
  void *local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df3d3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_rigid_geom_loader__Load_00745d20);
  local_4 = 0;
  pvVar1 = operator_new(0x140);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_005c1340();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  (**(code **)(*piVar2 + 4))(param_1,param_2);
  pvStack_c = (void *)0xffffffff;
  FUN_00649720();
  ExceptionList = local_14;
  return piVar2;
}

