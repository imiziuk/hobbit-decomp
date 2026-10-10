
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005c3320(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float10 fVar3;
  void *local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  float local_4;
  
  local_4 = -NAN;
  puStack_8 = &LAB_006df548;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_render_task_mgr__SortRICompare_00745f34);
  local_4 = 0.0;
  uVar1 = (**(code **)(*(int *)*param_1 + 0x18))(*(undefined4 *)param_1[1]);
  uVar2 = (**(code **)(*(int *)*param_1 + 0x18))(*(undefined4 *)param_1[1]);
  fVar3 = (float10)FUN_005c3100(uVar1,uVar2);
  local_4 = (float)fVar3;
  if (fVar3 < (float10)DAT_006e92e4 != (NAN(fVar3) || NAN((float10)DAT_006e92e4))) {
    fVar3 = -fVar3;
  }
  if (fVar3 < (float10)_DAT_006e9350 != (NAN(fVar3) || NAN((float10)_DAT_006e9350))) {
    local_4 = 1.0;
  }
  pvStack_c = (void *)0xffffffff;
  FUN_00649720();
  ExceptionList = local_14;
  return (float10)local_4;
}

