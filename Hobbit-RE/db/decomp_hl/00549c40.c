
undefined4 FUN_00549c40(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9669;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_static_bitmap_loader__Load_0073cc4c);
  local_4 = 0;
  pvVar1 = operator_new(0x20);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00650250();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  iVar3 = FUN_00652780(param_1);
  if (iVar3 == 0) {
    FUN_0064f190(local_10c,s_Fail_loading_a_texture____s_0073cc30,param_2);
  }
  FUN_00674c70(uVar2);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return uVar2;
}

