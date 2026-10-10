
void __thiscall FUN_00567c20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uVar1 = param_4;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006db198;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00566fe0(param_2,param_3,param_4);
  FUN_00649920(&param_4,s_List_dGoal_dTarget_0073f59c,param_3,uVar1);
  param_1 = param_1 + 0x10;
  uStack_4 = 0;
  uVar1 = FUN_00649940(param_1);
  FUN_006405e0(uVar1,param_1);
  uStack_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = pvStack_c;
  return;
}

