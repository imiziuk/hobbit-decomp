
undefined4 FUN_004a2370(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3a58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_NPCObject__FindGround_0072af34);
  local_4 = 0;
  iVar1 = FUN_00587ce0();
  if (iVar1 == 0xb) {
    uVar2 = FUN_004a2410(param_1,param_2,param_3,param_4);
  }
  else {
    uVar2 = FUN_00468460(param_1,param_2,param_3,param_4);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return uVar2;
}

