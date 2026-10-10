
void __fastcall FUN_004aa360(undefined4 *param_1)

{
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d3da9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ede98;
  pcVar1 = (char *)param_1[0x28];
  local_4 = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)((int)param_1 + 0x7a) = 0;
  if ((pcVar1 != (char *)0x0) && (pcVar1 != s_NONAME_0072b754)) {
    FUN_0064ff40(pcVar1,s_C__projects_meridian_Support_Obj_0072b7a4,0xbe);
  }
  FUN_006bf840(param_1[0x23]);
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1 = param_1 + 0x1d;
  local_4 = 0xffffffff;
  FUN_00549580(param_1);
  FUN_00549350(param_1);
  *param_1 = 0x7fffffff;
  ExceptionList = local_c;
  return;
}

