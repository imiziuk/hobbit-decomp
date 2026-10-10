
void __thiscall FUN_0049be70(int *param_1,float param_2,undefined4 param_3)

{
  float fVar1;
  void *local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3548;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_>MotionArcing__OnAdvanceLogic_0072a4d3 + 1);
  fVar1 = (float)param_1[0xf];
  local_4 = 0;
  param_1[0xf] = 0;
  (**(code **)(*param_1 + 0xc))(param_2 + fVar1,param_3);
  pvStack_c = (void *)0xffffffff;
  FUN_00649720();
  ExceptionList = local_14;
  return;
}

