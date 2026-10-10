
undefined8 FUN_0054b7c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006d9710;
  local_14 = ExceptionList;
  uVar4 = 0;
  ExceptionList = &local_14;
  FUN_006501d0(s_obj_mgr__CreateObject_0073ccfc);
  uVar3 = 0;
  local_c = 0;
  while ((puVar1 = *(undefined4 **)((int)&DAT_0076f908 + uVar3), puVar1 == (undefined4 *)0x0 ||
         (iVar2 = FUN_00647e40(puVar1[1],param_1), iVar2 != 0))) {
    uVar3 = uVar3 + 4;
    if (0x117 < uVar3) {
LAB_0054b86f:
      local_c = 0xffffffff;
      FUN_006501e0();
      ExceptionList = local_14;
      return uVar4;
    }
  }
  FUN_006501d0(puVar1[1]);
  local_c._0_1_ = 1;
  uVar4 = FUN_0054baf0(*puVar1,param_2,param_3,0);
  local_c = (uint)local_c._1_3_ << 8;
  FUN_006501e0();
  goto LAB_0054b86f;
}

