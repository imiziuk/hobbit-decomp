
void FUN_004dba10(undefined4 param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined1 local_64 [44];
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d5608;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0064e870(3,s_Trigger__Added_Inven__s___d_0072e040,param_1,param_2);
  FUN_00649b20(param_1);
  fVar1 = (float)param_2;
  local_4 = 0;
  FUN_00434d90(local_64,fVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  iVar2 = FUN_00647e40(param_1,s_Courage_00722fd4);
  if (iVar2 == 0) {
    FUN_00649b20(s_CPTotal_DONOTUSE__00722ff4);
    local_4 = 1;
    FUN_00434d90(local_64,fVar1);
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(s_LevelingCP_DONOTUSE__00722fdc);
    local_4 = 2;
    FUN_00434d90(local_38,fVar1);
    local_4 = 0xffffffff;
    FUN_00649ba0();
  }
  ExceptionList = local_c;
  return;
}

