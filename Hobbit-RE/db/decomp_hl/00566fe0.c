
void __thiscall FUN_00566fe0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db0c8;
  local_c = ExceptionList;
  local_10 = (*(int *)(param_1 + 4) << 0x1e) >> 0x1f;
  ExceptionList = &local_c;
  FUN_00649920(&param_4,s_List_dGoal_dMustSuceed_0073f53c,param_3,param_4);
  piVar2 = &local_10;
  local_4 = 0;
  uVar1 = FUN_00649940(piVar2);
  FUN_006405b0(uVar1,piVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  *(uint *)(param_1 + 4) = (local_10 * 2 ^ *(uint *)(param_1 + 4)) & 2 ^ *(uint *)(param_1 + 4);
  ExceptionList = local_c;
  return;
}

