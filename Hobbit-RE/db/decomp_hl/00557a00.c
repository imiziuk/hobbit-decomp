
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557a00(undefined4 param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9e10;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_logic_mgr__SingleStep_0073d9d8);
  local_4 = 0;
  FUN_006501d0(s_logic_mgr__SingleStep_0073d9d8);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (DAT_00798548 != 0) {
    DAT_00798548 = 0;
    FUN_0046a1c0();
    FUN_00590190();
    if ((DAT_007600e8 != 0) || (DAT_007600f0 != 0)) {
      _DAT_0075e390 = 1;
    }
  }
  piVar1 = (int *)FUN_00533930();
  FUN_00429100();
  FUN_0054c2e0(param_1);
  FUN_00429100();
  FUN_005c26a0(param_1);
  FUN_00589a80(param_1);
  FUN_0055cd20(param_1);
  FUN_0059c380(param_1);
  FUN_00551c20(param_1);
  FUN_0054fa20(param_1);
  FUN_005c1cb0(param_1);
  FUN_00572970(param_1);
  FUN_0056b2c0(param_1);
  FUN_0058e8c0(param_1);
  FUN_005c6460(param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(param_1);
    FUN_00532ff0(param_1);
  }
  FUN_004f29f0(param_1);
  FUN_00658330(param_1);
  FUN_00429100(param_1);
  FUN_00557ba0();
  local_4 = local_4 & 0xffffff00;
  FUN_006501e0();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

