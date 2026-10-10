
void FUN_005735a0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_24;
  undefined4 local_20;
  char *local_1c;
  undefined1 *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db868;
  local_c = ExceptionList;
  local_1c = s_event_mgr__HandleProjectileEvent_0073fddc;
  local_20 = 0x5735c6;
  ExceptionList = &local_c;
  FUN_00649600();
  local_24 = *param_3;
  local_18 = (undefined1 *)&local_24;
  local_20 = param_3[1];
  local_1c = (char *)param_3[2];
  local_4 = 0;
  FUN_004357e0();
  uVar1 = FUN_0053f310();
  FUN_00649b20(uVar1);
  FUN_004b52b0();
  local_4 = 0xffffffff;
  local_1c = (char *)0x57363b;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

