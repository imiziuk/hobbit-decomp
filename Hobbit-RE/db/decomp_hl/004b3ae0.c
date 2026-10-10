
void __fastcall FUN_004b3ae0(int param_1)

{
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4148;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_plant__Render_0072bd6c);
  local_4 = 0;
  (**(code **)(*(int *)(param_1 + 0xf4) + 4))(param_1);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_10;
  return;
}

