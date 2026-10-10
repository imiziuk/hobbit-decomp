
void __thiscall
FUN_00579860(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbc98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_Coll_LOSSetup_00740374);
  local_4 = 0;
  FUN_005778a0();
  FUN_00579720(param_2,param_3,param_4,param_5,0xffffffff);
  *(undefined4 *)(param_1 + 0x3d88) = param_6;
  *(undefined4 *)(param_1 + 0x3d48) = 6;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

