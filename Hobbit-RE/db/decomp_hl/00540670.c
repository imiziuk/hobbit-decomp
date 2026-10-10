
void __thiscall FUN_00540670(uint *param_1,uint param_2)

{
  undefined4 uVar1;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint uVar2;
  uint *local_24;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d9318;
  local_c = ExceptionList;
  local_24 = (uint *)0x0;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = (*param_1 & 0x7fffffff ^ (param_2 * 2 ^ param_2) & 0x7fffffff ^ param_2 * 2) &
             0x7fffffff ^ *param_1 & 0x7fffffff;
  FUN_005492b0(param_1);
  if ((int)param_2 < 0) {
    local_24 = param_1;
    FUN_00549470();
  }
  local_24 = &param_2;
  local_24 = (uint *)FUN_00549620();
  FUN_00549670(param_1);
  local_24 = (uint *)0x50;
  FUN_0064ff40(param_1[0x4c],s_C__projects_meridian_Support_Ani_00737c18);
  param_1[0x52] = param_1[0x52] + 1;
  param_1[0x4b] = 1;
  param_1[0x4e] = param_1[0x4e] + 1;
  param_1[0x4f] = 1;
  FUN_0064ff40(param_1[0x50],s_C__projects_meridian_Support_Ani_00737c54,0x53);
  param_1[0x4f] = 1;
  param_1[0x52] = param_1[0x52] + 1;
  param_1 = param_1 + 0x43;
  local_14 = 8;
  uVar2 = extraout_ECX;
  do {
    if (*param_1 != 0) {
      local_24 = (uint *)((uVar2 & 0x7fffffff ^ (param_2 * 2 ^ param_2) & 0x7fffffff ^ param_2 * 2)
                          & 0x7fffffff ^ uVar2 & 0x7fffffff);
      FUN_005492b0(&local_24,0);
      if ((int)param_2 < 0) {
        FUN_00549470(&local_24);
      }
      uVar1 = FUN_00549620(&param_2);
      FUN_00549670(&local_24,uVar1);
      (**(code **)(*(int *)*param_1 + 4))();
      uVar2 = extraout_ECX_00;
    }
    param_1 = param_1 + 1;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  local_24 = &param_2;
  local_4 = 0xffffffff;
  FUN_00549580();
  local_24 = &param_2;
  FUN_00549350();
  ExceptionList = local_c;
  return;
}

