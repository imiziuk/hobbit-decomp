
void __thiscall FUN_0063c970(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 <= (int)param_1[1]) {
    param_2 = param_1[1];
  }
  if ((int)param_1[1] < param_2) {
    uVar1 = thunk_FUN_0064ffa0(*param_1,param_2,s_C__projects_meridian_xCore_Auxil_0074a84c,0x47);
    *param_1 = uVar1;
    param_1[1] = param_2;
    param_1[2] = param_2 * 8;
  }
  param_1[3] = 0xffffffff;
  param_1[6] = 0;
  param_1[4] = 1;
  return;
}

