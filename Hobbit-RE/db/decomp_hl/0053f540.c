
int __thiscall FUN_0053f540(int *param_1,int param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9298;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_anim_key_block__AcquireStreams_00737adc);
  local_4 = 0;
  if (*param_1 != 0) {
    *(int *)(*param_1 + 4) = param_1[1];
  }
  if ((int *)param_1[1] != (int *)0x0) {
    *(int *)param_1[1] = *param_1;
  }
  if (DAT_007670b8 == param_1) {
    DAT_007670b8 = (int *)*param_1;
  }
  if (DAT_007670bc == param_1) {
    DAT_007670bc = (int *)param_1[1];
  }
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = (int)DAT_007670b8;
  param_1[1] = 0;
  if (DAT_007670b8 != (int *)0x0) {
    DAT_007670b8[1] = (int)param_1;
  }
  if (DAT_007670bc == (int *)0x0) {
    DAT_007670bc = param_1;
  }
  iVar1 = param_1[2];
  DAT_007670b8 = param_1;
  if (iVar1 != 0) {
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return iVar1;
  }
  do {
    if (DAT_00737ad8 < param_1[4] + DAT_007670c4) {
      do {
        FUN_0053f6f0();
        if (DAT_007670b8 == (int *)0x0) break;
      } while (DAT_00737ad8 < param_1[4] + DAT_007670c4);
    }
    iVar1 = thunk_FUN_0064ff70(param_1[4],s_C__projects_meridian_Support_Ani_00737afc,0x79);
    param_1[2] = iVar1;
    if (iVar1 != 0) {
      DAT_007670c4 = DAT_007670c4 + param_1[4];
      DAT_007670c0 = DAT_007670c0 + 1;
      DAT_007670c8 = DAT_007670c8 + 1;
      FUN_00545450(param_2,param_1[3] + *(int *)(param_2 + 0x84),param_1[2],param_1[4]);
      iVar1 = param_1[2];
      local_4 = 0xffffffff;
      FUN_00649720();
      ExceptionList = local_c;
      return iVar1;
    }
    FUN_0053f6f0();
  } while( true );
}

