
void __thiscall FUN_0047d100(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d2308;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00475120(param_2,param_3);
  FUN_00649920(&param_3,s_Action_d_Trigger_007283f0,param_2);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uStack_4 = 0;
  uVar1 = FUN_00649940(uVar2,uVar3);
  FUN_006417e0(uVar1,uVar2,uVar3);
  uStack_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = pvStack_c;
  return;
}

