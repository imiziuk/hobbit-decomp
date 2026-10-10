
int * __fastcall FUN_005a7910(int *param_1)

{
  int *piVar1;
  void *pvVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dde0e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_rigid_ri_pool_mgr__AcquireRI_00744358);
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  if (*param_1 == 0) {
    pvVar2 = operator_new(0x904);
    local_4._0_1_ = 1;
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      FUN_006c043b(pvVar2,0x48,0x20,FUN_005c1540,FUN_005c15b0);
      *(undefined4 *)((int)pvVar2 + 0x900) = 0;
    }
    *param_1 = (int)pvVar2;
    param_1[1] = (int)pvVar2;
    param_1[2] = 0;
    param_1[6] = 1;
    param_1[5] = 0x20;
  }
  local_4._0_1_ = 0;
  if (0x1f < param_1[2]) {
    if (*(int *)(param_1[1] + 0x900) == 0) {
      pvVar2 = operator_new(0x904);
      local_4._0_1_ = 2;
      if (pvVar2 == (void *)0x0) {
        pvVar2 = (void *)0x0;
      }
      else {
        FUN_006c043b(pvVar2,0x48,0x20,FUN_005c1540,FUN_005c15b0);
        *(undefined4 *)((int)pvVar2 + 0x900) = 0;
      }
      *(void **)(param_1[1] + 0x900) = pvVar2;
      param_1[1] = (int)pvVar2;
      param_1[6] = param_1[6] + 1;
      param_1[5] = param_1[5] + 0x20;
    }
    else {
      param_1[1] = *(int *)(param_1[1] + 0x900);
    }
    param_1[2] = 0;
  }
  local_4._0_1_ = 0;
  piVar1 = (int *)(param_1[1] + param_1[2] * 0x48);
  param_1[2] = param_1[2] + 1;
  (**(code **)(*piVar1 + 0x24))();
  param_1[4] = param_1[4] + 1;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return piVar1;
}

