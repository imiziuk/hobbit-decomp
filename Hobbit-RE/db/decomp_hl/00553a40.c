
void __thiscall FUN_00553a40(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9ba8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_material_mgr__GetMaterialOrder_0073d3e8);
  local_4 = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    if (*(int *)(param_1 + 0xbc) != 0) {
      FUN_005538f0();
    }
    if (param_2 != 0) {
      FUN_00648480(param_2,*(undefined4 *)(param_1 + 0xb8),*(int *)(param_1 + 0x4c) << 2);
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_1 + 0xe0);
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(param_1 + 0xe4);
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

