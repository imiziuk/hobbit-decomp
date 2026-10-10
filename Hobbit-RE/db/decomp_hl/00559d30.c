
void FUN_00559d30(undefined4 param_1)

{
  int iVar1;
  undefined1 local_7c8 [256];
  undefined1 local_6c8 [256];
  int local_5c8;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9fe6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_layer_mgr__UnloadResourcesFromFi_0073e21c);
  local_4 = 0;
  FUN_0063ddb0();
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar1 = FUN_0063df60(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_0063e510();
    while (iVar1 != 0) {
      iVar1 = FUN_00647ed0(local_6c8,s_Resources_007306f8);
      if ((iVar1 == 0) && (iVar1 = local_5c8, 0 < local_5c8)) {
        do {
          FUN_0063e6a0();
          FUN_0063ea10(local_6c8,s_Name_s_007306f0,local_7c8);
          FUN_005491a0(local_7c8);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      iVar1 = FUN_0063e510();
    }
    FUN_0063df00();
  }
  local_4 = local_4 & 0xffffff00;
  FUN_0063de30();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

