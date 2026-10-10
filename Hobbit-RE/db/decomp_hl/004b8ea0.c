
void __thiscall FUN_004b8ea0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4518;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_prop__MoveAndUpdate_0072c404);
  param_1[5] = *param_2;
  param_1[6] = param_2[1];
  param_1[7] = param_2[2];
  local_4 = 0;
  piVar1 = (int *)(**(code **)(*param_1 + 0x38))();
  param_1[0x11] = *piVar1;
  param_1[0x12] = piVar1[1];
  param_1[0x13] = piVar1[2];
  param_1[0x14] = piVar1[3];
  param_1[0x15] = piVar1[4];
  param_1[0x16] = piVar1[5];
  param_1[0x11] = (int)((float)param_1[5] + (float)param_1[0x11]);
  param_1[0x12] = (int)((float)param_1[0x12] + (float)param_1[6]);
  param_1[0x13] = (int)((float)param_1[0x13] + (float)param_1[7]);
  param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[5]);
  param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[6]);
  param_1[0x16] = (int)((float)param_1[0x16] + (float)param_1[7]);
  param_1[0x1a] = *param_3;
  param_1[0x1b] = param_3[1];
  param_1[0x1c] = param_3[2];
  (**(code **)(*param_1 + 0x100))();
  if (*(short *)((int)param_1 + 0x62) != -1) {
    (**(code **)(*param_1 + 0x40))();
  }
  (**(code **)(*param_1 + 0x9c))(0);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_10;
  return;
}

