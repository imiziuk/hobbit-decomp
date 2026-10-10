
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004a6b10(int param_1,float *param_2,float *param_3)

{
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3c78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_2 = *param_2 + *param_3;
  param_2[1] = param_3[1] + param_2[1];
  param_2[2] = param_3[2] + param_2[2];
  FUN_00649600(s_NPCObject__FastChickenMove_0072b2a0);
  local_1c = param_2[2];
  local_14 = param_2[1] + _DAT_006e9554;
  local_24 = *param_2;
  local_20 = param_2[1] - _DAT_006e9988;
  local_4 = 0;
  local_18 = local_24;
  local_10 = local_1c;
  FUN_00579720(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),&local_18,&local_24,1);
  FUN_005798f0(1);
  FUN_00577e70();
  if (DAT_00773970 != 0) {
    *param_2 = DAT_007734f4;
    param_2[1] = DAT_007734f8;
    param_2[2] = DAT_007734fc;
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

