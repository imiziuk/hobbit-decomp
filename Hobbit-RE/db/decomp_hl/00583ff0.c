
void __thiscall FUN_00583ff0(int *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc288;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_render_mgr__AccumulateTriangleSt_0074085c);
  if ((0 < param_2) && (param_2 != -0x32323233)) {
    param_1[2] = param_1[2] + param_2;
    *param_1 = *param_1 + param_2;
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

