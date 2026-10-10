
void __thiscall FUN_00581510(int param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc098;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_npc_ri__RenderTask_0074060c);
  local_4 = 0;
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00554720(*(undefined1 *)(param_1 + 9));
    }
    FUN_00581f30(param_1 + 0x18);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

