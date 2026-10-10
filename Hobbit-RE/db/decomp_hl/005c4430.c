
int FUN_005c4430(undefined4 *param_1)

{
  int local_38 [2];
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006df630;
  local_c = ExceptionList;
  local_30 = param_1._0_1_;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = *param_1;
  local_4 = 0;
  local_1c = param_1._0_1_;
  ExceptionList = &local_c;
  local_18 = operator_new(0);
  local_14 = FUN_006692d0(0,0,local_18);
  local_4 = CONCAT31(local_4._1_3_,1);
  local_10 = local_14;
  FUN_005c4930(local_38,&local_20);
  FUN_006bf840(local_18);
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  FUN_006bf840(0);
  ExceptionList = local_c;
  return local_38[0] + 0x10;
}

