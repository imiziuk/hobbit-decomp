
undefined4 * __thiscall FUN_006554f0(undefined4 *param_1,short param_2)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6566;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00653af0();
  local_4 = 0;
  FUN_00653af0();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00655580();
  *(short *)((int)param_1 + 10) = param_2;
  if (param_2 < 0x11) {
    param_1[3] = param_1 + 8;
  }
  else {
    uVar1 = thunk_FUN_0064ff70((int)param_2 << 2,s_C__projects_meridian_xCore_x_fil_0074dec0,0x17);
    param_1[3] = uVar1;
  }
  *param_1 = 1;
  ExceptionList = local_c;
  return param_1;
}

