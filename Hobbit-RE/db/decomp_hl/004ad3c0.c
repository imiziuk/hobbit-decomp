
void __fastcall FUN_004ad3c0(undefined4 *param_1)

{
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d3e88;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006edfa8;
  local_18 = (float)param_1[0x39];
  local_1c = (float)param_1[7] - local_18;
  local_20 = (float)param_1[6] - local_18;
  local_4 = 0;
  local_24 = (float)param_1[5] - local_18;
  local_10 = local_18 + (float)param_1[7];
  local_14 = local_18 + (float)param_1[6];
  local_18 = local_18 + (float)param_1[5];
  FUN_005832c0(&local_24);
  local_4 = 0xffffffff;
  FUN_00493b60();
  ExceptionList = pvStack_c;
  return;
}

