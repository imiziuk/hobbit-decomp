
void FUN_00660210(undefined4 param_1)

{
  LPCSTR lpOutputString;
  undefined4 extraout_var;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e68fe;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649860(param_1,&stack0x00000008);
  local_4 = 0;
  lpOutputString = (LPCSTR)FUN_006498c0(extraout_var);
  OutputDebugStringA(lpOutputString);
  local_4 = 0xffffffff;
  FUN_006498d0();
  ExceptionList = pvStack_c;
  return;
}

